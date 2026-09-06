nonmatching func_800FDA4C, 0x50

glabel func_800FDA4C
    /* BE4C 800FDA4C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* BE50 800FDA50 1000BFAF */  sw         $ra, 0x10($sp)
  .L800FDA54:
    /* BE54 800FDA54 6BDF050C */  jal        func_80177DAC
    /* BE58 800FDA58 00000000 */   nop
    /* BE5C 800FDA5C 8CD9030C */  jal        func_800F6630
    /* BE60 800FDA60 02000424 */   addiu     $a0, $zero, 0x2
    /* BE64 800FDA64 0DD9030C */  jal        func_800F6434
    /* BE68 800FDA68 02020424 */   addiu     $a0, $zero, 0x202
    /* BE6C 800FDA6C 07004014 */  bnez       $v0, .L800FDA8C
    /* BE70 800FDA70 00000000 */   nop
    /* BE74 800FDA74 8CD9030C */  jal        func_800F6630
    /* BE78 800FDA78 03000424 */   addiu     $a0, $zero, 0x3
    /* BE7C 800FDA7C 0DD9030C */  jal        func_800F6434
    /* BE80 800FDA80 02000424 */   addiu     $a0, $zero, 0x2
    /* BE84 800FDA84 F3FF4014 */  bnez       $v0, .L800FDA54
    /* BE88 800FDA88 00000000 */   nop
  .L800FDA8C:
    /* BE8C 800FDA8C 1000BF8F */  lw         $ra, 0x10($sp)
    /* BE90 800FDA90 00000000 */  nop
    /* BE94 800FDA94 0800E003 */  jr         $ra
    /* BE98 800FDA98 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800FDA4C
