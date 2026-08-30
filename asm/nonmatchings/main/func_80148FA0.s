nonmatching func_80148FA0, 0x20

glabel func_80148FA0
    /* 573A0 80148FA0 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 573A4 80148FA4 1000BFAF */  sw         $ra, 0x10($sp)
    /* 573A8 80148FA8 F023050C */  jal        func_80148FC0
    /* 573AC 80148FAC 00000000 */   nop
    /* 573B0 80148FB0 1000BF8F */  lw         $ra, 0x10($sp)
    /* 573B4 80148FB4 00000000 */  nop
    /* 573B8 80148FB8 0800E003 */  jr         $ra
    /* 573BC 80148FBC 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80148FA0
