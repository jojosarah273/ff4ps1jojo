nonmatching func_8015329C, 0x38

glabel func_8015329C
    /* 6169C 8015329C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 616A0 801532A0 1000BFAF */  sw         $ra, 0x10($sp)
    /* 616A4 801532A4 53D9030C */  jal        func_800F654C
    /* 616A8 801532A8 F8000424 */   addiu     $a0, $zero, 0xF8
    /* 616AC 801532AC 62E0030C */  jal        func_800F8188
    /* 616B0 801532B0 C6330424 */   addiu     $a0, $zero, 0x33C6
    /* 616B4 801532B4 53D9030C */  jal        func_800F654C
    /* 616B8 801532B8 03000424 */   addiu     $a0, $zero, 0x3
    /* 616BC 801532BC 62E0030C */  jal        func_800F8188
    /* 616C0 801532C0 C7330424 */   addiu     $a0, $zero, 0x33C7
    /* 616C4 801532C4 1000BF8F */  lw         $ra, 0x10($sp)
    /* 616C8 801532C8 00000000 */  nop
    /* 616CC 801532CC 0800E003 */  jr         $ra
    /* 616D0 801532D0 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8015329C
