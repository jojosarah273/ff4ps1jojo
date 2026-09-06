nonmatching func_8010E0A8, 0x28

glabel func_8010E0A8
    /* 1C4A8 8010E0A8 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 1C4AC 8010E0AC 1000BFAF */  sw         $ra, 0x10($sp)
    /* 1C4B0 8010E0B0 3438040C */  jal        func_8010E0D0
    /* 1C4B4 8010E0B4 00000000 */   nop
    /* 1C4B8 8010E0B8 977A040C */  jal        func_8011EA5C
    /* 1C4BC 8010E0BC 00000000 */   nop
    /* 1C4C0 8010E0C0 1000BF8F */  lw         $ra, 0x10($sp)
    /* 1C4C4 8010E0C4 00000000 */  nop
    /* 1C4C8 8010E0C8 0800E003 */  jr         $ra
    /* 1C4CC 8010E0CC 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8010E0A8
