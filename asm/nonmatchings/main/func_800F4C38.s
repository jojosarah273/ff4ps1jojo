nonmatching func_800F4C38, 0x50

glabel func_800F4C38
    /* 3038 800F4C38 5C00828F */  lw         $v0, %gp_rel(D_8019ED58)($gp)
    /* 303C 800F4C3C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 3040 800F4C40 1000BFAF */  sw         $ra, 0x10($sp)
    /* 3044 800F4C44 00004394 */  lhu        $v1, 0x0($v0)
    /* 3048 800F4C48 C1CE030C */  jal        func_800F3B04
    /* 304C 800F4C4C 21208300 */   addu      $a0, $a0, $v1
    /* 3050 800F4C50 4400868F */  lw         $a2, %gp_rel(D_8019ED40)($gp)
    /* 3054 800F4C54 00004490 */  lbu        $a0, 0x0($v0)
    /* 3058 800F4C58 0000C390 */  lbu        $v1, 0x0($a2)
    /* 305C 800F4C5C 00000000 */  nop
    /* 3060 800F4C60 24186400 */  and        $v1, $v1, $a0
    /* 3064 800F4C64 0000C3A0 */  sb         $v1, 0x0($a2)
    /* 3068 800F4C68 4400858F */  lw         $a1, %gp_rel(D_8019ED40)($gp)
    /* 306C 800F4C6C 01004490 */  lbu        $a0, 0x1($v0)
    /* 3070 800F4C70 0100A390 */  lbu        $v1, 0x1($a1)
    /* 3074 800F4C74 1000BF8F */  lw         $ra, 0x10($sp)
    /* 3078 800F4C78 24186400 */  and        $v1, $v1, $a0
    /* 307C 800F4C7C 0100A3A0 */  sb         $v1, 0x1($a1)
    /* 3080 800F4C80 0800E003 */  jr         $ra
    /* 3084 800F4C84 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F4C38
