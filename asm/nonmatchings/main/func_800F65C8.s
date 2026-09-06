nonmatching func_800F65C8, 0x28

glabel func_800F65C8
    /* 49C8 800F65C8 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 49CC 800F65CC 1000BFAF */  sw         $ra, 0x10($sp)
    /* 49D0 800F65D0 E7CE030C */  jal        func_800F3B9C
    /* 49D4 800F65D4 21280000 */   addu      $a1, $zero, $zero
    /* 49D8 800F65D8 00004390 */  lbu        $v1, 0x0($v0)
    /* 49DC 800F65DC 1000BF8F */  lw         $ra, 0x10($sp)
    /* 49E0 800F65E0 801F013C */  lui        $at, (0x1F8003C8 >> 16)
    /* 49E4 800F65E4 C80323A0 */  sb         $v1, (0x1F8003C8 & 0xFFFF)($at)
    /* 49E8 800F65E8 0800E003 */  jr         $ra
    /* 49EC 800F65EC 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F65C8
