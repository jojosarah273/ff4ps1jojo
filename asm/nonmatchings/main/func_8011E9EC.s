nonmatching func_8011E9EC, 0x28

glabel func_8011E9EC
    /* 2CDEC 8011E9EC E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 2CDF0 8011E9F0 1000BFAF */  sw         $ra, 0x10($sp)
    /* 2CDF4 8011E9F4 59D9030C */  jal        func_800F6564
    /* 2CDF8 8011E9F8 F9060424 */   addiu     $a0, $zero, 0x6F9
    /* 2CDFC 8011E9FC 4D79040C */  jal        func_8011E534
    /* 2CE00 8011EA00 00000000 */   nop
    /* 2CE04 8011EA04 1000BF8F */  lw         $ra, 0x10($sp)
    /* 2CE08 8011EA08 00000000 */  nop
    /* 2CE0C 8011EA0C 0800E003 */  jr         $ra
    /* 2CE10 8011EA10 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8011E9EC
