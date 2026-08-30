nonmatching func_8016EA7C, 0x20

glabel func_8016EA7C
    /* 7CE7C 8016EA7C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 7CE80 8016EA80 1000BFAF */  sw         $ra, 0x10($sp)
    /* 7CE84 8016EA84 3CBF050C */  jal        func_8016FCF0
    /* 7CE88 8016EA88 00000000 */   nop
    /* 7CE8C 8016EA8C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 7CE90 8016EA90 00000000 */  nop
    /* 7CE94 8016EA94 0800E003 */  jr         $ra
    /* 7CE98 8016EA98 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8016EA7C
