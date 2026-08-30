nonmatching func_800F41A4, 0x44

glabel func_800F41A4
    /* 25A4 800F41A4 6C00858F */  lw         $a1, %gp_rel(D_8019ED68)($gp)
    /* 25A8 800F41A8 4400838F */  lw         $v1, %gp_rel(D_8019ED40)($gp)
    /* 25AC 800F41AC 0000A490 */  lbu        $a0, 0x0($a1)
    /* 25B0 800F41B0 01006290 */  lbu        $v0, 0x1($v1)
    /* 25B4 800F41B4 4800838F */  lw         $v1, %gp_rel(D_8019ED44)($gp)
    /* 25B8 800F41B8 7D008630 */  andi       $a2, $a0, 0x7D
    /* 25BC 800F41BC 80004230 */  andi       $v0, $v0, 0x80
    /* 25C0 800F41C0 2510C200 */  or         $v0, $a2, $v0
    /* 25C4 800F41C4 00006494 */  lhu        $a0, 0x0($v1)
    /* 25C8 800F41C8 00000000 */  nop
    /* 25CC 800F41CC 03008014 */  bnez       $a0, .L800F41DC
    /* 25D0 800F41D0 FF004630 */   andi      $a2, $v0, 0xFF
    /* 25D4 800F41D4 78D00308 */  j          .L800F41E0
    /* 25D8 800F41D8 0200C234 */   ori       $v0, $a2, 0x2
  .L800F41DC:
    /* 25DC 800F41DC FF00C230 */  andi       $v0, $a2, 0xFF
  .L800F41E0:
    /* 25E0 800F41E0 0800E003 */  jr         $ra
    /* 25E4 800F41E4 0000A2A0 */   sb        $v0, 0x0($a1)
endlabel func_800F41A4
