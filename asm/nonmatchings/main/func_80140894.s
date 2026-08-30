nonmatching func_80140894, 0x28

glabel func_80140894
    /* 4EC94 80140894 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 4EC98 80140898 1000BFAF */  sw         $ra, 0x10($sp)
    /* 4EC9C 8014089C 53D9030C */  jal        func_800F654C
    /* 4ECA0 801408A0 E0000424 */   addiu     $a0, $zero, 0xE0
    /* 4ECA4 801408A4 0502050C */  jal        func_80140814
    /* 4ECA8 801408A8 00000000 */   nop
    /* 4ECAC 801408AC 1000BF8F */  lw         $ra, 0x10($sp)
    /* 4ECB0 801408B0 00000000 */  nop
    /* 4ECB4 801408B4 0800E003 */  jr         $ra
    /* 4ECB8 801408B8 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80140894
