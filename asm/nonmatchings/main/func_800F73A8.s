nonmatching func_800F73A8, 0x38

glabel func_800F73A8
    /* 57A8 800F73A8 6C00858F */  lw         $a1, %gp_rel(D_8019ED68)($gp)
    /* 57AC 800F73AC 6400828F */  lw         $v0, %gp_rel(D_8019ED60)($gp)
    /* 57B0 800F73B0 0000A390 */  lbu        $v1, 0x0($a1)
    /* 57B4 800F73B4 00004490 */  lbu        $a0, 0x0($v0)
    /* 57B8 800F73B8 7D006330 */  andi       $v1, $v1, 0x7D
    /* 57BC 800F73BC 80008230 */  andi       $v0, $a0, 0x80
    /* 57C0 800F73C0 25106200 */  or         $v0, $v1, $v0
    /* 57C4 800F73C4 03008014 */  bnez       $a0, .L800F73D4
    /* 57C8 800F73C8 FF004330 */   andi      $v1, $v0, 0xFF
    /* 57CC 800F73CC F6DC0308 */  j          .L800F73D8
    /* 57D0 800F73D0 02006234 */   ori       $v0, $v1, 0x2
  .L800F73D4:
    /* 57D4 800F73D4 FF006230 */  andi       $v0, $v1, 0xFF
  .L800F73D8:
    /* 57D8 800F73D8 0800E003 */  jr         $ra
    /* 57DC 800F73DC 0000A2A0 */   sb        $v0, 0x0($a1)
endlabel func_800F73A8
