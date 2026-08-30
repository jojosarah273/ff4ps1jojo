nonmatching func_80148C6C, 0x20

glabel func_80148C6C
    /* 5706C 80148C6C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 57070 80148C70 1000BFAF */  sw         $ra, 0x10($sp)
    /* 57074 80148C74 4123050C */  jal        func_80148D04
    /* 57078 80148C78 00000000 */   nop
    /* 5707C 80148C7C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 57080 80148C80 00000000 */  nop
    /* 57084 80148C84 0800E003 */  jr         $ra
    /* 57088 80148C88 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80148C6C
