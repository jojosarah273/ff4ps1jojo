nonmatching func_80121E0C, 0x60

glabel func_80121E0C
    /* 3020C 80121E0C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 30210 80121E10 1000BFAF */  sw         $ra, 0x10($sp)
  .L80121E14:
    /* 30214 80121E14 DAE1030C */  jal        func_800F8768
    /* 30218 80121E18 21200000 */   addu      $a0, $zero, $zero
    /* 3021C 80121E1C 1A80033C */  lui        $v1, %hi(D_8019ED54)
    /* 30220 80121E20 54ED638C */  lw         $v1, %lo(D_8019ED54)($v1)
    /* 30224 80121E24 00000000 */  nop
    /* 30228 80121E28 00006294 */  lhu        $v0, 0x0($v1)
    /* 3022C 80121E2C 1D000424 */  addiu      $a0, $zero, 0x1D
    /* 30230 80121E30 02004224 */  addiu      $v0, $v0, 0x2
    /* 30234 80121E34 68D7030C */  jal        func_800F5DA0
    /* 30238 80121E38 000062A4 */   sh        $v0, 0x0($v1)
    /* 3023C 80121E3C E3D6030C */  jal        func_800F5B8C
    /* 30240 80121E40 02020424 */   addiu     $a0, $zero, 0x202
    /* 30244 80121E44 F3FF4014 */  bnez       $v0, .L80121E14
    /* 30248 80121E48 00000000 */   nop
    /* 3024C 80121E4C 53D9030C */  jal        func_800F654C
    /* 30250 80121E50 FB000424 */   addiu     $a0, $zero, 0xFB
    /* 30254 80121E54 DAE1030C */  jal        func_800F8768
    /* 30258 80121E58 21200000 */   addu      $a0, $zero, $zero
    /* 3025C 80121E5C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 30260 80121E60 00000000 */  nop
    /* 30264 80121E64 0800E003 */  jr         $ra
    /* 30268 80121E68 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80121E0C
