nonmatching func_800F6D70, 0x30

glabel func_800F6D70
    /* 5170 800F6D70 5C00828F */  lw         $v0, %gp_rel(D_8019ED58)($gp)
    /* 5174 800F6D74 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 5178 800F6D78 1000BFAF */  sw         $ra, 0x10($sp)
    /* 517C 800F6D7C 00004394 */  lhu        $v1, 0x0($v0)
    /* 5180 800F6D80 C1CE030C */  jal        func_800F3B04
    /* 5184 800F6D84 21208300 */   addu      $a0, $a0, $v1
    /* 5188 800F6D88 00004390 */  lbu        $v1, 0x0($v0)
    /* 518C 800F6D8C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 5190 800F6D90 801F013C */  lui        $at, (0x1F8003C8 >> 16)
    /* 5194 800F6D94 C80323A0 */  sb         $v1, (0x1F8003C8 & 0xFFFF)($at)
    /* 5198 800F6D98 0800E003 */  jr         $ra
    /* 519C 800F6D9C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F6D70
