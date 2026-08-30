nonmatching func_800F8378, 0x50

glabel func_800F8378
    /* 6778 800F8378 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 677C 800F837C 1000B0AF */  sw         $s0, 0x10($sp)
    /* 6780 800F8380 801F103C */  lui        $s0, (0x1F8003C0 >> 16)
    /* 6784 800F8384 1400BFAF */  sw         $ra, 0x14($sp)
    /* 6788 800F8388 9CCE030C */  jal        func_800F3A70
    /* 678C 800F838C FFFF8430 */   andi      $a0, $a0, 0xFFFF
    /* 6790 800F8390 C1CE030C */  jal        func_800F3B04
    /* 6794 800F8394 21204000 */   addu      $a0, $v0, $zero
    /* 6798 800F8398 C0031036 */  ori        $s0, $s0, (0x1F8003C0 & 0xFFFF)
    /* 679C 800F839C 5C00838F */  lw         $v1, %gp_rel(D_8019ED58)($gp)
    /* 67A0 800F83A0 08000592 */  lbu        $a1, 0x8($s0)
    /* 67A4 800F83A4 00006494 */  lhu        $a0, 0x0($v1)
    /* 67A8 800F83A8 1400BF8F */  lw         $ra, 0x14($sp)
    /* 67AC 800F83AC 21104400 */  addu       $v0, $v0, $a0
    /* 67B0 800F83B0 000045A0 */  sb         $a1, 0x0($v0)
    /* 67B4 800F83B4 09000392 */  lbu        $v1, 0x9($s0)
    /* 67B8 800F83B8 1000B08F */  lw         $s0, 0x10($sp)
    /* 67BC 800F83BC 010043A0 */  sb         $v1, 0x1($v0)
    /* 67C0 800F83C0 0800E003 */  jr         $ra
    /* 67C4 800F83C4 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F8378
