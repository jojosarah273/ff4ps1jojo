nonmatching func_8014D500, 0x28

glabel func_8014D500
    /* 5B900 8014D500 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 5B904 8014D504 1000BFAF */  sw         $ra, 0x10($sp)
    /* 5B908 8014D508 A533050C */  jal        func_8014CE94
    /* 5B90C 8014D50C 00000000 */   nop
    /* 5B910 8014D510 C533050C */  jal        func_8014CF14
    /* 5B914 8014D514 00000000 */   nop
    /* 5B918 8014D518 1000BF8F */  lw         $ra, 0x10($sp)
    /* 5B91C 8014D51C 00000000 */  nop
    /* 5B920 8014D520 0800E003 */  jr         $ra
    /* 5B924 8014D524 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8014D500
