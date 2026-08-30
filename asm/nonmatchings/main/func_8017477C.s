nonmatching func_8017477C, 0x104

glabel func_8017477C
    /* 82B7C 8017477C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 82B80 80174780 1000BFAF */  sw         $ra, 0x10($sp)
    /* 82B84 80174784 77DC030C */  jal        func_800F71DC
    /* 82B88 80174788 21200000 */   addu      $a0, $zero, $zero
    /* 82B8C 8017478C 40DD030C */  jal        func_800F7500
    /* 82B90 80174790 21200000 */   addu      $a0, $zero, $zero
    /* 82B94 80174794 EEE3030C */  jal        func_800F8FB8
    /* 82B98 80174798 07000424 */   addiu     $a0, $zero, 0x7
    /* 82B9C 8017479C 0F00043C */  lui        $a0, (0xFC8C0 >> 16)
  .L801747A0:
    /* 82BA0 801747A0 1ADB030C */  jal        func_800F6C68
    /* 82BA4 801747A4 C0C88434 */   ori       $a0, $a0, (0xFC8C0 & 0xFFFF)
    /* 82BA8 801747A8 5DD5030C */  jal        func_800F5574
    /* 82BAC 801747AC FF000424 */   addiu     $a0, $zero, 0xFF
    /* 82BB0 801747B0 F5D4030C */  jal        func_800F53D4
    /* 82BB4 801747B4 00000000 */   nop
    /* 82BB8 801747B8 13004014 */  bnez       $v0, .L80174808
    /* 82BBC 801747BC 00000000 */   nop
    /* 82BC0 801747C0 58E2030C */  jal        func_800F8960
    /* 82BC4 801747C4 60150424 */   addiu     $a0, $zero, 0x1560
    /* 82BC8 801747C8 EFD8030C */  jal        func_800F63BC
    /* 82BCC 801747CC 00000000 */   nop
    /* 82BD0 801747D0 AFD8030C */  jal        func_800F62BC
    /* 82BD4 801747D4 07000424 */   addiu     $a0, $zero, 0x7
    /* 82BD8 801747D8 8CD9030C */  jal        func_800F6630
    /* 82BDC 801747DC 07000424 */   addiu     $a0, $zero, 0x7
    /* 82BE0 801747E0 5DD5030C */  jal        func_800F5574
    /* 82BE4 801747E4 18000424 */   addiu     $a0, $zero, 0x18
    /* 82BE8 801747E8 F5D4030C */  jal        func_800F53D4
    /* 82BEC 801747EC 00000000 */   nop
    /* 82BF0 801747F0 17004010 */  beqz       $v0, .L80174850
    /* 82BF4 801747F4 00000000 */   nop
    /* 82BF8 801747F8 EEE3030C */  jal        func_800F8FB8
    /* 82BFC 801747FC 07000424 */   addiu     $a0, $zero, 0x7
    /* 82C00 80174800 14D20508 */  j          .L80174850
    /* 82C04 80174804 00000000 */   nop
  .L80174808:
    /* 82C08 80174808 53D9030C */  jal        func_800F654C
    /* 82C0C 8017480C 21200000 */   addu      $a0, $zero, $zero
    /* 82C10 80174810 58E2030C */  jal        func_800F8960
    /* 82C14 80174814 60150424 */   addiu     $a0, $zero, 0x1560
    /* 82C18 80174818 EFD8030C */  jal        func_800F63BC
    /* 82C1C 8017481C 00000000 */   nop
    /* 82C20 80174820 AFD8030C */  jal        func_800F62BC
    /* 82C24 80174824 07000424 */   addiu     $a0, $zero, 0x7
    /* 82C28 80174828 8CD9030C */  jal        func_800F6630
    /* 82C2C 8017482C 07000424 */   addiu     $a0, $zero, 0x7
    /* 82C30 80174830 5DD5030C */  jal        func_800F5574
    /* 82C34 80174834 18000424 */   addiu     $a0, $zero, 0x18
    /* 82C38 80174838 F5D4030C */  jal        func_800F53D4
    /* 82C3C 8017483C 00000000 */   nop
    /* 82C40 80174840 F1FF4010 */  beqz       $v0, .L80174808
    /* 82C44 80174844 00000000 */   nop
    /* 82C48 80174848 EEE3030C */  jal        func_800F8FB8
    /* 82C4C 8017484C 07000424 */   addiu     $a0, $zero, 0x7
  .L80174850:
    /* 82C50 80174850 D9D8030C */  jal        func_800F6364
    /* 82C54 80174854 00000000 */   nop
    /* 82C58 80174858 A4D6030C */  jal        func_800F5A90
    /* 82C5C 8017485C 38010424 */   addiu     $a0, $zero, 0x138
    /* 82C60 80174860 F5D4030C */  jal        func_800F53D4
    /* 82C64 80174864 00000000 */   nop
    /* 82C68 80174868 CDFF4010 */  beqz       $v0, .L801747A0
    /* 82C6C 8017486C 0F00043C */   lui       $a0, (0xFC8C0 >> 16)
    /* 82C70 80174870 1000BF8F */  lw         $ra, 0x10($sp)
    /* 82C74 80174874 00000000 */  nop
    /* 82C78 80174878 0800E003 */  jr         $ra
    /* 82C7C 8017487C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8017477C
