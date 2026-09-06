nonmatching func_801035B0, 0xB0

glabel func_801035B0
    /* 119B0 801035B0 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 119B4 801035B4 1000BFAF */  sw         $ra, 0x10($sp)
    /* 119B8 801035B8 53D9030C */  jal        func_800F654C
    /* 119BC 801035BC 06000424 */   addiu     $a0, $zero, 0x6
    /* 119C0 801035C0 62E0030C */  jal        func_800F8188
    /* 119C4 801035C4 04170424 */   addiu     $a0, $zero, 0x1704
    /* 119C8 801035C8 53D9030C */  jal        func_800F654C
    /* 119CC 801035CC 03000424 */   addiu     $a0, $zero, 0x3
    /* 119D0 801035D0 93E0030C */  jal        func_800F824C
    /* 119D4 801035D4 AC000424 */   addiu     $a0, $zero, 0xAC
    /* 119D8 801035D8 8CD9030C */  jal        func_800F6630
    /* 119DC 801035DC E1000424 */   addiu     $a0, $zero, 0xE1
    /* 119E0 801035E0 0DD9030C */  jal        func_800F6434
    /* 119E4 801035E4 02000424 */   addiu     $a0, $zero, 0x2
    /* 119E8 801035E8 13004014 */  bnez       $v0, .L80103638
    /* 119EC 801035EC 00000000 */   nop
    /* 119F0 801035F0 53D9030C */  jal        func_800F654C
    /* 119F4 801035F4 30000424 */   addiu     $a0, $zero, 0x30
    /* 119F8 801035F8 93E0030C */  jal        func_800F824C
    /* 119FC 801035FC AD000424 */   addiu     $a0, $zero, 0xAD
    /* 11A00 80103600 53D9030C */  jal        func_800F654C
    /* 11A04 80103604 20000424 */   addiu     $a0, $zero, 0x20
    /* 11A08 80103608 93E0030C */  jal        func_800F824C
    /* 11A0C 8010360C B9000424 */   addiu     $a0, $zero, 0xB9
    /* 11A10 80103610 19DE030C */  jal        func_800F7864
    /* 11A14 80103614 00000000 */   nop
    /* 11A18 80103618 67D5050C */  jal        func_8017559C
    /* 11A1C 8010361C 00000000 */   nop
    /* 11A20 80103620 53D9030C */  jal        func_800F654C
    /* 11A24 80103624 0F000424 */   addiu     $a0, $zero, 0xF
    /* 11A28 80103628 62E0030C */  jal        func_800F8188
    /* 11A2C 8010362C FD060424 */   addiu     $a0, $zero, 0x6FD
    /* 11A30 80103630 940D0408 */  j          .L80103650
    /* 11A34 80103634 00000000 */   nop
  .L80103638:
    /* 11A38 80103638 C6F5030C */  jal        func_800FD718
    /* 11A3C 8010363C 00000000 */   nop
    /* 11A40 80103640 EEE3030C */  jal        func_800F8FB8
    /* 11A44 80103644 79000424 */   addiu     $a0, $zero, 0x79
    /* 11A48 80103648 980D040C */  jal        func_80103660
    /* 11A4C 8010364C 00000000 */   nop
  .L80103650:
    /* 11A50 80103650 1000BF8F */  lw         $ra, 0x10($sp)
    /* 11A54 80103654 00000000 */  nop
    /* 11A58 80103658 0800E003 */  jr         $ra
    /* 11A5C 8010365C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_801035B0
