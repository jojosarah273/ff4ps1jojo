nonmatching func_8010E2F8, 0x40

glabel func_8010E2F8
    /* 1C6F8 8010E2F8 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 1C6FC 8010E2FC 1000BFAF */  sw         $ra, 0x10($sp)
    /* 1C700 8010E300 FEEC030C */  jal        func_800FB3F8
    /* 1C704 8010E304 00000000 */   nop
    /* 1C708 8010E308 2ED5030C */  jal        func_800F54B8
    /* 1C70C 8010E30C 00000000 */   nop
    /* 1C710 8010E310 77BA050C */  jal        func_8016E9DC
    /* 1C714 8010E314 00000000 */   nop
    /* 1C718 8010E318 CE38040C */  jal        func_8010E338
    /* 1C71C 8010E31C 00000000 */   nop
    /* 1C720 8010E320 977A040C */  jal        func_8011EA5C
    /* 1C724 8010E324 00000000 */   nop
    /* 1C728 8010E328 1000BF8F */  lw         $ra, 0x10($sp)
    /* 1C72C 8010E32C 00000000 */  nop
    /* 1C730 8010E330 0800E003 */  jr         $ra
    /* 1C734 8010E334 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8010E2F8
