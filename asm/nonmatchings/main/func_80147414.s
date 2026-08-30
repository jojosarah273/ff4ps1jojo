nonmatching func_80147414, 0x20

glabel func_80147414
    /* 55814 80147414 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 55818 80147418 1000BFAF */  sw         $ra, 0x10($sp)
    /* 5581C 8014741C 0D1D050C */  jal        func_80147434
    /* 55820 80147420 00000000 */   nop
    /* 55824 80147424 1000BF8F */  lw         $ra, 0x10($sp)
    /* 55828 80147428 00000000 */  nop
    /* 5582C 8014742C 0800E003 */  jr         $ra
    /* 55830 80147430 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80147414
