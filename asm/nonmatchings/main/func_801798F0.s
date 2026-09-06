nonmatching func_801798F0, 0x40

glabel func_801798F0
    /* 87CF0 801798F0 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 87CF4 801798F4 1000BFAF */  sw         $ra, 0x10($sp)
    /* 87CF8 801798F8 151F060C */  jal        func_80187C54
    /* 87CFC 801798FC 00000000 */   nop
    /* 87D00 80179900 C01E060C */  jal        func_80187B00
    /* 87D04 80179904 00000000 */   nop
    /* 87D08 80179908 1A80043C */  lui        $a0, %hi(D_8019EF08)
    /* 87D0C 8017990C 08EF8484 */  lh         $a0, %lo(D_8019EF08)($a0)
    /* 87D10 80179910 A426060C */  jal        func_80189A90
    /* 87D14 80179914 00000000 */   nop
    /* 87D18 80179918 522B060C */  jal        func_8018AD48
    /* 87D1C 8017991C 00000000 */   nop
    /* 87D20 80179920 1000BF8F */  lw         $ra, 0x10($sp)
    /* 87D24 80179924 00000000 */  nop
    /* 87D28 80179928 0800E003 */  jr         $ra
    /* 87D2C 8017992C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_801798F0
