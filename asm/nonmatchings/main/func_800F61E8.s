nonmatching func_800F61E8, 0x2C

glabel func_800F61E8
    /* 45E8 800F61E8 4400838F */  lw         $v1, %gp_rel(D_8019ED40)($gp)
    /* 45EC 800F61EC 00000000 */  nop
    /* 45F0 800F61F0 00006290 */  lbu        $v0, 0x0($v1)
    /* 45F4 800F61F4 00000000 */  nop
    /* 45F8 800F61F8 01004224 */  addiu      $v0, $v0, 0x1
    /* 45FC 800F61FC 000062A0 */  sb         $v0, 0x0($v1)
    /* 4600 800F6200 4400848F */  lw         $a0, %gp_rel(D_8019ED40)($gp)
    /* 4604 800F6204 5400838F */  lw         $v1, %gp_rel(D_8019ED50)($gp)
    /* 4608 800F6208 00008290 */  lbu        $v0, 0x0($a0)
    /* 460C 800F620C 0800E003 */  jr         $ra
    /* 4610 800F6210 000062AC */   sw        $v0, 0x0($v1)
endlabel func_800F61E8
