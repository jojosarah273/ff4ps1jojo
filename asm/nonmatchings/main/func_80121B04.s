nonmatching func_80121B04, 0x58

glabel func_80121B04
    /* 2FF04 80121B04 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 2FF08 80121B08 1000BFAF */  sw         $ra, 0x10($sp)
  .L80121B0C:
    /* 2FF0C 80121B0C 8CD9030C */  jal        func_800F6630
    /* 2FF10 80121B10 1F000424 */   addiu     $a0, $zero, 0x1F
    /* 2FF14 80121B14 DAE1030C */  jal        func_800F8768
    /* 2FF18 80121B18 21200000 */   addu      $a0, $zero, $zero
    /* 2FF1C 80121B1C B188040C */  jal        func_801222C4
    /* 2FF20 80121B20 00000000 */   nop
    /* 2FF24 80121B24 68D7030C */  jal        func_800F5DA0
    /* 2FF28 80121B28 1D000424 */   addiu     $a0, $zero, 0x1D
    /* 2FF2C 80121B2C E3D6030C */  jal        func_800F5B8C
    /* 2FF30 80121B30 02020424 */   addiu     $a0, $zero, 0x202
    /* 2FF34 80121B34 F5FF4014 */  bnez       $v0, .L80121B0C
    /* 2FF38 80121B38 00000000 */   nop
    /* 2FF3C 80121B3C 8CD9030C */  jal        func_800F6630
    /* 2FF40 80121B40 20000424 */   addiu     $a0, $zero, 0x20
    /* 2FF44 80121B44 DAE1030C */  jal        func_800F8768
    /* 2FF48 80121B48 21200000 */   addu      $a0, $zero, $zero
    /* 2FF4C 80121B4C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 2FF50 80121B50 00000000 */  nop
    /* 2FF54 80121B54 0800E003 */  jr         $ra
    /* 2FF58 80121B58 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80121B04
