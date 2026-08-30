nonmatching func_8011102C, 0x50

glabel func_8011102C
    /* 1F42C 8011102C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 1F430 80111030 1000BFAF */  sw         $ra, 0x10($sp)
    /* 1F434 80111034 DDE3030C */  jal        func_800F8F74
    /* 1F438 80111038 1F170424 */   addiu     $a0, $zero, 0x171F
    /* 1F43C 8011103C EEE3030C */  jal        func_800F8FB8
    /* 1F440 80111040 B7000424 */   addiu     $a0, $zero, 0xB7
    /* 1F444 80111044 77DC030C */  jal        func_800F71DC
    /* 1F448 80111048 669E0434 */   ori       $a0, $zero, 0x9E66
    /* 1F44C 8011104C 40E3030C */  jal        func_800F8D00
    /* 1F450 80111050 1D170424 */   addiu     $a0, $zero, 0x171D
    /* 1F454 80111054 53D9030C */  jal        func_800F654C
    /* 1F458 80111058 01000424 */   addiu     $a0, $zero, 0x1
    /* 1F45C 8011105C 62E0030C */  jal        func_800F8188
    /* 1F460 80111060 1C170424 */   addiu     $a0, $zero, 0x171C
    /* 1F464 80111064 977A040C */  jal        func_8011EA5C
    /* 1F468 80111068 00000000 */   nop
    /* 1F46C 8011106C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 1F470 80111070 00000000 */  nop
    /* 1F474 80111074 0800E003 */  jr         $ra
    /* 1F478 80111078 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8011102C
