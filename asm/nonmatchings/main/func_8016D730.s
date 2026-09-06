nonmatching func_8016D730, 0x38

glabel func_8016D730
    /* 7BB30 8016D730 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 7BB34 8016D734 1000BFAF */  sw         $ra, 0x10($sp)
    /* 7BB38 8016D738 BBE0030C */  jal        func_800F82EC
    /* 7BB3C 8016D73C 3C000424 */   addiu     $a0, $zero, 0x3C
    /* 7BB40 8016D740 53D9030C */  jal        func_800F654C
    /* 7BB44 8016D744 FF000424 */   addiu     $a0, $zero, 0xFF
    /* 7BB48 8016D748 BBE0030C */  jal        func_800F82EC
    /* 7BB4C 8016D74C 39000424 */   addiu     $a0, $zero, 0x39
    /* 7BB50 8016D750 EFD8030C */  jal        func_800F63BC
    /* 7BB54 8016D754 00000000 */   nop
    /* 7BB58 8016D758 1000BF8F */  lw         $ra, 0x10($sp)
    /* 7BB5C 8016D75C 00000000 */  nop
    /* 7BB60 8016D760 0800E003 */  jr         $ra
    /* 7BB64 8016D764 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8016D730
