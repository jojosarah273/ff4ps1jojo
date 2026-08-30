nonmatching func_800F5E74, 0x2C

glabel func_800F5E74
    /* 4274 800F5E74 6400838F */  lw         $v1, %gp_rel(D_8019ED60)($gp)
    /* 4278 800F5E78 00000000 */  nop
    /* 427C 800F5E7C 00006290 */  lbu        $v0, 0x0($v1)
    /* 4280 800F5E80 00000000 */  nop
    /* 4284 800F5E84 FFFF4224 */  addiu      $v0, $v0, -0x1
    /* 4288 800F5E88 000062A0 */  sb         $v0, 0x0($v1)
    /* 428C 800F5E8C 6400848F */  lw         $a0, %gp_rel(D_8019ED60)($gp)
    /* 4290 800F5E90 5400838F */  lw         $v1, %gp_rel(D_8019ED50)($gp)
    /* 4294 800F5E94 00008290 */  lbu        $v0, 0x0($a0)
    /* 4298 800F5E98 0800E003 */  jr         $ra
    /* 429C 800F5E9C 000062AC */   sw        $v0, 0x0($v1)
endlabel func_800F5E74
