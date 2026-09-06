nonmatching func_800F885C, 0x3C

glabel func_800F885C
    /* 6C5C 800F885C 5800828F */  lw         $v0, %gp_rel(D_8019ED54)($gp)
    /* 6C60 800F8860 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 6C64 800F8864 1000BFAF */  sw         $ra, 0x10($sp)
    /* 6C68 800F8868 00004594 */  lhu        $a1, 0x0($v0)
    /* 6C6C 800F886C E7CE030C */  jal        func_800F3B9C
    /* 6C70 800F8870 00000000 */   nop
    /* 6C74 800F8874 5800838F */  lw         $v1, %gp_rel(D_8019ED54)($gp)
    /* 6C78 800F8878 801F053C */  lui        $a1, (0x1F8003C8 >> 16)
    /* 6C7C 800F887C C803A590 */  lbu        $a1, (0x1F8003C8 & 0xFFFF)($a1)
    /* 6C80 800F8880 00006494 */  lhu        $a0, 0x0($v1)
    /* 6C84 800F8884 1000BF8F */  lw         $ra, 0x10($sp)
    /* 6C88 800F8888 21104400 */  addu       $v0, $v0, $a0
    /* 6C8C 800F888C 000045A0 */  sb         $a1, 0x0($v0)
    /* 6C90 800F8890 0800E003 */  jr         $ra
    /* 6C94 800F8894 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F885C
