nonmatching func_800F8B98, 0x30

glabel func_800F8B98
    /* 6F98 800F8B98 5C00828F */  lw         $v0, %gp_rel(D_8019ED58)($gp)
    /* 6F9C 800F8B9C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 6FA0 800F8BA0 1000BFAF */  sw         $ra, 0x10($sp)
    /* 6FA4 800F8BA4 00004594 */  lhu        $a1, 0x0($v0)
    /* 6FA8 800F8BA8 31CF030C */  jal        func_800F3CC4
    /* 6FAC 800F8BAC 00000000 */   nop
    /* 6FB0 800F8BB0 801F033C */  lui        $v1, (0x1F8003C8 >> 16)
    /* 6FB4 800F8BB4 C8036390 */  lbu        $v1, (0x1F8003C8 & 0xFFFF)($v1)
    /* 6FB8 800F8BB8 1000BF8F */  lw         $ra, 0x10($sp)
    /* 6FBC 800F8BBC 000043A0 */  sb         $v1, 0x0($v0)
    /* 6FC0 800F8BC0 0800E003 */  jr         $ra
    /* 6FC4 800F8BC4 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F8B98
