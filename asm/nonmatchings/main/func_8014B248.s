nonmatching func_8014B248, 0x4C

glabel func_8014B248
    /* 59648 8014B248 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 5964C 8014B24C 1000BFAF */  sw         $ra, 0x10($sp)
    /* 59650 8014B250 59D9030C */  jal        func_800F6564
    /* 59654 8014B254 C3340424 */   addiu     $a0, $zero, 0x34C3
    /* 59658 8014B258 1600043C */  lui        $a0, (0x16FC7E >> 16)
    /* 5965C 8014B25C 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 59660 8014B260 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 59664 8014B264 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 59668 8014B268 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 5966C 8014B26C 00004394 */  lhu        $v1, 0x0($v0)
    /* 59670 8014B270 7EFC8434 */  ori        $a0, $a0, (0x16FC7E & 0xFFFF)
    /* 59674 8014B274 1ADB030C */  jal        func_800F6C68
    /* 59678 8014B278 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 5967C 8014B27C 93E0030C */  jal        func_800F824C
    /* 59680 8014B280 01000424 */   addiu     $a0, $zero, 0x1
    /* 59684 8014B284 1000BF8F */  lw         $ra, 0x10($sp)
    /* 59688 8014B288 00000000 */  nop
    /* 5968C 8014B28C 0800E003 */  jr         $ra
    /* 59690 8014B290 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8014B248
