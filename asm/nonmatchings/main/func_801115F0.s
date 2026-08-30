nonmatching func_801115F0, 0x2DC

glabel func_801115F0
    /* 1F9F0 801115F0 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 1F9F4 801115F4 1000B0AF */  sw         $s0, 0x10($sp)
    /* 1F9F8 801115F8 1400BFAF */  sw         $ra, 0x14($sp)
    /* 1F9FC 801115FC C546040C */  jal        func_80111B14
    /* 1FA00 80111600 21800000 */   addu      $s0, $zero, $zero
    /* 1FA04 80111604 53D9030C */  jal        func_800F654C
    /* 1FA08 80111608 81000424 */   addiu     $a0, $zero, 0x81
    /* 1FA0C 8011160C 62E0030C */  jal        func_800F8188
    /* 1FA10 80111610 00420424 */   addiu     $a0, $zero, 0x4200
    /* 1FA14 80111614 EEE3030C */  jal        func_800F8FB8
    /* 1FA18 80111618 79000424 */   addiu     $a0, $zero, 0x79
    /* 1FA1C 8011161C EEE3030C */  jal        func_800F8FB8
    /* 1FA20 80111620 20000424 */   addiu     $a0, $zero, 0x20
    /* 1FA24 80111624 03000224 */  addiu      $v0, $zero, 0x3
  .L80111628:
    /* 1FA28 80111628 05000216 */  bne        $s0, $v0, .L80111640
    /* 1FA2C 8011162C 01000226 */   addiu     $v0, $s0, 0x1
    /* 1FA30 80111630 0F000224 */  addiu      $v0, $zero, 0xF
    /* 1FA34 80111634 0D80013C */  lui        $at, %hi(D_800D2100)
    /* 1FA38 80111638 002122A0 */  sb         $v0, %lo(D_800D2100)($at)
    /* 1FA3C 8011163C 01000226 */  addiu      $v0, $s0, 0x1
  .L80111640:
    /* 1FA40 80111640 FFFF5030 */  andi       $s0, $v0, 0xFFFF
    /* 1FA44 80111644 53D9030C */  jal        func_800F654C
    /* 1FA48 80111648 03000424 */   addiu     $a0, $zero, 0x3
    /* 1FA4C 8011164C 62E0030C */  jal        func_800F8188
    /* 1FA50 80111650 05170424 */   addiu     $a0, $zero, 0x1705
    /* 1FA54 80111654 B746040C */  jal        func_80111ADC
    /* 1FA58 80111658 00000000 */   nop
    /* 1FA5C 8011165C 53D9030C */  jal        func_800F654C
    /* 1FA60 80111660 10000424 */   addiu     $a0, $zero, 0x10
    /* 1FA64 80111664 62E0030C */  jal        func_800F8188
    /* 1FA68 80111668 40030424 */   addiu     $a0, $zero, 0x340
    /* 1FA6C 8011166C 62E0030C */  jal        func_800F8188
    /* 1FA70 80111670 00030424 */   addiu     $a0, $zero, 0x300
    /* 1FA74 80111674 53D9030C */  jal        func_800F654C
    /* 1FA78 80111678 20000424 */   addiu     $a0, $zero, 0x20
    /* 1FA7C 8011167C 62E0030C */  jal        func_800F8188
    /* 1FA80 80111680 44030424 */   addiu     $a0, $zero, 0x344
    /* 1FA84 80111684 62E0030C */  jal        func_800F8188
    /* 1FA88 80111688 04030424 */   addiu     $a0, $zero, 0x304
    /* 1FA8C 8011168C 53D9030C */  jal        func_800F654C
    /* 1FA90 80111690 30000424 */   addiu     $a0, $zero, 0x30
    /* 1FA94 80111694 62E0030C */  jal        func_800F8188
    /* 1FA98 80111698 48030424 */   addiu     $a0, $zero, 0x348
    /* 1FA9C 8011169C 62E0030C */  jal        func_800F8188
    /* 1FAA0 801116A0 08030424 */   addiu     $a0, $zero, 0x308
    /* 1FAA4 801116A4 53D9030C */  jal        func_800F654C
    /* 1FAA8 801116A8 40000424 */   addiu     $a0, $zero, 0x40
    /* 1FAAC 801116AC 62E0030C */  jal        func_800F8188
    /* 1FAB0 801116B0 4C030424 */   addiu     $a0, $zero, 0x34C
    /* 1FAB4 801116B4 62E0030C */  jal        func_800F8188
    /* 1FAB8 801116B8 0C030424 */   addiu     $a0, $zero, 0x30C
    /* 1FABC 801116BC 53D9030C */  jal        func_800F654C
    /* 1FAC0 801116C0 78000424 */   addiu     $a0, $zero, 0x78
    /* 1FAC4 801116C4 20D5030C */  jal        func_800F5480
    /* 1FAC8 801116C8 00000000 */   nop
    /* 1FACC 801116CC 0FCF030C */  jal        func_800F3C3C
    /* 1FAD0 801116D0 20000424 */   addiu     $a0, $zero, 0x20
    /* 1FAD4 801116D4 D2DF030C */  jal        func_800F7F48
    /* 1FAD8 801116D8 21204000 */   addu      $a0, $v0, $zero
    /* 1FADC 801116DC 5DD5030C */  jal        func_800F5574
    /* 1FAE0 801116E0 68000424 */   addiu     $a0, $zero, 0x68
    /* 1FAE4 801116E4 F0D4030C */  jal        func_800F53C0
    /* 1FAE8 801116E8 00000000 */   nop
    /* 1FAEC 801116EC 03004014 */  bnez       $v0, .L801116FC
    /* 1FAF0 801116F0 00000000 */   nop
    /* 1FAF4 801116F4 53D9030C */  jal        func_800F654C
    /* 1FAF8 801116F8 68000424 */   addiu     $a0, $zero, 0x68
  .L801116FC:
    /* 1FAFC 801116FC 62E0030C */  jal        func_800F8188
    /* 1FB00 80111700 41030424 */   addiu     $a0, $zero, 0x341
    /* 1FB04 80111704 62E0030C */  jal        func_800F8188
    /* 1FB08 80111708 45030424 */   addiu     $a0, $zero, 0x345
    /* 1FB0C 8011170C 62E0030C */  jal        func_800F8188
    /* 1FB10 80111710 49030424 */   addiu     $a0, $zero, 0x349
    /* 1FB14 80111714 62E0030C */  jal        func_800F8188
    /* 1FB18 80111718 4D030424 */   addiu     $a0, $zero, 0x34D
    /* 1FB1C 8011171C 53D9030C */  jal        func_800F654C
    /* 1FB20 80111720 30000424 */   addiu     $a0, $zero, 0x30
    /* 1FB24 80111724 62E0030C */  jal        func_800F8188
    /* 1FB28 80111728 42030424 */   addiu     $a0, $zero, 0x342
    /* 1FB2C 8011172C 53D9030C */  jal        func_800F654C
    /* 1FB30 80111730 32000424 */   addiu     $a0, $zero, 0x32
    /* 1FB34 80111734 62E0030C */  jal        func_800F8188
    /* 1FB38 80111738 46030424 */   addiu     $a0, $zero, 0x346
    /* 1FB3C 8011173C 53D9030C */  jal        func_800F654C
    /* 1FB40 80111740 34000424 */   addiu     $a0, $zero, 0x34
    /* 1FB44 80111744 62E0030C */  jal        func_800F8188
    /* 1FB48 80111748 4A030424 */   addiu     $a0, $zero, 0x34A
    /* 1FB4C 8011174C 53D9030C */  jal        func_800F654C
    /* 1FB50 80111750 36000424 */   addiu     $a0, $zero, 0x36
    /* 1FB54 80111754 62E0030C */  jal        func_800F8188
    /* 1FB58 80111758 4E030424 */   addiu     $a0, $zero, 0x34E
    /* 1FB5C 8011175C 53D9030C */  jal        func_800F654C
    /* 1FB60 80111760 37000424 */   addiu     $a0, $zero, 0x37
    /* 1FB64 80111764 62E0030C */  jal        func_800F8188
    /* 1FB68 80111768 43030424 */   addiu     $a0, $zero, 0x343
    /* 1FB6C 8011176C 62E0030C */  jal        func_800F8188
    /* 1FB70 80111770 03030424 */   addiu     $a0, $zero, 0x303
    /* 1FB74 80111774 62E0030C */  jal        func_800F8188
    /* 1FB78 80111778 47030424 */   addiu     $a0, $zero, 0x347
    /* 1FB7C 8011177C 62E0030C */  jal        func_800F8188
    /* 1FB80 80111780 07030424 */   addiu     $a0, $zero, 0x307
    /* 1FB84 80111784 62E0030C */  jal        func_800F8188
    /* 1FB88 80111788 4B030424 */   addiu     $a0, $zero, 0x34B
    /* 1FB8C 8011178C 62E0030C */  jal        func_800F8188
    /* 1FB90 80111790 0B030424 */   addiu     $a0, $zero, 0x30B
    /* 1FB94 80111794 62E0030C */  jal        func_800F8188
    /* 1FB98 80111798 4F030424 */   addiu     $a0, $zero, 0x34F
    /* 1FB9C 8011179C 62E0030C */  jal        func_800F8188
    /* 1FBA0 801117A0 0F030424 */   addiu     $a0, $zero, 0x30F
    /* 1FBA4 801117A4 53D9030C */  jal        func_800F654C
    /* 1FBA8 801117A8 70000424 */   addiu     $a0, $zero, 0x70
    /* 1FBAC 801117AC 62E0030C */  jal        func_800F8188
    /* 1FBB0 801117B0 01030424 */   addiu     $a0, $zero, 0x301
    /* 1FBB4 801117B4 62E0030C */  jal        func_800F8188
    /* 1FBB8 801117B8 05030424 */   addiu     $a0, $zero, 0x305
    /* 1FBBC 801117BC 62E0030C */  jal        func_800F8188
    /* 1FBC0 801117C0 09030424 */   addiu     $a0, $zero, 0x309
    /* 1FBC4 801117C4 62E0030C */  jal        func_800F8188
    /* 1FBC8 801117C8 0D030424 */   addiu     $a0, $zero, 0x30D
    /* 1FBCC 801117CC 8CD9030C */  jal        func_800F6630
    /* 1FBD0 801117D0 7A000424 */   addiu     $a0, $zero, 0x7A
    /* 1FBD4 801117D4 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 1FBD8 801117D8 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 1FBDC 801117DC 00000000 */  nop
    /* 1FBE0 801117E0 00006290 */  lbu        $v0, 0x0($v1)
    /* 1FBE4 801117E4 02000424 */  addiu      $a0, $zero, 0x2
    /* 1FBE8 801117E8 82100200 */  srl        $v0, $v0, 2
    /* 1FBEC 801117EC 92D0030C */  jal        func_800F4248
    /* 1FBF0 801117F0 000062A0 */   sb        $v0, 0x0($v1)
    /* 1FBF4 801117F4 04D5030C */  jal        func_800F5410
    /* 1FBF8 801117F8 00000000 */   nop
    /* 1FBFC 801117FC 02D0030C */  jal        func_800F4008
    /* 1FC00 80111800 E4000424 */   addiu     $a0, $zero, 0xE4
    /* 1FC04 80111804 62E0030C */  jal        func_800F8188
    /* 1FC08 80111808 02030424 */   addiu     $a0, $zero, 0x302
    /* 1FC0C 8011180C 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 1FC10 80111810 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 1FC14 80111814 00000000 */  nop
    /* 1FC18 80111818 00006290 */  lbu        $v0, 0x0($v1)
    /* 1FC1C 8011181C 06030424 */  addiu      $a0, $zero, 0x306
    /* 1FC20 80111820 02004238 */  xori       $v0, $v0, 0x2
    /* 1FC24 80111824 62E0030C */  jal        func_800F8188
    /* 1FC28 80111828 000062A0 */   sb        $v0, 0x0($v1)
    /* 1FC2C 8011182C 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 1FC30 80111830 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 1FC34 80111834 00000000 */  nop
    /* 1FC38 80111838 00006290 */  lbu        $v0, 0x0($v1)
    /* 1FC3C 8011183C 0A030424 */  addiu      $a0, $zero, 0x30A
    /* 1FC40 80111840 02004238 */  xori       $v0, $v0, 0x2
    /* 1FC44 80111844 62E0030C */  jal        func_800F8188
    /* 1FC48 80111848 000062A0 */   sb        $v0, 0x0($v1)
    /* 1FC4C 8011184C 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 1FC50 80111850 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 1FC54 80111854 00000000 */  nop
    /* 1FC58 80111858 00006290 */  lbu        $v0, 0x0($v1)
    /* 1FC5C 8011185C 0E030424 */  addiu      $a0, $zero, 0x30E
    /* 1FC60 80111860 02004238 */  xori       $v0, $v0, 0x2
    /* 1FC64 80111864 62E0030C */  jal        func_800F8188
    /* 1FC68 80111868 000062A0 */   sb        $v0, 0x0($v1)
    /* 1FC6C 8011186C 8CD9030C */  jal        func_800F6630
    /* 1FC70 80111870 7A000424 */   addiu     $a0, $zero, 0x7A
    /* 1FC74 80111874 92D0030C */  jal        func_800F4248
    /* 1FC78 80111878 0F000424 */   addiu     $a0, $zero, 0xF
    /* 1FC7C 8011187C 48D0030C */  jal        func_800F4120
    /* 1FC80 80111880 02020424 */   addiu     $a0, $zero, 0x202
    /* 1FC84 80111884 03004014 */  bnez       $v0, .L80111894
    /* 1FC88 80111888 00000000 */   nop
    /* 1FC8C 8011188C AFD8030C */  jal        func_800F62BC
    /* 1FC90 80111890 20000424 */   addiu     $a0, $zero, 0x20
  .L80111894:
    /* 1FC94 80111894 8CD9030C */  jal        func_800F6630
    /* 1FC98 80111898 20000424 */   addiu     $a0, $zero, 0x20
    /* 1FC9C 8011189C 5DD5030C */  jal        func_800F5574
    /* 1FCA0 801118A0 20000424 */   addiu     $a0, $zero, 0x20
    /* 1FCA4 801118A4 F5D4030C */  jal        func_800F53D4
    /* 1FCA8 801118A8 00000000 */   nop
    /* 1FCAC 801118AC 5EFF4010 */  beqz       $v0, .L80111628
    /* 1FCB0 801118B0 03000224 */   addiu     $v0, $zero, 0x3
    /* 1FCB4 801118B4 977A040C */  jal        func_8011EA5C
    /* 1FCB8 801118B8 00000000 */   nop
    /* 1FCBC 801118BC 1400BF8F */  lw         $ra, 0x14($sp)
    /* 1FCC0 801118C0 1000B08F */  lw         $s0, 0x10($sp)
    /* 1FCC4 801118C4 0800E003 */  jr         $ra
    /* 1FCC8 801118C8 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_801115F0
