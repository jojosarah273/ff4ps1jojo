nonmatching func_800F81B0, 0x38

glabel func_800F81B0
    /* 65B0 800F81B0 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 65B4 800F81B4 1000B0AF */  sw         $s0, 0x10($sp)
    /* 65B8 800F81B8 801F103C */  lui        $s0, (0x1F8003C0 >> 16)
    /* 65BC 800F81BC 1400BFAF */  sw         $ra, 0x14($sp)
    /* 65C0 800F81C0 C1CE030C */  jal        func_800F3B04
    /* 65C4 800F81C4 C0031036 */   ori       $s0, $s0, (0x1F8003C0 & 0xFFFF)
    /* 65C8 800F81C8 08000492 */  lbu        $a0, 0x8($s0)
    /* 65CC 800F81CC 1400BF8F */  lw         $ra, 0x14($sp)
    /* 65D0 800F81D0 000044A0 */  sb         $a0, 0x0($v0)
    /* 65D4 800F81D4 09000392 */  lbu        $v1, 0x9($s0)
    /* 65D8 800F81D8 1000B08F */  lw         $s0, 0x10($sp)
    /* 65DC 800F81DC 010043A0 */  sb         $v1, 0x1($v0)
    /* 65E0 800F81E0 0800E003 */  jr         $ra
    /* 65E4 800F81E4 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F81B0
