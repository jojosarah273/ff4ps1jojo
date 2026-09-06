nonmatching func_8011F6FC, 0x28

glabel func_8011F6FC
    /* 2DAFC 8011F6FC E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 2DB00 8011F700 1000BFAF */  sw         $ra, 0x10($sp)
    /* 2DB04 8011F704 9CDC030C */  jal        func_800F7270
    /* 2DB08 8011F708 45000424 */   addiu     $a0, $zero, 0x45
    /* 2DB0C 8011F70C C97D040C */  jal        func_8011F724
    /* 2DB10 8011F710 00000000 */   nop
    /* 2DB14 8011F714 1000BF8F */  lw         $ra, 0x10($sp)
    /* 2DB18 8011F718 00000000 */  nop
    /* 2DB1C 8011F71C 0800E003 */  jr         $ra
    /* 2DB20 8011F720 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8011F6FC
