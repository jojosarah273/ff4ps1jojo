nonmatching func_80177DAC, 0x20

glabel func_80177DAC
    /* 861AC 80177DAC E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 861B0 80177DB0 1000BFAF */  sw         $ra, 0x10($sp)
    /* 861B4 80177DB4 79DE050C */  jal        func_801779E4
    /* 861B8 80177DB8 01000424 */   addiu     $a0, $zero, 0x1
    /* 861BC 80177DBC 1000BF8F */  lw         $ra, 0x10($sp)
    /* 861C0 80177DC0 00000000 */  nop
    /* 861C4 80177DC4 0800E003 */  jr         $ra
    /* 861C8 80177DC8 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80177DAC
