nonmatching func_801771AC, 0x28

glabel func_801771AC
    /* 855AC 801771AC E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 855B0 801771B0 1000BFAF */  sw         $ra, 0x10($sp)
    /* 855B4 801771B4 8CD9030C */  jal        func_800F6630
    /* 855B8 801771B8 E8000424 */   addiu     $a0, $zero, 0xE8
    /* 855BC 801771BC 75DC050C */  jal        func_801771D4
    /* 855C0 801771C0 00000000 */   nop
    /* 855C4 801771C4 1000BF8F */  lw         $ra, 0x10($sp)
    /* 855C8 801771C8 00000000 */  nop
    /* 855CC 801771CC 0800E003 */  jr         $ra
    /* 855D0 801771D0 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_801771AC
