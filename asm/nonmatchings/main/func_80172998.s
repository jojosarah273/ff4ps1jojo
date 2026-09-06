nonmatching func_80172998, 0x48

glabel func_80172998
    /* 80D98 80172998 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 80D9C 8017299C 1000BFAF */  sw         $ra, 0x10($sp)
    /* 80DA0 801729A0 2EE5030C */  jal        func_800F94B8
    /* 80DA4 801729A4 00000000 */   nop
    /* 80DA8 801729A8 2ED5030C */  jal        func_800F54B8
    /* 80DAC 801729AC 00000000 */   nop
    /* 80DB0 801729B0 9CCE030C */  jal        func_800F3A70
    /* 80DB4 801729B4 2D000424 */   addiu     $a0, $zero, 0x2D
    /* 80DB8 801729B8 C1CE030C */  jal        func_800F3B04
    /* 80DBC 801729BC 21204000 */   addu      $a0, $v0, $zero
    /* 80DC0 801729C0 CECF030C */  jal        func_800F3F38
    /* 80DC4 801729C4 21204000 */   addu      $a0, $v0, $zero
    /* 80DC8 801729C8 2EE5030C */  jal        func_800F94B8
    /* 80DCC 801729CC 00000000 */   nop
    /* 80DD0 801729D0 1000BF8F */  lw         $ra, 0x10($sp)
    /* 80DD4 801729D4 00000000 */  nop
    /* 80DD8 801729D8 0800E003 */  jr         $ra
    /* 80DDC 801729DC 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80172998
