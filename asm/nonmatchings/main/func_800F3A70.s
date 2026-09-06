nonmatching func_800F3A70, 0x44

glabel func_800F3A70
    /* 1E70 800F3A70 FC7F053C */  lui        $a1, (0x7FFC8000 >> 16)
    /* 1E74 800F3A74 4C00828F */  lw         $v0, %gp_rel(D_8019ED48)($gp)
    /* 1E78 800F3A78 FFFF8430 */  andi       $a0, $a0, 0xFFFF
    /* 1E7C 800F3A7C 00004694 */  lhu        $a2, 0x0($v0)
    /* 1E80 800F3A80 FF7F0224 */  addiu      $v0, $zero, 0x7FFF
    /* 1E84 800F3A84 2118C400 */  addu       $v1, $a2, $a0
    /* 1E88 800F3A88 2A104300 */  slt        $v0, $v0, $v1
    /* 1E8C 800F3A8C 02004014 */  bnez       $v0, .L800F3A98
    /* 1E90 800F3A90 0080A534 */   ori       $a1, $a1, (0x7FFC8000 & 0xFFFF)
    /* 1E94 800F3A94 0D80053C */  lui        $a1, (0x800D0000 >> 16)
  .L800F3A98:
    /* 1E98 800F3A98 2118A600 */  addu       $v1, $a1, $a2
    /* 1E9C 800F3A9C 21186400 */  addu       $v1, $v1, $a0
    /* 1EA0 800F3AA0 01006290 */  lbu        $v0, 0x1($v1)
    /* 1EA4 800F3AA4 00006490 */  lbu        $a0, 0x0($v1)
    /* 1EA8 800F3AA8 00120200 */  sll        $v0, $v0, 8
    /* 1EAC 800F3AAC 0800E003 */  jr         $ra
    /* 1EB0 800F3AB0 25108200 */   or        $v0, $a0, $v0
endlabel func_800F3A70
