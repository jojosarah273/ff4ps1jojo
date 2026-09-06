nonmatching func_80119D48, 0x9C

glabel func_80119D48
    /* 28148 80119D48 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 2814C 80119D4C 1000BFAF */  sw         $ra, 0x10($sp)
    /* 28150 80119D50 EEE3030C */  jal        func_800F8FB8
    /* 28154 80119D54 79000424 */   addiu     $a0, $zero, 0x79
  .L80119D58:
    /* 28158 80119D58 ECF9030C */  jal        func_800FE7B0
    /* 2815C 80119D5C 00000000 */   nop
    /* 28160 80119D60 8CD9030C */  jal        func_800F6630
    /* 28164 80119D64 79000424 */   addiu     $a0, $zero, 0x79
    /* 28168 80119D68 19DE030C */  jal        func_800F7864
    /* 2816C 80119D6C 00000000 */   nop
    /* 28170 80119D70 1400043C */  lui        $a0, (0x14FA66 >> 16)
    /* 28174 80119D74 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 28178 80119D78 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 2817C 80119D7C 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 28180 80119D80 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 28184 80119D84 00004394 */  lhu        $v1, 0x0($v0)
    /* 28188 80119D88 66FA8434 */  ori        $a0, $a0, (0x14FA66 & 0xFFFF)
    /* 2818C 80119D8C 1ADB030C */  jal        func_800F6C68
    /* 28190 80119D90 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 28194 80119D94 62E0030C */  jal        func_800F8188
    /* 28198 80119D98 06210424 */   addiu     $a0, $zero, 0x2106
    /* 2819C 80119D9C AFD8030C */  jal        func_800F62BC
    /* 281A0 80119DA0 79000424 */   addiu     $a0, $zero, 0x79
    /* 281A4 80119DA4 AFD8030C */  jal        func_800F62BC
    /* 281A8 80119DA8 79000424 */   addiu     $a0, $zero, 0x79
    /* 281AC 80119DAC 8CD9030C */  jal        func_800F6630
    /* 281B0 80119DB0 79000424 */   addiu     $a0, $zero, 0x79
    /* 281B4 80119DB4 5DD5030C */  jal        func_800F5574
    /* 281B8 80119DB8 40000424 */   addiu     $a0, $zero, 0x40
    /* 281BC 80119DBC F5D4030C */  jal        func_800F53D4
    /* 281C0 80119DC0 00000000 */   nop
    /* 281C4 80119DC4 E4FF4010 */  beqz       $v0, .L80119D58
    /* 281C8 80119DC8 00000000 */   nop
    /* 281CC 80119DCC 977A040C */  jal        func_8011EA5C
    /* 281D0 80119DD0 00000000 */   nop
    /* 281D4 80119DD4 1000BF8F */  lw         $ra, 0x10($sp)
    /* 281D8 80119DD8 00000000 */  nop
    /* 281DC 80119DDC 0800E003 */  jr         $ra
    /* 281E0 80119DE0 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80119D48
