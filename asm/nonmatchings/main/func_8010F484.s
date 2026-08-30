nonmatching func_8010F484, 0x58

glabel func_8010F484
    /* 1D884 8010F484 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 1D888 8010F488 1000BFAF */  sw         $ra, 0x10($sp)
    /* 1D88C 8010F48C 77DC030C */  jal        func_800F71DC
    /* 1D890 8010F490 21200000 */   addu      $a0, $zero, $zero
  .L8010F494:
    /* 1D894 8010F494 53D9030C */  jal        func_800F654C
    /* 1D898 8010F498 FF000424 */   addiu     $a0, $zero, 0xFF
    /* 1D89C 8010F49C DAE1030C */  jal        func_800F8768
    /* 1D8A0 8010F4A0 1B0E0424 */   addiu     $a0, $zero, 0xE1B
    /* 1D8A4 8010F4A4 DAE1030C */  jal        func_800F8768
    /* 1D8A8 8010F4A8 3B0E0424 */   addiu     $a0, $zero, 0xE3B
    /* 1D8AC 8010F4AC D9D8030C */  jal        func_800F6364
    /* 1D8B0 8010F4B0 00000000 */   nop
    /* 1D8B4 8010F4B4 56D6030C */  jal        func_800F5958
    /* 1D8B8 8010F4B8 10000424 */   addiu     $a0, $zero, 0x10
    /* 1D8BC 8010F4BC F5D4030C */  jal        func_800F53D4
    /* 1D8C0 8010F4C0 00000000 */   nop
    /* 1D8C4 8010F4C4 F3FF4010 */  beqz       $v0, .L8010F494
    /* 1D8C8 8010F4C8 00000000 */   nop
    /* 1D8CC 8010F4CC 1000BF8F */  lw         $ra, 0x10($sp)
    /* 1D8D0 8010F4D0 00000000 */  nop
    /* 1D8D4 8010F4D4 0800E003 */  jr         $ra
    /* 1D8D8 8010F4D8 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8010F484
