nonmatching func_80148E60, 0x20

glabel func_80148E60
    /* 57260 80148E60 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 57264 80148E64 1000BFAF */  sw         $ra, 0x10($sp)
    /* 57268 80148E68 A023050C */  jal        func_80148E80
    /* 5726C 80148E6C 00000000 */   nop
    /* 57270 80148E70 1000BF8F */  lw         $ra, 0x10($sp)
    /* 57274 80148E74 00000000 */  nop
    /* 57278 80148E78 0800E003 */  jr         $ra
    /* 5727C 80148E7C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80148E60
