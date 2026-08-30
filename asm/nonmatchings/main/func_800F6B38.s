nonmatching func_800F6B38, 0x30

glabel func_800F6B38
    /* 4F38 800F6B38 6000828F */  lw         $v0, %gp_rel(D_8019ED5C)($gp)
    /* 4F3C 800F6B3C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 4F40 800F6B40 1000BFAF */  sw         $ra, 0x10($sp)
    /* 4F44 800F6B44 00004390 */  lbu        $v1, 0x0($v0)
    /* 4F48 800F6B48 C1CE030C */  jal        func_800F3B04
    /* 4F4C 800F6B4C 21208300 */   addu      $a0, $a0, $v1
    /* 4F50 800F6B50 00004390 */  lbu        $v1, 0x0($v0)
    /* 4F54 800F6B54 1000BF8F */  lw         $ra, 0x10($sp)
    /* 4F58 800F6B58 801F013C */  lui        $at, (0x1F8003C8 >> 16)
    /* 4F5C 800F6B5C C80323A0 */  sb         $v1, (0x1F8003C8 & 0xFFFF)($at)
    /* 4F60 800F6B60 0800E003 */  jr         $ra
    /* 4F64 800F6B64 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F6B38
