nonmatching func_80150C38, 0x20

glabel func_80150C38
    /* 5F038 80150C38 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 5F03C 80150C3C 1000BFAF */  sw         $ra, 0x10($sp)
    /* 5F040 80150C40 55C0010C */  jal        func_80070154
    /* 5F044 80150C44 00000000 */   nop
    /* 5F048 80150C48 1000BF8F */  lw         $ra, 0x10($sp)
    /* 5F04C 80150C4C 00000000 */  nop
    /* 5F050 80150C50 0800E003 */  jr         $ra
    /* 5F054 80150C54 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80150C38
