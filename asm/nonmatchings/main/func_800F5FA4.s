nonmatching func_800F5FA4, 0x44

glabel func_800F5FA4
    /* 43A4 800F5FA4 6C00858F */  lw         $a1, %gp_rel(D_8019ED68)($gp)
    /* 43A8 800F5FA8 4400838F */  lw         $v1, %gp_rel(D_8019ED40)($gp)
    /* 43AC 800F5FAC 0000A490 */  lbu        $a0, 0x0($a1)
    /* 43B0 800F5FB0 01006290 */  lbu        $v0, 0x1($v1)
    /* 43B4 800F5FB4 4800838F */  lw         $v1, %gp_rel(D_8019ED44)($gp)
    /* 43B8 800F5FB8 7D008630 */  andi       $a2, $a0, 0x7D
    /* 43BC 800F5FBC 80004230 */  andi       $v0, $v0, 0x80
    /* 43C0 800F5FC0 2510C200 */  or         $v0, $a2, $v0
    /* 43C4 800F5FC4 00006494 */  lhu        $a0, 0x0($v1)
    /* 43C8 800F5FC8 00000000 */  nop
    /* 43CC 800F5FCC 03008014 */  bnez       $a0, .L800F5FDC
    /* 43D0 800F5FD0 FF004630 */   andi      $a2, $v0, 0xFF
    /* 43D4 800F5FD4 F8D70308 */  j          .L800F5FE0
    /* 43D8 800F5FD8 0200C234 */   ori       $v0, $a2, 0x2
  .L800F5FDC:
    /* 43DC 800F5FDC FF00C230 */  andi       $v0, $a2, 0xFF
  .L800F5FE0:
    /* 43E0 800F5FE0 0800E003 */  jr         $ra
    /* 43E4 800F5FE4 0000A2A0 */   sb        $v0, 0x0($a1)
endlabel func_800F5FA4
