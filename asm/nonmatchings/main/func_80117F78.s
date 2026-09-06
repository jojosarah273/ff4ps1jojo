nonmatching func_80117F78, 0x30

glabel func_80117F78
    /* 26378 80117F78 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 2637C 80117F7C 1000BFAF */  sw         $ra, 0x10($sp)
    /* 26380 80117F80 655D040C */  jal        func_80117594
    /* 26384 80117F84 00000000 */   nop
    /* 26388 80117F88 01F6030C */  jal        func_800FD804
    /* 2638C 80117F8C 00000000 */   nop
    /* 26390 80117F90 977A040C */  jal        func_8011EA5C
    /* 26394 80117F94 00000000 */   nop
    /* 26398 80117F98 1000BF8F */  lw         $ra, 0x10($sp)
    /* 2639C 80117F9C 00000000 */  nop
    /* 263A0 80117FA0 0800E003 */  jr         $ra
    /* 263A4 80117FA4 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80117F78
