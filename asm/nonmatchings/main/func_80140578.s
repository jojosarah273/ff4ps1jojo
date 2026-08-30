nonmatching func_80140578, 0x20

glabel func_80140578
    /* 4E978 80140578 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 4E97C 8014057C 1000BFAF */  sw         $ra, 0x10($sp)
    /* 4E980 80140580 6601050C */  jal        func_80140598
    /* 4E984 80140584 00000000 */   nop
    /* 4E988 80140588 1000BF8F */  lw         $ra, 0x10($sp)
    /* 4E98C 8014058C 00000000 */  nop
    /* 4E990 80140590 0800E003 */  jr         $ra
    /* 4E994 80140594 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80140578
