nonmatching func_8012D204, 0x38

glabel func_8012D204
    /* 3B604 8012D204 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 3B608 8012D208 1000BFAF */  sw         $ra, 0x10($sp)
    /* 3B60C 8012D20C AB93040C */  jal        func_80124EAC
    /* 3B610 8012D210 00000000 */   nop
    /* 3B614 8012D214 DADA030C */  jal        func_800F6B68
    /* 3B618 8012D218 21200000 */   addu      $a0, $zero, $zero
    /* 3B61C 8012D21C 92D0030C */  jal        func_800F4248
    /* 3B620 8012D220 3F000424 */   addiu     $a0, $zero, 0x3F
    /* 3B624 8012D224 3AD0030C */  jal        func_800F40E8
    /* 3B628 8012D228 00000000 */   nop
    /* 3B62C 8012D22C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 3B630 8012D230 00000000 */  nop
    /* 3B634 8012D234 0800E003 */  jr         $ra
    /* 3B638 8012D238 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8012D204
