nonmatching func_80160A4C, 0x60

glabel func_80160A4C
    /* 6EE4C 80160A4C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 6EE50 80160A50 1000BFAF */  sw         $ra, 0x10($sp)
    /* 6EE54 80160A54 DADA030C */  jal        func_800F6B68
    /* 6EE58 80160A58 00200424 */   addiu     $a0, $zero, 0x2000
    /* 6EE5C 80160A5C 92D0030C */  jal        func_800F4248
    /* 6EE60 80160A60 1F000424 */   addiu     $a0, $zero, 0x1F
    /* 6EE64 80160A64 5DD5030C */  jal        func_800F5574
    /* 6EE68 80160A68 11000424 */   addiu     $a0, $zero, 0x11
    /* 6EE6C 80160A6C F5D4030C */  jal        func_800F53D4
    /* 6EE70 80160A70 00000000 */   nop
    /* 6EE74 80160A74 09004010 */  beqz       $v0, .L80160A9C
    /* 6EE78 80160A78 00000000 */   nop
    /* 6EE7C 80160A7C 59D9030C */  jal        func_800F6564
    /* 6EE80 80160A80 8B260424 */   addiu     $a0, $zero, 0x268B
    /* 6EE84 80160A84 DAE1030C */  jal        func_800F8768
    /* 6EE88 80160A88 0B200424 */   addiu     $a0, $zero, 0x200B
    /* 6EE8C 80160A8C 59D9030C */  jal        func_800F6564
    /* 6EE90 80160A90 8C260424 */   addiu     $a0, $zero, 0x268C
    /* 6EE94 80160A94 DAE1030C */  jal        func_800F8768
    /* 6EE98 80160A98 0C200424 */   addiu     $a0, $zero, 0x200C
  .L80160A9C:
    /* 6EE9C 80160A9C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 6EEA0 80160AA0 00000000 */  nop
    /* 6EEA4 80160AA4 0800E003 */  jr         $ra
    /* 6EEA8 80160AA8 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80160A4C
