nonmatching func_80129838, 0x68

glabel func_80129838
    /* 37C38 80129838 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 37C3C 8012983C 1000BFAF */  sw         $ra, 0x10($sp)
    /* 37C40 80129840 59D9030C */  jal        func_800F6564
    /* 37C44 80129844 091B0424 */   addiu     $a0, $zero, 0x1B09
    /* 37C48 80129848 62E0030C */  jal        func_800F8188
    /* 37C4C 8012984C 081B0424 */   addiu     $a0, $zero, 0x1B08
    /* 37C50 80129850 77DC030C */  jal        func_800F71DC
    /* 37C54 80129854 0A1B0424 */   addiu     $a0, $zero, 0x1B0A
    /* 37C58 80129858 40DD030C */  jal        func_800F7500
    /* 37C5C 8012985C 06000424 */   addiu     $a0, $zero, 0x6
  .L80129860:
    /* 37C60 80129860 DADA030C */  jal        func_800F6B68
    /* 37C64 80129864 07000424 */   addiu     $a0, $zero, 0x7
    /* 37C68 80129868 DAE1030C */  jal        func_800F8768
    /* 37C6C 8012986C 21200000 */   addu      $a0, $zero, $zero
    /* 37C70 80129870 D9D8030C */  jal        func_800F6364
    /* 37C74 80129874 00000000 */   nop
    /* 37C78 80129878 A8D7030C */  jal        func_800F5EA0
    /* 37C7C 8012987C 00000000 */   nop
    /* 37C80 80129880 19D7030C */  jal        func_800F5C64
    /* 37C84 80129884 02020424 */   addiu     $a0, $zero, 0x202
    /* 37C88 80129888 F5FF4014 */  bnez       $v0, .L80129860
    /* 37C8C 8012988C 00000000 */   nop
    /* 37C90 80129890 1000BF8F */  lw         $ra, 0x10($sp)
    /* 37C94 80129894 00000000 */  nop
    /* 37C98 80129898 0800E003 */  jr         $ra
    /* 37C9C 8012989C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80129838
