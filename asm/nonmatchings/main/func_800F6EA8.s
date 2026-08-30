nonmatching func_800F6EA8, 0x34

glabel func_800F6EA8
    /* 52A8 800F6EA8 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 52AC 800F6EAC 1000BFAF */  sw         $ra, 0x10($sp)
    /* 52B0 800F6EB0 ADCE030C */  jal        func_800F3AB4
    /* 52B4 800F6EB4 FFFF8430 */   andi      $a0, $a0, 0xFFFF
    /* 52B8 800F6EB8 21204000 */  addu       $a0, $v0, $zero
    /* 52BC 800F6EBC E7CE030C */  jal        func_800F3B9C
    /* 52C0 800F6EC0 21280000 */   addu      $a1, $zero, $zero
    /* 52C4 800F6EC4 00004390 */  lbu        $v1, 0x0($v0)
    /* 52C8 800F6EC8 1000BF8F */  lw         $ra, 0x10($sp)
    /* 52CC 800F6ECC 801F013C */  lui        $at, (0x1F8003C8 >> 16)
    /* 52D0 800F6ED0 C80323A0 */  sb         $v1, (0x1F8003C8 & 0xFFFF)($at)
    /* 52D4 800F6ED4 0800E003 */  jr         $ra
    /* 52D8 800F6ED8 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F6EA8
