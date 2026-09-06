nonmatching func_8011AE4C, 0x30

glabel func_8011AE4C
    /* 2924C 8011AE4C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 29250 8011AE50 1000BFAF */  sw         $ra, 0x10($sp)
    /* 29254 8011AE54 655D040C */  jal        func_80117594
    /* 29258 8011AE58 00000000 */   nop
    /* 2925C 8011AE5C 876D040C */  jal        func_8011B61C
    /* 29260 8011AE60 00000000 */   nop
    /* 29264 8011AE64 977A040C */  jal        func_8011EA5C
    /* 29268 8011AE68 00000000 */   nop
    /* 2926C 8011AE6C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 29270 8011AE70 00000000 */  nop
    /* 29274 8011AE74 0800E003 */  jr         $ra
    /* 29278 8011AE78 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8011AE4C
