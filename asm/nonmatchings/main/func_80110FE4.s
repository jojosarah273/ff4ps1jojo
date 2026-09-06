nonmatching func_80110FE4, 0x48

glabel func_80110FE4
    /* 1F3E4 80110FE4 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 1F3E8 80110FE8 1000BFAF */  sw         $ra, 0x10($sp)
    /* 1F3EC 80110FEC 84DC030C */  jal        func_800F7210
    /* 1F3F0 80110FF0 2C170424 */   addiu     $a0, $zero, 0x172C
    /* 1F3F4 80110FF4 92D7030C */  jal        func_800F5E48
    /* 1F3F8 80110FF8 00000000 */   nop
    /* 1F3FC 80110FFC 92D7030C */  jal        func_800F5E48
    /* 1F400 80111000 00000000 */   nop
    /* 1F404 80111004 92D7030C */  jal        func_800F5E48
    /* 1F408 80111008 00000000 */   nop
    /* 1F40C 8011100C 40E3030C */  jal        func_800F8D00
    /* 1F410 80111010 2C170424 */   addiu     $a0, $zero, 0x172C
    /* 1F414 80111014 977A040C */  jal        func_8011EA5C
    /* 1F418 80111018 00000000 */   nop
    /* 1F41C 8011101C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 1F420 80111020 00000000 */  nop
    /* 1F424 80111024 0800E003 */  jr         $ra
    /* 1F428 80111028 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80110FE4
