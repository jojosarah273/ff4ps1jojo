nonmatching func_80113C04, 0x50

glabel func_80113C04
    /* 22004 80113C04 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 22008 80113C08 1000BFAF */  sw         $ra, 0x10($sp)
    /* 2200C 80113C0C 58E2030C */  jal        func_800F8960
    /* 22010 80113C10 00030424 */   addiu     $a0, $zero, 0x300
    /* 22014 80113C14 8CD9030C */  jal        func_800F6630
    /* 22018 80113C18 23000424 */   addiu     $a0, $zero, 0x23
    /* 2201C 80113C1C 92D0030C */  jal        func_800F4248
    /* 22020 80113C20 01000424 */   addiu     $a0, $zero, 0x1
    /* 22024 80113C24 48D0030C */  jal        func_800F4120
    /* 22028 80113C28 02000424 */   addiu     $a0, $zero, 0x2
    /* 2202C 80113C2C 05004014 */  bnez       $v0, .L80113C44
    /* 22030 80113C30 00000000 */   nop
    /* 22034 80113C34 53D9030C */  jal        func_800F654C
    /* 22038 80113C38 21200000 */   addu      $a0, $zero, $zero
    /* 2203C 80113C3C 31C5050C */  jal        func_801714C4
    /* 22040 80113C40 00000000 */   nop
  .L80113C44:
    /* 22044 80113C44 1000BF8F */  lw         $ra, 0x10($sp)
    /* 22048 80113C48 00000000 */  nop
    /* 2204C 80113C4C 0800E003 */  jr         $ra
    /* 22050 80113C50 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80113C04
