nonmatching func_8013B8D4, 0x58

glabel func_8013B8D4
    /* 49CD4 8013B8D4 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 49CD8 8013B8D8 1000BFAF */  sw         $ra, 0x10($sp)
  .L8013B8DC:
    /* 49CDC 8013B8DC 58E2030C */  jal        func_800F8960
    /* 49CE0 8013B8E0 21200000 */   addu      $a0, $zero, $zero
    /* 49CE4 8013B8E4 EFD8030C */  jal        func_800F63BC
    /* 49CE8 8013B8E8 00000000 */   nop
    /* 49CEC 8013B8EC EFD8030C */  jal        func_800F63BC
    /* 49CF0 8013B8F0 00000000 */   nop
    /* 49CF4 8013B8F4 EFD8030C */  jal        func_800F63BC
    /* 49CF8 8013B8F8 00000000 */   nop
    /* 49CFC 8013B8FC EFD8030C */  jal        func_800F63BC
    /* 49D00 8013B900 00000000 */   nop
    /* 49D04 8013B904 92D7030C */  jal        func_800F5E48
    /* 49D08 8013B908 00000000 */   nop
    /* 49D0C 8013B90C 19D7030C */  jal        func_800F5C64
    /* 49D10 8013B910 02020424 */   addiu     $a0, $zero, 0x202
    /* 49D14 8013B914 F1FF4014 */  bnez       $v0, .L8013B8DC
    /* 49D18 8013B918 00000000 */   nop
    /* 49D1C 8013B91C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 49D20 8013B920 00000000 */  nop
    /* 49D24 8013B924 0800E003 */  jr         $ra
    /* 49D28 8013B928 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8013B8D4
