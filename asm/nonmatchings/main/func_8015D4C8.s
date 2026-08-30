nonmatching func_8015D4C8, 0x1F8

glabel func_8015D4C8
    /* 6B8C8 8015D4C8 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 6B8CC 8015D4CC 1000BFAF */  sw         $ra, 0x10($sp)
    /* 6B8D0 8015D4D0 9CDC030C */  jal        func_800F7270
    /* 6B8D4 8015D4D4 A6000424 */   addiu     $a0, $zero, 0xA6
    /* 6B8D8 8015D4D8 DADA030C */  jal        func_800F6B68
    /* 6B8DC 8015D4DC 05200424 */   addiu     $a0, $zero, 0x2005
    /* 6B8E0 8015D4E0 92D0030C */  jal        func_800F4248
    /* 6B8E4 8015D4E4 02000424 */   addiu     $a0, $zero, 0x2
    /* 6B8E8 8015D4E8 48D0030C */  jal        func_800F4120
    /* 6B8EC 8015D4EC 02020424 */   addiu     $a0, $zero, 0x202
    /* 6B8F0 8015D4F0 6F004014 */  bnez       $v0, .L8015D6B0
    /* 6B8F4 8015D4F4 00000000 */   nop
    /* 6B8F8 8015D4F8 DADA030C */  jal        func_800F6B68
    /* 6B8FC 8015D4FC 06200424 */   addiu     $a0, $zero, 0x2006
    /* 6B900 8015D500 0DD9030C */  jal        func_800F6434
    /* 6B904 8015D504 80000424 */   addiu     $a0, $zero, 0x80
    /* 6B908 8015D508 69004014 */  bnez       $v0, .L8015D6B0
    /* 6B90C 8015D50C 00000000 */   nop
    /* 6B910 8015D510 8CD9030C */  jal        func_800F6630
    /* 6B914 8015D514 D2000424 */   addiu     $a0, $zero, 0xD2
    /* 6B918 8015D518 50D4030C */  jal        func_800F5140
    /* 6B91C 8015D51C 00000000 */   nop
    /* 6B920 8015D520 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 6B924 8015D524 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 6B928 8015D528 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 6B92C 8015D52C 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 6B930 8015D530 00004394 */  lhu        $v1, 0x0($v0)
    /* 6B934 8015D534 2A2B0424 */  addiu      $a0, $zero, 0x2B2A
    /* 6B938 8015D538 DADA030C */  jal        func_800F6B68
    /* 6B93C 8015D53C 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 6B940 8015D540 93E0030C */  jal        func_800F824C
    /* 6B944 8015D544 A9000424 */   addiu     $a0, $zero, 0xA9
    /* 6B948 8015D548 DADA030C */  jal        func_800F6B68
    /* 6B94C 8015D54C 2B2B0424 */   addiu     $a0, $zero, 0x2B2B
    /* 6B950 8015D550 93E0030C */  jal        func_800F824C
    /* 6B954 8015D554 AA000424 */   addiu     $a0, $zero, 0xAA
    /* 6B958 8015D558 84DC030C */  jal        func_800F7210
    /* 6B95C 8015D55C 55350424 */   addiu     $a0, $zero, 0x3555
    /* 6B960 8015D560 8CD9030C */  jal        func_800F6630
    /* 6B964 8015D564 A9000424 */   addiu     $a0, $zero, 0xA9
    /* 6B968 8015D568 DAE1030C */  jal        func_800F8768
    /* 6B96C 8015D56C 042A0424 */   addiu     $a0, $zero, 0x2A04
    /* 6B970 8015D570 8CD9030C */  jal        func_800F6630
    /* 6B974 8015D574 AA000424 */   addiu     $a0, $zero, 0xAA
    /* 6B978 8015D578 DAE1030C */  jal        func_800F8768
    /* 6B97C 8015D57C 052A0424 */   addiu     $a0, $zero, 0x2A05
    /* 6B980 8015D580 53D9030C */  jal        func_800F654C
    /* 6B984 8015D584 40000424 */   addiu     $a0, $zero, 0x40
    /* 6B988 8015D588 DAE1030C */  jal        func_800F8768
    /* 6B98C 8015D58C 062A0424 */   addiu     $a0, $zero, 0x2A06
    /* 6B990 8015D590 91E5030C */  jal        func_800F9644
    /* 6B994 8015D594 20000424 */   addiu     $a0, $zero, 0x20
    /* 6B998 8015D598 9CDC030C */  jal        func_800F7270
    /* 6B99C 8015D59C A6000424 */   addiu     $a0, $zero, 0xA6
    /* 6B9A0 8015D5A0 F8DA030C */  jal        func_800F6BE0
    /* 6B9A4 8015D5A4 09200424 */   addiu     $a0, $zero, 0x2009
    /* 6B9A8 8015D5A8 F14A050C */  jal        func_80152BC4
    /* 6B9AC 8015D5AC 00000000 */   nop
    /* 6B9B0 8015D5B0 9DE0030C */  jal        func_800F8274
    /* 6B9B4 8015D5B4 A9000424 */   addiu     $a0, $zero, 0xA9
    /* 6B9B8 8015D5B8 96D9030C */  jal        func_800F6658
    /* 6B9BC 8015D5BC A9000424 */   addiu     $a0, $zero, 0xA9
    /* 6B9C0 8015D5C0 3BD9030C */  jal        func_800F64EC
    /* 6B9C4 8015D5C4 02020424 */   addiu     $a0, $zero, 0x202
    /* 6B9C8 8015D5C8 03004014 */  bnez       $v0, .L8015D5D8
    /* 6B9CC 8015D5CC 00000000 */   nop
    /* 6B9D0 8015D5D0 BCD8030C */  jal        func_800F62F0
    /* 6B9D4 8015D5D4 A9000424 */   addiu     $a0, $zero, 0xA9
  .L8015D5D8:
    /* 6B9D8 8015D5D8 C7E5030C */  jal        func_800F971C
    /* 6B9DC 8015D5DC 00000000 */   nop
    /* 6B9E0 8015D5E0 98E5030C */  jal        func_800F9660
    /* 6B9E4 8015D5E4 20000424 */   addiu     $a0, $zero, 0x20
    /* 6B9E8 8015D5E8 8CD9030C */  jal        func_800F6630
    /* 6B9EC 8015D5EC D2000424 */   addiu     $a0, $zero, 0xD2
    /* 6B9F0 8015D5F0 50D4030C */  jal        func_800F5140
    /* 6B9F4 8015D5F4 00000000 */   nop
    /* 6B9F8 8015D5F8 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 6B9FC 8015D5FC 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 6BA00 8015D600 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 6BA04 8015D604 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 6BA08 8015D608 00004394 */  lhu        $v1, 0x0($v0)
    /* 6BA0C 8015D60C A9000424 */  addiu      $a0, $zero, 0xA9
    /* 6BA10 8015D610 8CD9030C */  jal        func_800F6630
    /* 6BA14 8015D614 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 6BA18 8015D618 DAE1030C */  jal        func_800F8768
    /* 6BA1C 8015D61C D4340424 */   addiu     $a0, $zero, 0x34D4
    /* 6BA20 8015D620 8CD9030C */  jal        func_800F6630
    /* 6BA24 8015D624 AA000424 */   addiu     $a0, $zero, 0xAA
    /* 6BA28 8015D628 DAE1030C */  jal        func_800F8768
    /* 6BA2C 8015D62C D5340424 */   addiu     $a0, $zero, 0x34D5
    /* 6BA30 8015D630 2387010C */  jal        func_80061C8C
    /* 6BA34 8015D634 00000000 */   nop
    /* 6BA38 8015D638 53D9030C */  jal        func_800F654C
    /* 6BA3C 8015D63C F8000424 */   addiu     $a0, $zero, 0xF8
    /* 6BA40 8015D640 62E0030C */  jal        func_800F8188
    /* 6BA44 8015D644 C2330424 */   addiu     $a0, $zero, 0x33C2
    /* 6BA48 8015D648 53D9030C */  jal        func_800F654C
    /* 6BA4C 8015D64C 03000424 */   addiu     $a0, $zero, 0x3
    /* 6BA50 8015D650 62E0030C */  jal        func_800F8188
    /* 6BA54 8015D654 C3330424 */   addiu     $a0, $zero, 0x33C3
    /* 6BA58 8015D658 53D9030C */  jal        func_800F654C
    /* 6BA5C 8015D65C 35000424 */   addiu     $a0, $zero, 0x35
    /* 6BA60 8015D660 62E0030C */  jal        func_800F8188
    /* 6BA64 8015D664 CA340424 */   addiu     $a0, $zero, 0x34CA
    /* 6BA68 8015D668 53D9030C */  jal        func_800F654C
    /* 6BA6C 8015D66C 05000424 */   addiu     $a0, $zero, 0x5
    /* 6BA70 8015D670 0E43050C */  jal        func_80150C38
    /* 6BA74 8015D674 00000000 */   nop
    /* 6BA78 8015D678 BD66010C */  jal        func_80059AF4
    /* 6BA7C 8015D67C 00000000 */   nop
    /* 6BA80 8015D680 53D9030C */  jal        func_800F654C
    /* 6BA84 8015D684 11000424 */   addiu     $a0, $zero, 0x11
    /* 6BA88 8015D688 0E43050C */  jal        func_80150C38
    /* 6BA8C 8015D68C 00000000 */   nop
    /* 6BA90 8015D690 53D9030C */  jal        func_800F654C
    /* 6BA94 8015D694 0C000424 */   addiu     $a0, $zero, 0xC
    /* 6BA98 8015D698 0E43050C */  jal        func_80150C38
    /* 6BA9C 8015D69C 00000000 */   nop
    /* 6BAA0 8015D6A0 53D9030C */  jal        func_800F654C
    /* 6BAA4 8015D6A4 10000424 */   addiu     $a0, $zero, 0x10
    /* 6BAA8 8015D6A8 0E43050C */  jal        func_80150C38
    /* 6BAAC 8015D6AC 00000000 */   nop
  .L8015D6B0:
    /* 6BAB0 8015D6B0 1000BF8F */  lw         $ra, 0x10($sp)
    /* 6BAB4 8015D6B4 00000000 */  nop
    /* 6BAB8 8015D6B8 0800E003 */  jr         $ra
    /* 6BABC 8015D6BC 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8015D4C8
