nonmatching func_800F64A8, 0x44

glabel func_800F64A8
    /* 48A8 800F64A8 6C00858F */  lw         $a1, %gp_rel(D_8019ED68)($gp)
    /* 48AC 800F64AC 4400838F */  lw         $v1, %gp_rel(D_8019ED40)($gp)
    /* 48B0 800F64B0 0000A490 */  lbu        $a0, 0x0($a1)
    /* 48B4 800F64B4 01006290 */  lbu        $v0, 0x1($v1)
    /* 48B8 800F64B8 4800838F */  lw         $v1, %gp_rel(D_8019ED44)($gp)
    /* 48BC 800F64BC 7D008630 */  andi       $a2, $a0, 0x7D
    /* 48C0 800F64C0 80004230 */  andi       $v0, $v0, 0x80
    /* 48C4 800F64C4 2510C200 */  or         $v0, $a2, $v0
    /* 48C8 800F64C8 00006494 */  lhu        $a0, 0x0($v1)
    /* 48CC 800F64CC 00000000 */  nop
    /* 48D0 800F64D0 03008014 */  bnez       $a0, .L800F64E0
    /* 48D4 800F64D4 FF004630 */   andi      $a2, $v0, 0xFF
    /* 48D8 800F64D8 39D90308 */  j          .L800F64E4
    /* 48DC 800F64DC 0200C234 */   ori       $v0, $a2, 0x2
  .L800F64E0:
    /* 48E0 800F64E0 FF00C230 */  andi       $v0, $a2, 0xFF
  .L800F64E4:
    /* 48E4 800F64E4 0800E003 */  jr         $ra
    /* 48E8 800F64E8 0000A2A0 */   sb        $v0, 0x0($a1)
endlabel func_800F64A8
