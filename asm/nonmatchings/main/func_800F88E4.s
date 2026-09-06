nonmatching func_800F88E4, 0x4C

glabel func_800F88E4
    /* 6CE4 800F88E4 5800828F */  lw         $v0, %gp_rel(D_8019ED54)($gp)
    /* 6CE8 800F88E8 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 6CEC 800F88EC 1400BFAF */  sw         $ra, 0x14($sp)
    /* 6CF0 800F88F0 1000B0AF */  sw         $s0, 0x10($sp)
    /* 6CF4 800F88F4 00004594 */  lhu        $a1, 0x0($v0)
    /* 6CF8 800F88F8 E7CE030C */  jal        func_800F3B9C
    /* 6CFC 800F88FC 801F103C */   lui       $s0, (0x1F8003C0 >> 16)
    /* 6D00 800F8900 C0031036 */  ori        $s0, $s0, (0x1F8003C0 & 0xFFFF)
    /* 6D04 800F8904 5800838F */  lw         $v1, %gp_rel(D_8019ED54)($gp)
    /* 6D08 800F8908 08000592 */  lbu        $a1, 0x8($s0)
    /* 6D0C 800F890C 00006494 */  lhu        $a0, 0x0($v1)
    /* 6D10 800F8910 1400BF8F */  lw         $ra, 0x14($sp)
    /* 6D14 800F8914 21104400 */  addu       $v0, $v0, $a0
    /* 6D18 800F8918 000045A0 */  sb         $a1, 0x0($v0)
    /* 6D1C 800F891C 09000392 */  lbu        $v1, 0x9($s0)
    /* 6D20 800F8920 1000B08F */  lw         $s0, 0x10($sp)
    /* 6D24 800F8924 010043A0 */  sb         $v1, 0x1($v0)
    /* 6D28 800F8928 0800E003 */  jr         $ra
    /* 6D2C 800F892C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F88E4
