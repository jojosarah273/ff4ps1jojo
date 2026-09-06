nonmatching func_8011356C, 0xD8

glabel func_8011356C
    /* 2196C 8011356C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 21970 80113570 1000BFAF */  sw         $ra, 0x10($sp)
    /* 21974 80113574 53D9030C */  jal        func_800F654C
    /* 21978 80113578 20000424 */   addiu     $a0, $zero, 0x20
    /* 2197C 8011357C 62E0030C */  jal        func_800F8188
    /* 21980 80113580 CF0A0424 */   addiu     $a0, $zero, 0xACF
    /* 21984 80113584 53D9030C */  jal        func_800F654C
    /* 21988 80113588 02000424 */   addiu     $a0, $zero, 0x2
    /* 2198C 8011358C 62E0030C */  jal        func_800F8188
    /* 21990 80113590 D00A0424 */   addiu     $a0, $zero, 0xAD0
    /* 21994 80113594 62E0030C */  jal        func_800F8188
    /* 21998 80113598 D10A0424 */   addiu     $a0, $zero, 0xAD1
    /* 2199C 8011359C 77DC030C */  jal        func_800F71DC
    /* 219A0 801135A0 30000424 */   addiu     $a0, $zero, 0x30
    /* 219A4 801135A4 40E3030C */  jal        func_800F8D00
    /* 219A8 801135A8 D20A0424 */   addiu     $a0, $zero, 0xAD2
    /* 219AC 801135AC 53D9030C */  jal        func_800F654C
    /* 219B0 801135B0 06000424 */   addiu     $a0, $zero, 0x6
    /* 219B4 801135B4 62E0030C */  jal        func_800F8188
    /* 219B8 801135B8 CD0A0424 */   addiu     $a0, $zero, 0xACD
    /* 219BC 801135BC DDE3030C */  jal        func_800F8F74
    /* 219C0 801135C0 CE0A0424 */   addiu     $a0, $zero, 0xACE
    /* 219C4 801135C4 F356040C */  jal        func_80115BCC
    /* 219C8 801135C8 00000000 */   nop
  .L801135CC:
    /* 219CC 801135CC F6F9030C */  jal        func_800FE7D8
    /* 219D0 801135D0 00000000 */   nop
    /* 219D4 801135D4 B266040C */  jal        func_80119AC8
    /* 219D8 801135D8 00000000 */   nop
    /* 219DC 801135DC 4B57040C */  jal        func_80115D2C
    /* 219E0 801135E0 00000000 */   nop
    /* 219E4 801135E4 8CD9030C */  jal        func_800F6630
    /* 219E8 801135E8 7A000424 */   addiu     $a0, $zero, 0x7A
    /* 219EC 801135EC 92D0030C */  jal        func_800F4248
    /* 219F0 801135F0 3F000424 */   addiu     $a0, $zero, 0x3F
    /* 219F4 801135F4 48D0030C */  jal        func_800F4120
    /* 219F8 801135F8 02020424 */   addiu     $a0, $zero, 0x202
    /* 219FC 801135FC 05004014 */  bnez       $v0, .L80113614
    /* 21A00 80113600 00000000 */   nop
    /* 21A04 80113604 53D9030C */  jal        func_800F654C
    /* 21A08 80113608 23000424 */   addiu     $a0, $zero, 0x23
    /* 21A0C 8011360C 01F6030C */  jal        func_800FD804
    /* 21A10 80113610 00000000 */   nop
  .L80113614:
    /* 21A14 80113614 84DC030C */  jal        func_800F7210
    /* 21A18 80113618 D20A0424 */   addiu     $a0, $zero, 0xAD2
    /* 21A1C 8011361C 5CDC030C */  jal        func_800F7170
    /* 21A20 80113620 02020424 */   addiu     $a0, $zero, 0x202
    /* 21A24 80113624 E9FF4014 */  bnez       $v0, .L801135CC
    /* 21A28 80113628 00000000 */   nop
    /* 21A2C 8011362C 2DFA030C */  jal        func_800FE8B4
    /* 21A30 80113630 00000000 */   nop
    /* 21A34 80113634 1000BF8F */  lw         $ra, 0x10($sp)
    /* 21A38 80113638 00000000 */  nop
    /* 21A3C 8011363C 0800E003 */  jr         $ra
    /* 21A40 80113640 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8011356C
