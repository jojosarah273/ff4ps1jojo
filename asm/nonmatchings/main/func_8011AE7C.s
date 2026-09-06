nonmatching func_8011AE7C, 0x30

glabel func_8011AE7C
    /* 2927C 8011AE7C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 29280 8011AE80 1000BFAF */  sw         $ra, 0x10($sp)
    /* 29284 8011AE84 655D040C */  jal        func_80117594
    /* 29288 8011AE88 00000000 */   nop
    /* 2928C 8011AE8C 476D040C */  jal        func_8011B51C
    /* 29290 8011AE90 00000000 */   nop
    /* 29294 8011AE94 977A040C */  jal        func_8011EA5C
    /* 29298 8011AE98 00000000 */   nop
    /* 2929C 8011AE9C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 292A0 8011AEA0 00000000 */  nop
    /* 292A4 8011AEA4 0800E003 */  jr         $ra
    /* 292A8 8011AEA8 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8011AE7C
