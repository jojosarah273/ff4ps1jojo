nonmatching func_800F8B68, 0x30

glabel func_800F8B68
    /* 6F68 800F8B68 6400828F */  lw         $v0, %gp_rel(D_8019ED60)($gp)
    /* 6F6C 800F8B6C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 6F70 800F8B70 1000BFAF */  sw         $ra, 0x10($sp)
    /* 6F74 800F8B74 00004590 */  lbu        $a1, 0x0($v0)
    /* 6F78 800F8B78 31CF030C */  jal        func_800F3CC4
    /* 6F7C 800F8B7C 00000000 */   nop
    /* 6F80 800F8B80 801F033C */  lui        $v1, (0x1F8003C8 >> 16)
    /* 6F84 800F8B84 C8036390 */  lbu        $v1, (0x1F8003C8 & 0xFFFF)($v1)
    /* 6F88 800F8B88 1000BF8F */  lw         $ra, 0x10($sp)
    /* 6F8C 800F8B8C 000043A0 */  sb         $v1, 0x0($v0)
    /* 6F90 800F8B90 0800E003 */  jr         $ra
    /* 6F94 800F8B94 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F8B68
