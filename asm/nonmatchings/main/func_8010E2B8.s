nonmatching func_8010E2B8, 0x40

glabel func_8010E2B8
    /* 1C6B8 8010E2B8 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 1C6BC 8010E2BC 1000BFAF */  sw         $ra, 0x10($sp)
    /* 1C6C0 8010E2C0 FEEC030C */  jal        func_800FB3F8
    /* 1C6C4 8010E2C4 00000000 */   nop
    /* 1C6C8 8010E2C8 2ED5030C */  jal        func_800F54B8
    /* 1C6CC 8010E2CC 00000000 */   nop
    /* 1C6D0 8010E2D0 6FBA050C */  jal        func_8016E9BC
    /* 1C6D4 8010E2D4 00000000 */   nop
    /* 1C6D8 8010E2D8 CE38040C */  jal        func_8010E338
    /* 1C6DC 8010E2DC 00000000 */   nop
    /* 1C6E0 8010E2E0 977A040C */  jal        func_8011EA5C
    /* 1C6E4 8010E2E4 00000000 */   nop
    /* 1C6E8 8010E2E8 1000BF8F */  lw         $ra, 0x10($sp)
    /* 1C6EC 8010E2EC 00000000 */  nop
    /* 1C6F0 8010E2F0 0800E003 */  jr         $ra
    /* 1C6F4 8010E2F4 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8010E2B8
