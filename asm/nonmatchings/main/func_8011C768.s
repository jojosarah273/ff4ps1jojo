nonmatching func_8011C768, 0x530

glabel func_8011C768
    /* 2AB68 8011C768 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 2AB6C 8011C76C AB000424 */  addiu      $a0, $zero, 0xAB
    /* 2AB70 8011C770 1400BFAF */  sw         $ra, 0x14($sp)
    /* 2AB74 8011C774 8CD9030C */  jal        func_800F6630
    /* 2AB78 8011C778 1000B0AF */   sw        $s0, 0x10($sp)
    /* 2AB7C 8011C77C 0DD9030C */  jal        func_800F6434
    /* 2AB80 8011C780 02020424 */   addiu     $a0, $zero, 0x202
    /* 2AB84 8011C784 40014010 */  beqz       $v0, .L8011CC88
    /* 2AB88 8011C788 00000000 */   nop
    /* 2AB8C 8011C78C 92D0030C */  jal        func_800F4248
    /* 2AB90 8011C790 01000424 */   addiu     $a0, $zero, 0x1
    /* 2AB94 8011C794 48D0030C */  jal        func_800F4120
    /* 2AB98 8011C798 02000424 */   addiu     $a0, $zero, 0x2
    /* 2AB9C 8011C79C 0C014010 */  beqz       $v0, .L8011CBD0
    /* 2ABA0 8011C7A0 00000000 */   nop
    /* 2ABA4 8011C7A4 8CD9030C */  jal        func_800F6630
    /* 2ABA8 8011C7A8 AB000424 */   addiu     $a0, $zero, 0xAB
    /* 2ABAC 8011C7AC 92D0030C */  jal        func_800F4248
    /* 2ABB0 8011C7B0 02000424 */   addiu     $a0, $zero, 0x2
    /* 2ABB4 8011C7B4 48D0030C */  jal        func_800F4120
    /* 2ABB8 8011C7B8 02000424 */   addiu     $a0, $zero, 0x2
    /* 2ABBC 8011C7BC 0B004014 */  bnez       $v0, .L8011C7EC
    /* 2ABC0 8011C7C0 00000000 */   nop
    /* 2ABC4 8011C7C4 59D9030C */  jal        func_800F6564
    /* 2ABC8 8011C7C8 06170424 */   addiu     $a0, $zero, 0x1706
    /* 2ABCC 8011C7CC 04D5030C */  jal        func_800F5410
    /* 2ABD0 8011C7D0 00000000 */   nop
    /* 2ABD4 8011C7D4 02D0030C */  jal        func_800F4008
    /* 2ABD8 8011C7D8 09000424 */   addiu     $a0, $zero, 0x9
    /* 2ABDC 8011C7DC 93E0030C */  jal        func_800F824C
    /* 2ABE0 8011C7E0 3D000424 */   addiu     $a0, $zero, 0x3D
    /* 2ABE4 8011C7E4 03720408 */  j          .L8011C80C
    /* 2ABE8 8011C7E8 00000000 */   nop
  .L8011C7EC:
    /* 2ABEC 8011C7EC 59D9030C */  jal        func_800F6564
    /* 2ABF0 8011C7F0 06170424 */   addiu     $a0, $zero, 0x1706
    /* 2ABF4 8011C7F4 20D5030C */  jal        func_800F5480
    /* 2ABF8 8011C7F8 00000000 */   nop
    /* 2ABFC 8011C7FC 16E0030C */  jal        func_800F8058
    /* 2AC00 8011C800 08000424 */   addiu     $a0, $zero, 0x8
    /* 2AC04 8011C804 93E0030C */  jal        func_800F824C
    /* 2AC08 8011C808 3D000424 */   addiu     $a0, $zero, 0x3D
  .L8011C80C:
    /* 2AC0C 8011C80C 59D9030C */  jal        func_800F6564
    /* 2AC10 8011C810 07170424 */   addiu     $a0, $zero, 0x1707
    /* 2AC14 8011C814 20D5030C */  jal        func_800F5480
    /* 2AC18 8011C818 00000000 */   nop
    /* 2AC1C 8011C81C 16E0030C */  jal        func_800F8058
    /* 2AC20 8011C820 07000424 */   addiu     $a0, $zero, 0x7
    /* 2AC24 8011C824 92D0030C */  jal        func_800F4248
    /* 2AC28 8011C828 3F000424 */   addiu     $a0, $zero, 0x3F
    /* 2AC2C 8011C82C 93E0030C */  jal        func_800F824C
    /* 2AC30 8011C830 3E000424 */   addiu     $a0, $zero, 0x3E
    /* 2AC34 8011C834 9CDC030C */  jal        func_800F7270
    /* 2AC38 8011C838 3D000424 */   addiu     $a0, $zero, 0x3D
    /* 2AC3C 8011C83C 5BE3030C */  jal        func_800F8D6C
    /* 2AC40 8011C840 43000424 */   addiu     $a0, $zero, 0x43
    /* 2AC44 8011C844 40DD030C */  jal        func_800F7500
    /* 2AC48 8011C848 21200000 */   addu      $a0, $zero, $zero
  .L8011C84C:
    /* 2AC4C 8011C84C 9CDC030C */  jal        func_800F7270
    /* 2AC50 8011C850 3D000424 */   addiu     $a0, $zero, 0x3D
    /* 2AC54 8011C854 7F00043C */  lui        $a0, (0x7F5C71 >> 16)
    /* 2AC58 8011C858 1ADB030C */  jal        func_800F6C68
    /* 2AC5C 8011C85C 715C8434 */   ori       $a0, $a0, (0x7F5C71 & 0xFFFF)
    /* 2AC60 8011C860 93E0030C */  jal        func_800F824C
    /* 2AC64 8011C864 18000424 */   addiu     $a0, $zero, 0x18
    /* 2AC68 8011C868 EEE3030C */  jal        func_800F8FB8
    /* 2AC6C 8011C86C 19000424 */   addiu     $a0, $zero, 0x19
    /* 2AC70 8011C870 91E5030C */  jal        func_800F9644
    /* 2AC74 8011C874 20000424 */   addiu     $a0, $zero, 0x20
    /* 2AC78 8011C878 0FCF030C */  jal        func_800F3C3C
    /* 2AC7C 8011C87C 18000424 */   addiu     $a0, $zero, 0x18
    /* 2AC80 8011C880 09D4030C */  jal        func_800F5024
    /* 2AC84 8011C884 21204000 */   addu      $a0, $v0, $zero
    /* 2AC88 8011C888 9CDC030C */  jal        func_800F7270
    /* 2AC8C 8011C88C 18000424 */   addiu     $a0, $zero, 0x18
    /* 2AC90 8011C890 7F00043C */  lui        $a0, (0x7F4800 >> 16)
    /* 2AC94 8011C894 3DDB030C */  jal        func_800F6CF4
    /* 2AC98 8011C898 00488434 */   ori       $a0, $a0, (0x7F4800 & 0xFFFF)
    /* 2AC9C 8011C89C 7F00043C */  lui        $a0, (0x7F4900 >> 16)
    /* 2ACA0 8011C8A0 00498434 */  ori        $a0, $a0, (0x7F4900 & 0xFFFF)
    /* 2ACA4 8011C8A4 1A80033C */  lui        $v1, %hi(D_8019ED44)
    /* 2ACA8 8011C8A8 44ED638C */  lw         $v1, %lo(D_8019ED44)($v1)
    /* 2ACAC 8011C8AC 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 2ACB0 8011C8B0 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 2ACB4 8011C8B4 00007094 */  lhu        $s0, 0x0($v1)
    /* 2ACB8 8011C8B8 0000A294 */  lhu        $v0, 0x0($a1)
    /* 2ACBC 8011C8BC 00201032 */  andi       $s0, $s0, 0x2000
    /* 2ACC0 8011C8C0 42100200 */  srl        $v0, $v0, 1
    /* 2ACC4 8011C8C4 25800202 */  or         $s0, $s0, $v0
    /* 2ACC8 8011C8C8 3DDB030C */  jal        func_800F6CF4
    /* 2ACCC 8011C8CC FFFF1032 */   andi      $s0, $s0, 0xFFFF
    /* 2ACD0 8011C8D0 1A80033C */  lui        $v1, %hi(D_8019ED44)
    /* 2ACD4 8011C8D4 44ED638C */  lw         $v1, %lo(D_8019ED44)($v1)
    /* 2ACD8 8011C8D8 7F00043C */  lui        $a0, (0x7F4A00 >> 16)
    /* 2ACDC 8011C8DC 00006294 */  lhu        $v0, 0x0($v1)
    /* 2ACE0 8011C8E0 004A8434 */  ori        $a0, $a0, (0x7F4A00 & 0xFFFF)
    /* 2ACE4 8011C8E4 00204230 */  andi       $v0, $v0, 0x2000
    /* 2ACE8 8011C8E8 42100200 */  srl        $v0, $v0, 1
    /* 2ACEC 8011C8EC 25800202 */  or         $s0, $s0, $v0
    /* 2ACF0 8011C8F0 3DDB030C */  jal        func_800F6CF4
    /* 2ACF4 8011C8F4 FFFF1032 */   andi      $s0, $s0, 0xFFFF
    /* 2ACF8 8011C8F8 1A80033C */  lui        $v1, %hi(D_8019ED44)
    /* 2ACFC 8011C8FC 44ED638C */  lw         $v1, %lo(D_8019ED44)($v1)
    /* 2AD00 8011C900 7F00043C */  lui        $a0, (0x7F4B00 >> 16)
    /* 2AD04 8011C904 00006294 */  lhu        $v0, 0x0($v1)
    /* 2AD08 8011C908 004B8434 */  ori        $a0, $a0, (0x7F4B00 & 0xFFFF)
    /* 2AD0C 8011C90C 00204230 */  andi       $v0, $v0, 0x2000
    /* 2AD10 8011C910 82100200 */  srl        $v0, $v0, 2
    /* 2AD14 8011C914 25800202 */  or         $s0, $s0, $v0
    /* 2AD18 8011C918 3DDB030C */  jal        func_800F6CF4
    /* 2AD1C 8011C91C FFFF1032 */   andi      $s0, $s0, 0xFFFF
    /* 2AD20 8011C920 1A80033C */  lui        $v1, %hi(D_8019ED44)
    /* 2AD24 8011C924 44ED638C */  lw         $v1, %lo(D_8019ED44)($v1)
    /* 2AD28 8011C928 00000000 */  nop
    /* 2AD2C 8011C92C 00006294 */  lhu        $v0, 0x0($v1)
    /* 2AD30 8011C930 DB0A0424 */  addiu      $a0, $zero, 0xADB
    /* 2AD34 8011C934 00204230 */  andi       $v0, $v0, 0x2000
    /* 2AD38 8011C938 C2100200 */  srl        $v0, $v0, 3
    /* 2AD3C 8011C93C 25800202 */  or         $s0, $s0, $v0
    /* 2AD40 8011C940 75E2030C */  jal        func_800F89D4
    /* 2AD44 8011C944 000070A4 */   sh        $s0, 0x0($v1)
    /* 2AD48 8011C948 75E2030C */  jal        func_800F89D4
    /* 2AD4C 8011C94C DD0A0424 */   addiu     $a0, $zero, 0xADD
    /* 2AD50 8011C950 75E2030C */  jal        func_800F89D4
    /* 2AD54 8011C954 1B0B0424 */   addiu     $a0, $zero, 0xB1B
    /* 2AD58 8011C958 75E2030C */  jal        func_800F89D4
    /* 2AD5C 8011C95C 1D0B0424 */   addiu     $a0, $zero, 0xB1D
    /* 2AD60 8011C960 56D9030C */  jal        func_800F6558
    /* 2AD64 8011C964 21200000 */   addu      $a0, $zero, $zero
    /* 2AD68 8011C968 98E5030C */  jal        func_800F9660
    /* 2AD6C 8011C96C 20000424 */   addiu     $a0, $zero, 0x20
    /* 2AD70 8011C970 8CD9030C */  jal        func_800F6630
    /* 2AD74 8011C974 3E000424 */   addiu     $a0, $zero, 0x3E
    /* 2AD78 8011C978 7AD8030C */  jal        func_800F61E8
    /* 2AD7C 8011C97C 00000000 */   nop
    /* 2AD80 8011C980 92D0030C */  jal        func_800F4248
    /* 2AD84 8011C984 3F000424 */   addiu     $a0, $zero, 0x3F
    /* 2AD88 8011C988 93E0030C */  jal        func_800F824C
    /* 2AD8C 8011C98C 3E000424 */   addiu     $a0, $zero, 0x3E
    /* 2AD90 8011C990 1A80033C */  lui        $v1, %hi(D_8019ED58)
    /* 2AD94 8011C994 58ED638C */  lw         $v1, %lo(D_8019ED58)($v1)
    /* 2AD98 8011C998 00000000 */  nop
    /* 2AD9C 8011C99C 00006294 */  lhu        $v0, 0x0($v1)
    /* 2ADA0 8011C9A0 40000424 */  addiu      $a0, $zero, 0x40
    /* 2ADA4 8011C9A4 04004224 */  addiu      $v0, $v0, 0x4
    /* 2ADA8 8011C9A8 A4D6030C */  jal        func_800F5A90
    /* 2ADAC 8011C9AC 000062A4 */   sh        $v0, 0x0($v1)
    /* 2ADB0 8011C9B0 F5D4030C */  jal        func_800F53D4
    /* 2ADB4 8011C9B4 00000000 */   nop
    /* 2ADB8 8011C9B8 A4FF4010 */  beqz       $v0, .L8011C84C
    /* 2ADBC 8011C9BC 00000000 */   nop
    /* 2ADC0 8011C9C0 EEE3030C */  jal        func_800F8FB8
    /* 2ADC4 8011C9C4 99000424 */   addiu     $a0, $zero, 0x99
    /* 2ADC8 8011C9C8 8CD9030C */  jal        func_800F6630
    /* 2ADCC 8011C9CC 44000424 */   addiu     $a0, $zero, 0x44
    /* 2ADD0 8011C9D0 92D0030C */  jal        func_800F4248
    /* 2ADD4 8011C9D4 0F000424 */   addiu     $a0, $zero, 0xF
    /* 2ADD8 8011C9D8 93E0030C */  jal        func_800F824C
    /* 2ADDC 8011C9DC 9A000424 */   addiu     $a0, $zero, 0x9A
    /* 2ADE0 8011C9E0 0FCF030C */  jal        func_800F3C3C
    /* 2ADE4 8011C9E4 9A000424 */   addiu     $a0, $zero, 0x9A
    /* 2ADE8 8011C9E8 AFDD030C */  jal        func_800F76BC
    /* 2ADEC 8011C9EC 21204000 */   addu      $a0, $v0, $zero
    /* 2ADF0 8011C9F0 BADD030C */  jal        func_800F76E8
    /* 2ADF4 8011C9F4 00000000 */   nop
    /* 2ADF8 8011C9F8 0FCF030C */  jal        func_800F3C3C
    /* 2ADFC 8011C9FC 99000424 */   addiu     $a0, $zero, 0x99
    /* 2AE00 8011CA00 32DF030C */  jal        func_800F7CC8
    /* 2AE04 8011CA04 21204000 */   addu      $a0, $v0, $zero
    /* 2AE08 8011CA08 0FCF030C */  jal        func_800F3C3C
    /* 2AE0C 8011CA0C 9A000424 */   addiu     $a0, $zero, 0x9A
    /* 2AE10 8011CA10 AFDD030C */  jal        func_800F76BC
    /* 2AE14 8011CA14 21204000 */   addu      $a0, $v0, $zero
    /* 2AE18 8011CA18 BADD030C */  jal        func_800F76E8
    /* 2AE1C 8011CA1C 00000000 */   nop
    /* 2AE20 8011CA20 0FCF030C */  jal        func_800F3C3C
    /* 2AE24 8011CA24 99000424 */   addiu     $a0, $zero, 0x99
    /* 2AE28 8011CA28 32DF030C */  jal        func_800F7CC8
    /* 2AE2C 8011CA2C 21204000 */   addu      $a0, $v0, $zero
    /* 2AE30 8011CA30 8CD9030C */  jal        func_800F6630
    /* 2AE34 8011CA34 43000424 */   addiu     $a0, $zero, 0x43
    /* 2AE38 8011CA38 92D0030C */  jal        func_800F4248
    /* 2AE3C 8011CA3C 1F000424 */   addiu     $a0, $zero, 0x1F
    /* 2AE40 8011CA40 50D4030C */  jal        func_800F5140
    /* 2AE44 8011CA44 00000000 */   nop
    /* 2AE48 8011CA48 93E0030C */  jal        func_800F824C
    /* 2AE4C 8011CA4C 43000424 */   addiu     $a0, $zero, 0x43
    /* 2AE50 8011CA50 92D0030C */  jal        func_800F4248
    /* 2AE54 8011CA54 20000424 */   addiu     $a0, $zero, 0x20
    /* 2AE58 8011CA58 48D0030C */  jal        func_800F4120
    /* 2AE5C 8011CA5C 02000424 */   addiu     $a0, $zero, 0x2
    /* 2AE60 8011CA60 09004014 */  bnez       $v0, .L8011CA88
    /* 2AE64 8011CA64 00000000 */   nop
    /* 2AE68 8011CA68 8CD9030C */  jal        func_800F6630
    /* 2AE6C 8011CA6C 9A000424 */   addiu     $a0, $zero, 0x9A
    /* 2AE70 8011CA70 04D5030C */  jal        func_800F5410
    /* 2AE74 8011CA74 00000000 */   nop
    /* 2AE78 8011CA78 02D0030C */  jal        func_800F4008
    /* 2AE7C 8011CA7C 04000424 */   addiu     $a0, $zero, 0x4
    /* 2AE80 8011CA80 93E0030C */  jal        func_800F824C
    /* 2AE84 8011CA84 9A000424 */   addiu     $a0, $zero, 0x9A
  .L8011CA88:
    /* 2AE88 8011CA88 8CD9030C */  jal        func_800F6630
    /* 2AE8C 8011CA8C 43000424 */   addiu     $a0, $zero, 0x43
    /* 2AE90 8011CA90 92D0030C */  jal        func_800F4248
    /* 2AE94 8011CA94 1F000424 */   addiu     $a0, $zero, 0x1F
    /* 2AE98 8011CA98 04D5030C */  jal        func_800F5410
    /* 2AE9C 8011CA9C 00000000 */   nop
    /* 2AEA0 8011CAA0 0FCF030C */  jal        func_800F3C3C
    /* 2AEA4 8011CAA4 99000424 */   addiu     $a0, $zero, 0x99
    /* 2AEA8 8011CAA8 CECF030C */  jal        func_800F3F38
    /* 2AEAC 8011CAAC 21204000 */   addu      $a0, $v0, $zero
    /* 2AEB0 8011CAB0 93E0030C */  jal        func_800F824C
    /* 2AEB4 8011CAB4 99000424 */   addiu     $a0, $zero, 0x99
    /* 2AEB8 8011CAB8 8CD9030C */  jal        func_800F6630
    /* 2AEBC 8011CABC 9A000424 */   addiu     $a0, $zero, 0x9A
    /* 2AEC0 8011CAC0 04D5030C */  jal        func_800F5410
    /* 2AEC4 8011CAC4 00000000 */   nop
    /* 2AEC8 8011CAC8 02D0030C */  jal        func_800F4008
    /* 2AECC 8011CACC 18000424 */   addiu     $a0, $zero, 0x18
    /* 2AED0 8011CAD0 93E0030C */  jal        func_800F824C
    /* 2AED4 8011CAD4 9A000424 */   addiu     $a0, $zero, 0x9A
    /* 2AED8 8011CAD8 8CD9030C */  jal        func_800F6630
    /* 2AEDC 8011CADC 44000424 */   addiu     $a0, $zero, 0x44
    /* 2AEE0 8011CAE0 92D0030C */  jal        func_800F4248
    /* 2AEE4 8011CAE4 0F000424 */   addiu     $a0, $zero, 0xF
    /* 2AEE8 8011CAE8 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 2AEEC 8011CAEC 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 2AEF0 8011CAF0 00000000 */  nop
    /* 2AEF4 8011CAF4 00006290 */  lbu        $v0, 0x0($v1)
    /* 2AEF8 8011CAF8 97000424 */  addiu      $a0, $zero, 0x97
    /* 2AEFC 8011CAFC 80100200 */  sll        $v0, $v0, 2
    /* 2AF00 8011CB00 93E0030C */  jal        func_800F824C
    /* 2AF04 8011CB04 000062A0 */   sb        $v0, 0x0($v1)
    /* 2AF08 8011CB08 EEE3030C */  jal        func_800F8FB8
    /* 2AF0C 8011CB0C 98000424 */   addiu     $a0, $zero, 0x98
    /* 2AF10 8011CB10 53D9030C */  jal        func_800F654C
    /* 2AF14 8011CB14 40000424 */   addiu     $a0, $zero, 0x40
    /* 2AF18 8011CB18 20D5030C */  jal        func_800F5480
    /* 2AF1C 8011CB1C 00000000 */   nop
    /* 2AF20 8011CB20 0FCF030C */  jal        func_800F3C3C
    /* 2AF24 8011CB24 97000424 */   addiu     $a0, $zero, 0x97
    /* 2AF28 8011CB28 D2DF030C */  jal        func_800F7F48
    /* 2AF2C 8011CB2C 21204000 */   addu      $a0, $v0, $zero
    /* 2AF30 8011CB30 93E0030C */  jal        func_800F824C
    /* 2AF34 8011CB34 95000424 */   addiu     $a0, $zero, 0x95
    /* 2AF38 8011CB38 EEE3030C */  jal        func_800F8FB8
    /* 2AF3C 8011CB3C 96000424 */   addiu     $a0, $zero, 0x96
    /* 2AF40 8011CB40 8CD9030C */  jal        func_800F6630
    /* 2AF44 8011CB44 9A000424 */   addiu     $a0, $zero, 0x9A
    /* 2AF48 8011CB48 92D0030C */  jal        func_800F4248
    /* 2AF4C 8011CB4C FC000424 */   addiu     $a0, $zero, 0xFC
    /* 2AF50 8011CB50 93E0030C */  jal        func_800F824C
    /* 2AF54 8011CB54 9C000424 */   addiu     $a0, $zero, 0x9C
    /* 2AF58 8011CB58 8CD9030C */  jal        func_800F6630
    /* 2AF5C 8011CB5C 99000424 */   addiu     $a0, $zero, 0x99
    /* 2AF60 8011CB60 92D0030C */  jal        func_800F4248
    /* 2AF64 8011CB64 1F000424 */   addiu     $a0, $zero, 0x1F
    /* 2AF68 8011CB68 93E0030C */  jal        func_800F824C
    /* 2AF6C 8011CB6C 9B000424 */   addiu     $a0, $zero, 0x9B
    /* 2AF70 8011CB70 8CD9030C */  jal        func_800F6630
    /* 2AF74 8011CB74 99000424 */   addiu     $a0, $zero, 0x99
    /* 2AF78 8011CB78 7AD8030C */  jal        func_800F61E8
    /* 2AF7C 8011CB7C 00000000 */   nop
    /* 2AF80 8011CB80 93E0030C */  jal        func_800F824C
    /* 2AF84 8011CB84 9D000424 */   addiu     $a0, $zero, 0x9D
    /* 2AF88 8011CB88 8CD9030C */  jal        func_800F6630
    /* 2AF8C 8011CB8C 9A000424 */   addiu     $a0, $zero, 0x9A
    /* 2AF90 8011CB90 93E0030C */  jal        func_800F824C
    /* 2AF94 8011CB94 9E000424 */   addiu     $a0, $zero, 0x9E
    /* 2AF98 8011CB98 8CD9030C */  jal        func_800F6630
    /* 2AF9C 8011CB9C 9B000424 */   addiu     $a0, $zero, 0x9B
    /* 2AFA0 8011CBA0 7AD8030C */  jal        func_800F61E8
    /* 2AFA4 8011CBA4 00000000 */   nop
    /* 2AFA8 8011CBA8 93E0030C */  jal        func_800F824C
    /* 2AFAC 8011CBAC 9F000424 */   addiu     $a0, $zero, 0x9F
    /* 2AFB0 8011CBB0 8CD9030C */  jal        func_800F6630
    /* 2AFB4 8011CBB4 9C000424 */   addiu     $a0, $zero, 0x9C
    /* 2AFB8 8011CBB8 93E0030C */  jal        func_800F824C
    /* 2AFBC 8011CBBC A0000424 */   addiu     $a0, $zero, 0xA0
    /* 2AFC0 8011CBC0 AFD8030C */  jal        func_800F62BC
    /* 2AFC4 8011CBC4 94000424 */   addiu     $a0, $zero, 0x94
    /* 2AFC8 8011CBC8 22730408 */  j          .L8011CC88
    /* 2AFCC 8011CBCC 00000000 */   nop
  .L8011CBD0:
    /* 2AFD0 8011CBD0 8CD9030C */  jal        func_800F6630
    /* 2AFD4 8011CBD4 AB000424 */   addiu     $a0, $zero, 0xAB
    /* 2AFD8 8011CBD8 92D0030C */  jal        func_800F4248
    /* 2AFDC 8011CBDC 02000424 */   addiu     $a0, $zero, 0x2
    /* 2AFE0 8011CBE0 48D0030C */  jal        func_800F4120
    /* 2AFE4 8011CBE4 02020424 */   addiu     $a0, $zero, 0x202
    /* 2AFE8 8011CBE8 0D004014 */  bnez       $v0, .L8011CC20
    /* 2AFEC 8011CBEC 00000000 */   nop
    /* 2AFF0 8011CBF0 59D9030C */  jal        func_800F6564
    /* 2AFF4 8011CBF4 07170424 */   addiu     $a0, $zero, 0x1707
    /* 2AFF8 8011CBF8 20D5030C */  jal        func_800F5480
    /* 2AFFC 8011CBFC 00000000 */   nop
    /* 2B000 8011CC00 16E0030C */  jal        func_800F8058
    /* 2B004 8011CC04 08000424 */   addiu     $a0, $zero, 0x8
    /* 2B008 8011CC08 92D0030C */  jal        func_800F4248
    /* 2B00C 8011CC0C 3F000424 */   addiu     $a0, $zero, 0x3F
    /* 2B010 8011CC10 93E0030C */  jal        func_800F824C
    /* 2B014 8011CC14 3E000424 */   addiu     $a0, $zero, 0x3E
    /* 2B018 8011CC18 12730408 */  j          .L8011CC48
    /* 2B01C 8011CC1C 00000000 */   nop
  .L8011CC20:
    /* 2B020 8011CC20 59D9030C */  jal        func_800F6564
    /* 2B024 8011CC24 07170424 */   addiu     $a0, $zero, 0x1707
    /* 2B028 8011CC28 04D5030C */  jal        func_800F5410
    /* 2B02C 8011CC2C 00000000 */   nop
    /* 2B030 8011CC30 02D0030C */  jal        func_800F4008
    /* 2B034 8011CC34 08000424 */   addiu     $a0, $zero, 0x8
    /* 2B038 8011CC38 92D0030C */  jal        func_800F4248
    /* 2B03C 8011CC3C 3F000424 */   addiu     $a0, $zero, 0x3F
    /* 2B040 8011CC40 93E0030C */  jal        func_800F824C
    /* 2B044 8011CC44 3E000424 */   addiu     $a0, $zero, 0x3E
  .L8011CC48:
    /* 2B048 8011CC48 59D9030C */  jal        func_800F6564
    /* 2B04C 8011CC4C 06170424 */   addiu     $a0, $zero, 0x1706
    /* 2B050 8011CC50 20D5030C */  jal        func_800F5480
    /* 2B054 8011CC54 00000000 */   nop
    /* 2B058 8011CC58 16E0030C */  jal        func_800F8058
    /* 2B05C 8011CC5C 07000424 */   addiu     $a0, $zero, 0x7
    /* 2B060 8011CC60 93E0030C */  jal        func_800F824C
    /* 2B064 8011CC64 3D000424 */   addiu     $a0, $zero, 0x3D
    /* 2B068 8011CC68 9CDC030C */  jal        func_800F7270
    /* 2B06C 8011CC6C 3D000424 */   addiu     $a0, $zero, 0x3D
    /* 2B070 8011CC70 5BE3030C */  jal        func_800F8D6C
    /* 2B074 8011CC74 43000424 */   addiu     $a0, $zero, 0x43
    /* 2B078 8011CC78 2673040C */  jal        func_8011CC98
    /* 2B07C 8011CC7C 00000000 */   nop
    /* 2B080 8011CC80 8673040C */  jal        func_8011CE18
    /* 2B084 8011CC84 00000000 */   nop
  .L8011CC88:
    /* 2B088 8011CC88 1400BF8F */  lw         $ra, 0x14($sp)
    /* 2B08C 8011CC8C 1000B08F */  lw         $s0, 0x10($sp)
    /* 2B090 8011CC90 0800E003 */  jr         $ra
    /* 2B094 8011CC94 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8011C768
