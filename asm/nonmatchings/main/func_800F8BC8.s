nonmatching func_800F8BC8, 0x40

glabel func_800F8BC8
    /* 6FC8 800F8BC8 6400828F */  lw         $v0, %gp_rel(D_8019ED60)($gp)
    /* 6FCC 800F8BCC E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 6FD0 800F8BD0 1000B0AF */  sw         $s0, 0x10($sp)
    /* 6FD4 800F8BD4 801F103C */  lui        $s0, (0x1F8003C0 >> 16)
    /* 6FD8 800F8BD8 1400BFAF */  sw         $ra, 0x14($sp)
    /* 6FDC 800F8BDC 00004590 */  lbu        $a1, 0x0($v0)
    /* 6FE0 800F8BE0 31CF030C */  jal        func_800F3CC4
    /* 6FE4 800F8BE4 C0031036 */   ori       $s0, $s0, (0x1F8003C0 & 0xFFFF)
    /* 6FE8 800F8BE8 08000492 */  lbu        $a0, 0x8($s0)
    /* 6FEC 800F8BEC 1400BF8F */  lw         $ra, 0x14($sp)
    /* 6FF0 800F8BF0 000044A0 */  sb         $a0, 0x0($v0)
    /* 6FF4 800F8BF4 09000392 */  lbu        $v1, 0x9($s0)
    /* 6FF8 800F8BF8 1000B08F */  lw         $s0, 0x10($sp)
    /* 6FFC 800F8BFC 010043A0 */  sb         $v1, 0x1($v0)
    /* 7000 800F8C00 0800E003 */  jr         $ra
    /* 7004 800F8C04 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F8BC8
