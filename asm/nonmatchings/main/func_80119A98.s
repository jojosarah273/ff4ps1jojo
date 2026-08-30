nonmatching func_80119A98, 0x30

glabel func_80119A98
    /* 27E98 80119A98 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 27E9C 80119A9C 1000BFAF */  sw         $ra, 0x10($sp)
    /* 27EA0 80119AA0 ECF9030C */  jal        func_800FE7B0
    /* 27EA4 80119AA4 00000000 */   nop
    /* 27EA8 80119AA8 B266040C */  jal        func_80119AC8
    /* 27EAC 80119AAC 00000000 */   nop
    /* 27EB0 80119AB0 DEF9030C */  jal        func_800FE778
    /* 27EB4 80119AB4 00000000 */   nop
    /* 27EB8 80119AB8 1000BF8F */  lw         $ra, 0x10($sp)
    /* 27EBC 80119ABC 00000000 */  nop
    /* 27EC0 80119AC0 0800E003 */  jr         $ra
    /* 27EC4 80119AC4 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80119A98
