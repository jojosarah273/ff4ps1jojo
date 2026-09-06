nonmatching func_800F8768, 0x30

glabel func_800F8768
    /* 6B68 800F8768 5800828F */  lw         $v0, %gp_rel(D_8019ED54)($gp)
    /* 6B6C 800F876C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 6B70 800F8770 1000BFAF */  sw         $ra, 0x10($sp)
    /* 6B74 800F8774 00004394 */  lhu        $v1, 0x0($v0)
    /* 6B78 800F8778 C1CE030C */  jal        func_800F3B04
    /* 6B7C 800F877C 21208300 */   addu      $a0, $a0, $v1
    /* 6B80 800F8780 801F033C */  lui        $v1, (0x1F8003C8 >> 16)
    /* 6B84 800F8784 C8036390 */  lbu        $v1, (0x1F8003C8 & 0xFFFF)($v1)
    /* 6B88 800F8788 1000BF8F */  lw         $ra, 0x10($sp)
    /* 6B8C 800F878C 000043A0 */  sb         $v1, 0x0($v0)
    /* 6B90 800F8790 0800E003 */  jr         $ra
    /* 6B94 800F8794 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F8768
