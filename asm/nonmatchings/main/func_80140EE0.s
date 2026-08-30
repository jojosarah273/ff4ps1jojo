nonmatching func_80140EE0, 0x28

glabel func_80140EE0
    /* 4F2E0 80140EE0 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 4F2E4 80140EE4 1000BFAF */  sw         $ra, 0x10($sp)
    /* 4F2E8 80140EE8 90D8030C */  jal        func_800F6240
    /* 4F2EC 80140EEC 73F40434 */   ori       $a0, $zero, 0xF473
    /* 4F2F0 80140EF0 9E03050C */  jal        func_80140E78
    /* 4F2F4 80140EF4 00000000 */   nop
    /* 4F2F8 80140EF8 1000BF8F */  lw         $ra, 0x10($sp)
    /* 4F2FC 80140EFC 00000000 */  nop
    /* 4F300 80140F00 0800E003 */  jr         $ra
    /* 4F304 80140F04 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80140EE0
