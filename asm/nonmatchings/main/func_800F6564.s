nonmatching func_800F6564, 0x28

glabel func_800F6564
    /* 4964 800F6564 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 4968 800F6568 1000BFAF */  sw         $ra, 0x10($sp)
    /* 496C 800F656C C1CE030C */  jal        func_800F3B04
    /* 4970 800F6570 00000000 */   nop
    /* 4974 800F6574 00004390 */  lbu        $v1, 0x0($v0)
    /* 4978 800F6578 1000BF8F */  lw         $ra, 0x10($sp)
    /* 497C 800F657C 801F013C */  lui        $at, (0x1F8003C8 >> 16)
    /* 4980 800F6580 C80323A0 */  sb         $v1, (0x1F8003C8 & 0xFFFF)($at)
    /* 4984 800F6584 0800E003 */  jr         $ra
    /* 4988 800F6588 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F6564
