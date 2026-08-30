nonmatching func_800F5B4C, 0x40

glabel func_800F5B4C
    /* 3F4C 800F5B4C 6C00858F */  lw         $a1, %gp_rel(D_8019ED68)($gp)
    /* 3F50 800F5B50 5400848F */  lw         $a0, %gp_rel(D_8019ED50)($gp)
    /* 3F54 800F5B54 0000A390 */  lbu        $v1, 0x0($a1)
    /* 3F58 800F5B58 00008290 */  lbu        $v0, 0x0($a0)
    /* 3F5C 800F5B5C 7D006630 */  andi       $a2, $v1, 0x7D
    /* 3F60 800F5B60 80004230 */  andi       $v0, $v0, 0x80
    /* 3F64 800F5B64 2510C200 */  or         $v0, $a2, $v0
    /* 3F68 800F5B68 00008390 */  lbu        $v1, 0x0($a0)
    /* 3F6C 800F5B6C 00000000 */  nop
    /* 3F70 800F5B70 03006014 */  bnez       $v1, .L800F5B80
    /* 3F74 800F5B74 FF004630 */   andi      $a2, $v0, 0xFF
    /* 3F78 800F5B78 E1D60308 */  j          .L800F5B84
    /* 3F7C 800F5B7C 0200C234 */   ori       $v0, $a2, 0x2
  .L800F5B80:
    /* 3F80 800F5B80 FF00C230 */  andi       $v0, $a2, 0xFF
  .L800F5B84:
    /* 3F84 800F5B84 0800E003 */  jr         $ra
    /* 3F88 800F5B88 0000A2A0 */   sb        $v0, 0x0($a1)
endlabel func_800F5B4C
