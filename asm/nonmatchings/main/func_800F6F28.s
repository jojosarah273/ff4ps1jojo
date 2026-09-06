nonmatching func_800F6F28, 0x28

glabel func_800F6F28
    /* 5328 800F6F28 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 532C 800F6F2C 1000BFAF */  sw         $ra, 0x10($sp)
    /* 5330 800F6F30 25CF030C */  jal        func_800F3C94
    /* 5334 800F6F34 00000000 */   nop
    /* 5338 800F6F38 00004390 */  lbu        $v1, 0x0($v0)
    /* 533C 800F6F3C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 5340 800F6F40 801F013C */  lui        $at, (0x1F8003C8 >> 16)
    /* 5344 800F6F44 C80323A0 */  sb         $v1, (0x1F8003C8 & 0xFFFF)($at)
    /* 5348 800F6F48 0800E003 */  jr         $ra
    /* 534C 800F6F4C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F6F28
