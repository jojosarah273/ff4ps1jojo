nonmatching func_80121A74, 0x28

glabel func_80121A74
    /* 2FE74 80121A74 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 2FE78 80121A78 1000BFAF */  sw         $ra, 0x10($sp)
    /* 2FE7C 80121A7C 0387040C */  jal        func_80121C0C
    /* 2FE80 80121A80 00000000 */   nop
    /* 2FE84 80121A84 A786040C */  jal        func_80121A9C
    /* 2FE88 80121A88 00000000 */   nop
    /* 2FE8C 80121A8C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 2FE90 80121A90 00000000 */  nop
    /* 2FE94 80121A94 0800E003 */  jr         $ra
    /* 2FE98 80121A98 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80121A74
