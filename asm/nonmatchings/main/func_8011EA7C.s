nonmatching func_8011EA7C, 0x20

glabel func_8011EA7C
    /* 2CE7C 8011EA7C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 2CE80 8011EA80 1000BFAF */  sw         $ra, 0x10($sp)
    /* 2CE84 8011EA84 EF7A040C */  jal        func_8011EBBC
    /* 2CE88 8011EA88 00000000 */   nop
    /* 2CE8C 8011EA8C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 2CE90 8011EA90 00000000 */  nop
    /* 2CE94 8011EA94 0800E003 */  jr         $ra
    /* 2CE98 8011EA98 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8011EA7C
