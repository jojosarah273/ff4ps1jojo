nonmatching func_80110664, 0x13C

glabel func_80110664
    /* 1EA64 80110664 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 1EA68 80110668 1000BFAF */  sw         $ra, 0x10($sp)
    /* 1EA6C 8011066C 0940040C */  jal        func_80110024
    /* 1EA70 80110670 00000000 */   nop
    /* 1EA74 80110674 53D9030C */  jal        func_800F654C
    /* 1EA78 80110678 02000424 */   addiu     $a0, $zero, 0x2
    /* 1EA7C 8011067C 93E0030C */  jal        func_800F824C
    /* 1EA80 80110680 CA000424 */   addiu     $a0, $zero, 0xCA
    /* 1EA84 80110684 77DC030C */  jal        func_800F71DC
    /* 1EA88 80110688 80010424 */   addiu     $a0, $zero, 0x180
    /* 1EA8C 8011068C 5BE3030C */  jal        func_800F8D6C
    /* 1EA90 80110690 89000424 */   addiu     $a0, $zero, 0x89
  .L80110694:
    /* 1EA94 80110694 DEF9030C */  jal        func_800FE778
    /* 1EA98 80110698 00000000 */   nop
    /* 1EA9C 8011069C 9CDC030C */  jal        func_800F7270
    /* 1EAA0 801106A0 89000424 */   addiu     $a0, $zero, 0x89
    /* 1EAA4 801106A4 56D6030C */  jal        func_800F5958
    /* 1EAA8 801106A8 10000424 */   addiu     $a0, $zero, 0x10
    /* 1EAAC 801106AC F0D4030C */  jal        func_800F53C0
    /* 1EAB0 801106B0 00000000 */   nop
    /* 1EAB4 801106B4 08004014 */  bnez       $v0, .L801106D8
    /* 1EAB8 801106B8 00210424 */   addiu     $a0, $zero, 0x2100
    /* 1EABC 801106BC 1A80023C */  lui        $v0, %hi(D_8019ED5C)
    /* 1EAC0 801106C0 5CED428C */  lw         $v0, %lo(D_8019ED5C)($v0)
    /* 1EAC4 801106C4 1A80053C */  lui        $a1, %hi(D_8019ED40)
    /* 1EAC8 801106C8 40EDA58C */  lw         $a1, %lo(D_8019ED40)($a1)
    /* 1EACC 801106CC 00004390 */  lbu        $v1, 0x0($v0)
    /* 1EAD0 801106D0 62E0030C */  jal        func_800F8188
    /* 1EAD4 801106D4 0000A3A0 */   sb        $v1, 0x0($a1)
  .L801106D8:
    /* 1EAD8 801106D8 1CFA030C */  jal        func_800FE870
    /* 1EADC 801106DC 00000000 */   nop
    /* 1EAE0 801106E0 53D9030C */  jal        func_800F654C
    /* 1EAE4 801106E4 70000424 */   addiu     $a0, $zero, 0x70
    /* 1EAE8 801106E8 62E0030C */  jal        func_800F8188
    /* 1EAEC 801106EC D40A0424 */   addiu     $a0, $zero, 0xAD4
    /* 1EAF0 801106F0 53D9030C */  jal        func_800F654C
    /* 1EAF4 801106F4 58000424 */   addiu     $a0, $zero, 0x58
    /* 1EAF8 801106F8 62E0030C */  jal        func_800F8188
    /* 1EAFC 801106FC D50A0424 */   addiu     $a0, $zero, 0xAD5
    /* 1EB00 80110700 53D9030C */  jal        func_800F654C
    /* 1EB04 80110704 03000424 */   addiu     $a0, $zero, 0x3
    /* 1EB08 80110708 62E0030C */  jal        func_800F8188
    /* 1EB0C 8011070C D00A0424 */   addiu     $a0, $zero, 0xAD0
    /* 1EB10 80110710 62E0030C */  jal        func_800F8188
    /* 1EB14 80110714 D10A0424 */   addiu     $a0, $zero, 0xAD1
    /* 1EB18 80110718 4B57040C */  jal        func_80115D2C
    /* 1EB1C 8011071C 00000000 */   nop
    /* 1EB20 80110720 1D41040C */  jal        func_80110474
    /* 1EB24 80110724 00000000 */   nop
    /* 1EB28 80110728 8CD9030C */  jal        func_800F6630
    /* 1EB2C 8011072C 89000424 */   addiu     $a0, $zero, 0x89
    /* 1EB30 80110730 92D0030C */  jal        func_800F4248
    /* 1EB34 80110734 3F000424 */   addiu     $a0, $zero, 0x3F
    /* 1EB38 80110738 48D0030C */  jal        func_800F4120
    /* 1EB3C 8011073C 02020424 */   addiu     $a0, $zero, 0x202
    /* 1EB40 80110740 05004014 */  bnez       $v0, .L80110758
    /* 1EB44 80110744 00000000 */   nop
    /* 1EB48 80110748 53D9030C */  jal        func_800F654C
    /* 1EB4C 8011074C 23000424 */   addiu     $a0, $zero, 0x23
    /* 1EB50 80110750 01F6030C */  jal        func_800FD804
    /* 1EB54 80110754 00000000 */   nop
  .L80110758:
    /* 1EB58 80110758 9CDC030C */  jal        func_800F7270
    /* 1EB5C 8011075C 89000424 */   addiu     $a0, $zero, 0x89
    /* 1EB60 80110760 92D7030C */  jal        func_800F5E48
    /* 1EB64 80110764 00000000 */   nop
    /* 1EB68 80110768 5BE3030C */  jal        func_800F8D6C
    /* 1EB6C 8011076C 89000424 */   addiu     $a0, $zero, 0x89
    /* 1EB70 80110770 19D7030C */  jal        func_800F5C64
    /* 1EB74 80110774 02020424 */   addiu     $a0, $zero, 0x202
    /* 1EB78 80110778 C6FF4014 */  bnez       $v0, .L80110694
    /* 1EB7C 8011077C 00000000 */   nop
    /* 1EB80 80110780 EEE3030C */  jal        func_800F8FB8
    /* 1EB84 80110784 80000424 */   addiu     $a0, $zero, 0x80
    /* 1EB88 80110788 977A040C */  jal        func_8011EA5C
    /* 1EB8C 8011078C 00000000 */   nop
    /* 1EB90 80110790 1000BF8F */  lw         $ra, 0x10($sp)
    /* 1EB94 80110794 00000000 */  nop
    /* 1EB98 80110798 0800E003 */  jr         $ra
    /* 1EB9C 8011079C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80110664
