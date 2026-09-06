nonmatching func_800F4DA0, 0x30

glabel func_800F4DA0
    /* 31A0 800F4DA0 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 31A4 800F4DA4 1000BFAF */  sw         $ra, 0x10($sp)
    /* 31A8 800F4DA8 25CF030C */  jal        func_800F3C94
    /* 31AC 800F4DAC 00000000 */   nop
    /* 31B0 800F4DB0 4400838F */  lw         $v1, %gp_rel(D_8019ED40)($gp)
    /* 31B4 800F4DB4 00004590 */  lbu        $a1, 0x0($v0)
    /* 31B8 800F4DB8 00006490 */  lbu        $a0, 0x0($v1)
    /* 31BC 800F4DBC 1000BF8F */  lw         $ra, 0x10($sp)
    /* 31C0 800F4DC0 24208500 */  and        $a0, $a0, $a1
    /* 31C4 800F4DC4 000064A0 */  sb         $a0, 0x0($v1)
    /* 31C8 800F4DC8 0800E003 */  jr         $ra
    /* 31CC 800F4DCC 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F4DA0
