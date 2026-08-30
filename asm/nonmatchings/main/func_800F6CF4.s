nonmatching func_800F6CF4, 0x4C

glabel func_800F6CF4
    /* 50F4 800F6CF4 5800828F */  lw         $v0, %gp_rel(D_8019ED54)($gp)
    /* 50F8 800F6CF8 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 50FC 800F6CFC 1000BFAF */  sw         $ra, 0x10($sp)
    /* 5100 800F6D00 00004594 */  lhu        $a1, 0x0($v0)
    /* 5104 800F6D04 E7CE030C */  jal        func_800F3B9C
    /* 5108 800F6D08 00000000 */   nop
    /* 510C 800F6D0C 5800838F */  lw         $v1, %gp_rel(D_8019ED54)($gp)
    /* 5110 800F6D10 801F043C */  lui        $a0, (0x1F8003C0 >> 16)
    /* 5114 800F6D14 00006594 */  lhu        $a1, 0x0($v1)
    /* 5118 800F6D18 1000BF8F */  lw         $ra, 0x10($sp)
    /* 511C 800F6D1C 21104500 */  addu       $v0, $v0, $a1
    /* 5120 800F6D20 00004690 */  lbu        $a2, 0x0($v0)
    /* 5124 800F6D24 C0038434 */  ori        $a0, $a0, (0x1F8003C0 & 0xFFFF)
    /* 5128 800F6D28 080086A0 */  sb         $a2, 0x8($a0)
    /* 512C 800F6D2C 01004390 */  lbu        $v1, 0x1($v0)
    /* 5130 800F6D30 00000000 */  nop
    /* 5134 800F6D34 090083A0 */  sb         $v1, 0x9($a0)
    /* 5138 800F6D38 0800E003 */  jr         $ra
    /* 513C 800F6D3C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F6CF4
