nonmatching func_800F5D24, 0x34

glabel func_800F5D24
    /* 4124 800F5D24 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 4128 800F5D28 1000BFAF */  sw         $ra, 0x10($sp)
    /* 412C 800F5D2C C1CE030C */  jal        func_800F3B04
    /* 4130 800F5D30 00000000 */   nop
    /* 4134 800F5D34 00004390 */  lbu        $v1, 0x0($v0)
    /* 4138 800F5D38 1000BF8F */  lw         $ra, 0x10($sp)
    /* 413C 800F5D3C FFFF6324 */  addiu      $v1, $v1, -0x1
    /* 4140 800F5D40 000043A0 */  sb         $v1, 0x0($v0)
    /* 4144 800F5D44 5400848F */  lw         $a0, %gp_rel(D_8019ED50)($gp)
    /* 4148 800F5D48 FF006330 */  andi       $v1, $v1, 0xFF
    /* 414C 800F5D4C 000083AC */  sw         $v1, 0x0($a0)
    /* 4150 800F5D50 0800E003 */  jr         $ra
    /* 4154 800F5D54 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F5D24
