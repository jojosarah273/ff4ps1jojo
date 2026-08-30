nonmatching func_800F78E0, 0x38

glabel func_800F78E0
    /* 5CE0 800F78E0 6C00858F */  lw         $a1, %gp_rel(D_8019ED68)($gp)
    /* 5CE4 800F78E4 4400828F */  lw         $v0, %gp_rel(D_8019ED40)($gp)
    /* 5CE8 800F78E8 0000A390 */  lbu        $v1, 0x0($a1)
    /* 5CEC 800F78EC 00004490 */  lbu        $a0, 0x0($v0)
    /* 5CF0 800F78F0 7D006330 */  andi       $v1, $v1, 0x7D
    /* 5CF4 800F78F4 80008230 */  andi       $v0, $a0, 0x80
    /* 5CF8 800F78F8 25106200 */  or         $v0, $v1, $v0
    /* 5CFC 800F78FC 03008014 */  bnez       $a0, .L800F790C
    /* 5D00 800F7900 FF004330 */   andi      $v1, $v0, 0xFF
    /* 5D04 800F7904 44DE0308 */  j          .L800F7910
    /* 5D08 800F7908 02006234 */   ori       $v0, $v1, 0x2
  .L800F790C:
    /* 5D0C 800F790C FF006230 */  andi       $v0, $v1, 0xFF
  .L800F7910:
    /* 5D10 800F7910 0800E003 */  jr         $ra
    /* 5D14 800F7914 0000A2A0 */   sb        $v0, 0x0($a1)
endlabel func_800F78E0
