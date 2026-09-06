nonmatching func_80131760, 0x90

glabel func_80131760
    /* 3FB60 80131760 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 3FB64 80131764 1000BFAF */  sw         $ra, 0x10($sp)
    /* 3FB68 80131768 80E4030C */  jal        func_800F9200
    /* 3FB6C 8013176C 00000000 */   nop
    /* 3FB70 80131770 3489040C */  jal        func_801224D0
    /* 3FB74 80131774 00000000 */   nop
    /* 3FB78 80131778 DADA030C */  jal        func_800F6B68
    /* 3FB7C 8013177C 8B1B0424 */   addiu     $a0, $zero, 0x1B8B
    /* 3FB80 80131780 0DD9030C */  jal        func_800F6434
    /* 3FB84 80131784 02000424 */   addiu     $a0, $zero, 0x2
    /* 3FB88 80131788 13004014 */  bnez       $v0, .L801317D8
    /* 3FB8C 8013178C 00000000 */   nop
    /* 3FB90 80131790 8CD9030C */  jal        func_800F6630
    /* 3FB94 80131794 43000424 */   addiu     $a0, $zero, 0x43
    /* 3FB98 80131798 5EC8040C */  jal        func_80132178
    /* 3FB9C 8013179C 00000000 */   nop
    /* 3FBA0 801317A0 DADA030C */  jal        func_800F6B68
    /* 3FBA4 801317A4 03000424 */   addiu     $a0, $zero, 0x3
    /* 3FBA8 801317A8 0DD9030C */  jal        func_800F6434
    /* 3FBAC 801317AC 80000424 */   addiu     $a0, $zero, 0x80
    /* 3FBB0 801317B0 09004014 */  bnez       $v0, .L801317D8
    /* 3FBB4 801317B4 00000000 */   nop
    /* 3FBB8 801317B8 91E5030C */  jal        func_800F9644
    /* 3FBBC 801317BC 20000424 */   addiu     $a0, $zero, 0x20
    /* 3FBC0 801317C0 F8DA030C */  jal        func_800F6BE0
    /* 3FBC4 801317C4 09000424 */   addiu     $a0, $zero, 0x9
    /* 3FBC8 801317C8 F7E1030C */  jal        func_800F87DC
    /* 3FBCC 801317CC 07000424 */   addiu     $a0, $zero, 0x7
    /* 3FBD0 801317D0 98E5030C */  jal        func_800F9660
    /* 3FBD4 801317D4 20000424 */   addiu     $a0, $zero, 0x20
  .L801317D8:
    /* 3FBD8 801317D8 F7E4030C */  jal        func_800F93DC
    /* 3FBDC 801317DC 00000000 */   nop
    /* 3FBE0 801317E0 1000BF8F */  lw         $ra, 0x10($sp)
    /* 3FBE4 801317E4 00000000 */  nop
    /* 3FBE8 801317E8 0800E003 */  jr         $ra
    /* 3FBEC 801317EC 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80131760
