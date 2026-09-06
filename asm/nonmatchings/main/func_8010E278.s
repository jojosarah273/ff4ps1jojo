nonmatching func_8010E278, 0x40

glabel func_8010E278
    /* 1C678 8010E278 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 1C67C 8010E27C 1000BFAF */  sw         $ra, 0x10($sp)
    /* 1C680 8010E280 FEEC030C */  jal        func_800FB3F8
    /* 1C684 8010E284 00000000 */   nop
    /* 1C688 8010E288 2ED5030C */  jal        func_800F54B8
    /* 1C68C 8010E28C 00000000 */   nop
    /* 1C690 8010E290 67BA050C */  jal        func_8016E99C
    /* 1C694 8010E294 00000000 */   nop
    /* 1C698 8010E298 CE38040C */  jal        func_8010E338
    /* 1C69C 8010E29C 00000000 */   nop
    /* 1C6A0 8010E2A0 977A040C */  jal        func_8011EA5C
    /* 1C6A4 8010E2A4 00000000 */   nop
    /* 1C6A8 8010E2A8 1000BF8F */  lw         $ra, 0x10($sp)
    /* 1C6AC 8010E2AC 00000000 */  nop
    /* 1C6B0 8010E2B0 0800E003 */  jr         $ra
    /* 1C6B4 8010E2B4 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8010E278
