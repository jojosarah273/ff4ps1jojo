nonmatching func_8010F11C, 0x28

glabel func_8010F11C
    /* 1D51C 8010F11C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 1D520 8010F120 1000BFAF */  sw         $ra, 0x10($sp)
    /* 1D524 8010F124 DDE3030C */  jal        func_800F8F74
    /* 1D528 8010F128 1C170424 */   addiu     $a0, $zero, 0x171C
    /* 1D52C 8010F12C 977A040C */  jal        func_8011EA5C
    /* 1D530 8010F130 00000000 */   nop
    /* 1D534 8010F134 1000BF8F */  lw         $ra, 0x10($sp)
    /* 1D538 8010F138 00000000 */  nop
    /* 1D53C 8010F13C 0800E003 */  jr         $ra
    /* 1D540 8010F140 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8010F11C
