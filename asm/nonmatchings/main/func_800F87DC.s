nonmatching func_800F87DC, 0x44

glabel func_800F87DC
    /* 6BDC 800F87DC 5800828F */  lw         $v0, %gp_rel(D_8019ED54)($gp)
    /* 6BE0 800F87E0 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 6BE4 800F87E4 1000B0AF */  sw         $s0, 0x10($sp)
    /* 6BE8 800F87E8 801F103C */  lui        $s0, (0x1F8003C0 >> 16)
    /* 6BEC 800F87EC 1400BFAF */  sw         $ra, 0x14($sp)
    /* 6BF0 800F87F0 00004394 */  lhu        $v1, 0x0($v0)
    /* 6BF4 800F87F4 C0031036 */  ori        $s0, $s0, (0x1F8003C0 & 0xFFFF)
    /* 6BF8 800F87F8 C1CE030C */  jal        func_800F3B04
    /* 6BFC 800F87FC 21208300 */   addu      $a0, $a0, $v1
    /* 6C00 800F8800 08000492 */  lbu        $a0, 0x8($s0)
    /* 6C04 800F8804 1400BF8F */  lw         $ra, 0x14($sp)
    /* 6C08 800F8808 000044A0 */  sb         $a0, 0x0($v0)
    /* 6C0C 800F880C 09000392 */  lbu        $v1, 0x9($s0)
    /* 6C10 800F8810 1000B08F */  lw         $s0, 0x10($sp)
    /* 6C14 800F8814 010043A0 */  sb         $v1, 0x1($v0)
    /* 6C18 800F8818 0800E003 */  jr         $ra
    /* 6C1C 800F881C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F87DC
