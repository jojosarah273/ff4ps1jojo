nonmatching func_800F8738, 0x30

glabel func_800F8738
    /* 6B38 800F8738 6000828F */  lw         $v0, %gp_rel(D_8019ED5C)($gp)
    /* 6B3C 800F873C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 6B40 800F8740 1000BFAF */  sw         $ra, 0x10($sp)
    /* 6B44 800F8744 00004390 */  lbu        $v1, 0x0($v0)
    /* 6B48 800F8748 C1CE030C */  jal        func_800F3B04
    /* 6B4C 800F874C 21208300 */   addu      $a0, $a0, $v1
    /* 6B50 800F8750 801F033C */  lui        $v1, (0x1F8003C8 >> 16)
    /* 6B54 800F8754 C8036390 */  lbu        $v1, (0x1F8003C8 & 0xFFFF)($v1)
    /* 6B58 800F8758 1000BF8F */  lw         $ra, 0x10($sp)
    /* 6B5C 800F875C 000043A0 */  sb         $v1, 0x0($v0)
    /* 6B60 800F8760 0800E003 */  jr         $ra
    /* 6B64 800F8764 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F8738
