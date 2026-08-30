nonmatching func_801606AC, 0x28

glabel func_801606AC
    /* 6EAAC 801606AC E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 6EAB0 801606B0 1000BFAF */  sw         $ra, 0x10($sp)
    /* 6EAB4 801606B4 53D9030C */  jal        func_800F654C
    /* 6EAB8 801606B8 04000424 */   addiu     $a0, $zero, 0x4
    /* 6EABC 801606BC 62E0030C */  jal        func_800F8188
    /* 6EAC0 801606C0 A8000424 */   addiu     $a0, $zero, 0xA8
    /* 6EAC4 801606C4 1000BF8F */  lw         $ra, 0x10($sp)
    /* 6EAC8 801606C8 00000000 */  nop
    /* 6EACC 801606CC 0800E003 */  jr         $ra
    /* 6EAD0 801606D0 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_801606AC
