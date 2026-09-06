nonmatching func_800FF5EC, 0x118

glabel func_800FF5EC
    /* D9EC 800FF5EC E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* D9F0 800FF5F0 1000BFAF */  sw         $ra, 0x10($sp)
    /* D9F4 800FF5F4 53D9030C */  jal        func_800F654C
    /* D9F8 800FF5F8 03000424 */   addiu     $a0, $zero, 0x3
    /* D9FC 800FF5FC 62E0030C */  jal        func_800F8188
    /* DA00 800FF600 05170424 */   addiu     $a0, $zero, 0x1705
    /* DA04 800FF604 53D9030C */  jal        func_800F654C
    /* DA08 800FF608 21200000 */   addu      $a0, $zero, $zero
    /* DA0C 800FF60C 93E0030C */  jal        func_800F824C
    /* DA10 800FF610 79000424 */   addiu     $a0, $zero, 0x79
  .L800FF614:
    /* DA14 800FF614 F6F9030C */  jal        func_800FE7D8
    /* DA18 800FF618 00000000 */   nop
    /* DA1C 800FF61C 53D9030C */  jal        func_800F654C
    /* DA20 800FF620 2F000424 */   addiu     $a0, $zero, 0x2F
    /* DA24 800FF624 20D5030C */  jal        func_800F5480
    /* DA28 800FF628 00000000 */   nop
    /* DA2C 800FF62C 0FCF030C */  jal        func_800F3C3C
    /* DA30 800FF630 79000424 */   addiu     $a0, $zero, 0x79
    /* DA34 800FF634 D2DF030C */  jal        func_800F7F48
    /* DA38 800FF638 21204000 */   addu      $a0, $v0, $zero
    /* DA3C 800FF63C 5DD5030C */  jal        func_800F5574
    /* DA40 800FF640 10000424 */   addiu     $a0, $zero, 0x10
    /* DA44 800FF644 F0D4030C */  jal        func_800F53C0
    /* DA48 800FF648 00000000 */   nop
    /* DA4C 800FF64C 03004014 */  bnez       $v0, .L800FF65C
    /* DA50 800FF650 00000000 */   nop
    /* DA54 800FF654 62E0030C */  jal        func_800F8188
    /* DA58 800FF658 00210424 */   addiu     $a0, $zero, 0x2100
  .L800FF65C:
    /* DA5C 800FF65C 8CD9030C */  jal        func_800F6630
    /* DA60 800FF660 79000424 */   addiu     $a0, $zero, 0x79
    /* DA64 800FF664 A4E5030C */  jal        func_800F9690
    /* DA68 800FF668 00000000 */   nop
    /* DA6C 800FF66C 59D9030C */  jal        func_800F6564
    /* DA70 800FF670 04170424 */   addiu     $a0, $zero, 0x1704
    /* DA74 800FF674 5DD5030C */  jal        func_800F5574
    /* DA78 800FF678 04000424 */   addiu     $a0, $zero, 0x4
    /* DA7C 800FF67C F5D4030C */  jal        func_800F53D4
    /* DA80 800FF680 00000000 */   nop
    /* DA84 800FF684 07004010 */  beqz       $v0, .L800FF6A4
    /* DA88 800FF688 1400043C */   lui       $a0, (0x14FA86 >> 16)
    /* DA8C 800FF68C 1ADB030C */  jal        func_800F6C68
    /* DA90 800FF690 86FA8434 */   ori       $a0, $a0, (0x14FA86 & 0xFFFF)
    /* DA94 800FF694 93E0030C */  jal        func_800F824C
    /* DA98 800FF698 B7000424 */   addiu     $a0, $zero, 0xB7
    /* DA9C 800FF69C ADFD0308 */  j          .L800FF6B4
    /* DAA0 800FF6A0 00000000 */   nop
  .L800FF6A4:
    /* DAA4 800FF6A4 1ADB030C */  jal        func_800F6C68
    /* DAA8 800FF6A8 86FA8434 */   ori       $a0, $a0, (0x14FA86 & 0xFFFF)
    /* DAAC 800FF6AC 93E0030C */  jal        func_800F824C
    /* DAB0 800FF6B0 B8000424 */   addiu     $a0, $zero, 0xB8
  .L800FF6B4:
    /* DAB4 800FF6B4 1CFA030C */  jal        func_800FE870
    /* DAB8 800FF6B8 00000000 */   nop
    /* DABC 800FF6BC EACA050C */  jal        func_80172BA8
    /* DAC0 800FF6C0 00000000 */   nop
    /* DAC4 800FF6C4 02CC050C */  jal        func_80173008
    /* DAC8 800FF6C8 00000000 */   nop
    /* DACC 800FF6CC AFD8030C */  jal        func_800F62BC
    /* DAD0 800FF6D0 79000424 */   addiu     $a0, $zero, 0x79
    /* DAD4 800FF6D4 8CD9030C */  jal        func_800F6630
    /* DAD8 800FF6D8 79000424 */   addiu     $a0, $zero, 0x79
    /* DADC 800FF6DC 5DD5030C */  jal        func_800F5574
    /* DAE0 800FF6E0 30000424 */   addiu     $a0, $zero, 0x30
    /* DAE4 800FF6E4 F5D4030C */  jal        func_800F53D4
    /* DAE8 800FF6E8 00000000 */   nop
    /* DAEC 800FF6EC C9FF4010 */  beqz       $v0, .L800FF614
    /* DAF0 800FF6F0 00000000 */   nop
    /* DAF4 800FF6F4 1000BF8F */  lw         $ra, 0x10($sp)
    /* DAF8 800FF6F8 00000000 */  nop
    /* DAFC 800FF6FC 0800E003 */  jr         $ra
    /* DB00 800FF700 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800FF5EC
