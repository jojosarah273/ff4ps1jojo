nonmatching func_800F5B2C, 0x20

glabel func_800F5B2C
    /* 3F2C 800F5B2C 00008290 */  lbu        $v0, 0x0($a0)
    /* 3F30 800F5B30 00000000 */  nop
    /* 3F34 800F5B34 FFFF4224 */  addiu      $v0, $v0, -0x1
    /* 3F38 800F5B38 000082A0 */  sb         $v0, 0x0($a0)
    /* 3F3C 800F5B3C 5400838F */  lw         $v1, %gp_rel(D_8019ED50)($gp)
    /* 3F40 800F5B40 FF004230 */  andi       $v0, $v0, 0xFF
    /* 3F44 800F5B44 0800E003 */  jr         $ra
    /* 3F48 800F5B48 000062AC */   sw        $v0, 0x0($v1)
endlabel func_800F5B2C
