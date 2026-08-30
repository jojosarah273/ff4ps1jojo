nonmatching func_8013AAF0, 0x28

glabel func_8013AAF0
    /* 48EF0 8013AAF0 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 48EF4 8013AAF4 1000BFAF */  sw         $ra, 0x10($sp)
    /* 48EF8 8013AAF8 2AE5050C */  jal        func_801794A8
    /* 48EFC 8013AAFC 00000000 */   nop
    /* 48F00 8013AB00 197E040C */  jal        func_8011F864
    /* 48F04 8013AB04 00000000 */   nop
    /* 48F08 8013AB08 1000BF8F */  lw         $ra, 0x10($sp)
    /* 48F0C 8013AB0C 00000000 */  nop
    /* 48F10 8013AB10 0800E003 */  jr         $ra
    /* 48F14 8013AB14 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8013AAF0
