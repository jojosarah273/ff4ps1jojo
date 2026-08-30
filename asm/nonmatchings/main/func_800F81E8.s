nonmatching func_800F81E8, 0x28

glabel func_800F81E8
    /* 65E8 800F81E8 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 65EC 800F81EC 1000BFAF */  sw         $ra, 0x10($sp)
    /* 65F0 800F81F0 E7CE030C */  jal        func_800F3B9C
    /* 65F4 800F81F4 21280000 */   addu      $a1, $zero, $zero
    /* 65F8 800F81F8 801F033C */  lui        $v1, (0x1F8003C8 >> 16)
    /* 65FC 800F81FC C8036390 */  lbu        $v1, (0x1F8003C8 & 0xFFFF)($v1)
    /* 6600 800F8200 1000BF8F */  lw         $ra, 0x10($sp)
    /* 6604 800F8204 000043A0 */  sb         $v1, 0x0($v0)
    /* 6608 800F8208 0800E003 */  jr         $ra
    /* 660C 800F820C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F81E8
