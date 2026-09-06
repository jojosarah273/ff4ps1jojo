nonmatching func_800F86A8, 0x48

glabel func_800F86A8
    /* 6AA8 800F86A8 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 6AAC 800F86AC 1000B0AF */  sw         $s0, 0x10($sp)
    /* 6AB0 800F86B0 801F103C */  lui        $s0, (0x1F8003C0 >> 16)
    /* 6AB4 800F86B4 1400BFAF */  sw         $ra, 0x14($sp)
    /* 6AB8 800F86B8 0FCF030C */  jal        func_800F3C3C
    /* 6ABC 800F86BC FFFF8430 */   andi      $a0, $a0, 0xFFFF
    /* 6AC0 800F86C0 C0031036 */  ori        $s0, $s0, (0x1F8003C0 & 0xFFFF)
    /* 6AC4 800F86C4 6000838F */  lw         $v1, %gp_rel(D_8019ED5C)($gp)
    /* 6AC8 800F86C8 08000592 */  lbu        $a1, 0x8($s0)
    /* 6ACC 800F86CC 00006490 */  lbu        $a0, 0x0($v1)
    /* 6AD0 800F86D0 1400BF8F */  lw         $ra, 0x14($sp)
    /* 6AD4 800F86D4 21104400 */  addu       $v0, $v0, $a0
    /* 6AD8 800F86D8 000045A0 */  sb         $a1, 0x0($v0)
    /* 6ADC 800F86DC 09000392 */  lbu        $v1, 0x9($s0)
    /* 6AE0 800F86E0 1000B08F */  lw         $s0, 0x10($sp)
    /* 6AE4 800F86E4 010043A0 */  sb         $v1, 0x1($v0)
    /* 6AE8 800F86E8 0800E003 */  jr         $ra
    /* 6AEC 800F86EC 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F86A8
