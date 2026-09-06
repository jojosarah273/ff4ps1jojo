nonmatching func_800F4D10, 0x3C

glabel func_800F4D10
    /* 3110 800F4D10 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 3114 800F4D14 1000BFAF */  sw         $ra, 0x10($sp)
    /* 3118 800F4D18 ADCE030C */  jal        func_800F3AB4
    /* 311C 800F4D1C FFFF8430 */   andi      $a0, $a0, 0xFFFF
    /* 3120 800F4D20 21204000 */  addu       $a0, $v0, $zero
    /* 3124 800F4D24 E7CE030C */  jal        func_800F3B9C
    /* 3128 800F4D28 21280000 */   addu      $a1, $zero, $zero
    /* 312C 800F4D2C 4400838F */  lw         $v1, %gp_rel(D_8019ED40)($gp)
    /* 3130 800F4D30 00004590 */  lbu        $a1, 0x0($v0)
    /* 3134 800F4D34 00006490 */  lbu        $a0, 0x0($v1)
    /* 3138 800F4D38 1000BF8F */  lw         $ra, 0x10($sp)
    /* 313C 800F4D3C 24208500 */  and        $a0, $a0, $a1
    /* 3140 800F4D40 000064A0 */  sb         $a0, 0x0($v1)
    /* 3144 800F4D44 0800E003 */  jr         $ra
    /* 3148 800F4D48 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F4D10
