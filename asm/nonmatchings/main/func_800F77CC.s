nonmatching func_800F77CC, 0x40

glabel func_800F77CC
    /* 5BCC 800F77CC 6C00858F */  lw         $a1, %gp_rel(D_8019ED68)($gp)
    /* 5BD0 800F77D0 5400848F */  lw         $a0, %gp_rel(D_8019ED50)($gp)
    /* 5BD4 800F77D4 0000A390 */  lbu        $v1, 0x0($a1)
    /* 5BD8 800F77D8 00008290 */  lbu        $v0, 0x0($a0)
    /* 5BDC 800F77DC 7C006630 */  andi       $a2, $v1, 0x7C
    /* 5BE0 800F77E0 01004230 */  andi       $v0, $v0, 0x1
    /* 5BE4 800F77E4 0000838C */  lw         $v1, 0x0($a0)
    /* 5BE8 800F77E8 00000000 */  nop
    /* 5BEC 800F77EC FEFF6330 */  andi       $v1, $v1, 0xFFFE
    /* 5BF0 800F77F0 03006014 */  bnez       $v1, .L800F7800
    /* 5BF4 800F77F4 2530C200 */   or        $a2, $a2, $v0
    /* 5BF8 800F77F8 01DE0308 */  j          .L800F7804
    /* 5BFC 800F77FC 0200C334 */   ori       $v1, $a2, 0x2
  .L800F7800:
    /* 5C00 800F7800 FF00C330 */  andi       $v1, $a2, 0xFF
  .L800F7804:
    /* 5C04 800F7804 0800E003 */  jr         $ra
    /* 5C08 800F7808 0000A3A0 */   sb        $v1, 0x0($a1)
endlabel func_800F77CC
