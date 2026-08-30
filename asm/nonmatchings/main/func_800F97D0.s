nonmatching func_800F97D0, 0x50

glabel func_800F97D0
    /* 7BD0 800F97D0 4400858F */  lw         $a1, %gp_rel(D_8019ED40)($gp)
    /* 7BD4 800F97D4 00008290 */  lbu        $v0, 0x0($a0)
    /* 7BD8 800F97D8 0000A390 */  lbu        $v1, 0x0($a1)
    /* 7BDC 800F97DC 00000000 */  nop
    /* 7BE0 800F97E0 25104300 */  or         $v0, $v0, $v1
    /* 7BE4 800F97E4 000082A0 */  sb         $v0, 0x0($a0)
    /* 7BE8 800F97E8 6C00838F */  lw         $v1, %gp_rel(D_8019ED68)($gp)
    /* 7BEC 800F97EC 00000000 */  nop
    /* 7BF0 800F97F0 00006290 */  lbu        $v0, 0x0($v1)
    /* 7BF4 800F97F4 00000000 */  nop
    /* 7BF8 800F97F8 FD004230 */  andi       $v0, $v0, 0xFD
    /* 7BFC 800F97FC 000062A0 */  sb         $v0, 0x0($v1)
    /* 7C00 800F9800 6C00858F */  lw         $a1, %gp_rel(D_8019ED68)($gp)
    /* 7C04 800F9804 00008290 */  lbu        $v0, 0x0($a0)
    /* 7C08 800F9808 0000A390 */  lbu        $v1, 0x0($a1)
    /* 7C0C 800F980C 02004014 */  bnez       $v0, .L800F9818
    /* 7C10 800F9810 00000000 */   nop
    /* 7C14 800F9814 02006334 */  ori        $v1, $v1, 0x2
  .L800F9818:
    /* 7C18 800F9818 0800E003 */  jr         $ra
    /* 7C1C 800F981C 0000A3A0 */   sb        $v1, 0x0($a1)
endlabel func_800F97D0
