nonmatching func_800F4E18, 0x38

glabel func_800F4E18
    /* 3218 800F4E18 6400828F */  lw         $v0, %gp_rel(D_8019ED60)($gp)
    /* 321C 800F4E1C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 3220 800F4E20 1000BFAF */  sw         $ra, 0x10($sp)
    /* 3224 800F4E24 00004590 */  lbu        $a1, 0x0($v0)
    /* 3228 800F4E28 31CF030C */  jal        func_800F3CC4
    /* 322C 800F4E2C 00000000 */   nop
    /* 3230 800F4E30 4400858F */  lw         $a1, %gp_rel(D_8019ED40)($gp)
    /* 3234 800F4E34 00004490 */  lbu        $a0, 0x0($v0)
    /* 3238 800F4E38 0000A390 */  lbu        $v1, 0x0($a1)
    /* 323C 800F4E3C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 3240 800F4E40 24186400 */  and        $v1, $v1, $a0
    /* 3244 800F4E44 0000A3A0 */  sb         $v1, 0x0($a1)
    /* 3248 800F4E48 0800E003 */  jr         $ra
    /* 324C 800F4E4C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F4E18
