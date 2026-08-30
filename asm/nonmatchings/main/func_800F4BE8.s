nonmatching func_800F4BE8, 0x50

glabel func_800F4BE8
    /* 2FE8 800F4BE8 6400828F */  lw         $v0, %gp_rel(D_8019ED60)($gp)
    /* 2FEC 800F4BEC E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 2FF0 800F4BF0 1000BFAF */  sw         $ra, 0x10($sp)
    /* 2FF4 800F4BF4 00004390 */  lbu        $v1, 0x0($v0)
    /* 2FF8 800F4BF8 C1CE030C */  jal        func_800F3B04
    /* 2FFC 800F4BFC 21208300 */   addu      $a0, $a0, $v1
    /* 3000 800F4C00 4400868F */  lw         $a2, %gp_rel(D_8019ED40)($gp)
    /* 3004 800F4C04 00004490 */  lbu        $a0, 0x0($v0)
    /* 3008 800F4C08 0000C390 */  lbu        $v1, 0x0($a2)
    /* 300C 800F4C0C 00000000 */  nop
    /* 3010 800F4C10 24186400 */  and        $v1, $v1, $a0
    /* 3014 800F4C14 0000C3A0 */  sb         $v1, 0x0($a2)
    /* 3018 800F4C18 4400858F */  lw         $a1, %gp_rel(D_8019ED40)($gp)
    /* 301C 800F4C1C 01004490 */  lbu        $a0, 0x1($v0)
    /* 3020 800F4C20 0100A390 */  lbu        $v1, 0x1($a1)
    /* 3024 800F4C24 1000BF8F */  lw         $ra, 0x10($sp)
    /* 3028 800F4C28 24186400 */  and        $v1, $v1, $a0
    /* 302C 800F4C2C 0100A3A0 */  sb         $v1, 0x1($a1)
    /* 3030 800F4C30 0800E003 */  jr         $ra
    /* 3034 800F4C34 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F4BE8
