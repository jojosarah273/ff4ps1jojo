nonmatching func_800F6D40, 0x30

glabel func_800F6D40
    /* 5140 800F6D40 6400828F */  lw         $v0, %gp_rel(D_8019ED60)($gp)
    /* 5144 800F6D44 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 5148 800F6D48 1000BFAF */  sw         $ra, 0x10($sp)
    /* 514C 800F6D4C 00004390 */  lbu        $v1, 0x0($v0)
    /* 5150 800F6D50 C1CE030C */  jal        func_800F3B04
    /* 5154 800F6D54 21208300 */   addu      $a0, $a0, $v1
    /* 5158 800F6D58 00004390 */  lbu        $v1, 0x0($v0)
    /* 515C 800F6D5C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 5160 800F6D60 801F013C */  lui        $at, (0x1F8003C8 >> 16)
    /* 5164 800F6D64 C80323A0 */  sb         $v1, (0x1F8003C8 & 0xFFFF)($at)
    /* 5168 800F6D68 0800E003 */  jr         $ra
    /* 516C 800F6D6C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F6D40
