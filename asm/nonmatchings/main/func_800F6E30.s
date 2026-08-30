nonmatching func_800F6E30, 0x30

glabel func_800F6E30
    /* 5230 800F6E30 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 5234 800F6E34 1000BFAF */  sw         $ra, 0x10($sp)
    /* 5238 800F6E38 9CCE030C */  jal        func_800F3A70
    /* 523C 800F6E3C FFFF8430 */   andi      $a0, $a0, 0xFFFF
    /* 5240 800F6E40 C1CE030C */  jal        func_800F3B04
    /* 5244 800F6E44 21204000 */   addu      $a0, $v0, $zero
    /* 5248 800F6E48 00004390 */  lbu        $v1, 0x0($v0)
    /* 524C 800F6E4C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 5250 800F6E50 801F013C */  lui        $at, (0x1F8003C8 >> 16)
    /* 5254 800F6E54 C80323A0 */  sb         $v1, (0x1F8003C8 & 0xFFFF)($at)
    /* 5258 800F6E58 0800E003 */  jr         $ra
    /* 525C 800F6E5C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F6E30
