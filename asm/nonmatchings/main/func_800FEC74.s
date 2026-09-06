nonmatching func_800FEC74, 0xC8

glabel func_800FEC74
    /* D074 800FEC74 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* D078 800FEC78 1000BFAF */  sw         $ra, 0x10($sp)
    /* D07C 800FEC7C 53D9030C */  jal        func_800F654C
    /* D080 800FEC80 01000424 */   addiu     $a0, $zero, 0x1
    /* D084 800FEC84 93E0030C */  jal        func_800F824C
    /* D088 800FEC88 D9000424 */   addiu     $a0, $zero, 0xD9
    /* D08C 800FEC8C 53D9030C */  jal        func_800F654C
    /* D090 800FEC90 07000424 */   addiu     $a0, $zero, 0x7
    /* D094 800FEC94 62E0030C */  jal        func_800F8188
    /* D098 800FEC98 2C210424 */   addiu     $a0, $zero, 0x212C
    /* D09C 800FEC9C 53D9030C */  jal        func_800F654C
    /* D0A0 800FECA0 01000424 */   addiu     $a0, $zero, 0x1
    /* D0A4 800FECA4 62E0030C */  jal        func_800F8188
    /* D0A8 800FECA8 2D210424 */   addiu     $a0, $zero, 0x212D
    /* D0AC 800FECAC EEE3030C */  jal        func_800F8FB8
    /* D0B0 800FECB0 7A000424 */   addiu     $a0, $zero, 0x7A
    /* D0B4 800FECB4 EEE3030C */  jal        func_800F8FB8
    /* D0B8 800FECB8 79000424 */   addiu     $a0, $zero, 0x79
    /* D0BC 800FECBC 53D9030C */  jal        func_800F654C
    /* D0C0 800FECC0 81000424 */   addiu     $a0, $zero, 0x81
    /* D0C4 800FECC4 62E0030C */  jal        func_800F8188
    /* D0C8 800FECC8 00420424 */   addiu     $a0, $zero, 0x4200
    /* D0CC 800FECCC 12D5030C */  jal        func_800F5448
    /* D0D0 800FECD0 00000000 */   nop
  .L800FECD4:
    /* D0D4 800FECD4 DEF9030C */  jal        func_800FE778
    /* D0D8 800FECD8 00000000 */   nop
  .L800FECDC:
    /* D0DC 800FECDC 8CD9030C */  jal        func_800F6630
    /* D0E0 800FECE0 7F000424 */   addiu     $a0, $zero, 0x7F
    /* D0E4 800FECE4 5DD5030C */  jal        func_800F5574
    /* D0E8 800FECE8 02000424 */   addiu     $a0, $zero, 0x2
    /* D0EC 800FECEC F5D4030C */  jal        func_800F53D4
    /* D0F0 800FECF0 00000000 */   nop
    /* D0F4 800FECF4 F9FF4010 */  beqz       $v0, .L800FECDC
    /* D0F8 800FECF8 00000000 */   nop
    /* D0FC 800FECFC AFD8030C */  jal        func_800F62BC
    /* D100 800FED00 79000424 */   addiu     $a0, $zero, 0x79
    /* D104 800FED04 AFD8030C */  jal        func_800F62BC
    /* D108 800FED08 79000424 */   addiu     $a0, $zero, 0x79
    /* D10C 800FED0C 8CD9030C */  jal        func_800F6630
    /* D110 800FED10 79000424 */   addiu     $a0, $zero, 0x79
    /* D114 800FED14 5DD5030C */  jal        func_800F5574
    /* D118 800FED18 20000424 */   addiu     $a0, $zero, 0x20
    /* D11C 800FED1C F5D4030C */  jal        func_800F53D4
    /* D120 800FED20 00000000 */   nop
    /* D124 800FED24 EBFF4010 */  beqz       $v0, .L800FECD4
    /* D128 800FED28 00000000 */   nop
    /* D12C 800FED2C 1000BF8F */  lw         $ra, 0x10($sp)
    /* D130 800FED30 00000000 */  nop
    /* D134 800FED34 0800E003 */  jr         $ra
    /* D138 800FED38 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800FEC74
