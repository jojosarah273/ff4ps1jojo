nonmatching func_800F5CCC, 0x2C

glabel func_800F5CCC
    /* 40CC 800F5CCC 4400838F */  lw         $v1, %gp_rel(D_8019ED40)($gp)
    /* 40D0 800F5CD0 00000000 */  nop
    /* 40D4 800F5CD4 00006290 */  lbu        $v0, 0x0($v1)
    /* 40D8 800F5CD8 00000000 */  nop
    /* 40DC 800F5CDC FFFF4224 */  addiu      $v0, $v0, -0x1
    /* 40E0 800F5CE0 000062A0 */  sb         $v0, 0x0($v1)
    /* 40E4 800F5CE4 4400848F */  lw         $a0, %gp_rel(D_8019ED40)($gp)
    /* 40E8 800F5CE8 5400838F */  lw         $v1, %gp_rel(D_8019ED50)($gp)
    /* 40EC 800F5CEC 00008290 */  lbu        $v0, 0x0($a0)
    /* 40F0 800F5CF0 0800E003 */  jr         $ra
    /* 40F4 800F5CF4 000062AC */   sw        $v0, 0x0($v1)
endlabel func_800F5CCC
