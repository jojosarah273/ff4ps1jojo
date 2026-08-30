nonmatching func_800F8A8C, 0x34

glabel func_800F8A8C
    /* 6E8C 800F8A8C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 6E90 800F8A90 1000BFAF */  sw         $ra, 0x10($sp)
    /* 6E94 800F8A94 ADCE030C */  jal        func_800F3AB4
    /* 6E98 800F8A98 FFFF8430 */   andi      $a0, $a0, 0xFFFF
    /* 6E9C 800F8A9C 21204000 */  addu       $a0, $v0, $zero
    /* 6EA0 800F8AA0 E7CE030C */  jal        func_800F3B9C
    /* 6EA4 800F8AA4 21280000 */   addu      $a1, $zero, $zero
    /* 6EA8 800F8AA8 801F033C */  lui        $v1, (0x1F8003C8 >> 16)
    /* 6EAC 800F8AAC C8036390 */  lbu        $v1, (0x1F8003C8 & 0xFFFF)($v1)
    /* 6EB0 800F8AB0 1000BF8F */  lw         $ra, 0x10($sp)
    /* 6EB4 800F8AB4 000043A0 */  sb         $v1, 0x0($v0)
    /* 6EB8 800F8AB8 0800E003 */  jr         $ra
    /* 6EBC 800F8ABC 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F8A8C
