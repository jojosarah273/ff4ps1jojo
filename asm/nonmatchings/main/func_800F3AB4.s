nonmatching func_800F3AB4, 0x50

glabel func_800F3AB4
    /* 1EB4 800F3AB4 FC7F053C */  lui        $a1, (0x7FFC8000 >> 16)
    /* 1EB8 800F3AB8 4C00828F */  lw         $v0, %gp_rel(D_8019ED48)($gp)
    /* 1EBC 800F3ABC FFFF8430 */  andi       $a0, $a0, 0xFFFF
    /* 1EC0 800F3AC0 00004694 */  lhu        $a2, 0x0($v0)
    /* 1EC4 800F3AC4 FF7F0224 */  addiu      $v0, $zero, 0x7FFF
    /* 1EC8 800F3AC8 2118C400 */  addu       $v1, $a2, $a0
    /* 1ECC 800F3ACC 2A104300 */  slt        $v0, $v0, $v1
    /* 1ED0 800F3AD0 02004014 */  bnez       $v0, .L800F3ADC
    /* 1ED4 800F3AD4 0080A534 */   ori       $a1, $a1, (0x7FFC8000 & 0xFFFF)
    /* 1ED8 800F3AD8 0D80053C */  lui        $a1, (0x800D0000 >> 16)
  .L800F3ADC:
    /* 1EDC 800F3ADC 2118A600 */  addu       $v1, $a1, $a2
    /* 1EE0 800F3AE0 21186400 */  addu       $v1, $v1, $a0
    /* 1EE4 800F3AE4 01006490 */  lbu        $a0, 0x1($v1)
    /* 1EE8 800F3AE8 00006590 */  lbu        $a1, 0x0($v1)
    /* 1EEC 800F3AEC 02006290 */  lbu        $v0, 0x2($v1)
    /* 1EF0 800F3AF0 00220400 */  sll        $a0, $a0, 8
    /* 1EF4 800F3AF4 2528A400 */  or         $a1, $a1, $a0
    /* 1EF8 800F3AF8 00140200 */  sll        $v0, $v0, 16
    /* 1EFC 800F3AFC 0800E003 */  jr         $ra
    /* 1F00 800F3B00 2510A200 */   or        $v0, $a1, $v0
endlabel func_800F3AB4
