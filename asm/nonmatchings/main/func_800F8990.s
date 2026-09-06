nonmatching func_800F8990, 0x44

glabel func_800F8990
    /* 6D90 800F8990 6400828F */  lw         $v0, %gp_rel(D_8019ED60)($gp)
    /* 6D94 800F8994 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 6D98 800F8998 1000B0AF */  sw         $s0, 0x10($sp)
    /* 6D9C 800F899C 801F103C */  lui        $s0, (0x1F8003C0 >> 16)
    /* 6DA0 800F89A0 1400BFAF */  sw         $ra, 0x14($sp)
    /* 6DA4 800F89A4 00004390 */  lbu        $v1, 0x0($v0)
    /* 6DA8 800F89A8 C0031036 */  ori        $s0, $s0, (0x1F8003C0 & 0xFFFF)
    /* 6DAC 800F89AC C1CE030C */  jal        func_800F3B04
    /* 6DB0 800F89B0 21208300 */   addu      $a0, $a0, $v1
    /* 6DB4 800F89B4 08000492 */  lbu        $a0, 0x8($s0)
    /* 6DB8 800F89B8 1400BF8F */  lw         $ra, 0x14($sp)
    /* 6DBC 800F89BC 000044A0 */  sb         $a0, 0x0($v0)
    /* 6DC0 800F89C0 09000392 */  lbu        $v1, 0x9($s0)
    /* 6DC4 800F89C4 1000B08F */  lw         $s0, 0x10($sp)
    /* 6DC8 800F89C8 010043A0 */  sb         $v1, 0x1($v0)
    /* 6DCC 800F89CC 0800E003 */  jr         $ra
    /* 6DD0 800F89D0 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F8990
