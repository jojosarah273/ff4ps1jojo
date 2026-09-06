nonmatching func_800F8A48, 0x44

glabel func_800F8A48
    /* 6E48 800F8A48 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 6E4C 800F8A4C 1000B0AF */  sw         $s0, 0x10($sp)
    /* 6E50 800F8A50 801F103C */  lui        $s0, (0x1F8003C0 >> 16)
    /* 6E54 800F8A54 C0031036 */  ori        $s0, $s0, (0x1F8003C0 & 0xFFFF)
    /* 6E58 800F8A58 1400BFAF */  sw         $ra, 0x14($sp)
    /* 6E5C 800F8A5C 9CCE030C */  jal        func_800F3A70
    /* 6E60 800F8A60 FFFF8430 */   andi      $a0, $a0, 0xFFFF
    /* 6E64 800F8A64 C1CE030C */  jal        func_800F3B04
    /* 6E68 800F8A68 21204000 */   addu      $a0, $v0, $zero
    /* 6E6C 800F8A6C 08000492 */  lbu        $a0, 0x8($s0)
    /* 6E70 800F8A70 1400BF8F */  lw         $ra, 0x14($sp)
    /* 6E74 800F8A74 000044A0 */  sb         $a0, 0x0($v0)
    /* 6E78 800F8A78 09000392 */  lbu        $v1, 0x9($s0)
    /* 6E7C 800F8A7C 1000B08F */  lw         $s0, 0x10($sp)
    /* 6E80 800F8A80 010043A0 */  sb         $v1, 0x1($v0)
    /* 6E84 800F8A84 0800E003 */  jr         $ra
    /* 6E88 800F8A88 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F8A48
