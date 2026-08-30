nonmatching func_800F93DC, 0x34

glabel func_800F93DC
    /* 77DC 800F93DC 5000828F */  lw         $v0, %gp_rel(D_8019ED4C)($gp)
    /* 77E0 800F93E0 4400858F */  lw         $a1, %gp_rel(D_8019ED40)($gp)
    /* 77E4 800F93E4 00004494 */  lhu        $a0, 0x0($v0)
    /* 77E8 800F93E8 0D80023C */  lui        $v0, %hi(D_800D0000)
    /* 77EC 800F93EC 01008424 */  addiu      $a0, $a0, 0x1
    /* 77F0 800F93F0 FFFF8430 */  andi       $a0, $a0, 0xFFFF
    /* 77F4 800F93F4 21108200 */  addu       $v0, $a0, $v0
    /* 77F8 800F93F8 00004390 */  lbu        $v1, %lo(D_800D0000)($v0)
    /* 77FC 800F93FC 00000000 */  nop
    /* 7800 800F9400 0000A3A0 */  sb         $v1, 0x0($a1)
    /* 7804 800F9404 5000828F */  lw         $v0, %gp_rel(D_8019ED4C)($gp)
    /* 7808 800F9408 0800E003 */  jr         $ra
    /* 780C 800F940C 000044A4 */   sh        $a0, 0x0($v0)
endlabel func_800F93DC
