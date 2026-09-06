nonmatching func_8011770C, 0x48

glabel func_8011770C
    /* 25B0C 8011770C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 25B10 80117710 1000BFAF */  sw         $ra, 0x10($sp)
    /* 25B14 80117714 655D040C */  jal        func_80117594
    /* 25B18 80117718 00000000 */   nop
    /* 25B1C 8011771C 62E0030C */  jal        func_800F8188
    /* 25B20 80117720 011E0424 */   addiu     $a0, $zero, 0x1E01
    /* 25B24 80117724 53D9030C */  jal        func_800F654C
    /* 25B28 80117728 04000424 */   addiu     $a0, $zero, 0x4
    /* 25B2C 8011772C 62E0030C */  jal        func_800F8188
    /* 25B30 80117730 001E0424 */   addiu     $a0, $zero, 0x1E00
    /* 25B34 80117734 4AA4050C */  jal        func_80169128
    /* 25B38 80117738 00000000 */   nop
    /* 25B3C 8011773C DEF9030C */  jal        func_800FE778
    /* 25B40 80117740 00000000 */   nop
    /* 25B44 80117744 1000BF8F */  lw         $ra, 0x10($sp)
    /* 25B48 80117748 00000000 */  nop
    /* 25B4C 8011774C 0800E003 */  jr         $ra
    /* 25B50 80117750 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8011770C
