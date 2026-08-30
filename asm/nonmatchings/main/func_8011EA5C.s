nonmatching func_8011EA5C, 0x20

glabel func_8011EA5C
    /* 2CE5C 8011EA5C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 2CE60 8011EA60 1000BFAF */  sw         $ra, 0x10($sp)
    /* 2CE64 8011EA64 DEF9030C */  jal        func_800FE778
    /* 2CE68 8011EA68 00000000 */   nop
    /* 2CE6C 8011EA6C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 2CE70 8011EA70 00000000 */  nop
    /* 2CE74 8011EA74 0800E003 */  jr         $ra
    /* 2CE78 8011EA78 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8011EA5C
