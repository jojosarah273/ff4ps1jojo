nonmatching func_800F5EE8, 0x38

glabel func_800F5EE8
    /* 42E8 800F5EE8 6C00858F */  lw         $a1, %gp_rel(D_8019ED68)($gp)
    /* 42EC 800F5EEC 4400828F */  lw         $v0, %gp_rel(D_8019ED40)($gp)
    /* 42F0 800F5EF0 0000A390 */  lbu        $v1, 0x0($a1)
    /* 42F4 800F5EF4 00004490 */  lbu        $a0, 0x0($v0)
    /* 42F8 800F5EF8 7D006330 */  andi       $v1, $v1, 0x7D
    /* 42FC 800F5EFC 80008230 */  andi       $v0, $a0, 0x80
    /* 4300 800F5F00 25106200 */  or         $v0, $v1, $v0
    /* 4304 800F5F04 03008014 */  bnez       $a0, .L800F5F14
    /* 4308 800F5F08 FF004330 */   andi      $v1, $v0, 0xFF
    /* 430C 800F5F0C C6D70308 */  j          .L800F5F18
    /* 4310 800F5F10 02006234 */   ori       $v0, $v1, 0x2
  .L800F5F14:
    /* 4314 800F5F14 FF006230 */  andi       $v0, $v1, 0xFF
  .L800F5F18:
    /* 4318 800F5F18 0800E003 */  jr         $ra
    /* 431C 800F5F1C 0000A2A0 */   sb        $v0, 0x0($a1)
endlabel func_800F5EE8
