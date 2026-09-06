nonmatching func_80116398, 0x50

glabel func_80116398
    /* 24798 80116398 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 2479C 8011639C 1000BFAF */  sw         $ra, 0x10($sp)
    /* 247A0 801163A0 5BE3030C */  jal        func_800F8D6C
    /* 247A4 801163A4 89000424 */   addiu     $a0, $zero, 0x89
  .L801163A8:
    /* 247A8 801163A8 DEF9030C */  jal        func_800FE778
    /* 247AC 801163AC 00000000 */   nop
    /* 247B0 801163B0 9CDC030C */  jal        func_800F7270
    /* 247B4 801163B4 89000424 */   addiu     $a0, $zero, 0x89
    /* 247B8 801163B8 92D7030C */  jal        func_800F5E48
    /* 247BC 801163BC 00000000 */   nop
    /* 247C0 801163C0 5BE3030C */  jal        func_800F8D6C
    /* 247C4 801163C4 89000424 */   addiu     $a0, $zero, 0x89
    /* 247C8 801163C8 19D7030C */  jal        func_800F5C64
    /* 247CC 801163CC 02020424 */   addiu     $a0, $zero, 0x202
    /* 247D0 801163D0 F5FF4014 */  bnez       $v0, .L801163A8
    /* 247D4 801163D4 00000000 */   nop
    /* 247D8 801163D8 1000BF8F */  lw         $ra, 0x10($sp)
    /* 247DC 801163DC 00000000 */  nop
    /* 247E0 801163E0 0800E003 */  jr         $ra
    /* 247E4 801163E4 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80116398
