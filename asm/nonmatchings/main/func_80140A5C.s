nonmatching func_80140A5C, 0x64

glabel func_80140A5C
    /* 4EE5C 80140A5C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 4EE60 80140A60 1000BFAF */  sw         $ra, 0x10($sp)
    /* 4EE64 80140A64 C7E5030C */  jal        func_800F971C
    /* 4EE68 80140A68 00000000 */   nop
    /* 4EE6C 80140A6C 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 4EE70 80140A70 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 4EE74 80140A74 1A80043C */  lui        $a0, %hi(D_8019ED54)
    /* 4EE78 80140A78 54ED848C */  lw         $a0, %lo(D_8019ED54)($a0)
    /* 4EE7C 80140A7C 00004394 */  lhu        $v1, 0x0($v0)
    /* 4EE80 80140A80 33D7030C */  jal        func_800F5CCC
    /* 4EE84 80140A84 000083A4 */   sh        $v1, 0x0($a0)
  .L80140A88:
    /* 4EE88 80140A88 DAE1030C */  jal        func_800F8768
    /* 4EE8C 80140A8C B4F20434 */   ori       $a0, $zero, 0xF2B4
    /* 4EE90 80140A90 D9D8030C */  jal        func_800F6364
    /* 4EE94 80140A94 00000000 */   nop
    /* 4EE98 80140A98 56D6030C */  jal        func_800F5958
    /* 4EE9C 80140A9C 08000424 */   addiu     $a0, $zero, 0x8
    /* 4EEA0 80140AA0 F5D4030C */  jal        func_800F53D4
    /* 4EEA4 80140AA4 00000000 */   nop
    /* 4EEA8 80140AA8 F7FF4010 */  beqz       $v0, .L80140A88
    /* 4EEAC 80140AAC 00000000 */   nop
    /* 4EEB0 80140AB0 1000BF8F */  lw         $ra, 0x10($sp)
    /* 4EEB4 80140AB4 00000000 */  nop
    /* 4EEB8 80140AB8 0800E003 */  jr         $ra
    /* 4EEBC 80140ABC 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80140A5C
