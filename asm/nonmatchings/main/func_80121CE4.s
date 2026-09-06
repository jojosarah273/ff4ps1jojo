nonmatching func_80121CE4, 0x40

glabel func_80121CE4
    /* 300E4 80121CE4 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 300E8 80121CE8 1000BFAF */  sw         $ra, 0x10($sp)
    /* 300EC 80121CEC 8CD9030C */  jal        func_800F6630
    /* 300F0 80121CF0 63000424 */   addiu     $a0, $zero, 0x63
    /* 300F4 80121CF4 50D4030C */  jal        func_800F5140
    /* 300F8 80121CF8 00000000 */   nop
    /* 300FC 80121CFC 93E0030C */  jal        func_800F824C
    /* 30100 80121D00 43000424 */   addiu     $a0, $zero, 0x43
    /* 30104 80121D04 8CD9030C */  jal        func_800F6630
    /* 30108 80121D08 66000424 */   addiu     $a0, $zero, 0x66
    /* 3010C 80121D0C 1387040C */  jal        func_80121C4C
    /* 30110 80121D10 00000000 */   nop
    /* 30114 80121D14 1000BF8F */  lw         $ra, 0x10($sp)
    /* 30118 80121D18 00000000 */  nop
    /* 3011C 80121D1C 0800E003 */  jr         $ra
    /* 30120 80121D20 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80121CE4
