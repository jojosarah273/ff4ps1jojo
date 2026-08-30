nonmatching func_80148DE8, 0x20

glabel func_80148DE8
    /* 571E8 80148DE8 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 571EC 80148DEC 1000BFAF */  sw         $ra, 0x10($sp)
    /* 571F0 80148DF0 8223050C */  jal        func_80148E08
    /* 571F4 80148DF4 00000000 */   nop
    /* 571F8 80148DF8 1000BF8F */  lw         $ra, 0x10($sp)
    /* 571FC 80148DFC 00000000 */  nop
    /* 57200 80148E00 0800E003 */  jr         $ra
    /* 57204 80148E04 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80148DE8
