nonmatching func_8016E99C, 0x20

glabel func_8016E99C
    /* 7CD9C 8016E99C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 7CDA0 8016E9A0 1000BFAF */  sw         $ra, 0x10($sp)
    /* 7CDA4 8016E9A4 B7BB050C */  jal        func_8016EEDC
    /* 7CDA8 8016E9A8 00000000 */   nop
    /* 7CDAC 8016E9AC 1000BF8F */  lw         $ra, 0x10($sp)
    /* 7CDB0 8016E9B0 00000000 */  nop
    /* 7CDB4 8016E9B4 0800E003 */  jr         $ra
    /* 7CDB8 8016E9B8 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8016E99C
