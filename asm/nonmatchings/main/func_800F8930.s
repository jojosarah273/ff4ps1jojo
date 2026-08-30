nonmatching func_800F8930, 0x30

glabel func_800F8930
    /* 6D30 800F8930 6400828F */  lw         $v0, %gp_rel(D_8019ED60)($gp)
    /* 6D34 800F8934 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 6D38 800F8938 1000BFAF */  sw         $ra, 0x10($sp)
    /* 6D3C 800F893C 00004390 */  lbu        $v1, 0x0($v0)
    /* 6D40 800F8940 C1CE030C */  jal        func_800F3B04
    /* 6D44 800F8944 21208300 */   addu      $a0, $a0, $v1
    /* 6D48 800F8948 801F033C */  lui        $v1, (0x1F8003C8 >> 16)
    /* 6D4C 800F894C C8036390 */  lbu        $v1, (0x1F8003C8 & 0xFFFF)($v1)
    /* 6D50 800F8950 1000BF8F */  lw         $ra, 0x10($sp)
    /* 6D54 800F8954 000043A0 */  sb         $v1, 0x0($v0)
    /* 6D58 800F8958 0800E003 */  jr         $ra
    /* 6D5C 800F895C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F8930
