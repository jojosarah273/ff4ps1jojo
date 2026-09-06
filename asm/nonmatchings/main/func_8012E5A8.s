nonmatching func_8012E5A8, 0x158

glabel func_8012E5A8
    /* 3C9A8 8012E5A8 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 3C9AC 8012E5AC 1000BFAF */  sw         $ra, 0x10($sp)
    /* 3C9B0 8012E5B0 99B8040C */  jal        func_8012E264
    /* 3C9B4 8012E5B4 00000000 */   nop
    /* 3C9B8 8012E5B8 77DC030C */  jal        func_800F71DC
    /* 3C9BC 8012E5BC 08000424 */   addiu     $a0, $zero, 0x8
  .L8012E5C0:
    /* 3C9C0 8012E5C0 68D7030C */  jal        func_800F5DA0
    /* 3C9C4 8012E5C4 D5000424 */   addiu     $a0, $zero, 0xD5
    /* 3C9C8 8012E5C8 68D7030C */  jal        func_800F5DA0
    /* 3C9CC 8012E5CC D5000424 */   addiu     $a0, $zero, 0xD5
    /* 3C9D0 8012E5D0 68D7030C */  jal        func_800F5DA0
    /* 3C9D4 8012E5D4 D5000424 */   addiu     $a0, $zero, 0xD5
    /* 3C9D8 8012E5D8 AFD8030C */  jal        func_800F62BC
    /* 3C9DC 8012E5DC D7000424 */   addiu     $a0, $zero, 0xD7
    /* 3C9E0 8012E5E0 AFD8030C */  jal        func_800F62BC
    /* 3C9E4 8012E5E4 D7000424 */   addiu     $a0, $zero, 0xD7
    /* 3C9E8 8012E5E8 AFD8030C */  jal        func_800F62BC
    /* 3C9EC 8012E5EC D7000424 */   addiu     $a0, $zero, 0xD7
    /* 3C9F0 8012E5F0 F3B9040C */  jal        func_8012E7CC
    /* 3C9F4 8012E5F4 00000000 */   nop
    /* 3C9F8 8012E5F8 A17D040C */  jal        func_8011F684
    /* 3C9FC 8012E5FC 00000000 */   nop
    /* 3CA00 8012E600 92D7030C */  jal        func_800F5E48
    /* 3CA04 8012E604 00000000 */   nop
    /* 3CA08 8012E608 19D7030C */  jal        func_800F5C64
    /* 3CA0C 8012E60C 02020424 */   addiu     $a0, $zero, 0x202
    /* 3CA10 8012E610 EBFF4014 */  bnez       $v0, .L8012E5C0
    /* 3CA14 8012E614 00000000 */   nop
    /* 3CA18 8012E618 CFB8040C */  jal        func_8012E33C
    /* 3CA1C 8012E61C 00000000 */   nop
  .L8012E620:
    /* 3CA20 8012E620 91E5030C */  jal        func_800F9644
    /* 3CA24 8012E624 20000424 */   addiu     $a0, $zero, 0x20
    /* 3CA28 8012E628 96D9030C */  jal        func_800F6658
    /* 3CA2C 8012E62C D5000424 */   addiu     $a0, $zero, 0xD5
    /* 3CA30 8012E630 04D5030C */  jal        func_800F5410
    /* 3CA34 8012E634 00000000 */   nop
    /* 3CA38 8012E638 C1CE030C */  jal        func_800F3B04
    /* 3CA3C 8012E63C 9D1B0424 */   addiu     $a0, $zero, 0x1B9D
    /* 3CA40 8012E640 E5CF030C */  jal        func_800F3F94
    /* 3CA44 8012E644 21204000 */   addu      $a0, $v0, $zero
    /* 3CA48 8012E648 9DE0030C */  jal        func_800F8274
    /* 3CA4C 8012E64C D5000424 */   addiu     $a0, $zero, 0xD5
    /* 3CA50 8012E650 96D9030C */  jal        func_800F6658
    /* 3CA54 8012E654 D7000424 */   addiu     $a0, $zero, 0xD7
    /* 3CA58 8012E658 04D5030C */  jal        func_800F5410
    /* 3CA5C 8012E65C 00000000 */   nop
    /* 3CA60 8012E660 C1CE030C */  jal        func_800F3B04
    /* 3CA64 8012E664 9F1B0424 */   addiu     $a0, $zero, 0x1B9F
    /* 3CA68 8012E668 E5CF030C */  jal        func_800F3F94
    /* 3CA6C 8012E66C 21204000 */   addu      $a0, $v0, $zero
    /* 3CA70 8012E670 9DE0030C */  jal        func_800F8274
    /* 3CA74 8012E674 D7000424 */   addiu     $a0, $zero, 0xD7
    /* 3CA78 8012E678 98E5030C */  jal        func_800F9660
    /* 3CA7C 8012E67C 20000424 */   addiu     $a0, $zero, 0x20
    /* 3CA80 8012E680 F3B9040C */  jal        func_8012E7CC
    /* 3CA84 8012E684 00000000 */   nop
    /* 3CA88 8012E688 A17D040C */  jal        func_8011F684
    /* 3CA8C 8012E68C 00000000 */   nop
    /* 3CA90 8012E690 49D7030C */  jal        func_800F5D24
    /* 3CA94 8012E694 9C1B0424 */   addiu     $a0, $zero, 0x1B9C
    /* 3CA98 8012E698 E3D6030C */  jal        func_800F5B8C
    /* 3CA9C 8012E69C 02020424 */   addiu     $a0, $zero, 0x202
    /* 3CAA0 8012E6A0 DFFF4014 */  bnez       $v0, .L8012E620
    /* 3CAA4 8012E6A4 00000000 */   nop
    /* 3CAA8 8012E6A8 C0B9040C */  jal        func_8012E700
    /* 3CAAC 8012E6AC 00000000 */   nop
    /* 3CAB0 8012E6B0 8CD9030C */  jal        func_800F6630
    /* 3CAB4 8012E6B4 D9000424 */   addiu     $a0, $zero, 0xD9
    /* 3CAB8 8012E6B8 93E0030C */  jal        func_800F824C
    /* 3CABC 8012E6BC 1D000424 */   addiu     $a0, $zero, 0x1D
    /* 3CAC0 8012E6C0 7095040C */  jal        func_801255C0
    /* 3CAC4 8012E6C4 00000000 */   nop
    /* 3CAC8 8012E6C8 8CD9030C */  jal        func_800F6630
    /* 3CACC 8012E6CC DA000424 */   addiu     $a0, $zero, 0xDA
    /* 3CAD0 8012E6D0 93E0030C */  jal        func_800F824C
    /* 3CAD4 8012E6D4 1D000424 */   addiu     $a0, $zero, 0x1D
    /* 3CAD8 8012E6D8 7095040C */  jal        func_801255C0
    /* 3CADC 8012E6DC 00000000 */   nop
    /* 3CAE0 8012E6E0 A17D040C */  jal        func_8011F684
    /* 3CAE4 8012E6E4 00000000 */   nop
    /* 3CAE8 8012E6E8 0C9A040C */  jal        func_80126830
    /* 3CAEC 8012E6EC 00000000 */   nop
    /* 3CAF0 8012E6F0 1000BF8F */  lw         $ra, 0x10($sp)
    /* 3CAF4 8012E6F4 00000000 */  nop
    /* 3CAF8 8012E6F8 0800E003 */  jr         $ra
    /* 3CAFC 8012E6FC 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8012E5A8
