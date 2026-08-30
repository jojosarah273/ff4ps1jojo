nonmatching func_801408BC, 0x28

glabel func_801408BC
    /* 4ECBC 801408BC E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 4ECC0 801408C0 1000BFAF */  sw         $ra, 0x10($sp)
    /* 4ECC4 801408C4 53D9030C */  jal        func_800F654C
    /* 4ECC8 801408C8 A0000424 */   addiu     $a0, $zero, 0xA0
    /* 4ECCC 801408CC 3902050C */  jal        func_801408E4
    /* 4ECD0 801408D0 00000000 */   nop
    /* 4ECD4 801408D4 1000BF8F */  lw         $ra, 0x10($sp)
    /* 4ECD8 801408D8 00000000 */  nop
    /* 4ECDC 801408DC 0800E003 */  jr         $ra
    /* 4ECE0 801408E0 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_801408BC
