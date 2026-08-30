nonmatching func_80143CCC, 0x48

glabel func_80143CCC
    /* 520CC 80143CCC E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 520D0 80143CD0 1000BFAF */  sw         $ra, 0x10($sp)
    /* 520D4 80143CD4 9E14050C */  jal        func_80145278
    /* 520D8 80143CD8 00000000 */   nop
    /* 520DC 80143CDC 53D9030C */  jal        func_800F654C
    /* 520E0 80143CE0 08000424 */   addiu     $a0, $zero, 0x8
    /* 520E4 80143CE4 62E0030C */  jal        func_800F8188
    /* 520E8 80143CE8 26F30434 */   ori       $a0, $zero, 0xF326
    /* 520EC 80143CEC 53D9030C */  jal        func_800F654C
    /* 520F0 80143CF0 07000424 */   addiu     $a0, $zero, 0x7
    /* 520F4 80143CF4 2229050C */  jal        func_8014A488
    /* 520F8 80143CF8 00000000 */   nop
    /* 520FC 80143CFC B214050C */  jal        func_801452C8
    /* 52100 80143D00 00000000 */   nop
    /* 52104 80143D04 1000BF8F */  lw         $ra, 0x10($sp)
    /* 52108 80143D08 00000000 */  nop
    /* 5210C 80143D0C 0800E003 */  jr         $ra
    /* 52110 80143D10 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80143CCC
