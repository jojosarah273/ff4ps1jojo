nonmatching func_800F89D4, 0x44

glabel func_800F89D4
    /* 6DD4 800F89D4 5C00828F */  lw         $v0, %gp_rel(D_8019ED58)($gp)
    /* 6DD8 800F89D8 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 6DDC 800F89DC 1000B0AF */  sw         $s0, 0x10($sp)
    /* 6DE0 800F89E0 801F103C */  lui        $s0, (0x1F8003C0 >> 16)
    /* 6DE4 800F89E4 1400BFAF */  sw         $ra, 0x14($sp)
    /* 6DE8 800F89E8 00004394 */  lhu        $v1, 0x0($v0)
    /* 6DEC 800F89EC C0031036 */  ori        $s0, $s0, (0x1F8003C0 & 0xFFFF)
    /* 6DF0 800F89F0 C1CE030C */  jal        func_800F3B04
    /* 6DF4 800F89F4 21208300 */   addu      $a0, $a0, $v1
    /* 6DF8 800F89F8 08000492 */  lbu        $a0, 0x8($s0)
    /* 6DFC 800F89FC 1400BF8F */  lw         $ra, 0x14($sp)
    /* 6E00 800F8A00 000044A0 */  sb         $a0, 0x0($v0)
    /* 6E04 800F8A04 09000392 */  lbu        $v1, 0x9($s0)
    /* 6E08 800F8A08 1000B08F */  lw         $s0, 0x10($sp)
    /* 6E0C 800F8A0C 010043A0 */  sb         $v1, 0x1($v0)
    /* 6E10 800F8A10 0800E003 */  jr         $ra
    /* 6E14 800F8A14 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F89D4
