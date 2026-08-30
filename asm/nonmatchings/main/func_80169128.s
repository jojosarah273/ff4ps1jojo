nonmatching func_80169128, 0x20

glabel func_80169128
    /* 77528 80169128 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 7752C 8016912C 1000BFAF */  sw         $ra, 0x10($sp)
    /* 77530 80169130 4818060C */  jal        func_80186120
    /* 77534 80169134 00000000 */   nop
    /* 77538 80169138 1000BF8F */  lw         $ra, 0x10($sp)
    /* 7753C 8016913C 00000000 */  nop
    /* 77540 80169140 0800E003 */  jr         $ra
    /* 77544 80169144 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80169128
