nonmatching func_8013E5D0, 0x16C

glabel func_8013E5D0
    /* 4C9D0 8013E5D0 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 4C9D4 8013E5D4 1000BFAF */  sw         $ra, 0x10($sp)
    /* 4C9D8 8013E5D8 CCE4030C */  jal        func_800F9330
    /* 4C9DC 8013E5DC 00000000 */   nop
    /* 4C9E0 8013E5E0 C7E5030C */  jal        func_800F971C
    /* 4C9E4 8013E5E4 00000000 */   nop
    /* 4C9E8 8013E5E8 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 4C9EC 8013E5EC 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 4C9F0 8013E5F0 1A80043C */  lui        $a0, %hi(D_8019ED54)
    /* 4C9F4 8013E5F4 54ED848C */  lw         $a0, %lo(D_8019ED54)($a0)
    /* 4C9F8 8013E5F8 00004394 */  lhu        $v1, 0x0($v0)
    /* 4C9FC 8013E5FC 00000000 */  nop
    /* 4CA00 8013E600 000083A4 */  sh         $v1, 0x0($a0)
  .L8013E604:
    /* 4CA04 8013E604 0FCF030C */  jal        func_800F3C3C
    /* 4CA08 8013E608 04000424 */   addiu     $a0, $zero, 0x4
    /* 4CA0C 8013E60C AFDD030C */  jal        func_800F76BC
    /* 4CA10 8013E610 21204000 */   addu      $a0, $v0, $zero
    /* 4CA14 8013E614 CADD030C */  jal        func_800F7728
    /* 4CA18 8013E618 01010424 */   addiu     $a0, $zero, 0x101
    /* 4CA1C 8013E61C 37004014 */  bnez       $v0, .L8013E6FC
    /* 4CA20 8013E620 00000000 */   nop
    /* 4CA24 8013E624 62F9040C */  jal        func_8013E588
    /* 4CA28 8013E628 00000000 */   nop
    /* 4CA2C 8013E62C 92D0030C */  jal        func_800F4248
    /* 4CA30 8013E630 07000424 */   addiu     $a0, $zero, 0x7
    /* 4CA34 8013E634 04D5030C */  jal        func_800F5410
    /* 4CA38 8013E638 00000000 */   nop
    /* 4CA3C 8013E63C 1A80023C */  lui        $v0, %hi(D_8019ED54)
    /* 4CA40 8013E640 54ED428C */  lw         $v0, %lo(D_8019ED54)($v0)
    /* 4CA44 8013E644 1600043C */  lui        $a0, (0x16FFF6 >> 16)
    /* 4CA48 8013E648 00004594 */  lhu        $a1, 0x0($v0)
    /* 4CA4C 8013E64C E7CE030C */  jal        func_800F3B9C
    /* 4CA50 8013E650 F6FF8434 */   ori       $a0, $a0, (0x16FFF6 & 0xFFFF)
    /* 4CA54 8013E654 1A80033C */  lui        $v1, %hi(D_8019ED54)
    /* 4CA58 8013E658 54ED638C */  lw         $v1, %lo(D_8019ED54)($v1)
    /* 4CA5C 8013E65C 00000000 */  nop
    /* 4CA60 8013E660 00006494 */  lhu        $a0, 0x0($v1)
    /* 4CA64 8013E664 CECF030C */  jal        func_800F3F38
    /* 4CA68 8013E668 21204400 */   addu      $a0, $v0, $a0
    /* 4CA6C 8013E66C 93E0030C */  jal        func_800F824C
    /* 4CA70 8013E670 21200000 */   addu      $a0, $zero, $zero
    /* 4CA74 8013E674 62F9040C */  jal        func_8013E588
    /* 4CA78 8013E678 00000000 */   nop
    /* 4CA7C 8013E67C 92D0030C */  jal        func_800F4248
    /* 4CA80 8013E680 1F000424 */   addiu     $a0, $zero, 0x1F
    /* 4CA84 8013E684 1A80023C */  lui        $v0, %hi(D_8019ED54)
    /* 4CA88 8013E688 54ED428C */  lw         $v0, %lo(D_8019ED54)($v0)
    /* 4CA8C 8013E68C 1600043C */  lui        $a0, (0x16FFF7 >> 16)
    /* 4CA90 8013E690 00004594 */  lhu        $a1, 0x0($v0)
    /* 4CA94 8013E694 E7CE030C */  jal        func_800F3B9C
    /* 4CA98 8013E698 F7FF8434 */   ori       $a0, $a0, (0x16FFF7 & 0xFFFF)
    /* 4CA9C 8013E69C 1A80033C */  lui        $v1, %hi(D_8019ED54)
    /* 4CAA0 8013E6A0 54ED638C */  lw         $v1, %lo(D_8019ED54)($v1)
    /* 4CAA4 8013E6A4 00000000 */  nop
    /* 4CAA8 8013E6A8 00006494 */  lhu        $a0, 0x0($v1)
    /* 4CAAC 8013E6AC CECF030C */  jal        func_800F3F38
    /* 4CAB0 8013E6B0 21204400 */   addu      $a0, $v0, $a0
    /* 4CAB4 8013E6B4 93E0030C */  jal        func_800F824C
    /* 4CAB8 8013E6B8 01000424 */   addiu     $a0, $zero, 0x1
    /* 4CABC 8013E6BC 8CD9030C */  jal        func_800F6630
    /* 4CAC0 8013E6C0 21200000 */   addu      $a0, $zero, $zero
    /* 4CAC4 8013E6C4 20D5030C */  jal        func_800F5480
    /* 4CAC8 8013E6C8 00000000 */   nop
    /* 4CACC 8013E6CC 16E0030C */  jal        func_800F8058
    /* 4CAD0 8013E6D0 08000424 */   addiu     $a0, $zero, 0x8
    /* 4CAD4 8013E6D4 DAE1030C */  jal        func_800F8768
    /* 4CAD8 8013E6D8 59F40434 */   ori       $a0, $zero, 0xF459
    /* 4CADC 8013E6DC 8CD9030C */  jal        func_800F6630
    /* 4CAE0 8013E6E0 01000424 */   addiu     $a0, $zero, 0x1
    /* 4CAE4 8013E6E4 20D5030C */  jal        func_800F5480
    /* 4CAE8 8013E6E8 00000000 */   nop
    /* 4CAEC 8013E6EC 16E0030C */  jal        func_800F8058
    /* 4CAF0 8013E6F0 08000424 */   addiu     $a0, $zero, 0x8
    /* 4CAF4 8013E6F4 DAE1030C */  jal        func_800F8768
    /* 4CAF8 8013E6F8 5AF40434 */   ori       $a0, $zero, 0xF45A
  .L8013E6FC:
    /* 4CAFC 8013E6FC D9D8030C */  jal        func_800F6364
    /* 4CB00 8013E700 00000000 */   nop
    /* 4CB04 8013E704 D9D8030C */  jal        func_800F6364
    /* 4CB08 8013E708 00000000 */   nop
    /* 4CB0C 8013E70C 56D6030C */  jal        func_800F5958
    /* 4CB10 8013E710 08000424 */   addiu     $a0, $zero, 0x8
    /* 4CB14 8013E714 F5D4030C */  jal        func_800F53D4
    /* 4CB18 8013E718 00000000 */   nop
    /* 4CB1C 8013E71C B9FF4010 */  beqz       $v0, .L8013E604
    /* 4CB20 8013E720 00000000 */   nop
    /* 4CB24 8013E724 68E5030C */  jal        func_800F95A0
    /* 4CB28 8013E728 00000000 */   nop
    /* 4CB2C 8013E72C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 4CB30 8013E730 00000000 */  nop
    /* 4CB34 8013E734 0800E003 */  jr         $ra
    /* 4CB38 8013E738 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8013E5D0
