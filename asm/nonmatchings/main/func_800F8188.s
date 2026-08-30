nonmatching func_800F8188, 0x28

glabel func_800F8188
    /* 6588 800F8188 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 658C 800F818C 1000BFAF */  sw         $ra, 0x10($sp)
    /* 6590 800F8190 C1CE030C */  jal        func_800F3B04
    /* 6594 800F8194 00000000 */   nop
    /* 6598 800F8198 801F033C */  lui        $v1, (0x1F8003C8 >> 16)
    /* 659C 800F819C C8036390 */  lbu        $v1, (0x1F8003C8 & 0xFFFF)($v1)
    /* 65A0 800F81A0 1000BF8F */  lw         $ra, 0x10($sp)
    /* 65A4 800F81A4 000043A0 */  sb         $v1, 0x0($v0)
    /* 65A8 800F81A8 0800E003 */  jr         $ra
    /* 65AC 800F81AC 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F8188
