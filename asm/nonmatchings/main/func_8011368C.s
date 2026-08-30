nonmatching func_8011368C, 0x48

glabel func_8011368C
    /* 21A8C 8011368C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 21A90 80113690 1000BFAF */  sw         $ra, 0x10($sp)
    /* 21A94 80113694 53D9030C */  jal        func_800F654C
    /* 21A98 80113698 70000424 */   addiu     $a0, $zero, 0x70
    /* 21A9C 8011369C 62E0030C */  jal        func_800F8188
    /* 21AA0 801136A0 D40A0424 */   addiu     $a0, $zero, 0xAD4
    /* 21AA4 801136A4 53D9030C */  jal        func_800F654C
    /* 21AA8 801136A8 70000424 */   addiu     $a0, $zero, 0x70
    /* 21AAC 801136AC 62E0030C */  jal        func_800F8188
    /* 21AB0 801136B0 D50A0424 */   addiu     $a0, $zero, 0xAD5
    /* 21AB4 801136B4 5B4D040C */  jal        func_8011356C
    /* 21AB8 801136B8 00000000 */   nop
    /* 21ABC 801136BC 977A040C */  jal        func_8011EA5C
    /* 21AC0 801136C0 00000000 */   nop
    /* 21AC4 801136C4 1000BF8F */  lw         $ra, 0x10($sp)
    /* 21AC8 801136C8 00000000 */  nop
    /* 21ACC 801136CC 0800E003 */  jr         $ra
    /* 21AD0 801136D0 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8011368C
