nonmatching func_800F5E1C, 0x2C

glabel func_800F5E1C
    /* 421C 800F5E1C 6000838F */  lw         $v1, %gp_rel(D_8019ED5C)($gp)
    /* 4220 800F5E20 00000000 */  nop
    /* 4224 800F5E24 00006290 */  lbu        $v0, 0x0($v1)
    /* 4228 800F5E28 00000000 */  nop
    /* 422C 800F5E2C FFFF4224 */  addiu      $v0, $v0, -0x1
    /* 4230 800F5E30 000062A0 */  sb         $v0, 0x0($v1)
    /* 4234 800F5E34 6000848F */  lw         $a0, %gp_rel(D_8019ED5C)($gp)
    /* 4238 800F5E38 5400838F */  lw         $v1, %gp_rel(D_8019ED50)($gp)
    /* 423C 800F5E3C 00008290 */  lbu        $v0, 0x0($a0)
    /* 4240 800F5E40 0800E003 */  jr         $ra
    /* 4244 800F5E44 000062AC */   sw        $v0, 0x0($v1)
endlabel func_800F5E1C
