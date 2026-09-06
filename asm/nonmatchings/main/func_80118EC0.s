nonmatching func_80118EC0, 0x38

glabel func_80118EC0
    /* 272C0 80118EC0 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 272C4 80118EC4 1000BFAF */  sw         $ra, 0x10($sp)
    /* 272C8 80118EC8 655D040C */  jal        func_80117594
    /* 272CC 80118ECC 00000000 */   nop
    /* 272D0 80118ED0 62E0030C */  jal        func_800F8188
    /* 272D4 80118ED4 FB080424 */   addiu     $a0, $zero, 0x8FB
    /* 272D8 80118ED8 7701040C */  jal        func_801005DC
    /* 272DC 80118EDC 00000000 */   nop
    /* 272E0 80118EE0 977A040C */  jal        func_8011EA5C
    /* 272E4 80118EE4 00000000 */   nop
    /* 272E8 80118EE8 1000BF8F */  lw         $ra, 0x10($sp)
    /* 272EC 80118EEC 00000000 */  nop
    /* 272F0 80118EF0 0800E003 */  jr         $ra
    /* 272F4 80118EF4 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80118EC0
