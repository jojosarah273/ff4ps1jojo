nonmatching func_800F6AB0, 0x44

glabel func_800F6AB0
    /* 4EB0 800F6AB0 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 4EB4 800F6AB4 1000BFAF */  sw         $ra, 0x10($sp)
    /* 4EB8 800F6AB8 0FCF030C */  jal        func_800F3C3C
    /* 4EBC 800F6ABC FFFF8430 */   andi      $a0, $a0, 0xFFFF
    /* 4EC0 800F6AC0 6000838F */  lw         $v1, %gp_rel(D_8019ED5C)($gp)
    /* 4EC4 800F6AC4 801F043C */  lui        $a0, (0x1F8003C0 >> 16)
    /* 4EC8 800F6AC8 00006590 */  lbu        $a1, 0x0($v1)
    /* 4ECC 800F6ACC 1000BF8F */  lw         $ra, 0x10($sp)
    /* 4ED0 800F6AD0 21104500 */  addu       $v0, $v0, $a1
    /* 4ED4 800F6AD4 00004690 */  lbu        $a2, 0x0($v0)
    /* 4ED8 800F6AD8 C0038434 */  ori        $a0, $a0, (0x1F8003C0 & 0xFFFF)
    /* 4EDC 800F6ADC 080086A0 */  sb         $a2, 0x8($a0)
    /* 4EE0 800F6AE0 01004390 */  lbu        $v1, 0x1($v0)
    /* 4EE4 800F6AE4 00000000 */  nop
    /* 4EE8 800F6AE8 090083A0 */  sb         $v1, 0x9($a0)
    /* 4EEC 800F6AEC 0800E003 */  jr         $ra
    /* 4EF0 800F6AF0 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F6AB0
