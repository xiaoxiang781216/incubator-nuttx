/****************************************************************************
 * arch/z16/common/z16_usestack.c
 *
 * Licensed to the Apache Software Foundation (ASF) under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.  The
 * ASF licenses this file to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance with the
 * License.  You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.  See the
 * License for the specific language governing permissions and limitations
 * under the License.
 *
 ****************************************************************************/

/****************************************************************************
 * Included Files
 ****************************************************************************/

#include <nuttx/config.h>

#include <sys/types.h>
#include <stdint.h>
#include <sched.h>
#include <debug.h>

#include <nuttx/kmalloc.h>
#include <nuttx/arch.h>
#include <nuttx/tls.h>

#include "z16_internal.h"

/****************************************************************************
 * Pre-processor Macros
 ****************************************************************************/

/* Stack margin for idle thread coloring */

#define STACK_MARGIN_IDLE   (CONFIG_IDLETHREAD_STACKSIZE / 4)

/****************************************************************************
 * Public Functions
 ****************************************************************************/

/****************************************************************************
 * Name: up_use_stack
 *
 * Description:
 *   Setup up stack-related information in the TCB using pre-allocated stack
 *   memory.  This function is called only from nxtask_init() when a task or
 *   kernel thread is started (never for pthreads).
 *
 *   The following TCB fields must be initialized:
 *
 *   - adj_stack_size: Stack size after adjustment for hardware,
 *     processor, etc.  This value is retained only for debug
 *     purposes.
 *   - stack_alloc_ptr: Pointer to allocated stack
 *   - adj_stack_ptr: Adjusted stack_alloc_ptr for HW.  The
 *     initial value of the stack pointer.
 *
 * Input Parameters:
 *   - tcb: The TCB of new task
 *   - stack_size:  The allocated stack size.
 *
 *   NOTE:  Unlike up_stack_create() and up_stack_release, this function
 *   does not require the task type (ttype) parameter.  The TCB flags will
 *   always be set to provide the task type to up_use_stack() if it needs
 *   that information.
 *
 ****************************************************************************/

int up_use_stack(struct tcb_s *tcb, void *stack, size_t stack_size)
{
  size_t top_of_stack;
  size_t size_of_stack;

#ifdef CONFIG_TLS_ALIGNED
  /* Make certain that the user provided stack is properly aligned */

  DEBUGASSERT(((uintptr_t)stack & TLS_STACK_MASK) == 0);
#endif

  /* Is there already a stack allocated? */

  if (tcb->stack_alloc_ptr)
    {
      /* Yes.. Release the old stack allocation */

      up_release_stack(tcb, tcb->flags & TCB_FLAG_TTYPE_MASK);
    }

  /* Save the new stack allocation */

  tcb->stack_alloc_ptr = stack;

  /* If stack debug is enabled, then fill the stack with a recognizable value
   * that we can use later to test for high water marks.
   */

#ifdef CONFIG_STACK_COLORATION
  if (tcb->pid == 0)
    {
      /* The whole idle thread stack can't be colored here
       * because the code is running on the idle thead now.
       */

      memset(tcb->stack_alloc_ptr, 0xaa, stack_size - STACK_MARGIN_IDLE);
    }
  else
    {
      memset(tcb->stack_alloc_ptr, 0xaa, stack_size);
    }
#endif

  /* The ZNEO uses a push-down stack:  the stack grows toward lower
   * addresses in memory.  The stack pointer register, points to the
   * lowest, valid work address (the "top" of the stack).  Items on
   * the stack are referenced as positive word offsets from sp.
   */

  top_of_stack = (uint32_t)tcb->stack_alloc_ptr + stack_size - 4;

  /* Align the stack to word (4 byte) boundaries.  This is probably
   * a greater alignment than is required.
   */

  top_of_stack &= ~3;
  size_of_stack = top_of_stack - (uint32_t)tcb->stack_alloc_ptr + 4;

  /* Save the adjusted stack values in the struct tcb_s */

  tcb->adj_stack_size = top_of_stack;
  tcb->adj_stack_size = size_of_stack;

  /* Initialize the TLS data structure */

  memset(tcb->stack_alloc_ptr, 0, sizeof(struct tls_info_s));

  return OK;
}
