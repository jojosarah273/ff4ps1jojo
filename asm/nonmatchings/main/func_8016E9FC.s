nonmatching func_8016E9FC, 0x20

glabel func_8016E9FC
    /* 7CDFC 8016E9FC E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 7CE00 8016EA00 1000BFAF */  sw         $ra, 0x10($sp)
    /* 7CE04 8016EA04 5FBE050C */  jal        func_8016F97C
    /* 7CE08 8016EA08 00000000 */   nop
    /* 7CE0C 8016EA0C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 7CE10 8016EA10 00000000 */  nop
    /* 7CE14 8016EA14 0800E003 */  jr         $ra
    /* 7CE18 8016EA18 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8016E9FC
