nonmatching func_8010FAC4, 0x94

glabel func_8010FAC4
    /* 1DEC4 8010FAC4 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 1DEC8 8010FAC8 1000BFAF */  sw         $ra, 0x10($sp)
    /* 1DECC 8010FACC EEE3030C */  jal        func_800F8FB8
    /* 1DED0 8010FAD0 79000424 */   addiu     $a0, $zero, 0x79
  .L8010FAD4:
    /* 1DED4 8010FAD4 8CD9030C */  jal        func_800F6630
    /* 1DED8 8010FAD8 79000424 */   addiu     $a0, $zero, 0x79
    /* 1DEDC 8010FADC 04D5030C */  jal        func_800F5410
    /* 1DEE0 8010FAE0 00000000 */   nop
    /* 1DEE4 8010FAE4 02D0030C */  jal        func_800F4008
    /* 1DEE8 8010FAE8 04000424 */   addiu     $a0, $zero, 0x4
    /* 1DEEC 8010FAEC 50D4030C */  jal        func_800F5140
    /* 1DEF0 8010FAF0 00000000 */   nop
    /* 1DEF4 8010FAF4 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 1DEF8 8010FAF8 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 1DEFC 8010FAFC 1A80043C */  lui        $a0, %hi(D_8019ED58)
    /* 1DF00 8010FB00 58ED848C */  lw         $a0, %lo(D_8019ED58)($a0)
    /* 1DF04 8010FB04 00004394 */  lhu        $v1, 0x0($v0)
    /* 1DF08 8010FB08 A155040C */  jal        func_80115684
    /* 1DF0C 8010FB0C 000083A4 */   sh        $v1, 0x0($a0)
    /* 1DF10 8010FB10 EEE3030C */  jal        func_800F8FB8
    /* 1DF14 8010FB14 92000424 */   addiu     $a0, $zero, 0x92
    /* 1DF18 8010FB18 0756040C */  jal        func_8011581C
    /* 1DF1C 8010FB1C 00000000 */   nop
    /* 1DF20 8010FB20 AFD8030C */  jal        func_800F62BC
    /* 1DF24 8010FB24 79000424 */   addiu     $a0, $zero, 0x79
    /* 1DF28 8010FB28 8CD9030C */  jal        func_800F6630
    /* 1DF2C 8010FB2C 79000424 */   addiu     $a0, $zero, 0x79
    /* 1DF30 8010FB30 5DD5030C */  jal        func_800F5574
    /* 1DF34 8010FB34 04000424 */   addiu     $a0, $zero, 0x4
    /* 1DF38 8010FB38 F5D4030C */  jal        func_800F53D4
    /* 1DF3C 8010FB3C 00000000 */   nop
    /* 1DF40 8010FB40 E4FF4010 */  beqz       $v0, .L8010FAD4
    /* 1DF44 8010FB44 00000000 */   nop
    /* 1DF48 8010FB48 1000BF8F */  lw         $ra, 0x10($sp)
    /* 1DF4C 8010FB4C 00000000 */  nop
    /* 1DF50 8010FB50 0800E003 */  jr         $ra
    /* 1DF54 8010FB54 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8010FAC4
