nonmatching func_80148C8C, 0x20

glabel func_80148C8C
    /* 5708C 80148C8C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 57090 80148C90 1000BFAF */  sw         $ra, 0x10($sp)
    /* 57094 80148C94 2B23050C */  jal        func_80148CAC
    /* 57098 80148C98 00000000 */   nop
    /* 5709C 80148C9C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 570A0 80148CA0 00000000 */  nop
    /* 570A4 80148CA4 0800E003 */  jr         $ra
    /* 570A8 80148CA8 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80148C8C
