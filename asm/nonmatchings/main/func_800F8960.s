nonmatching func_800F8960, 0x30

glabel func_800F8960
    /* 6D60 800F8960 5C00828F */  lw         $v0, %gp_rel(D_8019ED58)($gp)
    /* 6D64 800F8964 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 6D68 800F8968 1000BFAF */  sw         $ra, 0x10($sp)
    /* 6D6C 800F896C 00004394 */  lhu        $v1, 0x0($v0)
    /* 6D70 800F8970 C1CE030C */  jal        func_800F3B04
    /* 6D74 800F8974 21208300 */   addu      $a0, $a0, $v1
    /* 6D78 800F8978 801F033C */  lui        $v1, (0x1F8003C8 >> 16)
    /* 6D7C 800F897C C8036390 */  lbu        $v1, (0x1F8003C8 & 0xFFFF)($v1)
    /* 6D80 800F8980 1000BF8F */  lw         $ra, 0x10($sp)
    /* 6D84 800F8984 000043A0 */  sb         $v1, 0x0($v0)
    /* 6D88 800F8988 0800E003 */  jr         $ra
    /* 6D8C 800F898C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F8960
