nonmatching func_80102F70, 0x88

glabel func_80102F70
    /* 11370 80102F70 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 11374 80102F74 1000BFAF */  sw         $ra, 0x10($sp)
    /* 11378 80102F78 90D8030C */  jal        func_800F6240
    /* 1137C 80102F7C 15170424 */   addiu     $a0, $zero, 0x1715
    /* 11380 80102F80 59D9030C */  jal        func_800F6564
    /* 11384 80102F84 15170424 */   addiu     $a0, $zero, 0x1715
    /* 11388 80102F88 5DD5030C */  jal        func_800F5574
    /* 1138C 80102F8C 01000424 */   addiu     $a0, $zero, 0x1
    /* 11390 80102F90 F5D4030C */  jal        func_800F53D4
    /* 11394 80102F94 00000000 */   nop
    /* 11398 80102F98 09004010 */  beqz       $v0, .L80102FC0
    /* 1139C 80102F9C 00000000 */   nop
    /* 113A0 80102FA0 59D9030C */  jal        func_800F6564
    /* 113A4 80102FA4 06170424 */   addiu     $a0, $zero, 0x1706
    /* 113A8 80102FA8 62E0030C */  jal        func_800F8188
    /* 113AC 80102FAC 16170424 */   addiu     $a0, $zero, 0x1716
    /* 113B0 80102FB0 59D9030C */  jal        func_800F6564
    /* 113B4 80102FB4 07170424 */   addiu     $a0, $zero, 0x1707
    /* 113B8 80102FB8 62E0030C */  jal        func_800F8188
    /* 113BC 80102FBC 17170424 */   addiu     $a0, $zero, 0x1717
  .L80102FC0:
    /* 113C0 80102FC0 53D9030C */  jal        func_800F654C
    /* 113C4 80102FC4 02000424 */   addiu     $a0, $zero, 0x2
    /* 113C8 80102FC8 62E0030C */  jal        func_800F8188
    /* 113CC 80102FCC 04170424 */   addiu     $a0, $zero, 0x1704
    /* 113D0 80102FD0 93E0030C */  jal        func_800F824C
    /* 113D4 80102FD4 AC000424 */   addiu     $a0, $zero, 0xAC
    /* 113D8 80102FD8 C6F5030C */  jal        func_800FD718
    /* 113DC 80102FDC 00000000 */   nop
    /* 113E0 80102FE0 0509040C */  jal        func_80102414
    /* 113E4 80102FE4 00000000 */   nop
    /* 113E8 80102FE8 1000BF8F */  lw         $ra, 0x10($sp)
    /* 113EC 80102FEC 00000000 */  nop
    /* 113F0 80102FF0 0800E003 */  jr         $ra
    /* 113F4 80102FF4 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80102F70
