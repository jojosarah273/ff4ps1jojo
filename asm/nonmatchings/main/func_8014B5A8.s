nonmatching func_8014B5A8, 0x50

glabel func_8014B5A8
    /* 599A8 8014B5A8 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 599AC 8014B5AC 1000BFAF */  sw         $ra, 0x10($sp)
  .L8014B5B0:
    /* 599B0 8014B5B0 67C9010C */  jal        func_8007259C
    /* 599B4 8014B5B4 00000000 */   nop
    /* 599B8 8014B5B8 E524050C */  jal        func_80149394
    /* 599BC 8014B5BC 00000000 */   nop
    /* 599C0 8014B5C0 F0D4030C */  jal        func_800F53C0
    /* 599C4 8014B5C4 00000000 */   nop
    /* 599C8 8014B5C8 07004014 */  bnez       $v0, .L8014B5E8
    /* 599CC 8014B5CC 00000000 */   nop
    /* 599D0 8014B5D0 84DC030C */  jal        func_800F7210
    /* 599D4 8014B5D4 18F10434 */   ori       $a0, $zero, 0xF118
    /* 599D8 8014B5D8 40E3030C */  jal        func_800F8D00
    /* 599DC 8014B5DC 21F30434 */   ori       $a0, $zero, 0xF321
    /* 599E0 8014B5E0 6C2D0508 */  j          .L8014B5B0
    /* 599E4 8014B5E4 00000000 */   nop
  .L8014B5E8:
    /* 599E8 8014B5E8 1000BF8F */  lw         $ra, 0x10($sp)
    /* 599EC 8014B5EC 00000000 */  nop
    /* 599F0 8014B5F0 0800E003 */  jr         $ra
    /* 599F4 8014B5F4 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8014B5A8
