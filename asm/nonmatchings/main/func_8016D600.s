nonmatching func_8016D600, 0x130

glabel func_8016D600
    /* 7BA00 8016D600 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 7BA04 8016D604 1000BFAF */  sw         $ra, 0x10($sp)
    /* 7BA08 8016D608 5DD5030C */  jal        func_800F5574
    /* 7BA0C 8016D60C 01000424 */   addiu     $a0, $zero, 0x1
    /* 7BA10 8016D610 F5D4030C */  jal        func_800F53D4
    /* 7BA14 8016D614 00000000 */   nop
    /* 7BA18 8016D618 1D004014 */  bnez       $v0, .L8016D690
    /* 7BA1C 8016D61C 00000000 */   nop
    /* 7BA20 8016D620 5DD5030C */  jal        func_800F5574
    /* 7BA24 8016D624 0A000424 */   addiu     $a0, $zero, 0xA
    /* 7BA28 8016D628 F5D4030C */  jal        func_800F53D4
    /* 7BA2C 8016D62C 00000000 */   nop
    /* 7BA30 8016D630 05004010 */  beqz       $v0, .L8016D648
    /* 7BA34 8016D634 00000000 */   nop
    /* 7BA38 8016D638 CCB5050C */  jal        func_8016D730
    /* 7BA3C 8016D63C 00000000 */   nop
    /* 7BA40 8016D640 C8B50508 */  j          .L8016D720
    /* 7BA44 8016D644 00000000 */   nop
  .L8016D648:
    /* 7BA48 8016D648 DAB5050C */  jal        func_8016D768
    /* 7BA4C 8016D64C 00000000 */   nop
    /* 7BA50 8016D650 AADB030C */  jal        func_800F6EA8
    /* 7BA54 8016D654 36000424 */   addiu     $a0, $zero, 0x36
    /* 7BA58 8016D658 93E0030C */  jal        func_800F824C
    /* 7BA5C 8016D65C 21200000 */   addu      $a0, $zero, $zero
  .L8016D660:
    /* 7BA60 8016D660 53D9030C */  jal        func_800F654C
    /* 7BA64 8016D664 FF000424 */   addiu     $a0, $zero, 0xFF
    /* 7BA68 8016D668 CCB5050C */  jal        func_8016D730
    /* 7BA6C 8016D66C 00000000 */   nop
    /* 7BA70 8016D670 68D7030C */  jal        func_800F5DA0
    /* 7BA74 8016D674 21200000 */   addu      $a0, $zero, $zero
    /* 7BA78 8016D678 E3D6030C */  jal        func_800F5B8C
    /* 7BA7C 8016D67C 02020424 */   addiu     $a0, $zero, 0x202
    /* 7BA80 8016D680 F7FF4014 */  bnez       $v0, .L8016D660
    /* 7BA84 8016D684 00000000 */   nop
    /* 7BA88 8016D688 C8B50508 */  j          .L8016D720
    /* 7BA8C 8016D68C 00000000 */   nop
  .L8016D690:
    /* 7BA90 8016D690 59D9030C */  jal        func_800F6564
    /* 7BA94 8016D694 1D7D0424 */   addiu     $a0, $zero, 0x7D1D
    /* 7BA98 8016D698 91E5030C */  jal        func_800F9644
    /* 7BA9C 8016D69C 20000424 */   addiu     $a0, $zero, 0x20
    /* 7BAA0 8016D6A0 8BE4030C */  jal        func_800F922C
    /* 7BAA4 8016D6A4 00000000 */   nop
    /* 7BAA8 8016D6A8 5BD4030C */  jal        func_800F516C
    /* 7BAAC 8016D6AC 00000000 */   nop
    /* 7BAB0 8016D6B0 04D5030C */  jal        func_800F5410
    /* 7BAB4 8016D6B4 00000000 */   nop
    /* 7BAB8 8016D6B8 0FCF030C */  jal        func_800F3C3C
    /* 7BABC 8016D6BC 39000424 */   addiu     $a0, $zero, 0x39
    /* 7BAC0 8016D6C0 E5CF030C */  jal        func_800F3F94
    /* 7BAC4 8016D6C4 21204000 */   addu      $a0, $v0, $zero
    /* 7BAC8 8016D6C8 9DE0030C */  jal        func_800F8274
    /* 7BACC 8016D6CC 39000424 */   addiu     $a0, $zero, 0x39
    /* 7BAD0 8016D6D0 04E5030C */  jal        func_800F9410
    /* 7BAD4 8016D6D4 00000000 */   nop
    /* 7BAD8 8016D6D8 04D5030C */  jal        func_800F5410
    /* 7BADC 8016D6DC 00000000 */   nop
    /* 7BAE0 8016D6E0 0FCF030C */  jal        func_800F3C3C
    /* 7BAE4 8016D6E4 39000424 */   addiu     $a0, $zero, 0x39
    /* 7BAE8 8016D6E8 E5CF030C */  jal        func_800F3F94
    /* 7BAEC 8016D6EC 21204000 */   addu      $a0, $v0, $zero
    /* 7BAF0 8016D6F0 9DE0030C */  jal        func_800F8274
    /* 7BAF4 8016D6F4 3C000424 */   addiu     $a0, $zero, 0x3C
    /* 7BAF8 8016D6F8 C7E5030C */  jal        func_800F971C
    /* 7BAFC 8016D6FC 00000000 */   nop
    /* 7BB00 8016D700 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 7BB04 8016D704 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 7BB08 8016D708 1A80053C */  lui        $a1, %hi(D_8019ED58)
    /* 7BB0C 8016D70C 58EDA58C */  lw         $a1, %lo(D_8019ED58)($a1)
    /* 7BB10 8016D710 00004394 */  lhu        $v1, 0x0($v0)
    /* 7BB14 8016D714 20000424 */  addiu      $a0, $zero, 0x20
    /* 7BB18 8016D718 98E5030C */  jal        func_800F9660
    /* 7BB1C 8016D71C 0000A3A4 */   sh        $v1, 0x0($a1)
  .L8016D720:
    /* 7BB20 8016D720 1000BF8F */  lw         $ra, 0x10($sp)
    /* 7BB24 8016D724 00000000 */  nop
    /* 7BB28 8016D728 0800E003 */  jr         $ra
    /* 7BB2C 8016D72C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8016D600
