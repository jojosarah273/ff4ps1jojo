nonmatching func_800F6048, 0x20

glabel func_800F6048
    /* 4448 800F6048 00008290 */  lbu        $v0, 0x0($a0)
    /* 444C 800F604C 00000000 */  nop
    /* 4450 800F6050 01004224 */  addiu      $v0, $v0, 0x1
    /* 4454 800F6054 000082A0 */  sb         $v0, 0x0($a0)
    /* 4458 800F6058 5400838F */  lw         $v1, %gp_rel(D_8019ED50)($gp)
    /* 445C 800F605C FF004230 */  andi       $v0, $v0, 0xFF
    /* 4460 800F6060 0800E003 */  jr         $ra
    /* 4464 800F6064 000062AC */   sw        $v0, 0x0($v1)
endlabel func_800F6048
