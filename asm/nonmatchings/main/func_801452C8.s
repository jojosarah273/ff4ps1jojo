nonmatching func_801452C8, 0x50

glabel func_801452C8
    /* 536C8 801452C8 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 536CC 801452CC 1000BFAF */  sw         $ra, 0x10($sp)
    /* 536D0 801452D0 77DC030C */  jal        func_800F71DC
    /* 536D4 801452D4 08000424 */   addiu     $a0, $zero, 0x8
  .L801452D8:
    /* 536D8 801452D8 5601050C */  jal        func_80140558
    /* 536DC 801452DC 00000000 */   nop
    /* 536E0 801452E0 90D8030C */  jal        func_800F6240
    /* 536E4 801452E4 21F30434 */   ori       $a0, $zero, 0xF321
    /* 536E8 801452E8 90D8030C */  jal        func_800F6240
    /* 536EC 801452EC 21F30434 */   ori       $a0, $zero, 0xF321
    /* 536F0 801452F0 92D7030C */  jal        func_800F5E48
    /* 536F4 801452F4 00000000 */   nop
    /* 536F8 801452F8 19D7030C */  jal        func_800F5C64
    /* 536FC 801452FC 02020424 */   addiu     $a0, $zero, 0x202
    /* 53700 80145300 F5FF4014 */  bnez       $v0, .L801452D8
    /* 53704 80145304 00000000 */   nop
    /* 53708 80145308 1000BF8F */  lw         $ra, 0x10($sp)
    /* 5370C 8014530C 00000000 */  nop
    /* 53710 80145310 0800E003 */  jr         $ra
    /* 53714 80145314 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_801452C8
