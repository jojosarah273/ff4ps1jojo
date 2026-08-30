nonmatching func_801409BC, 0x28

glabel func_801409BC
    /* 4EDBC 801409BC E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 4EDC0 801409C0 1000BFAF */  sw         $ra, 0x10($sp)
    /* 4EDC4 801409C4 53D9030C */  jal        func_800F654C
    /* 4EDC8 801409C8 80000424 */   addiu     $a0, $zero, 0x80
    /* 4EDCC 801409CC 3902050C */  jal        func_801408E4
    /* 4EDD0 801409D0 00000000 */   nop
    /* 4EDD4 801409D4 1000BF8F */  lw         $ra, 0x10($sp)
    /* 4EDD8 801409D8 00000000 */  nop
    /* 4EDDC 801409DC 0800E003 */  jr         $ra
    /* 4EDE0 801409E0 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_801409BC
