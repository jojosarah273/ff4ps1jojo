nonmatching func_801136D4, 0x168

glabel func_801136D4
    /* 21AD4 801136D4 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 21AD8 801136D8 1000BFAF */  sw         $ra, 0x10($sp)
    /* 21ADC 801136DC EEE3030C */  jal        func_800F8FB8
    /* 21AE0 801136E0 79000424 */   addiu     $a0, $zero, 0x79
  .L801136E4:
    /* 21AE4 801136E4 53D9030C */  jal        func_800F654C
    /* 21AE8 801136E8 23000424 */   addiu     $a0, $zero, 0x23
    /* 21AEC 801136EC 01F6030C */  jal        func_800FD804
    /* 21AF0 801136F0 00000000 */   nop
    /* 21AF4 801136F4 53D9030C */  jal        func_800F654C
    /* 21AF8 801136F8 20000424 */   addiu     $a0, $zero, 0x20
    /* 21AFC 801136FC 62E0030C */  jal        func_800F8188
    /* 21B00 80113700 CF0A0424 */   addiu     $a0, $zero, 0xACF
    /* 21B04 80113704 53D9030C */  jal        func_800F654C
    /* 21B08 80113708 02000424 */   addiu     $a0, $zero, 0x2
    /* 21B0C 8011370C 62E0030C */  jal        func_800F8188
    /* 21B10 80113710 D00A0424 */   addiu     $a0, $zero, 0xAD0
    /* 21B14 80113714 62E0030C */  jal        func_800F8188
    /* 21B18 80113718 D10A0424 */   addiu     $a0, $zero, 0xAD1
    /* 21B1C 8011371C 77DC030C */  jal        func_800F71DC
    /* 21B20 80113720 08000424 */   addiu     $a0, $zero, 0x8
    /* 21B24 80113724 40E3030C */  jal        func_800F8D00
    /* 21B28 80113728 D20A0424 */   addiu     $a0, $zero, 0xAD2
    /* 21B2C 8011372C 53D9030C */  jal        func_800F654C
    /* 21B30 80113730 06000424 */   addiu     $a0, $zero, 0x6
    /* 21B34 80113734 62E0030C */  jal        func_800F8188
    /* 21B38 80113738 CD0A0424 */   addiu     $a0, $zero, 0xACD
    /* 21B3C 8011373C DDE3030C */  jal        func_800F8F74
    /* 21B40 80113740 CE0A0424 */   addiu     $a0, $zero, 0xACE
    /* 21B44 80113744 8CD9030C */  jal        func_800F6630
    /* 21B48 80113748 79000424 */   addiu     $a0, $zero, 0x79
    /* 21B4C 8011374C 50D4030C */  jal        func_800F5140
    /* 21B50 80113750 00000000 */   nop
    /* 21B54 80113754 1400043C */  lui        $a0, (0x14FC56 >> 16)
    /* 21B58 80113758 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 21B5C 8011375C 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 21B60 80113760 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 21B64 80113764 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 21B68 80113768 00004394 */  lhu        $v1, 0x0($v0)
    /* 21B6C 8011376C 56FC8434 */  ori        $a0, $a0, (0x14FC56 & 0xFFFF)
    /* 21B70 80113770 1ADB030C */  jal        func_800F6C68
    /* 21B74 80113774 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 21B78 80113778 62E0030C */  jal        func_800F8188
    /* 21B7C 8011377C D40A0424 */   addiu     $a0, $zero, 0xAD4
    /* 21B80 80113780 1400043C */  lui        $a0, (0x14FC57 >> 16)
    /* 21B84 80113784 1ADB030C */  jal        func_800F6C68
    /* 21B88 80113788 57FC8434 */   ori       $a0, $a0, (0x14FC57 & 0xFFFF)
    /* 21B8C 8011378C 62E0030C */  jal        func_800F8188
    /* 21B90 80113790 D50A0424 */   addiu     $a0, $zero, 0xAD5
    /* 21B94 80113794 F356040C */  jal        func_80115BCC
    /* 21B98 80113798 00000000 */   nop
  .L8011379C:
    /* 21B9C 8011379C F6F9030C */  jal        func_800FE7D8
    /* 21BA0 801137A0 00000000 */   nop
    /* 21BA4 801137A4 B266040C */  jal        func_80119AC8
    /* 21BA8 801137A8 00000000 */   nop
    /* 21BAC 801137AC 4B57040C */  jal        func_80115D2C
    /* 21BB0 801137B0 00000000 */   nop
    /* 21BB4 801137B4 84DC030C */  jal        func_800F7210
    /* 21BB8 801137B8 D20A0424 */   addiu     $a0, $zero, 0xAD2
    /* 21BBC 801137BC 56D6030C */  jal        func_800F5958
    /* 21BC0 801137C0 04000424 */   addiu     $a0, $zero, 0x4
    /* 21BC4 801137C4 F5D4030C */  jal        func_800F53D4
    /* 21BC8 801137C8 00000000 */   nop
    /* 21BCC 801137CC 05004010 */  beqz       $v0, .L801137E4
    /* 21BD0 801137D0 00000000 */   nop
    /* 21BD4 801137D4 53D9030C */  jal        func_800F654C
    /* 21BD8 801137D8 01000424 */   addiu     $a0, $zero, 0x1
    /* 21BDC 801137DC 93E0030C */  jal        func_800F824C
    /* 21BE0 801137E0 E5000424 */   addiu     $a0, $zero, 0xE5
  .L801137E4:
    /* 21BE4 801137E4 56D6030C */  jal        func_800F5958
    /* 21BE8 801137E8 21200000 */   addu      $a0, $zero, $zero
    /* 21BEC 801137EC F5D4030C */  jal        func_800F53D4
    /* 21BF0 801137F0 00000000 */   nop
    /* 21BF4 801137F4 E9FF4010 */  beqz       $v0, .L8011379C
    /* 21BF8 801137F8 00000000 */   nop
    /* 21BFC 801137FC AFD8030C */  jal        func_800F62BC
    /* 21C00 80113800 79000424 */   addiu     $a0, $zero, 0x79
    /* 21C04 80113804 8CD9030C */  jal        func_800F6630
    /* 21C08 80113808 79000424 */   addiu     $a0, $zero, 0x79
    /* 21C0C 8011380C 5DD5030C */  jal        func_800F5574
    /* 21C10 80113810 08000424 */   addiu     $a0, $zero, 0x8
    /* 21C14 80113814 F5D4030C */  jal        func_800F53D4
    /* 21C18 80113818 00000000 */   nop
    /* 21C1C 8011381C B1FF4010 */  beqz       $v0, .L801136E4
    /* 21C20 80113820 00000000 */   nop
    /* 21C24 80113824 977A040C */  jal        func_8011EA5C
    /* 21C28 80113828 00000000 */   nop
    /* 21C2C 8011382C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 21C30 80113830 00000000 */  nop
    /* 21C34 80113834 0800E003 */  jr         $ra
    /* 21C38 80113838 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_801136D4
