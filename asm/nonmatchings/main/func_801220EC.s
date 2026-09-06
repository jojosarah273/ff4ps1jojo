nonmatching func_801220EC, 0x28

glabel func_801220EC
    /* 304EC 801220EC E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 304F0 801220F0 1000BFAF */  sw         $ra, 0x10($sp)
    /* 304F4 801220F4 0387040C */  jal        func_80121C0C
    /* 304F8 801220F8 00000000 */   nop
    /* 304FC 801220FC 1588040C */  jal        func_80122054
    /* 30500 80122100 00000000 */   nop
    /* 30504 80122104 1000BF8F */  lw         $ra, 0x10($sp)
    /* 30508 80122108 00000000 */  nop
    /* 3050C 8012210C 0800E003 */  jr         $ra
    /* 30510 80122110 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_801220EC
