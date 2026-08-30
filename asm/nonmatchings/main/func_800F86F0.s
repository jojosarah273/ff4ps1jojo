nonmatching func_800F86F0, 0x48

glabel func_800F86F0
    /* 6AF0 800F86F0 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 6AF4 800F86F4 1000B0AF */  sw         $s0, 0x10($sp)
    /* 6AF8 800F86F8 801F103C */  lui        $s0, (0x1F8003C0 >> 16)
    /* 6AFC 800F86FC 1400BFAF */  sw         $ra, 0x14($sp)
    /* 6B00 800F8700 0FCF030C */  jal        func_800F3C3C
    /* 6B04 800F8704 FFFF8430 */   andi      $a0, $a0, 0xFFFF
    /* 6B08 800F8708 C0031036 */  ori        $s0, $s0, (0x1F8003C0 & 0xFFFF)
    /* 6B0C 800F870C 5800838F */  lw         $v1, %gp_rel(D_8019ED54)($gp)
    /* 6B10 800F8710 08000592 */  lbu        $a1, 0x8($s0)
    /* 6B14 800F8714 00006494 */  lhu        $a0, 0x0($v1)
    /* 6B18 800F8718 1400BF8F */  lw         $ra, 0x14($sp)
    /* 6B1C 800F871C 21104400 */  addu       $v0, $v0, $a0
    /* 6B20 800F8720 000045A0 */  sb         $a1, 0x0($v0)
    /* 6B24 800F8724 09000392 */  lbu        $v1, 0x9($s0)
    /* 6B28 800F8728 1000B08F */  lw         $s0, 0x10($sp)
    /* 6B2C 800F872C 010043A0 */  sb         $v1, 0x1($v0)
    /* 6B30 800F8730 0800E003 */  jr         $ra
    /* 6B34 800F8734 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F86F0
