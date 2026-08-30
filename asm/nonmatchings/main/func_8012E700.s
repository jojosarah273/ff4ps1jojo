nonmatching func_8012E700, 0x58

glabel func_8012E700
    /* 3CB00 8012E700 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 3CB04 8012E704 1000BFAF */  sw         $ra, 0x10($sp)
    /* 3CB08 8012E708 77DC030C */  jal        func_800F71DC
    /* 3CB0C 8012E70C 18000424 */   addiu     $a0, $zero, 0x18
  .L8012E710:
    /* 3CB10 8012E710 68D7030C */  jal        func_800F5DA0
    /* 3CB14 8012E714 D7000424 */   addiu     $a0, $zero, 0xD7
    /* 3CB18 8012E718 AFD8030C */  jal        func_800F62BC
    /* 3CB1C 8012E71C D5000424 */   addiu     $a0, $zero, 0xD5
    /* 3CB20 8012E720 F3B9040C */  jal        func_8012E7CC
    /* 3CB24 8012E724 00000000 */   nop
    /* 3CB28 8012E728 A17D040C */  jal        func_8011F684
    /* 3CB2C 8012E72C 00000000 */   nop
    /* 3CB30 8012E730 92D7030C */  jal        func_800F5E48
    /* 3CB34 8012E734 00000000 */   nop
    /* 3CB38 8012E738 19D7030C */  jal        func_800F5C64
    /* 3CB3C 8012E73C 02020424 */   addiu     $a0, $zero, 0x202
    /* 3CB40 8012E740 F3FF4014 */  bnez       $v0, .L8012E710
    /* 3CB44 8012E744 00000000 */   nop
    /* 3CB48 8012E748 1000BF8F */  lw         $ra, 0x10($sp)
    /* 3CB4C 8012E74C 00000000 */  nop
    /* 3CB50 8012E750 0800E003 */  jr         $ra
    /* 3CB54 8012E754 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8012E700
