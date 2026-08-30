nonmatching func_8011E534, 0x4B8

glabel func_8011E534
    /* 2C934 8011E534 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 2C938 8011E538 1000BFAF */  sw         $ra, 0x10($sp)
    /* 2C93C 8011E53C 93E0030C */  jal        func_800F824C
    /* 2C940 8011E540 3D000424 */   addiu     $a0, $zero, 0x3D
    /* 2C944 8011E544 EEE3030C */  jal        func_800F8FB8
    /* 2C948 8011E548 3E000424 */   addiu     $a0, $zero, 0x3E
    /* 2C94C 8011E54C 53D9030C */  jal        func_800F654C
    /* 2C950 8011E550 17000424 */   addiu     $a0, $zero, 0x17
    /* 2C954 8011E554 93E0030C */  jal        func_800F824C
    /* 2C958 8011E558 06000424 */   addiu     $a0, $zero, 0x6
    /* 2C95C 8011E55C 59D9030C */  jal        func_800F6564
    /* 2C960 8011E560 E50F0424 */   addiu     $a0, $zero, 0xFE5
    /* 2C964 8011E564 92D0030C */  jal        func_800F4248
    /* 2C968 8011E568 01000424 */   addiu     $a0, $zero, 0x1
    /* 2C96C 8011E56C 48D0030C */  jal        func_800F4120
    /* 2C970 8011E570 02020424 */   addiu     $a0, $zero, 0x202
    /* 2C974 8011E574 07004014 */  bnez       $v0, .L8011E594
    /* 2C978 8011E578 00000000 */   nop
    /* 2C97C 8011E57C 59D9030C */  jal        func_800F6564
    /* 2C980 8011E580 01170424 */   addiu     $a0, $zero, 0x1701
    /* 2C984 8011E584 0DD9030C */  jal        func_800F6434
    /* 2C988 8011E588 02000424 */   addiu     $a0, $zero, 0x2
    /* 2C98C 8011E58C 03004014 */  bnez       $v0, .L8011E59C
    /* 2C990 8011E590 00000000 */   nop
  .L8011E594:
    /* 2C994 8011E594 AFD8030C */  jal        func_800F62BC
    /* 2C998 8011E598 3E000424 */   addiu     $a0, $zero, 0x3E
  .L8011E59C:
    /* 2C99C 8011E59C 0FCF030C */  jal        func_800F3C3C
    /* 2C9A0 8011E5A0 3D000424 */   addiu     $a0, $zero, 0x3D
    /* 2C9A4 8011E5A4 CAD3030C */  jal        func_800F4F28
    /* 2C9A8 8011E5A8 21204000 */   addu      $a0, $v0, $zero
    /* 2C9AC 8011E5AC D3D3030C */  jal        func_800F4F4C
    /* 2C9B0 8011E5B0 00000000 */   nop
    /* 2C9B4 8011E5B4 0FCF030C */  jal        func_800F3C3C
    /* 2C9B8 8011E5B8 3E000424 */   addiu     $a0, $zero, 0x3E
    /* 2C9BC 8011E5BC 90DE030C */  jal        func_800F7A40
    /* 2C9C0 8011E5C0 21204000 */   addu      $a0, $v0, $zero
    /* 2C9C4 8011E5C4 9CDC030C */  jal        func_800F7270
    /* 2C9C8 8011E5C8 3D000424 */   addiu     $a0, $zero, 0x3D
    /* 2C9CC 8011E5CC 1700043C */  lui        $a0, (0x178000 >> 16)
    /* 2C9D0 8011E5D0 1ADB030C */  jal        func_800F6C68
    /* 2C9D4 8011E5D4 00808434 */   ori       $a0, $a0, (0x178000 & 0xFFFF)
    /* 2C9D8 8011E5D8 93E0030C */  jal        func_800F824C
    /* 2C9DC 8011E5DC 3D000424 */   addiu     $a0, $zero, 0x3D
    /* 2C9E0 8011E5E0 1700043C */  lui        $a0, (0x178001 >> 16)
    /* 2C9E4 8011E5E4 1ADB030C */  jal        func_800F6C68
    /* 2C9E8 8011E5E8 01808434 */   ori       $a0, $a0, (0x178001 & 0xFFFF)
    /* 2C9EC 8011E5EC 93E0030C */  jal        func_800F824C
    /* 2C9F0 8011E5F0 3E000424 */   addiu     $a0, $zero, 0x3E
    /* 2C9F4 8011E5F4 0DD9030C */  jal        func_800F6434
    /* 2C9F8 8011E5F8 80800434 */   ori       $a0, $zero, 0x8080
    /* 2C9FC 8011E5FC 07004014 */  bnez       $v0, .L8011E61C
    /* 2CA00 8011E600 00000000 */   nop
    /* 2CA04 8011E604 AFD8030C */  jal        func_800F62BC
    /* 2CA08 8011E608 06000424 */   addiu     $a0, $zero, 0x6
    /* 2CA0C 8011E60C 92D0030C */  jal        func_800F4248
    /* 2CA10 8011E610 7F000424 */   addiu     $a0, $zero, 0x7F
    /* 2CA14 8011E614 93E0030C */  jal        func_800F824C
    /* 2CA18 8011E618 3E000424 */   addiu     $a0, $zero, 0x3E
  .L8011E61C:
    /* 2CA1C 8011E61C 1700043C */  lui        $a0, (0x178002 >> 16)
    /* 2CA20 8011E620 1ADB030C */  jal        func_800F6C68
    /* 2CA24 8011E624 02808434 */   ori       $a0, $a0, (0x178002 & 0xFFFF)
    /* 2CA28 8011E628 93E0030C */  jal        func_800F824C
    /* 2CA2C 8011E62C 40000424 */   addiu     $a0, $zero, 0x40
    /* 2CA30 8011E630 1700043C */  lui        $a0, (0x178003 >> 16)
    /* 2CA34 8011E634 1ADB030C */  jal        func_800F6C68
    /* 2CA38 8011E638 03808434 */   ori       $a0, $a0, (0x178003 & 0xFFFF)
    /* 2CA3C 8011E63C 92D0030C */  jal        func_800F4248
    /* 2CA40 8011E640 7F000424 */   addiu     $a0, $zero, 0x7F
    /* 2CA44 8011E644 93E0030C */  jal        func_800F824C
    /* 2CA48 8011E648 41000424 */   addiu     $a0, $zero, 0x41
    /* 2CA4C 8011E64C 9CDC030C */  jal        func_800F7270
    /* 2CA50 8011E650 3D000424 */   addiu     $a0, $zero, 0x3D
    /* 2CA54 8011E654 0FCF030C */  jal        func_800F3C3C
    /* 2CA58 8011E658 40000424 */   addiu     $a0, $zero, 0x40
    /* 2CA5C 8011E65C ABD5030C */  jal        func_800F56AC
    /* 2CA60 8011E660 21204000 */   addu      $a0, $v0, $zero
    /* 2CA64 8011E664 F0D4030C */  jal        func_800F53C0
    /* 2CA68 8011E668 00000000 */   nop
    /* 2CA6C 8011E66C 09004010 */  beqz       $v0, .L8011E694
    /* 2CA70 8011E670 00000000 */   nop
    /* 2CA74 8011E674 8CD9030C */  jal        func_800F6630
    /* 2CA78 8011E678 41000424 */   addiu     $a0, $zero, 0x41
    /* 2CA7C 8011E67C 04D5030C */  jal        func_800F5410
    /* 2CA80 8011E680 00000000 */   nop
    /* 2CA84 8011E684 02D0030C */  jal        func_800F4008
    /* 2CA88 8011E688 80000424 */   addiu     $a0, $zero, 0x80
    /* 2CA8C 8011E68C 93E0030C */  jal        func_800F824C
    /* 2CA90 8011E690 41000424 */   addiu     $a0, $zero, 0x41
  .L8011E694:
    /* 2CA94 8011E694 59D9030C */  jal        func_800F6564
    /* 2CA98 8011E698 E50F0424 */   addiu     $a0, $zero, 0xFE5
    /* 2CA9C 8011E69C 92D0030C */  jal        func_800F4248
    /* 2CAA0 8011E6A0 01000424 */   addiu     $a0, $zero, 0x1
    /* 2CAA4 8011E6A4 48D0030C */  jal        func_800F4120
    /* 2CAA8 8011E6A8 02020424 */   addiu     $a0, $zero, 0x202
    /* 2CAAC 8011E6AC 07004014 */  bnez       $v0, .L8011E6CC
    /* 2CAB0 8011E6B0 00000000 */   nop
    /* 2CAB4 8011E6B4 59D9030C */  jal        func_800F6564
    /* 2CAB8 8011E6B8 01170424 */   addiu     $a0, $zero, 0x1701
    /* 2CABC 8011E6BC 0DD9030C */  jal        func_800F6434
    /* 2CAC0 8011E6C0 02000424 */   addiu     $a0, $zero, 0x2
    /* 2CAC4 8011E6C4 03004014 */  bnez       $v0, .L8011E6D4
    /* 2CAC8 8011E6C8 00000000 */   nop
  .L8011E6CC:
    /* 2CACC 8011E6CC AFD8030C */  jal        func_800F62BC
    /* 2CAD0 8011E6D0 06000424 */   addiu     $a0, $zero, 0x6
  .L8011E6D4:
    /* 2CAD4 8011E6D4 8CD9030C */  jal        func_800F6630
    /* 2CAD8 8011E6D8 40000424 */   addiu     $a0, $zero, 0x40
    /* 2CADC 8011E6DC 20D5030C */  jal        func_800F5480
    /* 2CAE0 8011E6E0 00000000 */   nop
    /* 2CAE4 8011E6E4 0FCF030C */  jal        func_800F3C3C
    /* 2CAE8 8011E6E8 3D000424 */   addiu     $a0, $zero, 0x3D
    /* 2CAEC 8011E6EC D2DF030C */  jal        func_800F7F48
    /* 2CAF0 8011E6F0 21204000 */   addu      $a0, $v0, $zero
    /* 2CAF4 8011E6F4 93E0030C */  jal        func_800F824C
    /* 2CAF8 8011E6F8 40000424 */   addiu     $a0, $zero, 0x40
    /* 2CAFC 8011E6FC 8CD9030C */  jal        func_800F6630
    /* 2CB00 8011E700 41000424 */   addiu     $a0, $zero, 0x41
    /* 2CB04 8011E704 0FCF030C */  jal        func_800F3C3C
    /* 2CB08 8011E708 3E000424 */   addiu     $a0, $zero, 0x3E
    /* 2CB0C 8011E70C D2DF030C */  jal        func_800F7F48
    /* 2CB10 8011E710 21204000 */   addu      $a0, $v0, $zero
    /* 2CB14 8011E714 93E0030C */  jal        func_800F824C
    /* 2CB18 8011E718 41000424 */   addiu     $a0, $zero, 0x41
    /* 2CB1C 8011E71C 65DD030C */  jal        func_800F7594
    /* 2CB20 8011E720 3D000424 */   addiu     $a0, $zero, 0x3D
    /* 2CB24 8011E724 77DC030C */  jal        func_800F71DC
    /* 2CB28 8011E728 21200000 */   addu      $a0, $zero, $zero
    /* 2CB2C 8011E72C 8CD9030C */  jal        func_800F6630
    /* 2CB30 8011E730 06000424 */   addiu     $a0, $zero, 0x6
    /* 2CB34 8011E734 80E4030C */  jal        func_800F9200
    /* 2CB38 8011E738 00000000 */   nop
    /* 2CB3C 8011E73C 12E5030C */  jal        func_800F9448
    /* 2CB40 8011E740 00000000 */   nop
  .L8011E744:
    /* 2CB44 8011E744 5CDB030C */  jal        func_800F6D70
    /* 2CB48 8011E748 00800434 */   ori       $a0, $zero, 0x8000
    /* 2CB4C 8011E74C 7F00043C */  lui        $a0, (0x7F4400 >> 16)
    /* 2CB50 8011E750 17E2030C */  jal        func_800F885C
    /* 2CB54 8011E754 00448434 */   ori       $a0, $a0, (0x7F4400 & 0xFFFF)
    /* 2CB58 8011E758 D9D8030C */  jal        func_800F6364
    /* 2CB5C 8011E75C 00000000 */   nop
    /* 2CB60 8011E760 0FCF030C */  jal        func_800F3C3C
    /* 2CB64 8011E764 40000424 */   addiu     $a0, $zero, 0x40
    /* 2CB68 8011E768 ABD5030C */  jal        func_800F56AC
    /* 2CB6C 8011E76C 21204000 */   addu      $a0, $v0, $zero
    /* 2CB70 8011E770 F5D4030C */  jal        func_800F53D4
    /* 2CB74 8011E774 00000000 */   nop
    /* 2CB78 8011E778 15004014 */  bnez       $v0, .L8011E7D0
    /* 2CB7C 8011E77C 00000000 */   nop
    /* 2CB80 8011E780 EFD8030C */  jal        func_800F63BC
    /* 2CB84 8011E784 00000000 */   nop
    /* 2CB88 8011E788 A4D6030C */  jal        func_800F5A90
    /* 2CB8C 8011E78C 00800434 */   ori       $a0, $zero, 0x8000
    /* 2CB90 8011E790 F5D4030C */  jal        func_800F53D4
    /* 2CB94 8011E794 00000000 */   nop
    /* 2CB98 8011E798 EAFF4010 */  beqz       $v0, .L8011E744
    /* 2CB9C 8011E79C 00000000 */   nop
    /* 2CBA0 8011E7A0 40DD030C */  jal        func_800F7500
    /* 2CBA4 8011E7A4 21200000 */   addu      $a0, $zero, $zero
    /* 2CBA8 8011E7A8 AFD8030C */  jal        func_800F62BC
    /* 2CBAC 8011E7AC 06000424 */   addiu     $a0, $zero, 0x6
    /* 2CBB0 8011E7B0 8CD9030C */  jal        func_800F6630
    /* 2CBB4 8011E7B4 06000424 */   addiu     $a0, $zero, 0x6
    /* 2CBB8 8011E7B8 80E4030C */  jal        func_800F9200
    /* 2CBBC 8011E7BC 00000000 */   nop
    /* 2CBC0 8011E7C0 12E5030C */  jal        func_800F9448
    /* 2CBC4 8011E7C4 00000000 */   nop
    /* 2CBC8 8011E7C8 D1790408 */  j          .L8011E744
    /* 2CBCC 8011E7CC 00000000 */   nop
  .L8011E7D0:
    /* 2CBD0 8011E7D0 53D9030C */  jal        func_800F654C
    /* 2CBD4 8011E7D4 21200000 */   addu      $a0, $zero, $zero
    /* 2CBD8 8011E7D8 80E4030C */  jal        func_800F9200
    /* 2CBDC 8011E7DC 00000000 */   nop
    /* 2CBE0 8011E7E0 12E5030C */  jal        func_800F9448
    /* 2CBE4 8011E7E4 00000000 */   nop
    /* 2CBE8 8011E7E8 77DC030C */  jal        func_800F71DC
    /* 2CBEC 8011E7EC 21200000 */   addu      $a0, $zero, $zero
    /* 2CBF0 8011E7F0 5BE3030C */  jal        func_800F8D6C
    /* 2CBF4 8011E7F4 40000424 */   addiu     $a0, $zero, 0x40
    /* 2CBF8 8011E7F8 5BE3030C */  jal        func_800F8D6C
    /* 2CBFC 8011E7FC 3D000424 */   addiu     $a0, $zero, 0x3D
    /* 2CC00 8011E800 7F00043C */  lui        $a0, (0x7F4400 >> 16)
  .L8011E804:
    /* 2CC04 8011E804 1ADB030C */  jal        func_800F6C68
    /* 2CC08 8011E808 00448434 */   ori       $a0, $a0, (0x7F4400 & 0xFFFF)
    /* 2CC0C 8011E80C 0DD9030C */  jal        func_800F6434
    /* 2CC10 8011E810 80800434 */   ori       $a0, $zero, 0x8080
    /* 2CC14 8011E814 48004014 */  bnez       $v0, .L8011E938
    /* 2CC18 8011E818 00000000 */   nop
    /* 2CC1C 8011E81C 92D0030C */  jal        func_800F4248
    /* 2CC20 8011E820 7F000424 */   addiu     $a0, $zero, 0x7F
    /* 2CC24 8011E824 80E4030C */  jal        func_800F9200
    /* 2CC28 8011E828 00000000 */   nop
    /* 2CC2C 8011E82C 7F00043C */  lui        $a0, (0x7F4401 >> 16)
    /* 2CC30 8011E830 1ADB030C */  jal        func_800F6C68
    /* 2CC34 8011E834 01448434 */   ori       $a0, $a0, (0x7F4401 & 0xFFFF)
    /* 2CC38 8011E838 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 2CC3C 8011E83C 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 2CC40 8011E840 1A80043C */  lui        $a0, %hi(D_8019ED58)
    /* 2CC44 8011E844 58ED848C */  lw         $a0, %lo(D_8019ED58)($a0)
    /* 2CC48 8011E848 00004394 */  lhu        $v1, 0x0($v0)
    /* 2CC4C 8011E84C EFD8030C */  jal        func_800F63BC
    /* 2CC50 8011E850 000083A4 */   sh        $v1, 0x0($a0)
    /* 2CC54 8011E854 F7E4030C */  jal        func_800F93DC
    /* 2CC58 8011E858 00000000 */   nop
    /* 2CC5C 8011E85C 9CDC030C */  jal        func_800F7270
    /* 2CC60 8011E860 40000424 */   addiu     $a0, $zero, 0x40
  .L8011E864:
    /* 2CC64 8011E864 7F00043C */  lui        $a0, (0x7F5C71 >> 16)
    /* 2CC68 8011E868 17E2030C */  jal        func_800F885C
    /* 2CC6C 8011E86C 715C8434 */   ori       $a0, $a0, (0x7F5C71 & 0xFFFF)
    /* 2CC70 8011E870 D9D8030C */  jal        func_800F6364
    /* 2CC74 8011E874 00000000 */   nop
    /* 2CC78 8011E878 5BE3030C */  jal        func_800F8D6C
    /* 2CC7C 8011E87C 40000424 */   addiu     $a0, $zero, 0x40
    /* 2CC80 8011E880 80E4030C */  jal        func_800F9200
    /* 2CC84 8011E884 00000000 */   nop
    /* 2CC88 8011E888 1A80023C */  lui        $v0, %hi(D_8019ED5C)
    /* 2CC8C 8011E88C 5CED428C */  lw         $v0, %lo(D_8019ED5C)($v0)
    /* 2CC90 8011E890 1A80053C */  lui        $a1, %hi(D_8019ED40)
    /* 2CC94 8011E894 40EDA58C */  lw         $a1, %lo(D_8019ED40)($a1)
    /* 2CC98 8011E898 00004390 */  lbu        $v1, 0x0($v0)
    /* 2CC9C 8011E89C 20000424 */  addiu      $a0, $zero, 0x20
    /* 2CCA0 8011E8A0 5DD5030C */  jal        func_800F5574
    /* 2CCA4 8011E8A4 0000A3A0 */   sb        $v1, 0x0($a1)
    /* 2CCA8 8011E8A8 F5D4030C */  jal        func_800F53D4
    /* 2CCAC 8011E8AC 00000000 */   nop
    /* 2CCB0 8011E8B0 07004010 */  beqz       $v0, .L8011E8D0
    /* 2CCB4 8011E8B4 00000000 */   nop
    /* 2CCB8 8011E8B8 AFD8030C */  jal        func_800F62BC
    /* 2CCBC 8011E8BC 41000424 */   addiu     $a0, $zero, 0x41
    /* 2CCC0 8011E8C0 EEE3030C */  jal        func_800F8FB8
    /* 2CCC4 8011E8C4 40000424 */   addiu     $a0, $zero, 0x40
    /* 2CCC8 8011E8C8 9CDC030C */  jal        func_800F7270
    /* 2CCCC 8011E8CC 40000424 */   addiu     $a0, $zero, 0x40
  .L8011E8D0:
    /* 2CCD0 8011E8D0 F7E4030C */  jal        func_800F93DC
    /* 2CCD4 8011E8D4 00000000 */   nop
    /* 2CCD8 8011E8D8 56D6030C */  jal        func_800F5958
    /* 2CCDC 8011E8DC 00200424 */   addiu     $a0, $zero, 0x2000
    /* 2CCE0 8011E8E0 F5D4030C */  jal        func_800F53D4
    /* 2CCE4 8011E8E4 00000000 */   nop
    /* 2CCE8 8011E8E8 3C004014 */  bnez       $v0, .L8011E9DC
    /* 2CCEC 8011E8EC 00000000 */   nop
    /* 2CCF0 8011E8F0 A8D7030C */  jal        func_800F5EA0
    /* 2CCF4 8011E8F4 00000000 */   nop
    /* 2CCF8 8011E8F8 19D7030C */  jal        func_800F5C64
    /* 2CCFC 8011E8FC 02020424 */   addiu     $a0, $zero, 0x202
    /* 2CD00 8011E900 D8FF4014 */  bnez       $v0, .L8011E864
    /* 2CD04 8011E904 00000000 */   nop
    /* 2CD08 8011E908 9CDC030C */  jal        func_800F7270
    /* 2CD0C 8011E90C 3D000424 */   addiu     $a0, $zero, 0x3D
    /* 2CD10 8011E910 1A80033C */  lui        $v1, %hi(D_8019ED54)
    /* 2CD14 8011E914 54ED638C */  lw         $v1, %lo(D_8019ED54)($v1)
    /* 2CD18 8011E918 00000000 */  nop
    /* 2CD1C 8011E91C 00006294 */  lhu        $v0, 0x0($v1)
    /* 2CD20 8011E920 3D000424 */  addiu      $a0, $zero, 0x3D
    /* 2CD24 8011E924 02004224 */  addiu      $v0, $v0, 0x2
    /* 2CD28 8011E928 5BE3030C */  jal        func_800F8D6C
    /* 2CD2C 8011E92C 000062A4 */   sh        $v0, 0x0($v1)
    /* 2CD30 8011E930 017A0408 */  j          .L8011E804
    /* 2CD34 8011E934 7F00043C */   lui       $a0, (0x7F4400 >> 16)
  .L8011E938:
    /* 2CD38 8011E938 9CDC030C */  jal        func_800F7270
    /* 2CD3C 8011E93C 40000424 */   addiu     $a0, $zero, 0x40
    /* 2CD40 8011E940 7F00043C */  lui        $a0, (0x7F5C71 >> 16)
    /* 2CD44 8011E944 17E2030C */  jal        func_800F885C
    /* 2CD48 8011E948 715C8434 */   ori       $a0, $a0, (0x7F5C71 & 0xFFFF)
    /* 2CD4C 8011E94C D9D8030C */  jal        func_800F6364
    /* 2CD50 8011E950 00000000 */   nop
    /* 2CD54 8011E954 5BE3030C */  jal        func_800F8D6C
    /* 2CD58 8011E958 40000424 */   addiu     $a0, $zero, 0x40
    /* 2CD5C 8011E95C 1A80023C */  lui        $v0, %hi(D_8019ED5C)
    /* 2CD60 8011E960 5CED428C */  lw         $v0, %lo(D_8019ED5C)($v0)
    /* 2CD64 8011E964 1A80053C */  lui        $a1, %hi(D_8019ED40)
    /* 2CD68 8011E968 40EDA58C */  lw         $a1, %lo(D_8019ED40)($a1)
    /* 2CD6C 8011E96C 00004390 */  lbu        $v1, 0x0($v0)
    /* 2CD70 8011E970 20000424 */  addiu      $a0, $zero, 0x20
    /* 2CD74 8011E974 5DD5030C */  jal        func_800F5574
    /* 2CD78 8011E978 0000A3A0 */   sb        $v1, 0x0($a1)
    /* 2CD7C 8011E97C F5D4030C */  jal        func_800F53D4
    /* 2CD80 8011E980 00000000 */   nop
    /* 2CD84 8011E984 05004010 */  beqz       $v0, .L8011E99C
    /* 2CD88 8011E988 00000000 */   nop
    /* 2CD8C 8011E98C EEE3030C */  jal        func_800F8FB8
    /* 2CD90 8011E990 40000424 */   addiu     $a0, $zero, 0x40
    /* 2CD94 8011E994 AFD8030C */  jal        func_800F62BC
    /* 2CD98 8011E998 41000424 */   addiu     $a0, $zero, 0x41
  .L8011E99C:
    /* 2CD9C 8011E99C 9CDC030C */  jal        func_800F7270
    /* 2CDA0 8011E9A0 40000424 */   addiu     $a0, $zero, 0x40
    /* 2CDA4 8011E9A4 56D6030C */  jal        func_800F5958
    /* 2CDA8 8011E9A8 00200424 */   addiu     $a0, $zero, 0x2000
    /* 2CDAC 8011E9AC F5D4030C */  jal        func_800F53D4
    /* 2CDB0 8011E9B0 00000000 */   nop
    /* 2CDB4 8011E9B4 09004014 */  bnez       $v0, .L8011E9DC
    /* 2CDB8 8011E9B8 00000000 */   nop
    /* 2CDBC 8011E9BC 9CDC030C */  jal        func_800F7270
    /* 2CDC0 8011E9C0 3D000424 */   addiu     $a0, $zero, 0x3D
    /* 2CDC4 8011E9C4 D9D8030C */  jal        func_800F6364
    /* 2CDC8 8011E9C8 00000000 */   nop
    /* 2CDCC 8011E9CC 5BE3030C */  jal        func_800F8D6C
    /* 2CDD0 8011E9D0 3D000424 */   addiu     $a0, $zero, 0x3D
    /* 2CDD4 8011E9D4 017A0408 */  j          .L8011E804
    /* 2CDD8 8011E9D8 7F00043C */   lui       $a0, (0x7F4400 >> 16)
  .L8011E9DC:
    /* 2CDDC 8011E9DC 1000BF8F */  lw         $ra, 0x10($sp)
    /* 2CDE0 8011E9E0 00000000 */  nop
    /* 2CDE4 8011E9E4 0800E003 */  jr         $ra
    /* 2CDE8 8011E9E8 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8011E534
