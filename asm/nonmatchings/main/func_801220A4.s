nonmatching func_801220A4, 0x48

glabel func_801220A4
    /* 304A4 801220A4 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 304A8 801220A8 1000BFAF */  sw         $ra, 0x10($sp)
  .L801220AC:
    /* 304AC 801220AC 53D9030C */  jal        func_800F654C
    /* 304B0 801220B0 21200000 */   addu      $a0, $zero, $zero
    /* 304B4 801220B4 DAE1030C */  jal        func_800F8768
    /* 304B8 801220B8 21200000 */   addu      $a0, $zero, $zero
    /* 304BC 801220BC B188040C */  jal        func_801222C4
    /* 304C0 801220C0 00000000 */   nop
    /* 304C4 801220C4 68D7030C */  jal        func_800F5DA0
    /* 304C8 801220C8 1D000424 */   addiu     $a0, $zero, 0x1D
    /* 304CC 801220CC E3D6030C */  jal        func_800F5B8C
    /* 304D0 801220D0 02020424 */   addiu     $a0, $zero, 0x202
    /* 304D4 801220D4 F5FF4014 */  bnez       $v0, .L801220AC
    /* 304D8 801220D8 00000000 */   nop
    /* 304DC 801220DC 1000BF8F */  lw         $ra, 0x10($sp)
    /* 304E0 801220E0 00000000 */  nop
    /* 304E4 801220E4 0800E003 */  jr         $ra
    /* 304E8 801220E8 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_801220A4
