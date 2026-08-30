nonmatching func_8011EA3C, 0x20

glabel func_8011EA3C
    /* 2CE3C 8011EA3C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 2CE40 8011EA40 1000BFAF */  sw         $ra, 0x10($sp)
    /* 2CE44 8011EA44 2BFC030C */  jal        func_800FF0AC
    /* 2CE48 8011EA48 00000000 */   nop
    /* 2CE4C 8011EA4C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 2CE50 8011EA50 00000000 */  nop
    /* 2CE54 8011EA54 0800E003 */  jr         $ra
    /* 2CE58 8011EA58 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8011EA3C
