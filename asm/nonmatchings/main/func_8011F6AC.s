nonmatching func_8011F6AC, 0x28

glabel func_8011F6AC
    /* 2DAAC 8011F6AC E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 2DAB0 8011F6B0 1000BFAF */  sw         $ra, 0x10($sp)
    /* 2DAB4 8011F6B4 40DD030C */  jal        func_800F7500
    /* 2DAB8 8011F6B8 10030424 */   addiu     $a0, $zero, 0x310
    /* 2DABC 8011F6BC BF7D040C */  jal        func_8011F6FC
    /* 2DAC0 8011F6C0 00000000 */   nop
    /* 2DAC4 8011F6C4 1000BF8F */  lw         $ra, 0x10($sp)
    /* 2DAC8 8011F6C8 00000000 */  nop
    /* 2DACC 8011F6CC 0800E003 */  jr         $ra
    /* 2DAD0 8011F6D0 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8011F6AC
