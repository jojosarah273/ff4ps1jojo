nonmatching func_801352F0, 0x40

glabel func_801352F0
    /* 436F0 801352F0 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 436F4 801352F4 1000BFAF */  sw         $ra, 0x10($sp)
    /* 436F8 801352F8 C783040C */  jal        func_80120F1C
    /* 436FC 801352FC 00000000 */   nop
    /* 43700 80135300 40DD030C */  jal        func_800F7500
    /* 43704 80135304 A4010424 */   addiu     $a0, $zero, 0x1A4
    /* 43708 80135308 59D9030C */  jal        func_800F6564
    /* 4370C 8013530C A2160424 */   addiu     $a0, $zero, 0x16A2
    /* 43710 80135310 84DC030C */  jal        func_800F7210
    /* 43714 80135314 A0160424 */   addiu     $a0, $zero, 0x16A0
    /* 43718 80135318 4293040C */  jal        func_80124D08
    /* 4371C 8013531C 00000000 */   nop
    /* 43720 80135320 1000BF8F */  lw         $ra, 0x10($sp)
    /* 43724 80135324 00000000 */  nop
    /* 43728 80135328 0800E003 */  jr         $ra
    /* 4372C 8013532C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_801352F0
