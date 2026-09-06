nonmatching func_8014D748, 0x38

glabel func_8014D748
    /* 5BB48 8014D748 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 5BB4C 8014D74C 1000BFAF */  sw         $ra, 0x10($sp)
    /* 5BB50 8014D750 59D9030C */  jal        func_800F6564
    /* 5BB54 8014D754 57F40434 */   ori       $a0, $zero, 0xF457
    /* 5BB58 8014D758 77DC030C */  jal        func_800F71DC
    /* 5BB5C 8014D75C 0F000424 */   addiu     $a0, $zero, 0xF
    /* 5BB60 8014D760 34D8010C */  jal        func_800760D0
    /* 5BB64 8014D764 00000000 */   nop
    /* 5BB68 8014D768 DDE3030C */  jal        func_800F8F74
    /* 5BB6C 8014D76C 51F40434 */   ori       $a0, $zero, 0xF451
    /* 5BB70 8014D770 1000BF8F */  lw         $ra, 0x10($sp)
    /* 5BB74 8014D774 00000000 */  nop
    /* 5BB78 8014D778 0800E003 */  jr         $ra
    /* 5BB7C 8014D77C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8014D748
