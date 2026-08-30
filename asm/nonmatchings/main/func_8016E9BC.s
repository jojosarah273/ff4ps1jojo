nonmatching func_8016E9BC, 0x20

glabel func_8016E9BC
    /* 7CDBC 8016E9BC E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 7CDC0 8016E9C0 1000BFAF */  sw         $ra, 0x10($sp)
    /* 7CDC4 8016E9C4 84BB050C */  jal        func_8016EE10
    /* 7CDC8 8016E9C8 00000000 */   nop
    /* 7CDCC 8016E9CC 1000BF8F */  lw         $ra, 0x10($sp)
    /* 7CDD0 8016E9D0 00000000 */  nop
    /* 7CDD4 8016E9D4 0800E003 */  jr         $ra
    /* 7CDD8 8016E9D8 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8016E9BC
