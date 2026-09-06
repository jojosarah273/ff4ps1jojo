nonmatching func_8014AA30, 0x38

glabel func_8014AA30
    /* 58E30 8014AA30 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 58E34 8014AA34 1000BFAF */  sw         $ra, 0x10($sp)
    /* 58E38 8014AA38 6C2A050C */  jal        func_8014A9B0
    /* 58E3C 8014AA3C 00000000 */   nop
    /* 58E40 8014AA40 6D2E050C */  jal        func_8014B9B4
    /* 58E44 8014AA44 00000000 */   nop
    /* 58E48 8014AA48 6C2A050C */  jal        func_8014A9B0
    /* 58E4C 8014AA4C 00000000 */   nop
    /* 58E50 8014AA50 8D2E050C */  jal        func_8014BA34
    /* 58E54 8014AA54 00000000 */   nop
    /* 58E58 8014AA58 1000BF8F */  lw         $ra, 0x10($sp)
    /* 58E5C 8014AA5C 00000000 */  nop
    /* 58E60 8014AA60 0800E003 */  jr         $ra
    /* 58E64 8014AA64 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8014AA30
