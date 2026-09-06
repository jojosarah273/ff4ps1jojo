nonmatching func_800F4928, 0x38

glabel func_800F4928
    /* 2D28 800F4928 6000828F */  lw         $v0, %gp_rel(D_8019ED5C)($gp)
    /* 2D2C 800F492C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 2D30 800F4930 1000BFAF */  sw         $ra, 0x10($sp)
    /* 2D34 800F4934 00004390 */  lbu        $v1, 0x0($v0)
    /* 2D38 800F4938 C1CE030C */  jal        func_800F3B04
    /* 2D3C 800F493C 21208300 */   addu      $a0, $a0, $v1
    /* 2D40 800F4940 4400858F */  lw         $a1, %gp_rel(D_8019ED40)($gp)
    /* 2D44 800F4944 00004490 */  lbu        $a0, 0x0($v0)
    /* 2D48 800F4948 0000A390 */  lbu        $v1, 0x0($a1)
    /* 2D4C 800F494C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 2D50 800F4950 24186400 */  and        $v1, $v1, $a0
    /* 2D54 800F4954 0000A3A0 */  sb         $v1, 0x0($a1)
    /* 2D58 800F4958 0800E003 */  jr         $ra
    /* 2D5C 800F495C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F4928
