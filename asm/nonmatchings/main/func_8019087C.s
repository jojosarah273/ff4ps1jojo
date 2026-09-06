nonmatching func_8019087C, 0x2C8

glabel func_8019087C
    /* 9EC7C 8019087C C0FFBD27 */  addiu      $sp, $sp, -0x40
    /* 9EC80 80190880 3400B7AF */  sw         $s7, 0x34($sp)
    /* 9EC84 80190884 21B88000 */  addu       $s7, $a0, $zero
    /* 9EC88 80190888 2400B3AF */  sw         $s3, 0x24($sp)
    /* 9EC8C 8019088C 2198A000 */  addu       $s3, $a1, $zero
    /* 9EC90 80190890 FFFF0424 */  addiu      $a0, $zero, -0x1
    /* 9EC94 80190894 3C00BFAF */  sw         $ra, 0x3C($sp)
    /* 9EC98 80190898 3800BEAF */  sw         $fp, 0x38($sp)
    /* 9EC9C 8019089C 3000B6AF */  sw         $s6, 0x30($sp)
    /* 9ECA0 801908A0 2C00B5AF */  sw         $s5, 0x2C($sp)
    /* 9ECA4 801908A4 2800B4AF */  sw         $s4, 0x28($sp)
    /* 9ECA8 801908A8 2000B2AF */  sw         $s2, 0x20($sp)
    /* 9ECAC 801908AC 1C00B1AF */  sw         $s1, 0x1C($sp)
    /* 9ECB0 801908B0 3A4A060C */  jal        func_801928E8
    /* 9ECB4 801908B4 1800B0AF */   sw        $s0, 0x18($sp)
    /* 9ECB8 801908B8 1A801E3C */  lui        $fp, %hi(D_8019BA10)
    /* 9ECBC 801908BC 10BADE27 */  addiu      $fp, $fp, %lo(D_8019BA10)
    /* 9ECC0 801908C0 1A80153C */  lui        $s5, %hi(D_8019BA90)
    /* 9ECC4 801908C4 90BAB526 */  addiu      $s5, $s5, %lo(D_8019BA90)
    /* 9ECC8 801908C8 1A80123C */  lui        $s2, %hi(D_8019BCC8)
    /* 9ECCC 801908CC C8BC5226 */  addiu      $s2, $s2, %lo(D_8019BCC8)
    /* 9ECD0 801908D0 01005626 */  addiu      $s6, $s2, 0x1
    /* 9ECD4 801908D4 02005426 */  addiu      $s4, $s2, 0x2
    /* 9ECD8 801908D8 C0034224 */  addiu      $v0, $v0, 0x3C0
    /* 9ECDC 801908DC 2080013C */  lui        $at, %hi(D_801F8F28)
    /* 9ECE0 801908E0 288F22AC */  sw         $v0, %lo(D_801F8F28)($at)
    /* 9ECE4 801908E4 0F80023C */  lui        $v0, %hi(D_800F35EC)
    /* 9ECE8 801908E8 EC354224 */  addiu      $v0, $v0, %lo(D_800F35EC)
    /* 9ECEC 801908EC 2080013C */  lui        $at, %hi(D_801F8F2C)
    /* 9ECF0 801908F0 2C8F20AC */  sw         $zero, %lo(D_801F8F2C)($at)
    /* 9ECF4 801908F4 2080013C */  lui        $at, %hi(D_801F8F30)
    /* 9ECF8 801908F8 308F22AC */  sw         $v0, %lo(D_801F8F30)($at)
  .L801908FC:
    /* 9ECFC 801908FC 3A4A060C */  jal        func_801928E8
    /* 9ED00 80190900 FFFF0424 */   addiu     $a0, $zero, -0x1
    /* 9ED04 80190904 2080033C */  lui        $v1, %hi(D_801F8F28)
    /* 9ED08 80190908 288F638C */  lw         $v1, %lo(D_801F8F28)($v1)
    /* 9ED0C 8019090C 00000000 */  nop
    /* 9ED10 80190910 2A186200 */  slt        $v1, $v1, $v0
    /* 9ED14 80190914 0C006014 */  bnez       $v1, .L80190948
    /* 9ED18 80190918 00000000 */   nop
    /* 9ED1C 8019091C 2080023C */  lui        $v0, %hi(D_801F8F2C)
    /* 9ED20 80190920 2C8F428C */  lw         $v0, %lo(D_801F8F2C)($v0)
    /* 9ED24 80190924 00000000 */  nop
    /* 9ED28 80190928 21184000 */  addu       $v1, $v0, $zero
    /* 9ED2C 8019092C 01004224 */  addiu      $v0, $v0, 0x1
    /* 9ED30 80190930 2080013C */  lui        $at, %hi(D_801F8F2C)
    /* 9ED34 80190934 2C8F22AC */  sw         $v0, %lo(D_801F8F2C)($at)
    /* 9ED38 80190938 3C00023C */  lui        $v0, (0x3C0000 >> 16)
    /* 9ED3C 8019093C 2A104300 */  slt        $v0, $v0, $v1
    /* 9ED40 80190940 1B004010 */  beqz       $v0, .L801909B0
    /* 9ED44 80190944 00000000 */   nop
  .L80190948:
    /* 9ED48 80190948 0F80043C */  lui        $a0, %hi(D_800F355C)
    /* 9ED4C 8019094C 8845060C */  jal        func_80191620
    /* 9ED50 80190950 5C358424 */   addiu     $a0, $a0, %lo(D_800F355C)
    /* 9ED54 80190954 00004492 */  lbu        $a0, 0x0($s2)
    /* 9ED58 80190958 01004292 */  lbu        $v0, 0x1($s2)
    /* 9ED5C 8019095C 2080053C */  lui        $a1, %hi(D_801F8F30)
    /* 9ED60 80190960 308FA58C */  lw         $a1, %lo(D_801F8F30)($a1)
    /* 9ED64 80190964 80100200 */  sll        $v0, $v0, 2
    /* 9ED68 80190968 21105500 */  addu       $v0, $v0, $s5
    /* 9ED6C 8019096C 80200400 */  sll        $a0, $a0, 2
    /* 9ED70 80190970 0000438C */  lw         $v1, 0x0($v0)
    /* 9ED74 80190974 1A80023C */  lui        $v0, %hi(D_8019BA09)
    /* 9ED78 80190978 09BA4290 */  lbu        $v0, %lo(D_8019BA09)($v0)
    /* 9ED7C 8019097C 21209500 */  addu       $a0, $a0, $s5
    /* 9ED80 80190980 80100200 */  sll        $v0, $v0, 2
    /* 9ED84 80190984 21105E00 */  addu       $v0, $v0, $fp
    /* 9ED88 80190988 1000A3AF */  sw         $v1, 0x10($sp)
    /* 9ED8C 8019098C 0000468C */  lw         $a2, 0x0($v0)
    /* 9ED90 80190990 0000878C */  lw         $a3, 0x0($a0)
    /* 9ED94 80190994 0F80043C */  lui        $a0, %hi(D_800F356C)
    /* 9ED98 80190998 323C060C */  jal        func_8018F0C8
    /* 9ED9C 8019099C 6C358424 */   addiu     $a0, $a0, %lo(D_800F356C)
    /* 9EDA0 801909A0 F643060C */  jal        func_80190FD8
    /* 9EDA4 801909A4 00000000 */   nop
    /* 9EDA8 801909A8 6D420608 */  j          .L801909B4
    /* 9EDAC 801909AC FFFF0224 */   addiu     $v0, $zero, -0x1
  .L801909B0:
    /* 9EDB0 801909B0 21100000 */  addu       $v0, $zero, $zero
  .L801909B4:
    /* 9EDB4 801909B4 57004014 */  bnez       $v0, .L80190B14
    /* 9EDB8 801909B8 FFFF0224 */   addiu     $v0, $zero, -0x1
    /* 9EDBC 801909BC 134B060C */  jal        func_80192C4C
    /* 9EDC0 801909C0 00000000 */   nop
    /* 9EDC4 801909C4 29004010 */  beqz       $v0, .L80190A6C
    /* 9EDC8 801909C8 00000000 */   nop
    /* 9EDCC 801909CC 1A80023C */  lui        $v0, %hi(D_8019BCB0)
    /* 9EDD0 801909D0 B0BC428C */  lw         $v0, %lo(D_8019BCB0)($v0)
    /* 9EDD4 801909D4 00000000 */  nop
    /* 9EDD8 801909D8 00004290 */  lbu        $v0, 0x0($v0)
    /* 9EDDC 801909DC 00000000 */  nop
    /* 9EDE0 801909E0 03005130 */  andi       $s1, $v0, 0x3
  .L801909E4:
    /* 9EDE4 801909E4 2640060C */  jal        func_80190098
    /* 9EDE8 801909E8 00000000 */   nop
    /* 9EDEC 801909EC 21804000 */  addu       $s0, $v0, $zero
    /* 9EDF0 801909F0 1A000012 */  beqz       $s0, .L80190A5C
    /* 9EDF4 801909F4 04000232 */   andi      $v0, $s0, 0x4
    /* 9EDF8 801909F8 0B004010 */  beqz       $v0, .L80190A28
    /* 9EDFC 801909FC 02000232 */   andi      $v0, $s0, 0x2
    /* 9EE00 80190A00 1A80023C */  lui        $v0, %hi(D_8019B9F0)
    /* 9EE04 80190A04 F0B9428C */  lw         $v0, %lo(D_8019B9F0)($v0)
    /* 9EE08 80190A08 00000000 */  nop
    /* 9EE0C 80190A0C 05004010 */  beqz       $v0, .L80190A24
    /* 9EE10 80190A10 00000000 */   nop
    /* 9EE14 80190A14 0000C492 */  lbu        $a0, 0x0($s6)
    /* 9EE18 80190A18 2080053C */  lui        $a1, %hi(D_801F8F18)
    /* 9EE1C 80190A1C 09F84000 */  jalr       $v0
    /* 9EE20 80190A20 188FA524 */   addiu     $a1, $a1, %lo(D_801F8F18)
  .L80190A24:
    /* 9EE24 80190A24 02000232 */  andi       $v0, $s0, 0x2
  .L80190A28:
    /* 9EE28 80190A28 EEFF4010 */  beqz       $v0, .L801909E4
    /* 9EE2C 80190A2C 00000000 */   nop
    /* 9EE30 80190A30 1A80023C */  lui        $v0, %hi(D_8019B9EC)
    /* 9EE34 80190A34 ECB9428C */  lw         $v0, %lo(D_8019B9EC)($v0)
    /* 9EE38 80190A38 00000000 */  nop
    /* 9EE3C 80190A3C E9FF4010 */  beqz       $v0, .L801909E4
    /* 9EE40 80190A40 00000000 */   nop
    /* 9EE44 80190A44 00004492 */  lbu        $a0, 0x0($s2)
    /* 9EE48 80190A48 2080053C */  lui        $a1, %hi(D_801F8F10)
    /* 9EE4C 80190A4C 09F84000 */  jalr       $v0
    /* 9EE50 80190A50 108FA524 */   addiu     $a1, $a1, %lo(D_801F8F10)
    /* 9EE54 80190A54 79420608 */  j          .L801909E4
    /* 9EE58 80190A58 00000000 */   nop
  .L80190A5C:
    /* 9EE5C 80190A5C 1A80023C */  lui        $v0, %hi(D_8019BCB0)
    /* 9EE60 80190A60 B0BC428C */  lw         $v0, %lo(D_8019BCB0)($v0)
    /* 9EE64 80190A64 00000000 */  nop
    /* 9EE68 80190A68 000051A0 */  sb         $s1, 0x0($v0)
  .L80190A6C:
    /* 9EE6C 80190A6C 00008292 */  lbu        $v0, 0x0($s4)
    /* 9EE70 80190A70 00000000 */  nop
    /* 9EE74 80190A74 FF004630 */  andi       $a2, $v0, 0xFF
    /* 9EE78 80190A78 1000C010 */  beqz       $a2, .L80190ABC
    /* 9EE7C 80190A7C 00000000 */   nop
    /* 9EE80 80190A80 020040A2 */  sb         $zero, 0x2($s2)
    /* 9EE84 80190A84 2080043C */  lui        $a0, %hi(D_801F8F20)
    /* 9EE88 80190A88 208F8424 */  addiu      $a0, $a0, %lo(D_801F8F20)
    /* 9EE8C 80190A8C 1D006012 */  beqz       $s3, .L80190B04
    /* 9EE90 80190A90 21286002 */   addu      $a1, $s3, $zero
    /* 9EE94 80190A94 07000324 */  addiu      $v1, $zero, 0x7
    /* 9EE98 80190A98 FFFF0724 */  addiu      $a3, $zero, -0x1
  .L80190A9C:
    /* 9EE9C 80190A9C 00008290 */  lbu        $v0, 0x0($a0)
    /* 9EEA0 80190AA0 01008424 */  addiu      $a0, $a0, 0x1
    /* 9EEA4 80190AA4 FFFF6324 */  addiu      $v1, $v1, -0x1
    /* 9EEA8 80190AA8 0000A2A0 */  sb         $v0, 0x0($a1)
    /* 9EEAC 80190AAC FBFF6714 */  bne        $v1, $a3, .L80190A9C
    /* 9EEB0 80190AB0 0100A524 */   addiu     $a1, $a1, 0x1
    /* 9EEB4 80190AB4 C5420608 */  j          .L80190B14
    /* 9EEB8 80190AB8 2110C000 */   addu      $v0, $a2, $zero
  .L80190ABC:
    /* 9EEBC 80190ABC FFFF8292 */  lbu        $v0, -0x1($s4)
    /* 9EEC0 80190AC0 00000000 */  nop
    /* 9EEC4 80190AC4 FF004630 */  andi       $a2, $v0, 0xFF
    /* 9EEC8 80190AC8 1000C010 */  beqz       $a2, .L80190B0C
    /* 9EECC 80190ACC 00000000 */   nop
    /* 9EED0 80190AD0 010040A2 */  sb         $zero, 0x1($s2)
    /* 9EED4 80190AD4 21286002 */  addu       $a1, $s3, $zero
    /* 9EED8 80190AD8 2080043C */  lui        $a0, %hi(D_801F8F18)
    /* 9EEDC 80190ADC 188F8424 */  addiu      $a0, $a0, %lo(D_801F8F18)
    /* 9EEE0 80190AE0 0800A010 */  beqz       $a1, .L80190B04
    /* 9EEE4 80190AE4 07000324 */   addiu     $v1, $zero, 0x7
    /* 9EEE8 80190AE8 FFFF0724 */  addiu      $a3, $zero, -0x1
  .L80190AEC:
    /* 9EEEC 80190AEC 00008290 */  lbu        $v0, 0x0($a0)
    /* 9EEF0 80190AF0 01008424 */  addiu      $a0, $a0, 0x1
    /* 9EEF4 80190AF4 FFFF6324 */  addiu      $v1, $v1, -0x1
    /* 9EEF8 80190AF8 0000A2A0 */  sb         $v0, 0x0($a1)
    /* 9EEFC 80190AFC FBFF6714 */  bne        $v1, $a3, .L80190AEC
    /* 9EF00 80190B00 0100A524 */   addiu     $a1, $a1, 0x1
  .L80190B04:
    /* 9EF04 80190B04 C5420608 */  j          .L80190B14
    /* 9EF08 80190B08 2110C000 */   addu      $v0, $a2, $zero
  .L80190B0C:
    /* 9EF0C 80190B0C 7BFFE012 */  beqz       $s7, .L801908FC
    /* 9EF10 80190B10 21100000 */   addu      $v0, $zero, $zero
  .L80190B14:
    /* 9EF14 80190B14 3C00BF8F */  lw         $ra, 0x3C($sp)
    /* 9EF18 80190B18 3800BE8F */  lw         $fp, 0x38($sp)
    /* 9EF1C 80190B1C 3400B78F */  lw         $s7, 0x34($sp)
    /* 9EF20 80190B20 3000B68F */  lw         $s6, 0x30($sp)
    /* 9EF24 80190B24 2C00B58F */  lw         $s5, 0x2C($sp)
    /* 9EF28 80190B28 2800B48F */  lw         $s4, 0x28($sp)
    /* 9EF2C 80190B2C 2400B38F */  lw         $s3, 0x24($sp)
    /* 9EF30 80190B30 2000B28F */  lw         $s2, 0x20($sp)
    /* 9EF34 80190B34 1C00B18F */  lw         $s1, 0x1C($sp)
    /* 9EF38 80190B38 1800B08F */  lw         $s0, 0x18($sp)
    /* 9EF3C 80190B3C 0800E003 */  jr         $ra
    /* 9EF40 80190B40 4000BD27 */   addiu     $sp, $sp, 0x40
endlabel func_8019087C
