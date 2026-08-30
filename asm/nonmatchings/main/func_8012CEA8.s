nonmatching func_8012CEA8, 0x70

glabel func_8012CEA8
    /* 3B2A8 8012CEA8 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 3B2AC 8012CEAC 1000BFAF */  sw         $ra, 0x10($sp)
    /* 3B2B0 8012CEB0 59D9030C */  jal        func_800F6564
    /* 3B2B4 8012CEB4 3B1B0424 */   addiu     $a0, $zero, 0x1B3B
    /* 3B2B8 8012CEB8 20D5030C */  jal        func_800F5480
    /* 3B2BC 8012CEBC 00000000 */   nop
    /* 3B2C0 8012CEC0 16E0030C */  jal        func_800F8058
    /* 3B2C4 8012CEC4 E1000424 */   addiu     $a0, $zero, 0xE1
    /* 3B2C8 8012CEC8 62E0030C */  jal        func_800F8188
    /* 3B2CC 8012CECC 031A0424 */   addiu     $a0, $zero, 0x1A03
    /* 3B2D0 8012CED0 DDE3030C */  jal        func_800F8F74
    /* 3B2D4 8012CED4 191B0424 */   addiu     $a0, $zero, 0x1B19
    /* 3B2D8 8012CED8 9CDC030C */  jal        func_800F7270
    /* 3B2DC 8012CEDC 93000424 */   addiu     $a0, $zero, 0x93
    /* 3B2E0 8012CEE0 40E3030C */  jal        func_800F8D00
    /* 3B2E4 8012CEE4 A51B0424 */   addiu     $a0, $zero, 0x1BA5
    /* 3B2E8 8012CEE8 84DC030C */  jal        func_800F7210
    /* 3B2EC 8012CEEC 651A0424 */   addiu     $a0, $zero, 0x1A65
    /* 3B2F0 8012CEF0 1A80023C */  lui        $v0, %hi(D_8019ED54)
    /* 3B2F4 8012CEF4 54ED428C */  lw         $v0, %lo(D_8019ED54)($v0)
    /* 3B2F8 8012CEF8 1A80043C */  lui        $a0, %hi(D_8019ED4C)
    /* 3B2FC 8012CEFC 4CED848C */  lw         $a0, %lo(D_8019ED4C)($a0)
    /* 3B300 8012CF00 1000BF8F */  lw         $ra, 0x10($sp)
    /* 3B304 8012CF04 00004394 */  lhu        $v1, 0x0($v0)
    /* 3B308 8012CF08 00000000 */  nop
    /* 3B30C 8012CF0C 000083A4 */  sh         $v1, 0x0($a0)
    /* 3B310 8012CF10 0800E003 */  jr         $ra
    /* 3B314 8012CF14 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8012CEA8
