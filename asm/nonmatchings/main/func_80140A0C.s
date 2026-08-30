nonmatching func_80140A0C, 0x50

glabel func_80140A0C
    /* 4EE0C 80140A0C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 4EE10 80140A10 1000BFAF */  sw         $ra, 0x10($sp)
    /* 4EE14 80140A14 9702050C */  jal        func_80140A5C
    /* 4EE18 80140A18 00000000 */   nop
    /* 4EE1C 80140A1C D4D2010C */  jal        func_80074B50
    /* 4EE20 80140A20 00000000 */   nop
    /* 4EE24 80140A24 49FC040C */  jal        func_8013F124
    /* 4EE28 80140A28 00000000 */   nop
    /* 4EE2C 80140A2C 53D9030C */  jal        func_800F654C
    /* 4EE30 80140A30 59000424 */   addiu     $a0, $zero, 0x59
    /* 4EE34 80140A34 4A35050C */  jal        func_8014D528
    /* 4EE38 80140A38 00000000 */   nop
    /* 4EE3C 80140A3C 53D9030C */  jal        func_800F654C
    /* 4EE40 80140A40 02000424 */   addiu     $a0, $zero, 0x2
    /* 4EE44 80140A44 3868020C */  jal        func_8009A0E0
    /* 4EE48 80140A48 00000000 */   nop
    /* 4EE4C 80140A4C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 4EE50 80140A50 00000000 */  nop
    /* 4EE54 80140A54 0800E003 */  jr         $ra
    /* 4EE58 80140A58 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80140A0C
