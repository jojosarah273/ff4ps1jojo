nonmatching func_800FFADC, 0x40

glabel func_800FFADC
    /* DEDC 800FFADC E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* DEE0 800FFAE0 1000BFAF */  sw         $ra, 0x10($sp)
    /* DEE4 800FFAE4 53D9030C */  jal        func_800F654C
    /* DEE8 800FFAE8 01000424 */   addiu     $a0, $zero, 0x1
    /* DEEC 800FFAEC 93E0030C */  jal        func_800F824C
    /* DEF0 800FFAF0 CC000424 */   addiu     $a0, $zero, 0xCC
    /* DEF4 800FFAF4 C0D7050C */  jal        func_80175F00
    /* DEF8 800FFAF8 00000000 */   nop
    /* DEFC 800FFAFC 2DD7050C */  jal        func_80175CB4
    /* DF00 800FFB00 00000000 */   nop
    /* DF04 800FFB04 5EFE030C */  jal        func_800FF978
    /* DF08 800FFB08 00000000 */   nop
    /* DF0C 800FFB0C 1000BF8F */  lw         $ra, 0x10($sp)
    /* DF10 800FFB10 00000000 */  nop
    /* DF14 800FFB14 0800E003 */  jr         $ra
    /* DF18 800FFB18 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800FFADC
