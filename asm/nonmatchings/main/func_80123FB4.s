nonmatching func_80123FB4, 0x38

glabel func_80123FB4
    /* 323B4 80123FB4 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 323B8 80123FB8 1000BFAF */  sw         $ra, 0x10($sp)
    /* 323BC 80123FBC 5690040C */  jal        func_80124158
    /* 323C0 80123FC0 00000000 */   nop
    /* 323C4 80123FC4 3490040C */  jal        func_801240D0
    /* 323C8 80123FC8 00000000 */   nop
    /* 323CC 80123FCC 4C90040C */  jal        func_80124130
    /* 323D0 80123FD0 00000000 */   nop
    /* 323D4 80123FD4 2A90040C */  jal        func_801240A8
    /* 323D8 80123FD8 00000000 */   nop
    /* 323DC 80123FDC 1000BF8F */  lw         $ra, 0x10($sp)
    /* 323E0 80123FE0 00000000 */  nop
    /* 323E4 80123FE4 0800E003 */  jr         $ra
    /* 323E8 80123FE8 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80123FB4
