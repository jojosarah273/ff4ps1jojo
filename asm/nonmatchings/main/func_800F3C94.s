nonmatching func_800F3C94, 0x30

glabel func_800F3C94
    /* 2094 800F3C94 FC7F053C */  lui        $a1, (0x7FFC8000 >> 16)
    /* 2098 800F3C98 5000828F */  lw         $v0, %gp_rel(D_8019ED4C)($gp)
    /* 209C 800F3C9C 00000000 */  nop
    /* 20A0 800F3CA0 00004394 */  lhu        $v1, 0x0($v0)
    /* 20A4 800F3CA4 FF7F0224 */  addiu      $v0, $zero, 0x7FFF
    /* 20A8 800F3CA8 21186400 */  addu       $v1, $v1, $a0
    /* 20AC 800F3CAC 2A104300 */  slt        $v0, $v0, $v1
    /* 20B0 800F3CB0 02004014 */  bnez       $v0, .L800F3CBC
    /* 20B4 800F3CB4 0080A534 */   ori       $a1, $a1, (0x7FFC8000 & 0xFFFF)
    /* 20B8 800F3CB8 0D80053C */  lui        $a1, (0x800D0000 >> 16)
  .L800F3CBC:
    /* 20BC 800F3CBC 0800E003 */  jr         $ra
    /* 20C0 800F3CC0 2110A000 */   addu      $v0, $a1, $zero
endlabel func_800F3C94
