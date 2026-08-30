nonmatching func_80131B38, 0x48

glabel func_80131B38
    /* 3FF38 80131B38 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 3FF3C 80131B3C 1000BFAF */  sw         $ra, 0x10($sp)
    /* 3FF40 80131B40 53D9030C */  jal        func_800F654C
    /* 3FF44 80131B44 21200000 */   addu      $a0, $zero, $zero
  .L80131B48:
    /* 3FF48 80131B48 E0C6040C */  jal        func_80131B80
    /* 3FF4C 80131B4C 00000000 */   nop
    /* 3FF50 80131B50 7AD8030C */  jal        func_800F61E8
    /* 3FF54 80131B54 00000000 */   nop
    /* 3FF58 80131B58 5DD5030C */  jal        func_800F5574
    /* 3FF5C 80131B5C 05000424 */   addiu     $a0, $zero, 0x5
    /* 3FF60 80131B60 F5D4030C */  jal        func_800F53D4
    /* 3FF64 80131B64 00000000 */   nop
    /* 3FF68 80131B68 F7FF4010 */  beqz       $v0, .L80131B48
    /* 3FF6C 80131B6C 00000000 */   nop
    /* 3FF70 80131B70 1000BF8F */  lw         $ra, 0x10($sp)
    /* 3FF74 80131B74 00000000 */  nop
    /* 3FF78 80131B78 0800E003 */  jr         $ra
    /* 3FF7C 80131B7C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80131B38
