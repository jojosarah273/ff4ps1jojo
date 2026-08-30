nonmatching func_801266A0, 0x28

glabel func_801266A0
    /* 34AA0 801266A0 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 34AA4 801266A4 1000BFAF */  sw         $ra, 0x10($sp)
    /* 34AA8 801266A8 BC99040C */  jal        func_801266F0
    /* 34AAC 801266AC 00000000 */   nop
    /* 34AB0 801266B0 9FBA050C */  jal        func_8016EA7C
    /* 34AB4 801266B4 00000000 */   nop
    /* 34AB8 801266B8 1000BF8F */  lw         $ra, 0x10($sp)
    /* 34ABC 801266BC 00000000 */  nop
    /* 34AC0 801266C0 0800E003 */  jr         $ra
    /* 34AC4 801266C4 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_801266A0
