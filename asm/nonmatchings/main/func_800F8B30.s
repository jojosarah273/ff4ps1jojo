nonmatching func_800F8B30, 0x38

glabel func_800F8B30
    /* 6F30 800F8B30 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 6F34 800F8B34 1000B0AF */  sw         $s0, 0x10($sp)
    /* 6F38 800F8B38 801F103C */  lui        $s0, (0x1F8003C0 >> 16)
    /* 6F3C 800F8B3C 1400BFAF */  sw         $ra, 0x14($sp)
    /* 6F40 800F8B40 25CF030C */  jal        func_800F3C94
    /* 6F44 800F8B44 C0031036 */   ori       $s0, $s0, (0x1F8003C0 & 0xFFFF)
    /* 6F48 800F8B48 08000492 */  lbu        $a0, 0x8($s0)
    /* 6F4C 800F8B4C 1400BF8F */  lw         $ra, 0x14($sp)
    /* 6F50 800F8B50 000044A0 */  sb         $a0, 0x0($v0)
    /* 6F54 800F8B54 09000392 */  lbu        $v1, 0x9($s0)
    /* 6F58 800F8B58 1000B08F */  lw         $s0, 0x10($sp)
    /* 6F5C 800F8B5C 010043A0 */  sb         $v1, 0x1($v0)
    /* 6F60 800F8B60 0800E003 */  jr         $ra
    /* 6F64 800F8B64 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F8B30
