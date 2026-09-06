nonmatching func_801407EC, 0x28

glabel func_801407EC
    /* 4EBEC 801407EC E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 4EBF0 801407F0 1000BFAF */  sw         $ra, 0x10($sp)
    /* 4EBF4 801407F4 53D9030C */  jal        func_800F654C
    /* 4EBF8 801407F8 20000424 */   addiu     $a0, $zero, 0x20
    /* 4EBFC 801407FC 0502050C */  jal        func_80140814
    /* 4EC00 80140800 00000000 */   nop
    /* 4EC04 80140804 1000BF8F */  lw         $ra, 0x10($sp)
    /* 4EC08 80140808 00000000 */  nop
    /* 4EC0C 8014080C 0800E003 */  jr         $ra
    /* 4EC10 80140810 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_801407EC
