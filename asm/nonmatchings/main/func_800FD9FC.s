nonmatching func_800FD9FC, 0x50

glabel func_800FD9FC
    /* BDFC 800FD9FC E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* BE00 800FDA00 1000BFAF */  sw         $ra, 0x10($sp)
  .L800FDA04:
    /* BE04 800FDA04 6BDF050C */  jal        func_80177DAC
    /* BE08 800FDA08 00000000 */   nop
    /* BE0C 800FDA0C 8CD9030C */  jal        func_800F6630
    /* BE10 800FDA10 02000424 */   addiu     $a0, $zero, 0x2
    /* BE14 800FDA14 0DD9030C */  jal        func_800F6434
    /* BE18 800FDA18 02020424 */   addiu     $a0, $zero, 0x202
    /* BE1C 800FDA1C F9FF4014 */  bnez       $v0, .L800FDA04
    /* BE20 800FDA20 00000000 */   nop
    /* BE24 800FDA24 8CD9030C */  jal        func_800F6630
    /* BE28 800FDA28 03000424 */   addiu     $a0, $zero, 0x3
    /* BE2C 800FDA2C 0DD9030C */  jal        func_800F6434
    /* BE30 800FDA30 02020424 */   addiu     $a0, $zero, 0x202
    /* BE34 800FDA34 F3FF4014 */  bnez       $v0, .L800FDA04
    /* BE38 800FDA38 00000000 */   nop
    /* BE3C 800FDA3C 1000BF8F */  lw         $ra, 0x10($sp)
    /* BE40 800FDA40 00000000 */  nop
    /* BE44 800FDA44 0800E003 */  jr         $ra
    /* BE48 800FDA48 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800FD9FC
