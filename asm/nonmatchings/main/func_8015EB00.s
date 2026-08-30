nonmatching func_8015EB00, 0x70

glabel func_8015EB00
    /* 6CF00 8015EB00 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 6CF04 8015EB04 1000BFAF */  sw         $ra, 0x10($sp)
    /* 6CF08 8015EB08 AB82050C */  jal        func_80160AAC
    /* 6CF0C 8015EB0C 00000000 */   nop
    /* 6CF10 8015EB10 59D9030C */  jal        func_800F6564
    /* 6CF14 8015EB14 FE380424 */   addiu     $a0, $zero, 0x38FE
    /* 6CF18 8015EB18 0DD9030C */  jal        func_800F6434
    /* 6CF1C 8015EB1C 80800434 */   ori       $a0, $zero, 0x8080
    /* 6CF20 8015EB20 09004014 */  bnez       $v0, .L8015EB48
    /* 6CF24 8015EB24 00000000 */   nop
    /* 6CF28 8015EB28 92D0030C */  jal        func_800F4248
    /* 6CF2C 8015EB2C 7F000424 */   addiu     $a0, $zero, 0x7F
    /* 6CF30 8015EB30 62E0030C */  jal        func_800F8188
    /* 6CF34 8015EB34 FE380424 */   addiu     $a0, $zero, 0x38FE
    /* 6CF38 8015EB38 2394010C */  jal        func_8006508C
    /* 6CF3C 8015EB3C 00000000 */   nop
    /* 6CF40 8015EB40 D87A0508 */  j          .L8015EB60
    /* 6CF44 8015EB44 00000000 */   nop
  .L8015EB48:
    /* 6CF48 8015EB48 E382050C */  jal        func_80160B8C
    /* 6CF4C 8015EB4C 00000000 */   nop
    /* 6CF50 8015EB50 1886010C */  jal        func_80061860
    /* 6CF54 8015EB54 00000000 */   nop
    /* 6CF58 8015EB58 447A050C */  jal        func_8015E910
    /* 6CF5C 8015EB5C 00000000 */   nop
  .L8015EB60:
    /* 6CF60 8015EB60 1000BF8F */  lw         $ra, 0x10($sp)
    /* 6CF64 8015EB64 00000000 */  nop
    /* 6CF68 8015EB68 0800E003 */  jr         $ra
    /* 6CF6C 8015EB6C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8015EB00
