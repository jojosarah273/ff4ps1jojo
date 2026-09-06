nonmatching func_80141FC4, 0x28

glabel func_80141FC4
    /* 503C4 80141FC4 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 503C8 80141FC8 1000BFAF */  sw         $ra, 0x10($sp)
    /* 503CC 80141FCC 9E14050C */  jal        func_80145278
    /* 503D0 80141FD0 00000000 */   nop
    /* 503D4 80141FD4 7007050C */  jal        func_80141DC0
    /* 503D8 80141FD8 00000000 */   nop
    /* 503DC 80141FDC 1000BF8F */  lw         $ra, 0x10($sp)
    /* 503E0 80141FE0 00000000 */  nop
    /* 503E4 80141FE4 0800E003 */  jr         $ra
    /* 503E8 80141FE8 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80141FC4
