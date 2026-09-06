nonmatching func_800F799C, 0x44

glabel func_800F799C
    /* 5D9C 800F799C 6C00858F */  lw         $a1, %gp_rel(D_8019ED68)($gp)
    /* 5DA0 800F79A0 4400838F */  lw         $v1, %gp_rel(D_8019ED40)($gp)
    /* 5DA4 800F79A4 0000A490 */  lbu        $a0, 0x0($a1)
    /* 5DA8 800F79A8 01006290 */  lbu        $v0, 0x1($v1)
    /* 5DAC 800F79AC 4800838F */  lw         $v1, %gp_rel(D_8019ED44)($gp)
    /* 5DB0 800F79B0 7D008630 */  andi       $a2, $a0, 0x7D
    /* 5DB4 800F79B4 80004230 */  andi       $v0, $v0, 0x80
    /* 5DB8 800F79B8 2510C200 */  or         $v0, $a2, $v0
    /* 5DBC 800F79BC 00006494 */  lhu        $a0, 0x0($v1)
    /* 5DC0 800F79C0 00000000 */  nop
    /* 5DC4 800F79C4 03008014 */  bnez       $a0, .L800F79D4
    /* 5DC8 800F79C8 FF004630 */   andi      $a2, $v0, 0xFF
    /* 5DCC 800F79CC 76DE0308 */  j          .L800F79D8
    /* 5DD0 800F79D0 0200C234 */   ori       $v0, $a2, 0x2
  .L800F79D4:
    /* 5DD4 800F79D4 FF00C230 */  andi       $v0, $a2, 0xFF
  .L800F79D8:
    /* 5DD8 800F79D8 0800E003 */  jr         $ra
    /* 5DDC 800F79DC 0000A2A0 */   sb        $v0, 0x0($a1)
endlabel func_800F799C
