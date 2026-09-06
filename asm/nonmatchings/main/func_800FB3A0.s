nonmatching func_800FB3A0, 0x58

glabel func_800FB3A0
    /* 97A0 800FB3A0 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 97A4 800FB3A4 1000BFAF */  sw         $ra, 0x10($sp)
    /* 97A8 800FB3A8 77DC030C */  jal        func_800F71DC
    /* 97AC 800FB3AC 21200000 */   addu      $a0, $zero, $zero
  .L800FB3B0:
    /* 97B0 800FB3B0 DADA030C */  jal        func_800F6B68
    /* 97B4 800FB3B4 04100424 */   addiu     $a0, $zero, 0x1004
    /* 97B8 800FB3B8 92D0030C */  jal        func_800F4248
    /* 97BC 800FB3BC BF000424 */   addiu     $a0, $zero, 0xBF
    /* 97C0 800FB3C0 DAE1030C */  jal        func_800F8768
    /* 97C4 800FB3C4 04100424 */   addiu     $a0, $zero, 0x1004
    /* 97C8 800FB3C8 7E5F040C */  jal        func_80117DF8
    /* 97CC 800FB3CC 00000000 */   nop
    /* 97D0 800FB3D0 56D6030C */  jal        func_800F5958
    /* 97D4 800FB3D4 40010424 */   addiu     $a0, $zero, 0x140
    /* 97D8 800FB3D8 F5D4030C */  jal        func_800F53D4
    /* 97DC 800FB3DC 00000000 */   nop
    /* 97E0 800FB3E0 F3FF4010 */  beqz       $v0, .L800FB3B0
    /* 97E4 800FB3E4 00000000 */   nop
    /* 97E8 800FB3E8 1000BF8F */  lw         $ra, 0x10($sp)
    /* 97EC 800FB3EC 00000000 */  nop
    /* 97F0 800FB3F0 0800E003 */  jr         $ra
    /* 97F4 800FB3F4 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800FB3A0
