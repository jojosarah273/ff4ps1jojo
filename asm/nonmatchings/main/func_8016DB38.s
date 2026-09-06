nonmatching func_8016DB38, 0x5C

glabel func_8016DB38
    /* 7BF38 8016DB38 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 7BF3C 8016DB3C 1000BFAF */  sw         $ra, 0x10($sp)
    /* 7BF40 8016DB40 CCE4030C */  jal        func_800F9330
    /* 7BF44 8016DB44 00000000 */   nop
    /* 7BF48 8016DB48 AFD8030C */  jal        func_800F62BC
    /* 7BF4C 8016DB4C 94000424 */   addiu     $a0, $zero, 0x94
    /* 7BF50 8016DB50 8CD9030C */  jal        func_800F6630
    /* 7BF54 8016DB54 94000424 */   addiu     $a0, $zero, 0x94
    /* 7BF58 8016DB58 1400043C */  lui        $a0, (0x14EE00 >> 16)
    /* 7BF5C 8016DB5C 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 7BF60 8016DB60 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 7BF64 8016DB64 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 7BF68 8016DB68 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 7BF6C 8016DB6C 00004394 */  lhu        $v1, 0x0($v0)
    /* 7BF70 8016DB70 00EE8434 */  ori        $a0, $a0, (0x14EE00 & 0xFFFF)
    /* 7BF74 8016DB74 1ADB030C */  jal        func_800F6C68
    /* 7BF78 8016DB78 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 7BF7C 8016DB7C 68E5030C */  jal        func_800F95A0
    /* 7BF80 8016DB80 00000000 */   nop
    /* 7BF84 8016DB84 1000BF8F */  lw         $ra, 0x10($sp)
    /* 7BF88 8016DB88 00000000 */  nop
    /* 7BF8C 8016DB8C 0800E003 */  jr         $ra
    /* 7BF90 8016DB90 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8016DB38
