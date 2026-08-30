nonmatching func_8014ED88, 0x48

glabel func_8014ED88
    /* 5D188 8014ED88 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 5D18C 8014ED8C 1000BFAF */  sw         $ra, 0x10($sp)
    /* 5D190 8014ED90 EEE3030C */  jal        func_800F8FB8
    /* 5D194 8014ED94 06000424 */   addiu     $a0, $zero, 0x6
    /* 5D198 8014ED98 C7E5030C */  jal        func_800F971C
    /* 5D19C 8014ED9C 00000000 */   nop
    /* 5D1A0 8014EDA0 20D5030C */  jal        func_800F5480
    /* 5D1A4 8014EDA4 00000000 */   nop
    /* 5D1A8 8014EDA8 0FCF030C */  jal        func_800F3C3C
    /* 5D1AC 8014EDAC 08000424 */   addiu     $a0, $zero, 0x8
    /* 5D1B0 8014EDB0 D2DF030C */  jal        func_800F7F48
    /* 5D1B4 8014EDB4 21204000 */   addu      $a0, $v0, $zero
    /* 5D1B8 8014EDB8 93E0030C */  jal        func_800F824C
    /* 5D1BC 8014EDBC 07000424 */   addiu     $a0, $zero, 0x7
    /* 5D1C0 8014EDC0 1000BF8F */  lw         $ra, 0x10($sp)
    /* 5D1C4 8014EDC4 00000000 */  nop
    /* 5D1C8 8014EDC8 0800E003 */  jr         $ra
    /* 5D1CC 8014EDCC 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8014ED88
