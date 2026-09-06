nonmatching func_800F6B68, 0x30

glabel func_800F6B68
    /* 4F68 800F6B68 5800828F */  lw         $v0, %gp_rel(D_8019ED54)($gp)
    /* 4F6C 800F6B6C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 4F70 800F6B70 1000BFAF */  sw         $ra, 0x10($sp)
    /* 4F74 800F6B74 00004394 */  lhu        $v1, 0x0($v0)
    /* 4F78 800F6B78 C1CE030C */  jal        func_800F3B04
    /* 4F7C 800F6B7C 21208300 */   addu      $a0, $a0, $v1
    /* 4F80 800F6B80 00004390 */  lbu        $v1, 0x0($v0)
    /* 4F84 800F6B84 1000BF8F */  lw         $ra, 0x10($sp)
    /* 4F88 800F6B88 801F013C */  lui        $at, (0x1F8003C8 >> 16)
    /* 4F8C 800F6B8C C80323A0 */  sb         $v1, (0x1F8003C8 & 0xFFFF)($at)
    /* 4F90 800F6B90 0800E003 */  jr         $ra
    /* 4F94 800F6B94 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F6B68
