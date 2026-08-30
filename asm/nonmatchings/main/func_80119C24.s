nonmatching func_80119C24, 0x58

glabel func_80119C24
    /* 28024 80119C24 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 28028 80119C28 1000BFAF */  sw         $ra, 0x10($sp)
    /* 2802C 80119C2C 53D9030C */  jal        func_800F654C
    /* 28030 80119C30 02000424 */   addiu     $a0, $zero, 0x2
    /* 28034 80119C34 93E0030C */  jal        func_800F824C
    /* 28038 80119C38 79000424 */   addiu     $a0, $zero, 0x79
  .L80119C3C:
    /* 2803C 80119C3C AFD8030C */  jal        func_800F62BC
    /* 28040 80119C40 C4000424 */   addiu     $a0, $zero, 0xC4
    /* 28044 80119C44 ECF9030C */  jal        func_800FE7B0
    /* 28048 80119C48 00000000 */   nop
    /* 2804C 80119C4C 68D7030C */  jal        func_800F5DA0
    /* 28050 80119C50 79000424 */   addiu     $a0, $zero, 0x79
    /* 28054 80119C54 E3D6030C */  jal        func_800F5B8C
    /* 28058 80119C58 02020424 */   addiu     $a0, $zero, 0x202
    /* 2805C 80119C5C F7FF4014 */  bnez       $v0, .L80119C3C
    /* 28060 80119C60 00000000 */   nop
    /* 28064 80119C64 977A040C */  jal        func_8011EA5C
    /* 28068 80119C68 00000000 */   nop
    /* 2806C 80119C6C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 28070 80119C70 00000000 */  nop
    /* 28074 80119C74 0800E003 */  jr         $ra
    /* 28078 80119C78 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80119C24
