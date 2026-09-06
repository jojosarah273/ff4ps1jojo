nonmatching func_8011ADEC, 0x30

glabel func_8011ADEC
    /* 291EC 8011ADEC E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 291F0 8011ADF0 1000BFAF */  sw         $ra, 0x10($sp)
    /* 291F4 8011ADF4 655D040C */  jal        func_80117594
    /* 291F8 8011ADF8 00000000 */   nop
    /* 291FC 8011ADFC 656D040C */  jal        func_8011B594
    /* 29200 8011AE00 00000000 */   nop
    /* 29204 8011AE04 977A040C */  jal        func_8011EA5C
    /* 29208 8011AE08 00000000 */   nop
    /* 2920C 8011AE0C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 29210 8011AE10 00000000 */  nop
    /* 29214 8011AE14 0800E003 */  jr         $ra
    /* 29218 8011AE18 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8011ADEC
