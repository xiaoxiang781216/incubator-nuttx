/****************************************************************************
 * arch/arm/src/efm32/hardware/efm32_msc.h
 *
 * SPDX-License-Identifier: BSD-3-Clause
 * SPDX-FileCopyrightText: 2014 Silicon Laboratories, Inc.
 * SPDX-FileCopyrightText: 2014 Pierre-noel Bouteville . All rights reserved.
 * SPDX-FileCopyrightText: 2014 Gregory Nutt. All rights reserved.
 * SPDX-FileContributor: Pierre-noel Bouteville <pnb990@gmail.com>
 * SPDX-FileContributor: Gregory Nutt <gnutt@nuttx.org>
 *
 * Permission is granted to anyone to use this software for any purpose,
 * including commercial applications, and to alter it and redistribute it
 * freely, subject to the following restrictions:
 *
 * 1. The origin of this software must not be misrepresented; you must not
 *    claim that you wrote the original software.
 * 2. Altered source versions must be plainly marked as such, and must not be
 *    misrepresented as being the original software.
 * 3. This notice may not be removed or altered from any source distribution.
 *
 * DISCLAIMER OF WARRANTY/LIMITATION OF REMEDIES: Silicon Laboratories, Inc.
 * has no obligation to support this Software. Silicon Laboratories, Inc. is
 * providing the Software "AS IS", with no express or implied warranties of
 * any kind, including, but not limited to, any implied warranties of
 * merchantability or fitness for any particular purpose or warranties
 * against infringement of any proprietary rights of a third party.
 *
 * Silicon Laboratories, Inc. will not be liable for any consequential,
 * incidental, or special damages, or any other relief, or for any claim by
 * any third party, arising from your use of this Software.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 * 3. Neither the name NuttX nor the names of its contributors may be
 *    used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 ****************************************************************************/

#ifndef __ARCH_ARM_SRC_EFM32_HARDWARE_EFM32_MSC_H
#define __ARCH_ARM_SRC_EFM32_HARDWARE_EFM32_MSC_H

/****************************************************************************
 * Included Files
 ****************************************************************************/

#include "hardware/efm32_memorymap.h"

/****************************************************************************
 * Pre-processor Definitions
 ****************************************************************************/

/* MSC Register Offsets *****************************************************/

#define EFM32_MSC_CTRL_OFFSET                   0x0000  /* Memory System Control Register */
#define EFM32_MSC_READCTRL_OFFSET               0x0004  /* Read Control Register */
#define EFM32_MSC_WRITECTRL_OFFSET              0x0008  /* Write Control Register */
#define EFM32_MSC_WRITECMD_OFFSET               0x000c  /* Write Command Register */
#define EFM32_MSC_ADDRB_OFFSET                  0x0010  /* Page Erase/Write Address Buffer */
#define EFM32_MSC_WDATA_OFFSET                  0x0018  /* Write Data Register */
#define EFM32_MSC_STATUS_OFFSET                 0x001c  /* Status Register */
#define EFM32_MSC_IF_OFFSET                     0x002c  /* Interrupt Flag Register */
#define EFM32_MSC_IFS_OFFSET                    0x0030  /* Interrupt Flag Set Register */
#define EFM32_MSC_IFC_OFFSET                    0x0034  /* Interrupt Flag Clear Register */
#define EFM32_MSC_IEN_OFFSET                    0x0038  /* Interrupt Enable Register */
#define EFM32_MSC_LOCK_OFFSET                   0x003c  /* Configuration Lock Register */

#if defined(CONFIG_EFM32_EFM32GG)
#  define EFM32_MSC_CMD_OFFSET                  0x0040  /* Command Register */
#  define EFM32_MSC_CACHEHITS_OFFSET            0x0044  /* Cache Hits Performance Counter */
#  define EFM32_MSC_CACHEMISSES_OFFSET          0x0048  /* Cache Misses Performance Counter */
#  define EFM32_MSC_TIMEBASE_OFFSET             0x0050  /* Flash Write and Erase Timebase */
#  define EFM32_MSC_MASSLOCK_OFFSET             0x0054  /* Mass Erase Lock Register */
#endif

/* MSC Register Addresses ***************************************************/

#define EFM32_MSC_CTRL                          (EFM32_MSC_BASE+EFM32_MSC_CTRL_OFFSET)
#define EFM32_MSC_READCTRL                      (EFM32_MSC_BASE+EFM32_MSC_READCTRL_OFFSET)
#define EFM32_MSC_WRITECTRL                     (EFM32_MSC_BASE+EFM32_MSC_WRITECTRL_OFFSET)
#define EFM32_MSC_WRITECMD                      (EFM32_MSC_BASE+EFM32_MSC_WRITECMD_OFFSET)
#define EFM32_MSC_ADDRB                         (EFM32_MSC_BASE+EFM32_MSC_ADDRB_OFFSET)
#define EFM32_MSC_WDATA                         (EFM32_MSC_BASE+EFM32_MSC_WDATA_OFFSET)
#define EFM32_MSC_STATUS                        (EFM32_MSC_BASE+EFM32_MSC_STATUS_OFFSET)
#define EFM32_MSC_IF                            (EFM32_MSC_BASE+EFM32_MSC_IF_OFFSET)
#define EFM32_MSC_IFS                           (EFM32_MSC_BASE+EFM32_MSC_IFS_OFFSET)
#define EFM32_MSC_IFC                           (EFM32_MSC_BASE+EFM32_MSC_IFC_OFFSET)
#define EFM32_MSC_IEN                           (EFM32_MSC_BASE+EFM32_MSC_IEN_OFFSET)
#define EFM32_MSC_LOCK                          (EFM32_MSC_BASE+EFM32_MSC_LOCK_OFFSET)

#if defined(CONFIG_EFM32_EFM32GG)
#  define EFM32_MSC_CMD                         (EFM32_MSC_BASE+EFM32_MSC_CMD_OFFSET)
#  define EFM32_MSC_CACHEHITS                   (EFM32_MSC_BASE+EFM32_MSC_CACHEHITS_OFFSET)
#  define EFM32_MSC_CACHEMISSES                 (EFM32_MSC_BASE+EFM32_MSC_CACHEMISSES_OFFSET)
#  define EFM32_MSC_TIMEBASE                    (EFM32_MSC_BASE+EFM32_MSC_TIMEBASE_OFFSET)
#  define EFM32_MSC_MASSLOCK                    (EFM32_MSC_BASE+EFM32_MSC_MASSLOCK_OFFSET)
#endif

/* MSC Register Bit Field Definitions ***************************************/

/* Bit fields for MSC CTRL */

#define _MSC_CTRL_RESETVALUE                    0x00000001UL                       /* Default value for MSC_CTRL */
#define _MSC_CTRL_MASK                          0x00000001UL                       /* Mask for MSC_CTRL */

#define MSC_CTRL_BUSFAULT                       (0x1UL << 0)                       /* Bus Fault Response Enable */
#define _MSC_CTRL_BUSFAULT_SHIFT                0                                  /* Shift value for MSC_BUSFAULT */
#define _MSC_CTRL_BUSFAULT_MASK                 0x1UL                              /* Bit mask for MSC_BUSFAULT */
#define _MSC_CTRL_BUSFAULT_GENERATE             0x00000000UL                       /* Mode GENERATE for MSC_CTRL */
#define _MSC_CTRL_BUSFAULT_DEFAULT              0x00000001UL                       /* Mode DEFAULT for MSC_CTRL */
#define _MSC_CTRL_BUSFAULT_IGNORE               0x00000001UL                       /* Mode IGNORE for MSC_CTRL */
#define MSC_CTRL_BUSFAULT_GENERATE              (_MSC_CTRL_BUSFAULT_GENERATE << 0) /* Shifted mode GENERATE for MSC_CTRL */
#define MSC_CTRL_BUSFAULT_DEFAULT               (_MSC_CTRL_BUSFAULT_DEFAULT << 0)  /* Shifted mode DEFAULT for MSC_CTRL */
#define MSC_CTRL_BUSFAULT_IGNORE                (_MSC_CTRL_BUSFAULT_IGNORE << 0)   /* Shifted mode IGNORE for MSC_CTRL */

/* Bit fields for MSC READCTRL */

#if defined(CONFIG_EFM32_EFM32GG)
#  define _MSC_READCTRL_RESETVALUE              0x00000001UL                              /* Default value for MSC_READCTRL */
#  define _MSC_READCTRL_MASK                    0x000301FFUL                              /* Mask for MSC_READCTRL */
#else
#  define _MSC_READCTRL_RESETVALUE              0x00000001UL                              /* Default value for MSC_READCTRL */
#  define _MSC_READCTRL_MASK                    0x00000001UL                              /* Mask for MSC_READCTRL */
#endif

#define _MSC_READCTRL_MODE_SHIFT                0                                         /* Shift value for MSC_MODE */
#define _MSC_READCTRL_MODE_MASK                 0x7UL                                     /* Bit mask for MSC_MODE */
#define _MSC_READCTRL_MODE_WS0                  0x00000000UL                              /* Mode WS0 for MSC_READCTRL */
#define _MSC_READCTRL_MODE_DEFAULT              0x00000001UL                              /* Mode DEFAULT for MSC_READCTRL */
#define _MSC_READCTRL_MODE_WS1                  0x00000001UL                              /* Mode WS1 for MSC_READCTRL */
#define _MSC_READCTRL_MODE_WS0SCBTP             0x00000002UL                              /* Mode WS0SCBTP for MSC_READCTRL */
#define _MSC_READCTRL_MODE_WS1SCBTP             0x00000003UL                              /* Mode WS1SCBTP for MSC_READCTRL */
#if defined(CONFIG_EFM32_EFM32GG)
#  define _MSC_READCTRL_MODE_WS2                0x00000004UL                              /* Mode WS2 for MSC_READCTRL */
#  define _MSC_READCTRL_MODE_WS2SCBTP           0x00000005UL                              /* Mode WS2SCBTP for MSC_READCTRL */
#  define _MSC_READCTRL_MODE_WSMAX              _MSC_READCTRL_MODE_WS2                    /* Max wait state setting (without SCBTP) */
#  define _MSC_READCTRL_MODE_WSMAXSCBTP         _MSC_READCTRL_MODE_WS2SCBTP               /* Max wait state setting (with SCBTP) */
#else
#  define _MSC_READCTRL_MODE_WSMAX              _MSC_READCTRL_MODE_WS1                    /* Max wait state setting (without SCBTP) */
#  define _MSC_READCTRL_MODE_WSMAXSCBTP         _MSC_READCTRL_MODE_WS1SCBTP               /* Max wait state setting (with SCBTP) */
#endif
#define MSC_READCTRL_MODE_WS0                   (_MSC_READCTRL_MODE_WS0 << 0)             /* Shifted mode WS0 for MSC_READCTRL */
#define MSC_READCTRL_MODE_DEFAULT               (_MSC_READCTRL_MODE_DEFAULT << 0)         /* Shifted mode DEFAULT for MSC_READCTRL */
#define MSC_READCTRL_MODE_WS1                   (_MSC_READCTRL_MODE_WS1 << 0)             /* Shifted mode WS1 for MSC_READCTRL */
#define MSC_READCTRL_MODE_WS0SCBTP              (_MSC_READCTRL_MODE_WS0SCBTP << 0)        /* Shifted mode WS0SCBTP for MSC_READCTRL */
#define MSC_READCTRL_MODE_WS1SCBTP              (_MSC_READCTRL_MODE_WS1SCBTP << 0)        /* Shifted mode WS1SCBTP for MSC_READCTRL */
#if defined(CONFIG_EFM32_EFM32GG)
#  define MSC_READCTRL_MODE_WS2                 (_MSC_READCTRL_MODE_WS2 << 0)             /* Shifted mode WS2 for MSC_READCTRL */
#  define MSC_READCTRL_MODE_WS2SCBTP            (_MSC_READCTRL_MODE_WS2SCBTP << 0)        /* Shifted mode WS2SCBTP for MSC_READCTRL */
#endif
#define MSC_READCTRL_MODE_WSMAX                 (_MSC_READCTRL_MODE_WSMAX << 0)           /* Max wait state setting (without SCBTP) */
#define MSC_READCTRL_MODE_WSMAXSCBTP            (_MSC_READCTRL_MODE_WSMAXSCBTP << 0)      /* Max wait state setting (with SCBTP) */

#if defined(CONFIG_EFM32_EFM32GG)
#  define MSC_READCTRL_IFCDIS                   (0x1UL << 3)                              /* Internal Flash Cache Disable */
#  define _MSC_READCTRL_IFCDIS_SHIFT            3                                         /* Shift value for MSC_IFCDIS */
#  define _MSC_READCTRL_IFCDIS_MASK             0x8UL                                     /* Bit mask for MSC_IFCDIS */
#  define _MSC_READCTRL_IFCDIS_DEFAULT          0x00000000UL                              /* Mode DEFAULT for MSC_READCTRL */
#  define MSC_READCTRL_IFCDIS_DEFAULT           (_MSC_READCTRL_IFCDIS_DEFAULT << 3)       /* Shifted mode DEFAULT for MSC_READCTRL */
#  define MSC_READCTRL_AIDIS                    (0x1UL << 4)                              /* Automatic Invalidate Disable */
#  define _MSC_READCTRL_AIDIS_SHIFT             4                                         /* Shift value for MSC_AIDIS */
#  define _MSC_READCTRL_AIDIS_MASK              0x10UL                                    /* Bit mask for MSC_AIDIS */
#  define _MSC_READCTRL_AIDIS_DEFAULT           0x00000000UL                              /* Mode DEFAULT for MSC_READCTRL */
#  define MSC_READCTRL_AIDIS_DEFAULT            (_MSC_READCTRL_AIDIS_DEFAULT << 4)        /* Shifted mode DEFAULT for MSC_READCTRL */
#  define MSC_READCTRL_ICCDIS                   (0x1UL << 5)                              /* Interrupt Context Cache Disable */
#  define _MSC_READCTRL_ICCDIS_SHIFT            5                                         /* Shift value for MSC_ICCDIS */
#  define _MSC_READCTRL_ICCDIS_MASK             0x20UL                                    /* Bit mask for MSC_ICCDIS */
#  define _MSC_READCTRL_ICCDIS_DEFAULT          0x00000000UL                              /* Mode DEFAULT for MSC_READCTRL */
#  define MSC_READCTRL_ICCDIS_DEFAULT           (_MSC_READCTRL_ICCDIS_DEFAULT << 5)       /* Shifted mode DEFAULT for MSC_READCTRL */
#  define MSC_READCTRL_EBICDIS                  (0x1UL << 6)                              /* External Bus Interface Cache Disable */
#  define _MSC_READCTRL_EBICDIS_SHIFT           6                                         /* Shift value for MSC_EBICDIS */
#  define _MSC_READCTRL_EBICDIS_MASK            0x40UL                                    /* Bit mask for MSC_EBICDIS */
#  define _MSC_READCTRL_EBICDIS_DEFAULT         0x00000000UL                              /* Mode DEFAULT for MSC_READCTRL */
#  define MSC_READCTRL_EBICDIS_DEFAULT          (_MSC_READCTRL_EBICDIS_DEFAULT << 6)      /* Shifted mode DEFAULT for MSC_READCTRL */
#  define MSC_READCTRL_RAMCEN                   (0x1UL << 7)                              /* RAM Cache Enable */
#  define _MSC_READCTRL_RAMCEN_SHIFT            7                                         /* Shift value for MSC_RAMCEN */
#  define _MSC_READCTRL_RAMCEN_MASK             0x80UL                                    /* Bit mask for MSC_RAMCEN */
#  define _MSC_READCTRL_RAMCEN_DEFAULT          0x00000000UL                              /* Mode DEFAULT for MSC_READCTRL */
#  define MSC_READCTRL_RAMCEN_DEFAULT           (_MSC_READCTRL_RAMCEN_DEFAULT << 7)       /* Shifted mode DEFAULT for MSC_READCTRL */
#  define MSC_READCTRL_PREFETCH                 (0x1UL << 8)                              /* Prefetch Mode */
#  define _MSC_READCTRL_PREFETCH_SHIFT          8                                         /* Shift value for MSC_PREFETCH */
#  define _MSC_READCTRL_PREFETCH_MASK           0x100UL                                   /* Bit mask for MSC_PREFETCH */
#  define _MSC_READCTRL_PREFETCH_DEFAULT        0x00000000UL                              /* Mode DEFAULT for MSC_READCTRL */
#  define MSC_READCTRL_PREFETCH_DEFAULT         (_MSC_READCTRL_PREFETCH_DEFAULT << 8)     /* Shifted mode DEFAULT for MSC_READCTRL */

#  define _MSC_READCTRL_BUSSTRATEGY_SHIFT       16                                        /* Shift value for MSC_BUSSTRATEGY */
#  define _MSC_READCTRL_BUSSTRATEGY_MASK        0x30000UL                                 /* Bit mask for MSC_BUSSTRATEGY */
#  define _MSC_READCTRL_BUSSTRATEGY_DEFAULT     0x00000000UL                              /* Mode DEFAULT for MSC_READCTRL */
#  define _MSC_READCTRL_BUSSTRATEGY_CPU         0x00000000UL                              /* Mode CPU for MSC_READCTRL */
#  define _MSC_READCTRL_BUSSTRATEGY_DMA         0x00000001UL                              /* Mode DMA for MSC_READCTRL */
#  define _MSC_READCTRL_BUSSTRATEGY_DMAEM1      0x00000002UL                              /* Mode DMAEM1 for MSC_READCTRL */
#  define _MSC_READCTRL_BUSSTRATEGY_NONE        0x00000003UL                              /* Mode NONE for MSC_READCTRL */
#  define MSC_READCTRL_BUSSTRATEGY_DEFAULT      (_MSC_READCTRL_BUSSTRATEGY_DEFAULT << 16) /* Shifted mode DEFAULT for MSC_READCTRL */
#  define MSC_READCTRL_BUSSTRATEGY_CPU          (_MSC_READCTRL_BUSSTRATEGY_CPU << 16)     /* Shifted mode CPU for MSC_READCTRL */
#  define MSC_READCTRL_BUSSTRATEGY_DMA          (_MSC_READCTRL_BUSSTRATEGY_DMA << 16)     /* Shifted mode DMA for MSC_READCTRL */
#  define MSC_READCTRL_BUSSTRATEGY_DMAEM1       (_MSC_READCTRL_BUSSTRATEGY_DMAEM1 << 16)  /* Shifted mode DMAEM1 for MSC_READCTRL */
#  define MSC_READCTRL_BUSSTRATEGY_NONE         (_MSC_READCTRL_BUSSTRATEGY_NONE << 16)    /* Shifted mode NONE for MSC_READCTRL */
#endif

/* Bit fields for MSC WRITECTRL */

#if defined(CONFIG_EFM32_EFM32GG)
#  define _MSC_WRITECTRL_RESETVALUE             0x00000000UL                                /* Default value for MSC_WRITECTRL */
#  define _MSC_WRITECTRL_MASK                   0x0000003FUL                                /* Mask for MSC_WRITECTRL */
#else
#  define _MSC_WRITECTRL_RESETVALUE             0x00000000UL                                /* Default value for MSC_WRITECTRL */
#  define _MSC_WRITECTRL_MASK                   0x00000003UL                                /* Mask for MSC_WRITECTRL */
#endif

#define MSC_WRITECTRL_WREN                      (0x1UL << 0)                                /* Enable Write/Erase Controller  */
#define _MSC_WRITECTRL_WREN_SHIFT               0                                           /* Shift value for MSC_WREN */
#define _MSC_WRITECTRL_WREN_MASK                0x1UL                                       /* Bit mask for MSC_WREN */
#define _MSC_WRITECTRL_WREN_DEFAULT             0x00000000UL                                /* Mode DEFAULT for MSC_WRITECTRL */
#define MSC_WRITECTRL_WREN_DEFAULT              (_MSC_WRITECTRL_WREN_DEFAULT << 0)          /* Shifted mode DEFAULT for MSC_WRITECTRL */
#define MSC_WRITECTRL_IRQERASEABORT             (0x1UL << 1)                                /* Abort Page Erase on Interrupt */
#define _MSC_WRITECTRL_IRQERASEABORT_SHIFT      1                                           /* Shift value for MSC_IRQERASEABORT */
#define _MSC_WRITECTRL_IRQERASEABORT_MASK       0x2UL                                       /* Bit mask for MSC_IRQERASEABORT */
#define _MSC_WRITECTRL_IRQERASEABORT_DEFAULT    0x00000000UL                                /* Mode DEFAULT for MSC_WRITECTRL */
#define MSC_WRITECTRL_IRQERASEABORT_DEFAULT     (_MSC_WRITECTRL_IRQERASEABORT_DEFAULT << 1) /* Shifted mode DEFAULT for MSC_WRITECTRL */

#if defined(CONFIG_EFM32_EFM32GG)
#  define MSC_WRITECTRL_WDOUBLE                 (0x1UL << 2)                                /* Write two words at a time */
#  define _MSC_WRITECTRL_WDOUBLE_SHIFT          2                                           /* Shift value for MSC_WDOUBLE */
#  define _MSC_WRITECTRL_WDOUBLE_MASK           0x4UL                                       /* Bit mask for MSC_WDOUBLE */
#  define _MSC_WRITECTRL_WDOUBLE_DEFAULT        0x00000000UL                                /* Mode DEFAULT for MSC_WRITECTRL */
#  define MSC_WRITECTRL_WDOUBLE_DEFAULT         (_MSC_WRITECTRL_WDOUBLE_DEFAULT << 2)       /* Shifted mode DEFAULT for MSC_WRITECTRL */
#  define MSC_WRITECTRL_LPWRITE                 (0x1UL << 3)                                /* Low-Power Erase */
#  define _MSC_WRITECTRL_LPWRITE_SHIFT          3                                           /* Shift value for MSC_LPWRITE */
#  define _MSC_WRITECTRL_LPWRITE_MASK           0x8UL                                       /* Bit mask for MSC_LPWRITE */
#  define _MSC_WRITECTRL_LPWRITE_DEFAULT        0x00000000UL                                /* Mode DEFAULT for MSC_WRITECTRL */
#  define MSC_WRITECTRL_LPWRITE_DEFAULT         (_MSC_WRITECTRL_LPWRITE_DEFAULT << 3)       /* Shifted mode DEFAULT for MSC_WRITECTRL */
#  define MSC_WRITECTRL_LPERASE                 (0x1UL << 4)                                /* Low-Power Erase */
#  define _MSC_WRITECTRL_LPERASE_SHIFT          4                                           /* Shift value for MSC_LPERASE */
#  define _MSC_WRITECTRL_LPERASE_MASK           0x10UL                                      /* Bit mask for MSC_LPERASE */
#  define _MSC_WRITECTRL_LPERASE_DEFAULT        0x00000000UL                                /* Mode DEFAULT for MSC_WRITECTRL */
#  define MSC_WRITECTRL_LPERASE_DEFAULT         (_MSC_WRITECTRL_LPERASE_DEFAULT << 4)       /* Shifted mode DEFAULT for MSC_WRITECTRL */
#  define MSC_WRITECTRL_RWWEN                   (0x1UL << 5)                                /* Read-While-Write Enable */
#  define _MSC_WRITECTRL_RWWEN_SHIFT            5                                           /* Shift value for MSC_RWWEN */
#  define _MSC_WRITECTRL_RWWEN_MASK             0x20UL                                      /* Bit mask for MSC_RWWEN */
#  define _MSC_WRITECTRL_RWWEN_DEFAULT          0x00000000UL                                /* Mode DEFAULT for MSC_WRITECTRL */
#  define MSC_WRITECTRL_RWWEN_DEFAULT           (_MSC_WRITECTRL_RWWEN_DEFAULT << 5)         /* Shifted mode DEFAULT for MSC_WRITECTRL */
#endif

/* Bit fields for MSC WRITECMD */

#if defined(CONFIG_EFM32_EFM32GG)
#  define _MSC_WRITECMD_RESETVALUE              0x00000000UL                             /* Default value for MSC_WRITECMD */
#  define _MSC_WRITECMD_MASK                    0x0000133FUL                             /* Mask for MSC_WRITECMD */
#else
#  define _MSC_WRITECMD_RESETVALUE              0x00000000UL                             /* Default value for MSC_WRITECMD */
#  define _MSC_WRITECMD_MASK                    0x0000001FUL                             /* Mask for MSC_WRITECMD */
#endif

#define MSC_WRITECMD_LADDRIM                    (0x1UL << 0)                             /* Load MSC_ADDRB into ADDR */
#define _MSC_WRITECMD_LADDRIM_SHIFT             0                                        /* Shift value for MSC_LADDRIM */
#define _MSC_WRITECMD_LADDRIM_MASK              0x1UL                                    /* Bit mask for MSC_LADDRIM */
#define _MSC_WRITECMD_LADDRIM_DEFAULT           0x00000000UL                             /* Mode DEFAULT for MSC_WRITECMD */
#define MSC_WRITECMD_LADDRIM_DEFAULT            (_MSC_WRITECMD_LADDRIM_DEFAULT << 0)     /* Shifted mode DEFAULT for MSC_WRITECMD */
#define MSC_WRITECMD_ERASEPAGE                  (0x1UL << 1)                             /* Erase Page */
#define _MSC_WRITECMD_ERASEPAGE_SHIFT           1                                        /* Shift value for MSC_ERASEPAGE */
#define _MSC_WRITECMD_ERASEPAGE_MASK            0x2UL                                    /* Bit mask for MSC_ERASEPAGE */
#define _MSC_WRITECMD_ERASEPAGE_DEFAULT         0x00000000UL                             /* Mode DEFAULT for MSC_WRITECMD */
#define MSC_WRITECMD_ERASEPAGE_DEFAULT          (_MSC_WRITECMD_ERASEPAGE_DEFAULT << 1)   /* Shifted mode DEFAULT for MSC_WRITECMD */
#define MSC_WRITECMD_WRITEEND                   (0x1UL << 2)                             /* End Write Mode */
#define _MSC_WRITECMD_WRITEEND_SHIFT            2                                        /* Shift value for MSC_WRITEEND */
#define _MSC_WRITECMD_WRITEEND_MASK             0x4UL                                    /* Bit mask for MSC_WRITEEND */
#define _MSC_WRITECMD_WRITEEND_DEFAULT          0x00000000UL                             /* Mode DEFAULT for MSC_WRITECMD */
#define MSC_WRITECMD_WRITEEND_DEFAULT           (_MSC_WRITECMD_WRITEEND_DEFAULT << 2)    /* Shifted mode DEFAULT for MSC_WRITECMD */
#define MSC_WRITECMD_WRITEONCE                  (0x1UL << 3)                             /* Word Write-Once Trigger */
#define _MSC_WRITECMD_WRITEONCE_SHIFT           3                                        /* Shift value for MSC_WRITEONCE */
#define _MSC_WRITECMD_WRITEONCE_MASK            0x8UL                                    /* Bit mask for MSC_WRITEONCE */
#define _MSC_WRITECMD_WRITEONCE_DEFAULT         0x00000000UL                             /* Mode DEFAULT for MSC_WRITECMD */
#define MSC_WRITECMD_WRITEONCE_DEFAULT          (_MSC_WRITECMD_WRITEONCE_DEFAULT << 3)   /* Shifted mode DEFAULT for MSC_WRITECMD */
#define MSC_WRITECMD_WRITETRIG                  (0x1UL << 4)                             /* Word Write Sequence Trigger */
#define _MSC_WRITECMD_WRITETRIG_SHIFT           4                                        /* Shift value for MSC_WRITETRIG */
#define _MSC_WRITECMD_WRITETRIG_MASK            0x10UL                                   /* Bit mask for MSC_WRITETRIG */
#define _MSC_WRITECMD_WRITETRIG_DEFAULT         0x00000000UL                             /* Mode DEFAULT for MSC_WRITECMD */
#define MSC_WRITECMD_WRITETRIG_DEFAULT          (_MSC_WRITECMD_WRITETRIG_DEFAULT << 4)   /* Shifted mode DEFAULT for MSC_WRITECMD */

#if defined(CONFIG_EFM32_EFM32GG)
#  define MSC_WRITECMD_ERASEABORT               (0x1UL << 5)                             /* Abort erase sequence */
#  define _MSC_WRITECMD_ERASEABORT_SHIFT        5                                        /* Shift value for MSC_ERASEABORT */
#  define _MSC_WRITECMD_ERASEABORT_MASK         0x20UL                                   /* Bit mask for MSC_ERASEABORT */
#  define _MSC_WRITECMD_ERASEABORT_DEFAULT      0x00000000UL                             /* Mode DEFAULT for MSC_WRITECMD */
#  define MSC_WRITECMD_ERASEABORT_DEFAULT       (_MSC_WRITECMD_ERASEABORT_DEFAULT << 5)  /* Shifted mode DEFAULT for MSC_WRITECMD */
#  define MSC_WRITECMD_ERASEMAIN0               (0x1UL << 8)                             /* Mass erase region 0 */
#  define _MSC_WRITECMD_ERASEMAIN0_SHIFT        8                                        /* Shift value for MSC_ERASEMAIN0 */
#  define _MSC_WRITECMD_ERASEMAIN0_MASK         0x100UL                                  /* Bit mask for MSC_ERASEMAIN0 */
#  define _MSC_WRITECMD_ERASEMAIN0_DEFAULT      0x00000000UL                             /* Mode DEFAULT for MSC_WRITECMD */
#  define MSC_WRITECMD_ERASEMAIN0_DEFAULT       (_MSC_WRITECMD_ERASEMAIN0_DEFAULT << 8)  /* Shifted mode DEFAULT for MSC_WRITECMD */
#  define MSC_WRITECMD_ERASEMAIN1               (0x1UL << 9)                             /* Mass erase region 1 */
#  define _MSC_WRITECMD_ERASEMAIN1_SHIFT        9                                        /* Shift value for MSC_ERASEMAIN1 */
#  define _MSC_WRITECMD_ERASEMAIN1_MASK         0x200UL                                  /* Bit mask for MSC_ERASEMAIN1 */
#  define _MSC_WRITECMD_ERASEMAIN1_DEFAULT      0x00000000UL                             /* Mode DEFAULT for MSC_WRITECMD */
#  define MSC_WRITECMD_ERASEMAIN1_DEFAULT       (_MSC_WRITECMD_ERASEMAIN1_DEFAULT << 9)  /* Shifted mode DEFAULT for MSC_WRITECMD */
#  define MSC_WRITECMD_CLEARWDATA               (0x1UL << 12)                            /* Clear WDATA state */
#  define _MSC_WRITECMD_CLEARWDATA_SHIFT        12                                       /* Shift value for MSC_CLEARWDATA */
#  define _MSC_WRITECMD_CLEARWDATA_MASK         0x1000UL                                 /* Bit mask for MSC_CLEARWDATA */
#  define _MSC_WRITECMD_CLEARWDATA_DEFAULT      0x00000000UL                             /* Mode DEFAULT for MSC_WRITECMD */
#  define MSC_WRITECMD_CLEARWDATA_DEFAULT       (_MSC_WRITECMD_CLEARWDATA_DEFAULT << 12) /* Shifted mode DEFAULT for MSC_WRITECMD */
#endif

/* Bit fields for MSC ADDRB */

#define _MSC_ADDRB_RESETVALUE                   0x00000000UL                    /* Default value for MSC_ADDRB */
#define _MSC_ADDRB_MASK                         0xFFFFFFFFUL                    /* Mask for MSC_ADDRB */

#define _MSC_ADDRB_ADDRB_SHIFT                  0                               /* Shift value for MSC_ADDRB */
#define _MSC_ADDRB_ADDRB_MASK                   0xFFFFFFFFUL                    /* Bit mask for MSC_ADDRB */
#define _MSC_ADDRB_ADDRB_DEFAULT                0x00000000UL                    /* Mode DEFAULT for MSC_ADDRB */
#define MSC_ADDRB_ADDRB_DEFAULT                 (_MSC_ADDRB_ADDRB_DEFAULT << 0) /* Shifted mode DEFAULT for MSC_ADDRB */

/* Bit fields for MSC WDATA */

#define _MSC_WDATA_RESETVALUE                   0x00000000UL                    /* Default value for MSC_WDATA */
#define _MSC_WDATA_MASK                         0xFFFFFFFFUL                    /* Mask for MSC_WDATA */

#define _MSC_WDATA_WDATA_SHIFT                  0                               /* Shift value for MSC_WDATA */
#define _MSC_WDATA_WDATA_MASK                   0xFFFFFFFFUL                    /* Bit mask for MSC_WDATA */
#define _MSC_WDATA_WDATA_DEFAULT                0x00000000UL                    /* Mode DEFAULT for MSC_WDATA */
#define MSC_WDATA_WDATA_DEFAULT                 (_MSC_WDATA_WDATA_DEFAULT << 0) /* Shifted mode DEFAULT for MSC_WDATA */

/* Bit fields for MSC STATUS */

#if defined(CONFIG_EFM32_EFM32GG)
#  define _MSC_STATUS_RESETVALUE                0x00000008UL                            /* Default value for MSC_STATUS */
#  define _MSC_STATUS_MASK                      0x0000007FUL                            /* Mask for MSC_STATUS */
#else
#  define _MSC_STATUS_RESETVALUE                0x00000008UL                            /* Default value for MSC_STATUS */
#  define _MSC_STATUS_MASK                      0x0000003FUL                            /* Mask for MSC_STATUS */
#endif

#define MSC_STATUS_BUSY                         (0x1UL << 0)                            /* Erase/Write Busy */
#define _MSC_STATUS_BUSY_SHIFT                  0                                       /* Shift value for MSC_BUSY */
#define _MSC_STATUS_BUSY_MASK                   0x1UL                                   /* Bit mask for MSC_BUSY */
#define _MSC_STATUS_BUSY_DEFAULT                0x00000000UL                            /* Mode DEFAULT for MSC_STATUS */
#define MSC_STATUS_BUSY_DEFAULT                 (_MSC_STATUS_BUSY_DEFAULT << 0)         /* Shifted mode DEFAULT for MSC_STATUS */
#define MSC_STATUS_LOCKED                       (0x1UL << 1)                            /* Access Locked */
#define _MSC_STATUS_LOCKED_SHIFT                1                                       /* Shift value for MSC_LOCKED */
#define _MSC_STATUS_LOCKED_MASK                 0x2UL                                   /* Bit mask for MSC_LOCKED */
#define _MSC_STATUS_LOCKED_DEFAULT              0x00000000UL                            /* Mode DEFAULT for MSC_STATUS */
#define MSC_STATUS_LOCKED_DEFAULT               (_MSC_STATUS_LOCKED_DEFAULT << 1)       /* Shifted mode DEFAULT for MSC_STATUS */
#define MSC_STATUS_INVADDR                      (0x1UL << 2)                            /* Invalid Write Address or Erase Page */
#define _MSC_STATUS_INVADDR_SHIFT               2                                       /* Shift value for MSC_INVADDR */
#define _MSC_STATUS_INVADDR_MASK                0x4UL                                   /* Bit mask for MSC_INVADDR */
#define _MSC_STATUS_INVADDR_DEFAULT             0x00000000UL                            /* Mode DEFAULT for MSC_STATUS */
#define MSC_STATUS_INVADDR_DEFAULT              (_MSC_STATUS_INVADDR_DEFAULT << 2)      /* Shifted mode DEFAULT for MSC_STATUS */
#define MSC_STATUS_WDATAREADY                   (0x1UL << 3)                            /* WDATA Write Ready */
#define _MSC_STATUS_WDATAREADY_SHIFT            3                                       /* Shift value for MSC_WDATAREADY */
#define _MSC_STATUS_WDATAREADY_MASK             0x8UL                                   /* Bit mask for MSC_WDATAREADY */
#define _MSC_STATUS_WDATAREADY_DEFAULT          0x00000001UL                            /* Mode DEFAULT for MSC_STATUS */
#define MSC_STATUS_WDATAREADY_DEFAULT           (_MSC_STATUS_WDATAREADY_DEFAULT << 3)   /* Shifted mode DEFAULT for MSC_STATUS */
#define MSC_STATUS_WORDTIMEOUT                  (0x1UL << 4)                            /* Flash Write Word Timeout */
#define _MSC_STATUS_WORDTIMEOUT_SHIFT           4                                       /* Shift value for MSC_WORDTIMEOUT */
#define _MSC_STATUS_WORDTIMEOUT_MASK            0x10UL                                  /* Bit mask for MSC_WORDTIMEOUT */
#define _MSC_STATUS_WORDTIMEOUT_DEFAULT         0x00000000UL                            /* Mode DEFAULT for MSC_STATUS */
#define MSC_STATUS_WORDTIMEOUT_DEFAULT          (_MSC_STATUS_WORDTIMEOUT_DEFAULT << 4)  /* Shifted mode DEFAULT for MSC_STATUS */
#define MSC_STATUS_ERASEABORTED                 (0x1UL << 5)                            /* The Current Flash Erase Operation Aborted */
#define _MSC_STATUS_ERASEABORTED_SHIFT          5                                       /* Shift value for MSC_ERASEABORTED */
#define _MSC_STATUS_ERASEABORTED_MASK           0x20UL                                  /* Bit mask for MSC_ERASEABORTED */
#define _MSC_STATUS_ERASEABORTED_DEFAULT        0x00000000UL                            /* Mode DEFAULT for MSC_STATUS */
#define MSC_STATUS_ERASEABORTED_DEFAULT         (_MSC_STATUS_ERASEABORTED_DEFAULT << 5) /* Shifted mode DEFAULT for MSC_STATUS */

#if defined(CONFIG_EFM32_EFM32GG)
#  define MSC_STATUS_PCRUNNING                  (0x1UL << 6)                            /* Performance Counters Running */
#  define _MSC_STATUS_PCRUNNING_SHIFT           6                                       /* Shift value for MSC_PCRUNNING */
#  define _MSC_STATUS_PCRUNNING_MASK            0x40UL                                  /* Bit mask for MSC_PCRUNNING */
#  define _MSC_STATUS_PCRUNNING_DEFAULT         0x00000000UL                            /* Mode DEFAULT for MSC_STATUS */
#  define MSC_STATUS_PCRUNNING_DEFAULT          (_MSC_STATUS_PCRUNNING_DEFAULT << 6)    /* Shifted mode DEFAULT for MSC_STATUS */
#endif

/* Bit fields for MSC IF */

#if defined(CONFIG_EFM32_EFM32GG)
#  define _MSC_IF_RESETVALUE                    0x00000000UL                 /* Default value for MSC_IF */
#  define _MSC_IF_MASK                          0x0000000FUL                 /* Mask for MSC_IF */
#else
#  define _MSC_IF_RESETVALUE                    0x00000000UL                 /* Default value for MSC_IF */
#  define _MSC_IF_MASK                          0x00000003UL                 /* Mask for MSC_IF */
#endif

#define MSC_IF_ERASE                            (0x1UL << 0)                 /* Erase Done Interrupt Read Flag */
#define _MSC_IF_ERASE_SHIFT                     0                            /* Shift value for MSC_ERASE */
#define _MSC_IF_ERASE_MASK                      0x1UL                        /* Bit mask for MSC_ERASE */
#define _MSC_IF_ERASE_DEFAULT                   0x00000000UL                 /* Mode DEFAULT for MSC_IF */
#define MSC_IF_ERASE_DEFAULT                    (_MSC_IF_ERASE_DEFAULT << 0) /* Shifted mode DEFAULT for MSC_IF */
#define MSC_IF_WRITE                            (0x1UL << 1)                 /* Write Done Interrupt Read Flag */
#define _MSC_IF_WRITE_SHIFT                     1                            /* Shift value for MSC_WRITE */
#define _MSC_IF_WRITE_MASK                      0x2UL                        /* Bit mask for MSC_WRITE */
#define _MSC_IF_WRITE_DEFAULT                   0x00000000UL                 /* Mode DEFAULT for MSC_IF */
#define MSC_IF_WRITE_DEFAULT                    (_MSC_IF_WRITE_DEFAULT << 1) /* Shifted mode DEFAULT for MSC_IF */

#if defined(CONFIG_EFM32_EFM32GG)
#  define MSC_IF_CHOF                           (0x1UL << 2)                 /* Cache Hits Overflow Interrupt Flag */
#  define _MSC_IF_CHOF_SHIFT                    2                            /* Shift value for MSC_CHOF */
#  define _MSC_IF_CHOF_MASK                     0x4UL                        /* Bit mask for MSC_CHOF */
#  define _MSC_IF_CHOF_DEFAULT                  0x00000000UL                 /* Mode DEFAULT for MSC_IF */
#  define MSC_IF_CHOF_DEFAULT                   (_MSC_IF_CHOF_DEFAULT << 2)  /* Shifted mode DEFAULT for MSC_IF */
#  define MSC_IF_CMOF                           (0x1UL << 3)                 /* Cache Misses Overflow Interrupt Flag */
#  define _MSC_IF_CMOF_SHIFT                    3                            /* Shift value for MSC_CMOF */
#  define _MSC_IF_CMOF_MASK                     0x8UL                        /* Bit mask for MSC_CMOF */
#  define _MSC_IF_CMOF_DEFAULT                  0x00000000UL                 /* Mode DEFAULT for MSC_IF */
#  define MSC_IF_CMOF_DEFAULT                   (_MSC_IF_CMOF_DEFAULT << 3)  /* Shifted mode DEFAULT for MSC_IF */
#endif

/* Bit fields for MSC IFS */

#if defined(CONFIG_EFM32_EFM32GG)
#  define _MSC_IFS_RESETVALUE                   0x00000000UL                  /* Default value for MSC_IFS */
#  define _MSC_IFS_MASK                         0x0000000FUL                  /* Mask for MSC_IFS */
#else
#  define _MSC_IFS_RESETVALUE                   0x00000000UL                  /* Default value for MSC_IFS */
#  define _MSC_IFS_MASK                         0x00000003UL                  /* Mask for MSC_IFS */
#endif

#define MSC_IFS_ERASE                           (0x1UL << 0)                  /* Erase Done Interrupt Set */
#define _MSC_IFS_ERASE_SHIFT                    0                             /* Shift value for MSC_ERASE */
#define _MSC_IFS_ERASE_MASK                     0x1UL                         /* Bit mask for MSC_ERASE */
#define _MSC_IFS_ERASE_DEFAULT                  0x00000000UL                  /* Mode DEFAULT for MSC_IFS */
#define MSC_IFS_ERASE_DEFAULT                   (_MSC_IFS_ERASE_DEFAULT << 0) /* Shifted mode DEFAULT for MSC_IFS */
#define MSC_IFS_WRITE                           (0x1UL << 1)                  /* Write Done Interrupt Set */
#define _MSC_IFS_WRITE_SHIFT                    1                             /* Shift value for MSC_WRITE */
#define _MSC_IFS_WRITE_MASK                     0x2UL                         /* Bit mask for MSC_WRITE */
#define _MSC_IFS_WRITE_DEFAULT                  0x00000000UL                  /* Mode DEFAULT for MSC_IFS */
#define MSC_IFS_WRITE_DEFAULT                   (_MSC_IFS_WRITE_DEFAULT << 1) /* Shifted mode DEFAULT for MSC_IFS */

#if defined(CONFIG_EFM32_EFM32GG)
#  define MSC_IFS_CHOF                          (0x1UL << 2)                  /* Cache Hits Overflow Interrupt Set */
#  define _MSC_IFS_CHOF_SHIFT                   2                             /* Shift value for MSC_CHOF */
#  define _MSC_IFS_CHOF_MASK                    0x4UL                         /* Bit mask for MSC_CHOF */
#  define _MSC_IFS_CHOF_DEFAULT                 0x00000000UL                  /* Mode DEFAULT for MSC_IFS */
#  define MSC_IFS_CHOF_DEFAULT                  (_MSC_IFS_CHOF_DEFAULT << 2)  /* Shifted mode DEFAULT for MSC_IFS */
#  define MSC_IFS_CMOF                          (0x1UL << 3)                  /* Cache Misses Overflow Interrupt Set */
#  define _MSC_IFS_CMOF_SHIFT                   3                             /* Shift value for MSC_CMOF */
#  define _MSC_IFS_CMOF_MASK                    0x8UL                         /* Bit mask for MSC_CMOF */
#  define _MSC_IFS_CMOF_DEFAULT                 0x00000000UL                  /* Mode DEFAULT for MSC_IFS */
#  define MSC_IFS_CMOF_DEFAULT                  (_MSC_IFS_CMOF_DEFAULT << 3)  /* Shifted mode DEFAULT for MSC_IFS */
#endif

/* Bit fields for MSC IFC */

#if defined(CONFIG_EFM32_EFM32GG)
#  define _MSC_IFC_RESETVALUE                   0x00000000UL                  /* Default value for MSC_IFC */
#  define _MSC_IFC_MASK                         0x0000000FUL                  /* Mask for MSC_IFC */
#else
#  define _MSC_IFC_RESETVALUE                   0x00000000UL                  /* Default value for MSC_IFC */
#  define _MSC_IFC_MASK                         0x00000003UL                  /* Mask for MSC_IFC */
#endif

#define MSC_IFC_ERASE                           (0x1UL << 0)                  /* Erase Done Interrupt Clear */
#define _MSC_IFC_ERASE_SHIFT                    0                             /* Shift value for MSC_ERASE */
#define _MSC_IFC_ERASE_MASK                     0x1UL                         /* Bit mask for MSC_ERASE */
#define _MSC_IFC_ERASE_DEFAULT                  0x00000000UL                  /* Mode DEFAULT for MSC_IFC */
#define MSC_IFC_ERASE_DEFAULT                   (_MSC_IFC_ERASE_DEFAULT << 0) /* Shifted mode DEFAULT for MSC_IFC */
#define MSC_IFC_WRITE                           (0x1UL << 1)                  /* Write Done Interrupt Clear */
#define _MSC_IFC_WRITE_SHIFT                    1                             /* Shift value for MSC_WRITE */
#define _MSC_IFC_WRITE_MASK                     0x2UL                         /* Bit mask for MSC_WRITE */
#define _MSC_IFC_WRITE_DEFAULT                  0x00000000UL                  /* Mode DEFAULT for MSC_IFC */
#define MSC_IFC_WRITE_DEFAULT                   (_MSC_IFC_WRITE_DEFAULT << 1) /* Shifted mode DEFAULT for MSC_IFC */

#if defined(CONFIG_EFM32_EFM32GG)
#  define MSC_IFC_CHOF                          (0x1UL << 2)                  /* Cache Hits Overflow Interrupt Clear */
#  define _MSC_IFC_CHOF_SHIFT                   2                             /* Shift value for MSC_CHOF */
#  define _MSC_IFC_CHOF_MASK                    0x4UL                         /* Bit mask for MSC_CHOF */
#  define _MSC_IFC_CHOF_DEFAULT                 0x00000000UL                  /* Mode DEFAULT for MSC_IFC */
#  define MSC_IFC_CHOF_DEFAULT                  (_MSC_IFC_CHOF_DEFAULT << 2)  /* Shifted mode DEFAULT for MSC_IFC */
#  define MSC_IFC_CMOF                          (0x1UL << 3)                  /* Cache Misses Overflow Interrupt Clear */
#  define _MSC_IFC_CMOF_SHIFT                   3                             /* Shift value for MSC_CMOF */
#  define _MSC_IFC_CMOF_MASK                    0x8UL                         /* Bit mask for MSC_CMOF */
#  define _MSC_IFC_CMOF_DEFAULT                 0x00000000UL                  /* Mode DEFAULT for MSC_IFC */
#  define MSC_IFC_CMOF_DEFAULT                  (_MSC_IFC_CMOF_DEFAULT << 3)  /* Shifted mode DEFAULT for MSC_IFC */
#endif

/* Bit fields for MSC IEN */

#if defined(CONFIG_EFM32_EFM32GG)
#  define _MSC_IEN_RESETVALUE                   0x00000000UL                  /* Default value for MSC_IEN */
#  define _MSC_IEN_MASK                         0x0000000FUL                  /* Mask for MSC_IEN */
#else
#  define _MSC_IEN_RESETVALUE                   0x00000000UL                  /* Default value for MSC_IEN */
#  define _MSC_IEN_MASK                         0x00000003UL                  /* Mask for MSC_IEN */
#endif

#define MSC_IEN_ERASE                           (0x1UL << 0)                  /* Erase Done Interrupt Enable */
#define _MSC_IEN_ERASE_SHIFT                    0                             /* Shift value for MSC_ERASE */
#define _MSC_IEN_ERASE_MASK                     0x1UL                         /* Bit mask for MSC_ERASE */
#define _MSC_IEN_ERASE_DEFAULT                  0x00000000UL                  /* Mode DEFAULT for MSC_IEN */
#define MSC_IEN_ERASE_DEFAULT                   (_MSC_IEN_ERASE_DEFAULT << 0) /* Shifted mode DEFAULT for MSC_IEN */
#define MSC_IEN_WRITE                           (0x1UL << 1)                  /* Write Done Interrupt Enable */
#define _MSC_IEN_WRITE_SHIFT                    1                             /* Shift value for MSC_WRITE */
#define _MSC_IEN_WRITE_MASK                     0x2UL                         /* Bit mask for MSC_WRITE */
#define _MSC_IEN_WRITE_DEFAULT                  0x00000000UL                  /* Mode DEFAULT for MSC_IEN */
#define MSC_IEN_WRITE_DEFAULT                   (_MSC_IEN_WRITE_DEFAULT << 1) /* Shifted mode DEFAULT for MSC_IEN */

#if defined(CONFIG_EFM32_EFM32GG)
#  define MSC_IEN_CHOF                          (0x1UL << 2)                  /* Cache Hits Overflow Interrupt Enable */
#  define _MSC_IEN_CHOF_SHIFT                   2                             /* Shift value for MSC_CHOF */
#  define _MSC_IEN_CHOF_MASK                    0x4UL                         /* Bit mask for MSC_CHOF */
#  define _MSC_IEN_CHOF_DEFAULT                 0x00000000UL                  /* Mode DEFAULT for MSC_IEN */
#  define MSC_IEN_CHOF_DEFAULT                  (_MSC_IEN_CHOF_DEFAULT << 2)  /* Shifted mode DEFAULT for MSC_IEN */
#  define MSC_IEN_CMOF                          (0x1UL << 3)                  /* Cache Misses Overflow Interrupt Enable */
#  define _MSC_IEN_CMOF_SHIFT                   3                             /* Shift value for MSC_CMOF */
#  define _MSC_IEN_CMOF_MASK                    0x8UL                         /* Bit mask for MSC_CMOF */
#  define _MSC_IEN_CMOF_DEFAULT                 0x00000000UL                  /* Mode DEFAULT for MSC_IEN */
#  define MSC_IEN_CMOF_DEFAULT                  (_MSC_IEN_CMOF_DEFAULT << 3)  /* Shifted mode DEFAULT for MSC_IEN */
#endif

/* Bit fields for MSC LOCK */

#define _MSC_LOCK_RESETVALUE                    0x00000000UL                      /* Default value for MSC_LOCK */
#define _MSC_LOCK_MASK                          0x0000FFFFUL                      /* Mask for MSC_LOCK */

#define _MSC_LOCK_LOCKKEY_SHIFT                 0                                 /* Shift value for MSC_LOCKKEY */
#define _MSC_LOCK_LOCKKEY_MASK                  0xFFFFUL                          /* Bit mask for MSC_LOCKKEY */
#define _MSC_LOCK_LOCKKEY_DEFAULT               0x00000000UL                      /* Mode DEFAULT for MSC_LOCK */
#define _MSC_LOCK_LOCKKEY_LOCK                  0x00000000UL                      /* Mode LOCK for MSC_LOCK */
#define _MSC_LOCK_LOCKKEY_UNLOCKED              0x00000000UL                      /* Mode UNLOCKED for MSC_LOCK */
#define _MSC_LOCK_LOCKKEY_LOCKED                0x00000001UL                      /* Mode LOCKED for MSC_LOCK */
#define _MSC_LOCK_LOCKKEY_UNLOCK                0x00001B71UL                      /* Mode UNLOCK for MSC_LOCK */
#define MSC_LOCK_LOCKKEY_DEFAULT                (_MSC_LOCK_LOCKKEY_DEFAULT << 0)  /* Shifted mode DEFAULT for MSC_LOCK */
#define MSC_LOCK_LOCKKEY_LOCK                   (_MSC_LOCK_LOCKKEY_LOCK << 0)     /* Shifted mode LOCK for MSC_LOCK */
#define MSC_LOCK_LOCKKEY_UNLOCKED               (_MSC_LOCK_LOCKKEY_UNLOCKED << 0) /* Shifted mode UNLOCKED for MSC_LOCK */
#define MSC_LOCK_LOCKKEY_LOCKED                 (_MSC_LOCK_LOCKKEY_LOCKED << 0)   /* Shifted mode LOCKED for MSC_LOCK */
#define MSC_LOCK_LOCKKEY_UNLOCK                 (_MSC_LOCK_LOCKKEY_UNLOCK << 0)   /* Shifted mode UNLOCK for MSC_LOCK */

#define MSC_UNLOCK_CODE                         0x1B71                            /* MSC unlock code */

/* Bit fields for MSC CMD */

#if defined(CONFIG_EFM32_EFM32GG)
#  define _MSC_CMD_RESETVALUE                   0x00000000UL                     /* Default value for MSC_CMD */
#  define _MSC_CMD_MASK                         0x00000007UL                     /* Mask for MSC_CMD */

#  define MSC_CMD_INVCACHE                      (0x1UL << 0)                     /* Invalidate Instruction Cache */
#  define _MSC_CMD_INVCACHE_SHIFT               0                                /* Shift value for MSC_INVCACHE */
#  define _MSC_CMD_INVCACHE_MASK                0x1UL                            /* Bit mask for MSC_INVCACHE */
#  define _MSC_CMD_INVCACHE_DEFAULT             0x00000000UL                     /* Mode DEFAULT for MSC_CMD */
#  define MSC_CMD_INVCACHE_DEFAULT              (_MSC_CMD_INVCACHE_DEFAULT << 0) /* Shifted mode DEFAULT for MSC_CMD */
#  define MSC_CMD_STARTPC                       (0x1UL << 1)                     /* Start Performance Counters */
#  define _MSC_CMD_STARTPC_SHIFT                1                                /* Shift value for MSC_STARTPC */
#  define _MSC_CMD_STARTPC_MASK                 0x2UL                            /* Bit mask for MSC_STARTPC */
#  define _MSC_CMD_STARTPC_DEFAULT              0x00000000UL                     /* Mode DEFAULT for MSC_CMD */
#  define MSC_CMD_STARTPC_DEFAULT               (_MSC_CMD_STARTPC_DEFAULT << 1)  /* Shifted mode DEFAULT for MSC_CMD */
#  define MSC_CMD_STOPPC                        (0x1UL << 2)                     /* Stop Performance Counters */
#  define _MSC_CMD_STOPPC_SHIFT                 2                                /* Shift value for MSC_STOPPC */
#  define _MSC_CMD_STOPPC_MASK                  0x4UL                            /* Bit mask for MSC_STOPPC */
#  define _MSC_CMD_STOPPC_DEFAULT               0x00000000UL                     /* Mode DEFAULT for MSC_CMD */
#  define MSC_CMD_STOPPC_DEFAULT                (_MSC_CMD_STOPPC_DEFAULT << 2)   /* Shifted mode DEFAULT for MSC_CMD */
#endif

/* Bit fields for MSC CACHEHITS */

#if defined(CONFIG_EFM32_EFM32GG)
#  define _MSC_CACHEHITS_RESETVALUE             0x00000000UL                            /* Default value for MSC_CACHEHITS */
#  define _MSC_CACHEHITS_MASK                   0x000FFFFFUL                            /* Mask for MSC_CACHEHITS */

#  define _MSC_CACHEHITS_CACHEHITS_SHIFT        0                                       /* Shift value for MSC_CACHEHITS */
#  define _MSC_CACHEHITS_CACHEHITS_MASK         0xFFFFFUL                               /* Bit mask for MSC_CACHEHITS */
#  define _MSC_CACHEHITS_CACHEHITS_DEFAULT      0x00000000UL                            /* Mode DEFAULT for MSC_CACHEHITS */
#  define MSC_CACHEHITS_CACHEHITS_DEFAULT       (_MSC_CACHEHITS_CACHEHITS_DEFAULT << 0) /* Shifted mode DEFAULT for MSC_CACHEHITS */
#endif

/* Bit fields for MSC CACHEMISSES */

#if defined(CONFIG_EFM32_EFM32GG)
#  define _MSC_CACHEMISSES_RESETVALUE           0x00000000UL                                /* Default value for MSC_CACHEMISSES */
#  define _MSC_CACHEMISSES_MASK                 0x000FFFFFUL                                /* Mask for MSC_CACHEMISSES */

#  define _MSC_CACHEMISSES_CACHEMISSES_SHIFT    0                                           /* Shift value for MSC_CACHEMISSES */
#  define _MSC_CACHEMISSES_CACHEMISSES_MASK     0xFFFFFUL                                   /* Bit mask for MSC_CACHEMISSES */
#  define _MSC_CACHEMISSES_CACHEMISSES_DEFAULT  0x00000000UL                                /* Mode DEFAULT for MSC_CACHEMISSES */
#  define MSC_CACHEMISSES_CACHEMISSES_DEFAULT   (_MSC_CACHEMISSES_CACHEMISSES_DEFAULT << 0) /* Shifted mode DEFAULT for MSC_CACHEMISSES */
#endif

/* Bit fields for MSC TIMEBASE */

#if defined(CONFIG_EFM32_EFM32GG)
#  define _MSC_TIMEBASE_RESETVALUE              0x00000010UL                         /* Default value for MSC_TIMEBASE */
#  define _MSC_TIMEBASE_MASK                    0x0001003FUL                         /* Mask for MSC_TIMEBASE */

#  define _MSC_TIMEBASE_BASE_SHIFT              0                                    /* Shift value for MSC_BASE */
#  define _MSC_TIMEBASE_BASE_MASK               0x3FUL                               /* Bit mask for MSC_BASE */
#  define _MSC_TIMEBASE_BASE_DEFAULT            0x00000010UL                         /* Mode DEFAULT for MSC_TIMEBASE */
#  define MSC_TIMEBASE_BASE_DEFAULT             (_MSC_TIMEBASE_BASE_DEFAULT << 0)    /* Shifted mode DEFAULT for MSC_TIMEBASE */
#  define MSC_TIMEBASE_PERIOD                   (0x1UL << 16)                        /* Sets the timebase period */
#  define _MSC_TIMEBASE_PERIOD_SHIFT            16                                   /* Shift value for MSC_PERIOD */
#  define _MSC_TIMEBASE_PERIOD_MASK             0x10000UL                            /* Bit mask for MSC_PERIOD */
#  define _MSC_TIMEBASE_PERIOD_DEFAULT          0x00000000UL                         /* Mode DEFAULT for MSC_TIMEBASE */
#  define _MSC_TIMEBASE_PERIOD_1US              0x00000000UL                         /* Mode 1US for MSC_TIMEBASE */
#  define _MSC_TIMEBASE_PERIOD_5US              0x00000001UL                         /* Mode 5US for MSC_TIMEBASE */
#  define MSC_TIMEBASE_PERIOD_DEFAULT           (_MSC_TIMEBASE_PERIOD_DEFAULT << 16) /* Shifted mode DEFAULT for MSC_TIMEBASE */
#  define MSC_TIMEBASE_PERIOD_1US               (_MSC_TIMEBASE_PERIOD_1US << 16)     /* Shifted mode 1US for MSC_TIMEBASE */
#  define MSC_TIMEBASE_PERIOD_5US               (_MSC_TIMEBASE_PERIOD_5US << 16)     /* Shifted mode 5US for MSC_TIMEBASE */
#endif

/* Bit fields for MSC MASSLOCK */

#if defined(CONFIG_EFM32_EFM32GG)
#  define _MSC_MASSLOCK_RESETVALUE              0x00000001UL                          /* Default value for MSC_MASSLOCK */
#  define _MSC_MASSLOCK_MASK                    0x0000FFFFUL                          /* Mask for MSC_MASSLOCK */

#  define _MSC_MASSLOCK_LOCKKEY_SHIFT           0                                     /* Shift value for MSC_LOCKKEY */
#  define _MSC_MASSLOCK_LOCKKEY_MASK            0xFFFFUL                              /* Bit mask for MSC_LOCKKEY */
#  define _MSC_MASSLOCK_LOCKKEY_LOCK            0x00000000UL                          /* Mode LOCK for MSC_MASSLOCK */
#  define _MSC_MASSLOCK_LOCKKEY_UNLOCKED        0x00000000UL                          /* Mode UNLOCKED for MSC_MASSLOCK */
#  define _MSC_MASSLOCK_LOCKKEY_DEFAULT         0x00000001UL                          /* Mode DEFAULT for MSC_MASSLOCK */
#  define _MSC_MASSLOCK_LOCKKEY_LOCKED          0x00000001UL                          /* Mode LOCKED for MSC_MASSLOCK */
#  define _MSC_MASSLOCK_LOCKKEY_UNLOCK          0x0000631AUL                          /* Mode UNLOCK for MSC_MASSLOCK */
#  define MSC_MASSLOCK_LOCKKEY_LOCK             (_MSC_MASSLOCK_LOCKKEY_LOCK << 0)     /* Shifted mode LOCK for MSC_MASSLOCK */
#  define MSC_MASSLOCK_LOCKKEY_UNLOCKED         (_MSC_MASSLOCK_LOCKKEY_UNLOCKED << 0) /* Shifted mode UNLOCKED for MSC_MASSLOCK */
#  define MSC_MASSLOCK_LOCKKEY_DEFAULT          (_MSC_MASSLOCK_LOCKKEY_DEFAULT << 0)  /* Shifted mode DEFAULT for MSC_MASSLOCK */
#  define MSC_MASSLOCK_LOCKKEY_LOCKED           (_MSC_MASSLOCK_LOCKKEY_LOCKED << 0)   /* Shifted mode LOCKED for MSC_MASSLOCK */
#  define MSC_MASSLOCK_LOCKKEY_UNLOCK           (_MSC_MASSLOCK_LOCKKEY_UNLOCK << 0)   /* Shifted mode UNLOCK for MSC_MASSLOCK */
#endif

#endif /* __ARCH_ARM_SRC_EFM32_EFM32_EFM32_MSC_H */
