nonmatching func_80126590, 0x80

glabel func_80126590
    /* 34990 80126590 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 34994 80126594 1000BFAF */  sw         $ra, 0x10($sp)
  .L80126598:
    /* 34998 80126598 C87C040C */  jal        func_8011F320
    /* 3499C 8012659C 00000000 */   nop
    /* 349A0 801265A0 8CD9030C */  jal        func_800F6630
    /* 349A4 801265A4 88000424 */   addiu     $a0, $zero, 0x88
    /* 349A8 801265A8 92D0030C */  jal        func_800F4248
    /* 349AC 801265AC 7F000424 */   addiu     $a0, $zero, 0x7F
    /* 349B0 801265B0 7AE0030C */  jal        func_800F81E8
    /* 349B4 801265B4 00210424 */   addiu     $a0, $zero, 0x2100
    /* 349B8 801265B8 80E4030C */  jal        func_800F9200
    /* 349BC 801265BC 00000000 */   nop
    /* 349C0 801265C0 117E040C */  jal        func_8011F844
    /* 349C4 801265C4 00000000 */   nop
    /* 349C8 801265C8 F7E4030C */  jal        func_800F93DC
    /* 349CC 801265CC 00000000 */   nop
    /* 349D0 801265D0 7AD8030C */  jal        func_800F61E8
    /* 349D4 801265D4 00000000 */   nop
    /* 349D8 801265D8 93E0030C */  jal        func_800F824C
    /* 349DC 801265DC 88000424 */   addiu     $a0, $zero, 0x88
    /* 349E0 801265E0 5DD5030C */  jal        func_800F5574
    /* 349E4 801265E4 10000424 */   addiu     $a0, $zero, 0x10
    /* 349E8 801265E8 F0D4030C */  jal        func_800F53C0
    /* 349EC 801265EC 00000000 */   nop
    /* 349F0 801265F0 E9FF4010 */  beqz       $v0, .L80126598
    /* 349F4 801265F4 00000000 */   nop
    /* 349F8 801265F8 68D7030C */  jal        func_800F5DA0
    /* 349FC 801265FC 88000424 */   addiu     $a0, $zero, 0x88
    /* 34A00 80126600 1000BF8F */  lw         $ra, 0x10($sp)
    /* 34A04 80126604 00000000 */  nop
    /* 34A08 80126608 0800E003 */  jr         $ra
    /* 34A0C 8012660C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80126590
