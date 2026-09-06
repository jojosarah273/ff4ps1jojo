nonmatching func_80121E6C, 0x28

glabel func_80121E6C
    /* 3026C 80121E6C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 30270 80121E70 1000BFAF */  sw         $ra, 0x10($sp)
    /* 30274 80121E74 0387040C */  jal        func_80121C0C
    /* 30278 80121E78 00000000 */   nop
    /* 3027C 80121E7C 6387040C */  jal        func_80121D8C
    /* 30280 80121E80 00000000 */   nop
    /* 30284 80121E84 1000BF8F */  lw         $ra, 0x10($sp)
    /* 30288 80121E88 00000000 */  nop
    /* 3028C 80121E8C 0800E003 */  jr         $ra
    /* 30290 80121E90 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80121E6C
