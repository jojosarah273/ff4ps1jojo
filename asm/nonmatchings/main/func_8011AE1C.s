nonmatching func_8011AE1C, 0x30

glabel func_8011AE1C
    /* 2921C 8011AE1C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 29220 8011AE20 1000BFAF */  sw         $ra, 0x10($sp)
    /* 29224 8011AE24 655D040C */  jal        func_80117594
    /* 29228 8011AE28 00000000 */   nop
    /* 2922C 8011AE2C 296D040C */  jal        func_8011B4A4
    /* 29230 8011AE30 00000000 */   nop
    /* 29234 8011AE34 977A040C */  jal        func_8011EA5C
    /* 29238 8011AE38 00000000 */   nop
    /* 2923C 8011AE3C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 29240 8011AE40 00000000 */  nop
    /* 29244 8011AE44 0800E003 */  jr         $ra
    /* 29248 8011AE48 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8011AE1C
