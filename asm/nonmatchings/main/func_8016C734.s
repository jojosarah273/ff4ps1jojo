nonmatching func_8016C734, 0x58

glabel func_8016C734
    /* 7AB34 8016C734 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 7AB38 8016C738 1000BFAF */  sw         $ra, 0x10($sp)
    /* 7AB3C 8016C73C EEE3030C */  jal        func_800F8FB8
    /* 7AB40 8016C740 28000424 */   addiu     $a0, $zero, 0x28
    /* 7AB44 8016C744 59D9030C */  jal        func_800F6564
    /* 7AB48 8016C748 00210424 */   addiu     $a0, $zero, 0x2100
    /* 7AB4C 8016C74C 0DD9030C */  jal        func_800F6434
    /* 7AB50 8016C750 02000424 */   addiu     $a0, $zero, 0x2
    /* 7AB54 8016C754 05004014 */  bnez       $v0, .L8016C76C
    /* 7AB58 8016C758 00000000 */   nop
    /* 7AB5C 8016C75C 53D9030C */  jal        func_800F654C
    /* 7AB60 8016C760 10000424 */   addiu     $a0, $zero, 0x10
    /* 7AB64 8016C764 93E0030C */  jal        func_800F824C
    /* 7AB68 8016C768 28000424 */   addiu     $a0, $zero, 0x28
  .L8016C76C:
    /* 7AB6C 8016C76C 91E5030C */  jal        func_800F9644
    /* 7AB70 8016C770 20000424 */   addiu     $a0, $zero, 0x20
    /* 7AB74 8016C774 E3B1050C */  jal        func_8016C78C
    /* 7AB78 8016C778 00000000 */   nop
    /* 7AB7C 8016C77C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 7AB80 8016C780 00000000 */  nop
    /* 7AB84 8016C784 0800E003 */  jr         $ra
    /* 7AB88 8016C788 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8016C734
