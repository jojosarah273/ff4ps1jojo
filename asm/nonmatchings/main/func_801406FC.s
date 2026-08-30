nonmatching func_801406FC, 0x20

glabel func_801406FC
    /* 4EAFC 801406FC E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 4EB00 80140700 1000BFAF */  sw         $ra, 0x10($sp)
    /* 4EB04 80140704 699D050C */  jal        func_801675A4
    /* 4EB08 80140708 00000000 */   nop
    /* 4EB0C 8014070C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 4EB10 80140710 00000000 */  nop
    /* 4EB14 80140714 0800E003 */  jr         $ra
    /* 4EB18 80140718 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_801406FC
