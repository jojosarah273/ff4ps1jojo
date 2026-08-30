nonmatching func_800F4960, 0x38

glabel func_800F4960
    /* 2D60 800F4960 5800828F */  lw         $v0, %gp_rel(D_8019ED54)($gp)
    /* 2D64 800F4964 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 2D68 800F4968 1000BFAF */  sw         $ra, 0x10($sp)
    /* 2D6C 800F496C 00004394 */  lhu        $v1, 0x0($v0)
    /* 2D70 800F4970 C1CE030C */  jal        func_800F3B04
    /* 2D74 800F4974 21208300 */   addu      $a0, $a0, $v1
    /* 2D78 800F4978 4400858F */  lw         $a1, %gp_rel(D_8019ED40)($gp)
    /* 2D7C 800F497C 00004490 */  lbu        $a0, 0x0($v0)
    /* 2D80 800F4980 0000A390 */  lbu        $v1, 0x0($a1)
    /* 2D84 800F4984 1000BF8F */  lw         $ra, 0x10($sp)
    /* 2D88 800F4988 24186400 */  and        $v1, $v1, $a0
    /* 2D8C 800F498C 0000A3A0 */  sb         $v1, 0x0($a1)
    /* 2D90 800F4990 0800E003 */  jr         $ra
    /* 2D94 800F4994 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F4960
