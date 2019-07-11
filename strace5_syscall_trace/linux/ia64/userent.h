/*
 * Copyright (c) 2014-2018 The strace developers.
 * All rights reserved.
 *
 * SPDX-License-Identifier: LGPL-2.1-or-later
 */

{ PT_F32, "f32" }, { PT_F33, "f33" }, { PT_F34, "f34" },
{ PT_F35, "f35" }, { PT_F36, "f36" }, { PT_F37, "f37" },
{ PT_F38, "f38" }, { PT_F39, "f39" }, { PT_F40, "f40" },
{ PT_F41, "f41" }, { PT_F42, "f42" }, { PT_F43, "f43" },
{ PT_F44, "f44" }, { PT_F45, "f45" }, { PT_F46, "f46" },
{ PT_F47, "f47" }, { PT_F48, "f48" }, { PT_F49, "f49" },
{ PT_F50, "f50" }, { PT_F51, "f51" }, { PT_F52, "f52" },
{ PT_F53, "f53" }, { PT_F54, "f54" }, { PT_F55, "f55" },
{ PT_F56, "f56" }, { PT_F57, "f57" }, { PT_F58, "f58" },
{ PT_F59, "f59" }, { PT_F60, "f60" }, { PT_F61, "f61" },
{ PT_F62, "f62" }, { PT_F63, "f63" }, { PT_F64, "f64" },
{ PT_F65, "f65" }, { PT_F66, "f66" }, { PT_F67, "f67" },
{ PT_F68, "f68" }, { PT_F69, "f69" }, { PT_F70, "f70" },
{ PT_F71, "f71" }, { PT_F72, "f72" }, { PT_F73, "f73" },
{ PT_F74, "f74" }, { PT_F75, "f75" }, { PT_F76, "f76" },
{ PT_F77, "f77" }, { PT_F78, "f78" }, { PT_F79, "f79" },
{ PT_F80, "f80" }, { PT_F81, "f81" }, { PT_F82, "f82" },
{ PT_F83, "f83" }, { PT_F84, "f84" }, { PT_F85, "f85" },
{ PT_F86, "f86" }, { PT_F87, "f87" }, { PT_F88, "f88" },
{ PT_F89, "f89" }, { PT_F90, "f90" }, { PT_F91, "f91" },
{ PT_F92, "f92" }, { PT_F93, "f93" }, { PT_F94, "f94" },
{ PT_F95, "f95" }, { PT_F96, "f96" }, { PT_F97, "f97" },
{ PT_F98, "f98" }, { PT_F99, "f99" }, { PT_F100, "f100" },
{ PT_F101, "f101" }, { PT_F102, "f102" }, { PT_F103, "f103" },
{ PT_F104, "f104" }, { PT_F105, "f105" }, { PT_F106, "f106" },
{ PT_F107, "f107" }, { PT_F108, "f108" }, { PT_F109, "f109" },
{ PT_F110, "f110" }, { PT_F111, "f111" }, { PT_F112, "f112" },
{ PT_F113, "f113" }, { PT_F114, "f114" }, { PT_F115, "f115" },
{ PT_F116, "f116" }, { PT_F117, "f117" }, { PT_F118, "f118" },
{ PT_F119, "f119" }, { PT_F120, "f120" }, { PT_F121, "f121" },
{ PT_F122, "f122" }, { PT_F123, "f123" }, { PT_F124, "f124" },
{ PT_F125, "f125" }, { PT_F126, "f126" }, { PT_F127, "f127" },
/* switch stack: */
{ PT_F2, "f2" }, { PT_F3, "f3" }, { PT_F4, "f4" },
{ PT_F5, "f5" }, { PT_F10, "f10" }, { PT_F11, "f11" },
{ PT_F12, "f12" }, { PT_F13, "f13" }, { PT_F14, "f14" },
{ PT_F15, "f15" }, { PT_F16, "f16" }, { PT_F17, "f17" },
{ PT_F18, "f18" }, { PT_F19, "f19" }, { PT_F20, "f20" },
{ PT_F21, "f21" }, { PT_F22, "f22" }, { PT_F23, "f23" },
{ PT_F24, "f24" }, { PT_F25, "f25" }, { PT_F26, "f26" },
{ PT_F27, "f27" }, { PT_F28, "f28" }, { PT_F29, "f29" },
{ PT_F30, "f30" }, { PT_F31, "f31" }, { PT_R4, "r4" },
{ PT_R5, "r5" }, { PT_R6, "r6" }, { PT_R7, "r7" },
{ PT_B1, "b1" }, { PT_B2, "b2" }, { PT_B3, "b3" },
{ PT_B4, "b4" }, { PT_B5, "b5" },
{ PT_AR_EC, "ar.ec" }, { PT_AR_LC, "ar.lc" },
/* pt_regs */
{ PT_CR_IPSR, "psr" }, { PT_CR_IIP, "ip" },
{ PT_CFM, "cfm" }, { PT_AR_UNAT, "ar.unat" },
{ PT_AR_PFS, "ar.pfs" }, { PT_AR_RSC, "ar.rsc" },
{ PT_AR_RNAT, "ar.rnat" }, { PT_AR_BSPSTORE, "ar.bspstore" },
{ PT_PR, "pr" }, { PT_B6, "b6" }, { PT_AR_BSP, "ar.bsp" },
{ PT_R1, "r1" }, { PT_R2, "r2" }, { PT_R3, "r3" },
{ PT_R12, "r12" }, { PT_R13, "r13" }, { PT_R14, "r14" },
{ PT_R15, "r15" }, { PT_R8, "r8" }, { PT_R9, "r9" },
{ PT_R10, "r10" }, { PT_R11, "r11" }, { PT_R16, "r16" },
{ PT_R17, "r17" }, { PT_R18, "r18" }, { PT_R19, "r19" },
{ PT_R20, "r20" }, { PT_R21, "r21" }, { PT_R22, "r22" },
{ PT_R23, "r23" }, { PT_R24, "r24" }, { PT_R25, "r25" },
{ PT_R26, "r26" }, { PT_R27, "r27" }, { PT_R28, "r28" },
{ PT_R29, "r29" }, { PT_R30, "r30" }, { PT_R31, "r31" },
{ PT_AR_CCV, "ar.ccv" }, { PT_AR_FPSR, "ar.fpsr" },
{ PT_B0, "b0" }, { PT_B7, "b7" }, { PT_F6, "f6" },
{ PT_F7, "f7" }, { PT_F8, "f8" }, { PT_F9, "f9" },
#ifdef PT_AR_CSD
{ PT_AR_CSD, "ar.csd" },
#endif
#ifdef PT_AR_SSD
{ PT_AR_SSD, "ar.ssd" },
#endif
{ PT_DBR, "dbr" }, { PT_IBR, "ibr" }, { PT_PMD, "pmd" },
/* Other fields in "struct user" */
#include "../userent0.h"
