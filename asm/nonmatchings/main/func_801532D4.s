nonmatching func_801532D4, 0x38

glabel func_801532D4
    /* 616D4 801532D4 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 616D8 801532D8 1000BFAF */  sw         $ra, 0x10($sp)
    /* 616DC 801532DC 53D9030C */  jal        func_800F654C
    /* 616E0 801532E0 F8000424 */   addiu     $a0, $zero, 0xF8
    /* 616E4 801532E4 62E0030C */  jal        func_800F8188
    /* 616E8 801532E8 C8330424 */   addiu     $a0, $zero, 0x33C8
    /* 616EC 801532EC 53D9030C */  jal        func_800F654C
    /* 616F0 801532F0 03000424 */   addiu     $a0, $zero, 0x3
    /* 616F4 801532F4 62E0030C */  jal        func_800F8188
    /* 616F8 801532F8 C9330424 */   addiu     $a0, $zero, 0x33C9
    /* 616FC 801532FC 1000BF8F */  lw         $ra, 0x10($sp)
    /* 61700 80153300 00000000 */  nop
    /* 61704 80153304 0800E003 */  jr         $ra
    /* 61708 80153308 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_801532D4
