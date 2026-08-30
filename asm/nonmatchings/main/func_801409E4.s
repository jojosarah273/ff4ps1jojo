nonmatching func_801409E4, 0x28

glabel func_801409E4
    /* 4EDE4 801409E4 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 4EDE8 801409E8 1000BFAF */  sw         $ra, 0x10($sp)
    /* 4EDEC 801409EC 53D9030C */  jal        func_800F654C
    /* 4EDF0 801409F0 E0000424 */   addiu     $a0, $zero, 0xE0
    /* 4EDF4 801409F4 3902050C */  jal        func_801408E4
    /* 4EDF8 801409F8 00000000 */   nop
    /* 4EDFC 801409FC 1000BF8F */  lw         $ra, 0x10($sp)
    /* 4EE00 80140A00 00000000 */  nop
    /* 4EE04 80140A04 0800E003 */  jr         $ra
    /* 4EE08 80140A08 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_801409E4
