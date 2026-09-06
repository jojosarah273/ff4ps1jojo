nonmatching func_800F76E8, 0x40

glabel func_800F76E8
    /* 5AE8 800F76E8 6C00858F */  lw         $a1, %gp_rel(D_8019ED68)($gp)
    /* 5AEC 800F76EC 5400848F */  lw         $a0, %gp_rel(D_8019ED50)($gp)
    /* 5AF0 800F76F0 0000A390 */  lbu        $v1, 0x0($a1)
    /* 5AF4 800F76F4 00008290 */  lbu        $v0, 0x0($a0)
    /* 5AF8 800F76F8 7C006630 */  andi       $a2, $v1, 0x7C
    /* 5AFC 800F76FC 01004230 */  andi       $v0, $v0, 0x1
    /* 5B00 800F7700 0000838C */  lw         $v1, 0x0($a0)
    /* 5B04 800F7704 00000000 */  nop
    /* 5B08 800F7708 FE006330 */  andi       $v1, $v1, 0xFE
    /* 5B0C 800F770C 03006014 */  bnez       $v1, .L800F771C
    /* 5B10 800F7710 2530C200 */   or        $a2, $a2, $v0
    /* 5B14 800F7714 C8DD0308 */  j          .L800F7720
    /* 5B18 800F7718 0200C334 */   ori       $v1, $a2, 0x2
  .L800F771C:
    /* 5B1C 800F771C FF00C330 */  andi       $v1, $a2, 0xFF
  .L800F7720:
    /* 5B20 800F7720 0800E003 */  jr         $ra
    /* 5B24 800F7724 0000A3A0 */   sb        $v1, 0x0($a1)
endlabel func_800F76E8
