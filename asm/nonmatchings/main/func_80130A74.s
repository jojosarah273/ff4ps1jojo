nonmatching func_80130A74, 0x30

glabel func_80130A74
    /* 3EE74 80130A74 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 3EE78 80130A78 1000BFAF */  sw         $ra, 0x10($sp)
    /* 3EE7C 80130A7C 80E4030C */  jal        func_800F9200
    /* 3EE80 80130A80 00000000 */   nop
    /* 3EE84 80130A84 40DD030C */  jal        func_800F7500
    /* 3EE88 80130A88 05000424 */   addiu     $a0, $zero, 0x5
    /* 3EE8C 80130A8C 89C2040C */  jal        func_80130A24
    /* 3EE90 80130A90 00000000 */   nop
    /* 3EE94 80130A94 1000BF8F */  lw         $ra, 0x10($sp)
    /* 3EE98 80130A98 00000000 */  nop
    /* 3EE9C 80130A9C 0800E003 */  jr         $ra
    /* 3EEA0 80130AA0 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80130A74
