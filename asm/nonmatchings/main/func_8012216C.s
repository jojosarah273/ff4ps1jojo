nonmatching func_8012216C, 0x30

glabel func_8012216C
    /* 3056C 8012216C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 30570 80122170 1000BFAF */  sw         $ra, 0x10($sp)
    /* 30574 80122174 53D9030C */  jal        func_800F654C
    /* 30578 80122178 11000424 */   addiu     $a0, $zero, 0x11
    /* 3057C 8012217C 62E0030C */  jal        func_800F8188
    /* 30580 80122180 001E0424 */   addiu     $a0, $zero, 0x1E00
    /* 30584 80122184 4AA4050C */  jal        func_80169128
    /* 30588 80122188 00000000 */   nop
    /* 3058C 8012218C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 30590 80122190 00000000 */  nop
    /* 30594 80122194 0800E003 */  jr         $ra
    /* 30598 80122198 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8012216C
