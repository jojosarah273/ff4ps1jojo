nonmatching func_8016EA9C, 0x20

glabel func_8016EA9C
    /* 7CE9C 8016EA9C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 7CEA0 8016EAA0 1000BFAF */  sw         $ra, 0x10($sp)
    /* 7CEA4 8016EAA4 F0BF050C */  jal        func_8016FFC0
    /* 7CEA8 8016EAA8 00000000 */   nop
    /* 7CEAC 8016EAAC 1000BF8F */  lw         $ra, 0x10($sp)
    /* 7CEB0 8016EAB0 00000000 */  nop
    /* 7CEB4 8016EAB4 0800E003 */  jr         $ra
    /* 7CEB8 8016EAB8 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8016EA9C
