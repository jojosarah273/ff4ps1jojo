nonmatching func_800F6DA0, 0x48

glabel func_800F6DA0
    /* 51A0 800F6DA0 6400828F */  lw         $v0, %gp_rel(D_8019ED60)($gp)
    /* 51A4 800F6DA4 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 51A8 800F6DA8 1400BFAF */  sw         $ra, 0x14($sp)
    /* 51AC 800F6DAC 1000B0AF */  sw         $s0, 0x10($sp)
    /* 51B0 800F6DB0 00004390 */  lbu        $v1, 0x0($v0)
    /* 51B4 800F6DB4 801F103C */  lui        $s0, (0x1F8003C0 >> 16)
    /* 51B8 800F6DB8 C1CE030C */  jal        func_800F3B04
    /* 51BC 800F6DBC 21208300 */   addu      $a0, $a0, $v1
    /* 51C0 800F6DC0 00004490 */  lbu        $a0, 0x0($v0)
    /* 51C4 800F6DC4 1400BF8F */  lw         $ra, 0x14($sp)
    /* 51C8 800F6DC8 C0031036 */  ori        $s0, $s0, (0x1F8003C0 & 0xFFFF)
    /* 51CC 800F6DCC 080004A2 */  sb         $a0, 0x8($s0)
    /* 51D0 800F6DD0 01004390 */  lbu        $v1, 0x1($v0)
    /* 51D4 800F6DD4 00000000 */  nop
    /* 51D8 800F6DD8 090003A2 */  sb         $v1, 0x9($s0)
    /* 51DC 800F6DDC 1000B08F */  lw         $s0, 0x10($sp)
    /* 51E0 800F6DE0 0800E003 */  jr         $ra
    /* 51E4 800F6DE4 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F6DA0
