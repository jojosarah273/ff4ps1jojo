nonmatching func_8015316C, 0x30

glabel func_8015316C
    /* 6156C 8015316C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 61570 80153170 1000BFAF */  sw         $ra, 0x10($sp)
    /* 61574 80153174 77DC030C */  jal        func_800F71DC
    /* 61578 80153178 21200000 */   addu      $a0, $zero, $zero
    /* 6157C 8015317C 53D9030C */  jal        func_800F654C
    /* 61580 80153180 07000424 */   addiu     $a0, $zero, 0x7
    /* 61584 80153184 8948050C */  jal        func_80152224
    /* 61588 80153188 00000000 */   nop
    /* 6158C 8015318C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 61590 80153190 00000000 */  nop
    /* 61594 80153194 0800E003 */  jr         $ra
    /* 61598 80153198 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8015316C
