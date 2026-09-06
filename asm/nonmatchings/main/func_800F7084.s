nonmatching func_800F7084, 0x38

glabel func_800F7084
    /* 5484 800F7084 6C00858F */  lw         $a1, %gp_rel(D_8019ED68)($gp)
    /* 5488 800F7088 6000828F */  lw         $v0, %gp_rel(D_8019ED5C)($gp)
    /* 548C 800F708C 0000A390 */  lbu        $v1, 0x0($a1)
    /* 5490 800F7090 00004490 */  lbu        $a0, 0x0($v0)
    /* 5494 800F7094 7D006330 */  andi       $v1, $v1, 0x7D
    /* 5498 800F7098 80008230 */  andi       $v0, $a0, 0x80
    /* 549C 800F709C 25106200 */  or         $v0, $v1, $v0
    /* 54A0 800F70A0 03008014 */  bnez       $a0, .L800F70B0
    /* 54A4 800F70A4 FF004330 */   andi      $v1, $v0, 0xFF
    /* 54A8 800F70A8 2DDC0308 */  j          .L800F70B4
    /* 54AC 800F70AC 02006234 */   ori       $v0, $v1, 0x2
  .L800F70B0:
    /* 54B0 800F70B0 FF006230 */  andi       $v0, $v1, 0xFF
  .L800F70B4:
    /* 54B4 800F70B4 0800E003 */  jr         $ra
    /* 54B8 800F70B8 0000A2A0 */   sb        $v0, 0x0($a1)
endlabel func_800F7084
