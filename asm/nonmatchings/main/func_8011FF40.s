nonmatching func_8011FF40, 0x40

glabel func_8011FF40
    /* 2E340 8011FF40 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 2E344 8011FF44 1000BFAF */  sw         $ra, 0x10($sp)
    /* 2E348 8011FF48 80E4030C */  jal        func_800F9200
    /* 2E34C 8011FF4C 00000000 */   nop
    /* 2E350 8011FF50 CCE4030C */  jal        func_800F9330
    /* 2E354 8011FF54 00000000 */   nop
    /* 2E358 8011FF58 E7E4030C */  jal        func_800F939C
    /* 2E35C 8011FF5C 00000000 */   nop
    /* 2E360 8011FF60 9BE4030C */  jal        func_800F926C
    /* 2E364 8011FF64 00000000 */   nop
    /* 2E368 8011FF68 E07F040C */  jal        func_8011FF80
    /* 2E36C 8011FF6C 00000000 */   nop
    /* 2E370 8011FF70 1000BF8F */  lw         $ra, 0x10($sp)
    /* 2E374 8011FF74 00000000 */  nop
    /* 2E378 8011FF78 0800E003 */  jr         $ra
    /* 2E37C 8011FF7C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8011FF40
