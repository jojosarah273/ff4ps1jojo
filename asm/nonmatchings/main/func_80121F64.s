nonmatching func_80121F64, 0x28

glabel func_80121F64
    /* 30364 80121F64 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 30368 80121F68 1000BFAF */  sw         $ra, 0x10($sp)
    /* 3036C 80121F6C 0387040C */  jal        func_80121C0C
    /* 30370 80121F70 00000000 */   nop
    /* 30374 80121F74 AF87040C */  jal        func_80121EBC
    /* 30378 80121F78 00000000 */   nop
    /* 3037C 80121F7C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 30380 80121F80 00000000 */  nop
    /* 30384 80121F84 0800E003 */  jr         $ra
    /* 30388 80121F88 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80121F64
