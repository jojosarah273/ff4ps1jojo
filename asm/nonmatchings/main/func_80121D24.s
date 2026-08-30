nonmatching func_80121D24, 0x40

glabel func_80121D24
    /* 30124 80121D24 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 30128 80121D28 1000BFAF */  sw         $ra, 0x10($sp)
    /* 3012C 80121D2C 8CD9030C */  jal        func_800F6630
    /* 30130 80121D30 65000424 */   addiu     $a0, $zero, 0x65
    /* 30134 80121D34 50D4030C */  jal        func_800F5140
    /* 30138 80121D38 00000000 */   nop
    /* 3013C 80121D3C 93E0030C */  jal        func_800F824C
    /* 30140 80121D40 43000424 */   addiu     $a0, $zero, 0x43
    /* 30144 80121D44 8CD9030C */  jal        func_800F6630
    /* 30148 80121D48 64000424 */   addiu     $a0, $zero, 0x64
    /* 3014C 80121D4C 1387040C */  jal        func_80121C4C
    /* 30150 80121D50 00000000 */   nop
    /* 30154 80121D54 1000BF8F */  lw         $ra, 0x10($sp)
    /* 30158 80121D58 00000000 */  nop
    /* 3015C 80121D5C 0800E003 */  jr         $ra
    /* 30160 80121D60 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80121D24
