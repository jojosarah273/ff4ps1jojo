nonmatching func_801222A4, 0x20

glabel func_801222A4
    /* 306A4 801222A4 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 306A8 801222A8 1000BFAF */  sw         $ra, 0x10($sp)
    /* 306AC 801222AC 8FBA050C */  jal        func_8016EA3C
    /* 306B0 801222B0 00000000 */   nop
    /* 306B4 801222B4 1000BF8F */  lw         $ra, 0x10($sp)
    /* 306B8 801222B8 00000000 */  nop
    /* 306BC 801222BC 0800E003 */  jr         $ra
    /* 306C0 801222C0 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_801222A4
