nonmatching func_800F8B08, 0x28

glabel func_800F8B08
    /* 6F08 800F8B08 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 6F0C 800F8B0C 1000BFAF */  sw         $ra, 0x10($sp)
    /* 6F10 800F8B10 25CF030C */  jal        func_800F3C94
    /* 6F14 800F8B14 00000000 */   nop
    /* 6F18 800F8B18 801F033C */  lui        $v1, (0x1F8003C8 >> 16)
    /* 6F1C 800F8B1C C8036390 */  lbu        $v1, (0x1F8003C8 & 0xFFFF)($v1)
    /* 6F20 800F8B20 1000BF8F */  lw         $ra, 0x10($sp)
    /* 6F24 800F8B24 000043A0 */  sb         $v1, 0x0($v0)
    /* 6F28 800F8B28 0800E003 */  jr         $ra
    /* 6F2C 800F8B2C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F8B08
