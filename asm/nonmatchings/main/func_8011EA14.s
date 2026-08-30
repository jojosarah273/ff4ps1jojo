nonmatching func_8011EA14, 0x28

glabel func_8011EA14
    /* 2CE14 8011EA14 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 2CE18 8011EA18 1000BFAF */  sw         $ra, 0x10($sp)
    /* 2CE1C 8011EA1C 59D9030C */  jal        func_800F6564
    /* 2CE20 8011EA20 E30F0424 */   addiu     $a0, $zero, 0xFE3
    /* 2CE24 8011EA24 4D79040C */  jal        func_8011E534
    /* 2CE28 8011EA28 00000000 */   nop
    /* 2CE2C 8011EA2C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 2CE30 8011EA30 00000000 */  nop
    /* 2CE34 8011EA34 0800E003 */  jr         $ra
    /* 2CE38 8011EA38 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8011EA14
