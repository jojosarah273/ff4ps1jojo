nonmatching func_8011F864, 0x20

glabel func_8011F864
    /* 2DC64 8011F864 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 2DC68 8011F868 1000BFAF */  sw         $ra, 0x10($sp)
    /* 2DC6C 8011F86C 7FBA050C */  jal        func_8016E9FC
    /* 2DC70 8011F870 00000000 */   nop
    /* 2DC74 8011F874 1000BF8F */  lw         $ra, 0x10($sp)
    /* 2DC78 8011F878 00000000 */  nop
    /* 2DC7C 8011F87C 0800E003 */  jr         $ra
    /* 2DC80 8011F880 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8011F864
