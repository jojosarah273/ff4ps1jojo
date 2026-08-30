nonmatching func_801046F4, 0x110

glabel func_801046F4
    /* 12AF4 801046F4 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 12AF8 801046F8 03000424 */  addiu      $a0, $zero, 0x3
    /* 12AFC 801046FC 1400BFAF */  sw         $ra, 0x14($sp)
    /* 12B00 80104700 53D9030C */  jal        func_800F654C
    /* 12B04 80104704 1000B0AF */   sw        $s0, 0x10($sp)
    /* 12B08 80104708 62E0030C */  jal        func_800F8188
    /* 12B0C 8010470C 05170424 */   addiu     $a0, $zero, 0x1705
    /* 12B10 80104710 EEE3030C */  jal        func_800F8FB8
    /* 12B14 80104714 7A000424 */   addiu     $a0, $zero, 0x7A
    /* 12B18 80104718 EEE3030C */  jal        func_800F8FB8
    /* 12B1C 8010471C 79000424 */   addiu     $a0, $zero, 0x79
    /* 12B20 80104720 1A80103C */  lui        $s0, %hi(D_80198AB4)
  .L80104724:
    /* 12B24 80104724 1CFA030C */  jal        func_800FE870
    /* 12B28 80104728 00000000 */   nop
    /* 12B2C 8010472C 09FC030C */  jal        func_800FF024
    /* 12B30 80104730 00000000 */   nop
    /* 12B34 80104734 8CD9030C */  jal        func_800F6630
    /* 12B38 80104738 79000424 */   addiu     $a0, $zero, 0x79
    /* 12B3C 8010473C 4400838F */  lw         $v1, %gp_rel(D_8019ED40)($gp)
    /* 12B40 80104740 00000000 */  nop
    /* 12B44 80104744 00006290 */  lbu        $v0, 0x0($v1)
    /* 12B48 80104748 00000000 */  nop
    /* 12B4C 8010474C 82100200 */  srl        $v0, $v0, 2
    /* 12B50 80104750 A4E5030C */  jal        func_800F9690
    /* 12B54 80104754 000062A0 */   sb        $v0, 0x0($v1)
    /* 12B58 80104758 5800828F */  lw         $v0, %gp_rel(D_8019ED54)($gp)
    /* 12B5C 8010475C B48A0426 */  addiu      $a0, $s0, %lo(D_80198AB4)
    /* 12B60 80104760 00004394 */  lhu        $v1, 0x0($v0)
    /* 12B64 80104764 4400858F */  lw         $a1, %gp_rel(D_8019ED40)($gp)
    /* 12B68 80104768 21186400 */  addu       $v1, $v1, $a0
    /* 12B6C 8010476C 00006290 */  lbu        $v0, 0x0($v1)
    /* 12B70 80104770 F8060424 */  addiu      $a0, $zero, 0x6F8
    /* 12B74 80104774 62E0030C */  jal        func_800F8188
    /* 12B78 80104778 0000A2A0 */   sb        $v0, 0x0($a1)
    /* 12B7C 8010477C F6F9030C */  jal        func_800FE7D8
    /* 12B80 80104780 00000000 */   nop
    /* 12B84 80104784 AFD8030C */  jal        func_800F62BC
    /* 12B88 80104788 79000424 */   addiu     $a0, $zero, 0x79
    /* 12B8C 8010478C 8CD9030C */  jal        func_800F6630
    /* 12B90 80104790 79000424 */   addiu     $a0, $zero, 0x79
    /* 12B94 80104794 5DD5030C */  jal        func_800F5574
    /* 12B98 80104798 20000424 */   addiu     $a0, $zero, 0x20
    /* 12B9C 8010479C F5D4030C */  jal        func_800F53D4
    /* 12BA0 801047A0 00000000 */   nop
    /* 12BA4 801047A4 0B004010 */  beqz       $v0, .L801047D4
    /* 12BA8 801047A8 00000000 */   nop
    /* 12BAC 801047AC DDE3030C */  jal        func_800F8F74
    /* 12BB0 801047B0 D0060424 */   addiu     $a0, $zero, 0x6D0
    /* 12BB4 801047B4 59D9030C */  jal        func_800F6564
    /* 12BB8 801047B8 01170424 */   addiu     $a0, $zero, 0x1701
    /* 12BBC 801047BC 62E0030C */  jal        func_800F8188
    /* 12BC0 801047C0 1B170424 */   addiu     $a0, $zero, 0x171B
    /* 12BC4 801047C4 84DC030C */  jal        func_800F7210
    /* 12BC8 801047C8 06170424 */   addiu     $a0, $zero, 0x1706
    /* 12BCC 801047CC 40E3030C */  jal        func_800F8D00
    /* 12BD0 801047D0 19170424 */   addiu     $a0, $zero, 0x1719
  .L801047D4:
    /* 12BD4 801047D4 8CD9030C */  jal        func_800F6630
    /* 12BD8 801047D8 79000424 */   addiu     $a0, $zero, 0x79
    /* 12BDC 801047DC 5DD5030C */  jal        func_800F5574
    /* 12BE0 801047E0 40000424 */   addiu     $a0, $zero, 0x40
    /* 12BE4 801047E4 F5D4030C */  jal        func_800F53D4
    /* 12BE8 801047E8 00000000 */   nop
    /* 12BEC 801047EC CDFF4010 */  beqz       $v0, .L80104724
    /* 12BF0 801047F0 00000000 */   nop
    /* 12BF4 801047F4 1400BF8F */  lw         $ra, 0x14($sp)
    /* 12BF8 801047F8 1000B08F */  lw         $s0, 0x10($sp)
    /* 12BFC 801047FC 0800E003 */  jr         $ra
    /* 12C00 80104800 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_801046F4
