nonmatching func_801316E0, 0x80

glabel func_801316E0
    /* 3FAE0 801316E0 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 3FAE4 801316E4 1000BFAF */  sw         $ra, 0x10($sp)
    /* 3FAE8 801316E8 59D9030C */  jal        func_800F6564
    /* 3FAEC 801316EC BB1B0424 */   addiu     $a0, $zero, 0x1BBB
    /* 3FAF0 801316F0 0DD9030C */  jal        func_800F6434
    /* 3FAF4 801316F4 02000424 */   addiu     $a0, $zero, 0x2
    /* 3FAF8 801316F8 09004014 */  bnez       $v0, .L80131720
    /* 3FAFC 801316FC 0F00043C */   lui       $a0, (0xF9807 >> 16)
    /* 3FB00 80131700 72D9030C */  jal        func_800F65C8
    /* 3FB04 80131704 07988434 */   ori       $a0, $a0, (0xF9807 & 0xFFFF)
    /* 3FB08 80131708 62E0030C */  jal        func_800F8188
    /* 3FB0C 8013170C 911B0424 */   addiu     $a0, $zero, 0x1B91
    /* 3FB10 80131710 FCC5040C */  jal        func_801317F0
    /* 3FB14 80131714 00000000 */   nop
    /* 3FB18 80131718 D4C50408 */  j          .L80131750
    /* 3FB1C 8013171C 00000000 */   nop
  .L80131720:
    /* 3FB20 80131720 53D9030C */  jal        func_800F654C
    /* 3FB24 80131724 21200000 */   addu      $a0, $zero, $zero
  .L80131728:
    /* 3FB28 80131728 D8C5040C */  jal        func_80131760
    /* 3FB2C 8013172C 00000000 */   nop
    /* 3FB30 80131730 7AD8030C */  jal        func_800F61E8
    /* 3FB34 80131734 00000000 */   nop
    /* 3FB38 80131738 5DD5030C */  jal        func_800F5574
    /* 3FB3C 8013173C 05000424 */   addiu     $a0, $zero, 0x5
    /* 3FB40 80131740 F5D4030C */  jal        func_800F53D4
    /* 3FB44 80131744 00000000 */   nop
    /* 3FB48 80131748 F7FF4010 */  beqz       $v0, .L80131728
    /* 3FB4C 8013174C 00000000 */   nop
  .L80131750:
    /* 3FB50 80131750 1000BF8F */  lw         $ra, 0x10($sp)
    /* 3FB54 80131754 00000000 */  nop
    /* 3FB58 80131758 0800E003 */  jr         $ra
    /* 3FB5C 8013175C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_801316E0
