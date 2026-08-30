nonmatching func_801321B4, 0x34

glabel func_801321B4
    /* 405B4 801321B4 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 405B8 801321B8 1000BFAF */  sw         $ra, 0x10($sp)
    /* 405BC 801321BC 9CDC030C */  jal        func_800F7270
    /* 405C0 801321C0 43000424 */   addiu     $a0, $zero, 0x43
    /* 405C4 801321C4 1400043C */  lui        $a0, (0x14FF9D >> 16)
    /* 405C8 801321C8 1ADB030C */  jal        func_800F6C68
    /* 405CC 801321CC 9DFF8434 */   ori       $a0, $a0, (0x14FF9D & 0xFFFF)
    /* 405D0 801321D0 AB93040C */  jal        func_80124EAC
    /* 405D4 801321D4 00000000 */   nop
    /* 405D8 801321D8 1000BF8F */  lw         $ra, 0x10($sp)
    /* 405DC 801321DC 00000000 */  nop
    /* 405E0 801321E0 0800E003 */  jr         $ra
    /* 405E4 801321E4 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_801321B4
