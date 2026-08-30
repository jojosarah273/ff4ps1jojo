nonmatching func_80181604, 0x1E8

glabel func_80181604
    /* 8FA04 80181604 C8FFBD27 */  addiu      $sp, $sp, -0x38
    /* 8FA08 80181608 1C00B3AF */  sw         $s3, 0x1C($sp)
    /* 8FA0C 8018160C FFFFB330 */  andi       $s3, $a1, 0xFFFF
    /* 8FA10 80181610 2400B5AF */  sw         $s5, 0x24($sp)
    /* 8FA14 80181614 FFFFD530 */  andi       $s5, $a2, 0xFFFF
    /* 8FA18 80181618 003C0700 */  sll        $a3, $a3, 16
    /* 8FA1C 8018161C 1000B0AF */  sw         $s0, 0x10($sp)
    /* 8FA20 80181620 03840700 */  sra        $s0, $a3, 16
    /* 8FA24 80181624 2000B4AF */  sw         $s4, 0x20($sp)
    /* 8FA28 80181628 03001432 */  andi       $s4, $s0, 0x3
    /* 8FA2C 8018162C 10000232 */  andi       $v0, $s0, 0x10
    /* 8FA30 80181630 3000BFAF */  sw         $ra, 0x30($sp)
    /* 8FA34 80181634 2C00B7AF */  sw         $s7, 0x2C($sp)
    /* 8FA38 80181638 2800B6AF */  sw         $s6, 0x28($sp)
    /* 8FA3C 8018163C 1800B2AF */  sw         $s2, 0x18($sp)
    /* 8FA40 80181640 03004010 */  beqz       $v0, .L80181650
    /* 8FA44 80181644 1400B1AF */   sw        $s1, 0x14($sp)
    /* 8FA48 80181648 3C000106 */  bgez       $s0, .L8018173C
    /* 8FA4C 8018164C 1A80023C */   lui       $v0, %hi(D_801A0A10)
  .L80181650:
    /* 8FA50 80181650 40000224 */  addiu      $v0, $zero, 0x40
    /* 8FA54 80181654 08000324 */  addiu      $v1, $zero, 0x8
    /* 8FA58 80181658 980182A7 */  sh         $v0, %gp_rel(D_8019EE94)($gp)
    /* 8FA5C 8018165C 1E80023C */  lui        $v0, %hi(D_801E01C8)
    /* 8FA60 80181660 C8014224 */  addiu      $v0, $v0, %lo(D_801E01C8)
    /* 8FA64 80181664 A80184AF */  sw         $a0, %gp_rel(D_8019EEA4)($gp)
    /* 8FA68 80181668 A20193A7 */  sh         $s3, %gp_rel(D_8019EE9E)($gp)
    /* 8FA6C 8018166C A40195A7 */  sh         $s5, %gp_rel(D_8019EEA0)($gp)
    /* 8FA70 80181670 940193A7 */  sh         $s3, %gp_rel(D_8019EE90)($gp)
    /* 8FA74 80181674 960195A7 */  sh         $s5, %gp_rel(D_8019EE92)($gp)
    /* 8FA78 80181678 9A0183A7 */  sh         $v1, %gp_rel(D_8019EE96)($gp)
    /* 8FA7C 8018167C AC0182AF */  sw         $v0, %gp_rel(D_8019EEA8)($gp)
    /* 8FA80 80181680 03000106 */  bgez       $s0, .L80181690
    /* 8FA84 80181684 02000224 */   addiu     $v0, $zero, 0x2
    /* 8FA88 80181688 AB050608 */  j          .L801816AC
    /* 8FA8C 8018168C FFFF1224 */   addiu     $s2, $zero, -0x1
  .L80181690:
    /* 8FA90 80181690 06008212 */  beq        $s4, $v0, .L801816AC
    /* 8FA94 80181694 01001224 */   addiu     $s2, $zero, 0x1
    /* 8FA98 80181698 0D80023C */  lui        $v0, %hi(D_800D2105)
    /* 8FA9C 8018169C 05214290 */  lbu        $v0, %lo(D_800D2105)($v0)
    /* 8FAA0 801816A0 00000000 */  nop
    /* 8FAA4 801816A4 07004230 */  andi       $v0, $v0, 0x7
    /* 8FAA8 801816A8 0100522C */  sltiu      $s2, $v0, 0x1
  .L801816AC:
    /* 8FAAC 801816AC 02000106 */  bgez       $s0, .L801816B8
    /* 8FAB0 801816B0 18001124 */   addiu     $s1, $zero, 0x18
    /* 8FAB4 801816B4 20001124 */  addiu      $s1, $zero, 0x20
  .L801816B8:
    /* 8FAB8 801816B8 A00180A7 */  sh         $zero, %gp_rel(D_8019EE9C)($gp)
    /* 8FABC 801816BC 27B01000 */  nor        $s6, $zero, $s0
    /* 8FAC0 801816C0 16002012 */  beqz       $s1, .L8018171C
    /* 8FAC4 801816C4 0200973A */   xori      $s7, $s4, 0x2
    /* 8FAC8 801816C8 21204002 */  addu       $a0, $s2, $zero
  .L801816CC:
    /* 8FACC 801816CC A0018587 */  lh         $a1, %gp_rel(D_8019EE9C)($gp)
    /* 8FAD0 801816D0 3602060C */  jal        func_801808D8
    /* 8FAD4 801816D4 21300000 */   addu      $a2, $zero, $zero
    /* 8FAD8 801816D8 07000006 */  bltz       $s0, .L801816F8
    /* 8FADC 801816DC 00000000 */   nop
    /* 8FAE0 801816E0 4101060C */  jal        func_80180504
    /* 8FAE4 801816E4 00000000 */   nop
    /* 8FAE8 801816E8 0501060C */  jal        func_80180414
    /* 8FAEC 801816EC 00000000 */   nop
    /* 8FAF0 801816F0 C500060C */  jal        func_80180314
    /* 8FAF4 801816F4 00000000 */   nop
  .L801816F8:
    /* 8FAF8 801816F8 A0018297 */  lhu        $v0, %gp_rel(D_8019EE9C)($gp)
    /* 8FAFC 801816FC 00000000 */  nop
    /* 8FB00 80181700 01004224 */  addiu      $v0, $v0, 0x1
    /* 8FB04 80181704 A00182A7 */  sh         $v0, %gp_rel(D_8019EE9C)($gp)
    /* 8FB08 80181708 00140200 */  sll        $v0, $v0, 16
    /* 8FB0C 8018170C 03140200 */  sra        $v0, $v0, 16
    /* 8FB10 80181710 2A105100 */  slt        $v0, $v0, $s1
    /* 8FB14 80181714 EDFF4014 */  bnez       $v0, .L801816CC
    /* 8FB18 80181718 21204002 */   addu      $a0, $s2, $zero
  .L8018171C:
    /* 8FB1C 8018171C C2171600 */  srl        $v0, $s6, 31
    /* 8FB20 80181720 2B181700 */  sltu       $v1, $zero, $s7
    /* 8FB24 80181724 24104300 */  and        $v0, $v0, $v1
    /* 8FB28 80181728 02004010 */  beqz       $v0, .L80181734
    /* 8FB2C 8018172C FFFF0224 */   addiu     $v0, $zero, -0x1
    /* 8FB30 80181730 9C0182A7 */  sh         $v0, %gp_rel(D_8019EE98)($gp)
  .L80181734:
    /* 8FB34 80181734 19000006 */  bltz       $s0, .L8018179C
    /* 8FB38 80181738 1A80023C */   lui       $v0, %hi(D_801A0A10)
  .L8018173C:
    /* 8FB3C 8018173C 100A4224 */  addiu      $v0, $v0, %lo(D_801A0A10)
    /* 8FB40 80181740 18005224 */  addiu      $s2, $v0, 0x18
    /* 8FB44 80181744 C0181400 */  sll        $v1, $s4, 3
    /* 8FB48 80181748 21886200 */  addu       $s1, $v1, $v0
    /* 8FB4C 8018174C 21806002 */  addu       $s0, $s3, $zero
    /* 8FB50 80181750 02001624 */  addiu      $s6, $zero, 0x2
    /* 8FB54 80181754 03001324 */  addiu      $s3, $zero, 0x3
  .L80181758:
    /* 8FB58 80181758 21200000 */  addu       $a0, $zero, $zero
    /* 8FB5C 8018175C 21280000 */  addu       $a1, $zero, $zero
    /* 8FB60 80181760 21300002 */  addu       $a2, $s0, $zero
    /* 8FB64 80181764 6A5C060C */  jal        func_801971A8
    /* 8FB68 80181768 2138A002 */   addu      $a3, $s5, $zero
    /* 8FB6C 8018176C 04009616 */  bne        $s4, $s6, .L80181780
    /* 8FB70 80181770 000022A6 */   sh        $v0, 0x0($s1)
    /* 8FB74 80181774 F8FF4296 */  lhu        $v0, -0x8($s2)
    /* 8FB78 80181778 00000000 */  nop
    /* 8FB7C 8018177C 000042A6 */  sh         $v0, 0x0($s2)
  .L80181780:
    /* 8FB80 80181780 02005226 */  addiu      $s2, $s2, 0x2
    /* 8FB84 80181784 02003126 */  addiu      $s1, $s1, 0x2
    /* 8FB88 80181788 FFFF7326 */  addiu      $s3, $s3, -0x1
    /* 8FB8C 8018178C F2FF6106 */  bgez       $s3, .L80181758
    /* 8FB90 80181790 40001026 */   addiu     $s0, $s0, 0x40
    /* 8FB94 80181794 EE050608 */  j          .L801817B8
    /* 8FB98 80181798 00000000 */   nop
  .L8018179C:
    /* 8FB9C 8018179C 21200000 */  addu       $a0, $zero, $zero
    /* 8FBA0 801817A0 21280000 */  addu       $a1, $zero, $zero
    /* 8FBA4 801817A4 21306002 */  addu       $a2, $s3, $zero
    /* 8FBA8 801817A8 6A5C060C */  jal        func_801971A8
    /* 8FBAC 801817AC 2138A002 */   addu      $a3, $s5, $zero
    /* 8FBB0 801817B0 1A80013C */  lui        $at, %hi(D_8019EE10)
    /* 8FBB4 801817B4 10EE22A4 */  sh         $v0, %lo(D_8019EE10)($at)
  .L801817B8:
    /* 8FBB8 801817B8 7FFE050C */  jal        func_8017F9FC
    /* 8FBBC 801817BC 00000000 */   nop
    /* 8FBC0 801817C0 3000BF8F */  lw         $ra, 0x30($sp)
    /* 8FBC4 801817C4 2C00B78F */  lw         $s7, 0x2C($sp)
    /* 8FBC8 801817C8 2800B68F */  lw         $s6, 0x28($sp)
    /* 8FBCC 801817CC 2400B58F */  lw         $s5, 0x24($sp)
    /* 8FBD0 801817D0 2000B48F */  lw         $s4, 0x20($sp)
    /* 8FBD4 801817D4 1C00B38F */  lw         $s3, 0x1C($sp)
    /* 8FBD8 801817D8 1800B28F */  lw         $s2, 0x18($sp)
    /* 8FBDC 801817DC 1400B18F */  lw         $s1, 0x14($sp)
    /* 8FBE0 801817E0 1000B08F */  lw         $s0, 0x10($sp)
    /* 8FBE4 801817E4 0800E003 */  jr         $ra
    /* 8FBE8 801817E8 3800BD27 */   addiu     $sp, $sp, 0x38
endlabel func_80181604
