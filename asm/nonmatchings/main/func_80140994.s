nonmatching func_80140994, 0x28

glabel func_80140994
    /* 4ED94 80140994 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 4ED98 80140998 1000BFAF */  sw         $ra, 0x10($sp)
    /* 4ED9C 8014099C 53D9030C */  jal        func_800F654C
    /* 4EDA0 801409A0 40000424 */   addiu     $a0, $zero, 0x40
    /* 4EDA4 801409A4 3902050C */  jal        func_801408E4
    /* 4EDA8 801409A8 00000000 */   nop
    /* 4EDAC 801409AC 1000BF8F */  lw         $ra, 0x10($sp)
    /* 4EDB0 801409B0 00000000 */  nop
    /* 4EDB4 801409B4 0800E003 */  jr         $ra
    /* 4EDB8 801409B8 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80140994
