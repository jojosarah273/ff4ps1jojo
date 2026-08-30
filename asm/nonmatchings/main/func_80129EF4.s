nonmatching func_80129EF4, 0x60

glabel func_80129EF4
    /* 382F4 80129EF4 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 382F8 80129EF8 1000BFAF */  sw         $ra, 0x10($sp)
    /* 382FC 80129EFC 53D9030C */  jal        func_800F654C
    /* 38300 80129F00 FF000424 */   addiu     $a0, $zero, 0xFF
    /* 38304 80129F04 62E0030C */  jal        func_800F8188
    /* 38308 80129F08 081B0424 */   addiu     $a0, $zero, 0x1B08
    /* 3830C 80129F0C 62E0030C */  jal        func_800F8188
    /* 38310 80129F10 BA1B0424 */   addiu     $a0, $zero, 0x1BBA
    /* 38314 80129F14 9CDC030C */  jal        func_800F7270
    /* 38318 80129F18 41000424 */   addiu     $a0, $zero, 0x41
  .L80129F1C:
    /* 3831C 80129F1C DAE1030C */  jal        func_800F8768
    /* 38320 80129F20 0A1B0424 */   addiu     $a0, $zero, 0x1B0A
    /* 38324 80129F24 D9D8030C */  jal        func_800F6364
    /* 38328 80129F28 00000000 */   nop
    /* 3832C 80129F2C 56D6030C */  jal        func_800F5958
    /* 38330 80129F30 06000424 */   addiu     $a0, $zero, 0x6
    /* 38334 80129F34 F5D4030C */  jal        func_800F53D4
    /* 38338 80129F38 00000000 */   nop
    /* 3833C 80129F3C F7FF4010 */  beqz       $v0, .L80129F1C
    /* 38340 80129F40 00000000 */   nop
    /* 38344 80129F44 1000BF8F */  lw         $ra, 0x10($sp)
    /* 38348 80129F48 00000000 */  nop
    /* 3834C 80129F4C 0800E003 */  jr         $ra
    /* 38350 80129F50 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80129EF4
