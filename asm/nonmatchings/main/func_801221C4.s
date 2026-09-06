nonmatching func_801221C4, 0x28

glabel func_801221C4
    /* 305C4 801221C4 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 305C8 801221C8 1000BFAF */  sw         $ra, 0x10($sp)
    /* 305CC 801221CC 62E0030C */  jal        func_800F8188
    /* 305D0 801221D0 001E0424 */   addiu     $a0, $zero, 0x1E00
    /* 305D4 801221D4 4AA4050C */  jal        func_80169128
    /* 305D8 801221D8 00000000 */   nop
    /* 305DC 801221DC 1000BF8F */  lw         $ra, 0x10($sp)
    /* 305E0 801221E0 00000000 */  nop
    /* 305E4 801221E4 0800E003 */  jr         $ra
    /* 305E8 801221E8 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_801221C4
