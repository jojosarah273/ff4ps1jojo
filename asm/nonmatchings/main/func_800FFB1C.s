nonmatching func_800FFB1C, 0x40

glabel func_800FFB1C
    /* DF1C 800FFB1C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* DF20 800FFB20 1000BFAF */  sw         $ra, 0x10($sp)
    /* DF24 800FFB24 53D9030C */  jal        func_800F654C
    /* DF28 800FFB28 01000424 */   addiu     $a0, $zero, 0x1
    /* DF2C 800FFB2C 93E0030C */  jal        func_800F824C
    /* DF30 800FFB30 CC000424 */   addiu     $a0, $zero, 0xCC
    /* DF34 800FFB34 C0D7050C */  jal        func_80175F00
    /* DF38 800FFB38 00000000 */   nop
    /* DF3C 800FFB3C 2DD7050C */  jal        func_80175CB4
    /* DF40 800FFB40 00000000 */   nop
    /* DF44 800FFB44 D2D0050C */  jal        func_80174348
    /* DF48 800FFB48 00000000 */   nop
    /* DF4C 800FFB4C 1000BF8F */  lw         $ra, 0x10($sp)
    /* DF50 800FFB50 00000000 */  nop
    /* DF54 800FFB54 0800E003 */  jr         $ra
    /* DF58 800FFB58 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800FFB1C
