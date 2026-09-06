nonmatching func_80130A24, 0x50

glabel func_80130A24
    /* 3EE24 80130A24 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 3EE28 80130A28 1000BFAF */  sw         $ra, 0x10($sp)
  .L80130A2C:
    /* 3EE2C 80130A2C DAE1030C */  jal        func_800F8768
    /* 3EE30 80130A30 01C60434 */   ori       $a0, $zero, 0xC601
    /* 3EE34 80130A34 D9D8030C */  jal        func_800F6364
    /* 3EE38 80130A38 00000000 */   nop
    /* 3EE3C 80130A3C D9D8030C */  jal        func_800F6364
    /* 3EE40 80130A40 00000000 */   nop
    /* 3EE44 80130A44 A8D7030C */  jal        func_800F5EA0
    /* 3EE48 80130A48 00000000 */   nop
    /* 3EE4C 80130A4C 19D7030C */  jal        func_800F5C64
    /* 3EE50 80130A50 02020424 */   addiu     $a0, $zero, 0x202
    /* 3EE54 80130A54 F5FF4014 */  bnez       $v0, .L80130A2C
    /* 3EE58 80130A58 00000000 */   nop
    /* 3EE5C 80130A5C F7E4030C */  jal        func_800F93DC
    /* 3EE60 80130A60 00000000 */   nop
    /* 3EE64 80130A64 1000BF8F */  lw         $ra, 0x10($sp)
    /* 3EE68 80130A68 00000000 */  nop
    /* 3EE6C 80130A6C 0800E003 */  jr         $ra
    /* 3EE70 80130A70 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80130A24
