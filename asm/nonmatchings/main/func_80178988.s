nonmatching func_80178988, 0xD0

glabel func_80178988
    /* 86D88 80178988 88FFBD27 */  addiu      $sp, $sp, -0x78
    /* 86D8C 8017898C 21108000 */  addu       $v0, $a0, $zero
    /* 86D90 80178990 6800B0AF */  sw         $s0, 0x68($sp)
    /* 86D94 80178994 2800B027 */  addiu      $s0, $sp, 0x28
    /* 86D98 80178998 21200002 */  addu       $a0, $s0, $zero
    /* 86D9C 8017899C 7000B2AF */  sw         $s2, 0x70($sp)
    /* 86DA0 801789A0 2190A000 */  addu       $s2, $a1, $zero
    /* 86DA4 801789A4 21284000 */  addu       $a1, $v0, $zero
    /* 86DA8 801789A8 1A80023C */  lui        $v0, %hi(D_8019ED0C)
    /* 86DAC 801789AC 0CED4394 */  lhu        $v1, %lo(D_8019ED0C)($v0)
    /* 86DB0 801789B0 6C00B1AF */  sw         $s1, 0x6C($sp)
    /* 86DB4 801789B4 21880002 */  addu       $s1, $s0, $zero
    /* 86DB8 801789B8 7400BFAF */  sw         $ra, 0x74($sp)
    /* 86DBC 801789BC 1A3C060C */  jal        func_8018F068
    /* 86DC0 801789C0 2800A3A7 */   sh        $v1, 0x28($sp)
    /* 86DC4 801789C4 21200002 */  addu       $a0, $s0, $zero
    /* 86DC8 801789C8 1A80053C */  lui        $a1, %hi(D_8019ED10)
    /* 86DCC 801789CC 1A3C060C */  jal        func_8018F068
    /* 86DD0 801789D0 10EDA524 */   addiu     $a1, $a1, %lo(D_8019ED10)
    /* 86DD4 801789D4 1000A427 */  addiu      $a0, $sp, 0x10
  .L801789D8:
    /* 86DD8 801789D8 C23D060C */  jal        func_8018F708
    /* 86DDC 801789DC 21282002 */   addu      $a1, $s1, $zero
    /* 86DE0 801789E0 FDFF4010 */  beqz       $v0, .L801789D8
    /* 86DE4 801789E4 1000A427 */   addiu     $a0, $sp, 0x10
    /* 86DE8 801789E8 02000424 */  addiu      $a0, $zero, 0x2
  .L801789EC:
    /* 86DEC 801789EC 1000A527 */  addiu      $a1, $sp, 0x10
    /* 86DF0 801789F0 1400B08F */  lw         $s0, 0x14($sp)
    /* 86DF4 801789F4 21300000 */  addu       $a2, $zero, $zero
    /* 86DF8 801789F8 FF071026 */  addiu      $s0, $s0, 0x7FF
    /* 86DFC 801789FC 1E46060C */  jal        func_80191878
    /* 86E00 80178A00 C2821000 */   srl       $s0, $s0, 11
    /* 86E04 80178A04 21200002 */  addu       $a0, $s0, $zero
    /* 86E08 80178A08 21284002 */  addu       $a1, $s2, $zero
    /* 86E0C 80178A0C 1E49060C */  jal        func_80192478
    /* 86E10 80178A10 80000624 */   addiu     $a2, $zero, 0x80
    /* 86E14 80178A14 8AE20508 */  j          .L80178A28
    /* 86E18 80178A18 01000424 */   addiu     $a0, $zero, 0x1
  .L80178A1C:
    /* 86E1C 80178A1C 3A4A060C */  jal        func_801928E8
    /* 86E20 80178A20 21200000 */   addu      $a0, $zero, $zero
    /* 86E24 80178A24 01000424 */  addiu      $a0, $zero, 0x1
  .L80178A28:
    /* 86E28 80178A28 8549060C */  jal        func_80192614
    /* 86E2C 80178A2C 21280000 */   addu      $a1, $zero, $zero
    /* 86E30 80178A30 FAFF401C */  bgtz       $v0, .L80178A1C
    /* 86E34 80178A34 00000000 */   nop
    /* 86E38 80178A38 ECFF4014 */  bnez       $v0, .L801789EC
    /* 86E3C 80178A3C 02000424 */   addiu     $a0, $zero, 0x2
    /* 86E40 80178A40 7400BF8F */  lw         $ra, 0x74($sp)
    /* 86E44 80178A44 7000B28F */  lw         $s2, 0x70($sp)
    /* 86E48 80178A48 6C00B18F */  lw         $s1, 0x6C($sp)
    /* 86E4C 80178A4C 6800B08F */  lw         $s0, 0x68($sp)
    /* 86E50 80178A50 0800E003 */  jr         $ra
    /* 86E54 80178A54 7800BD27 */   addiu     $sp, $sp, 0x78
endlabel func_80178988
