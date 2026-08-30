nonmatching func_8010D61C, 0x84

glabel func_8010D61C
    /* 1BA1C 8010D61C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 1BA20 8010D620 1000BFAF */  sw         $ra, 0x10($sp)
    /* 1BA24 8010D624 93E0030C */  jal        func_800F824C
    /* 1BA28 8010D628 3D000424 */   addiu     $a0, $zero, 0x3D
    /* 1BA2C 8010D62C EEE3030C */  jal        func_800F8FB8
    /* 1BA30 8010D630 3E000424 */   addiu     $a0, $zero, 0x3E
    /* 1BA34 8010D634 59D9030C */  jal        func_800F6564
    /* 1BA38 8010D638 E50F0424 */   addiu     $a0, $zero, 0xFE5
    /* 1BA3C 8010D63C 0DD9030C */  jal        func_800F6434
    /* 1BA40 8010D640 80000424 */   addiu     $a0, $zero, 0x80
    /* 1BA44 8010D644 07004014 */  bnez       $v0, .L8010D664
    /* 1BA48 8010D648 00000000 */   nop
    /* 1BA4C 8010D64C 59D9030C */  jal        func_800F6564
    /* 1BA50 8010D650 01170424 */   addiu     $a0, $zero, 0x1701
    /* 1BA54 8010D654 0DD9030C */  jal        func_800F6434
    /* 1BA58 8010D658 02000424 */   addiu     $a0, $zero, 0x2
    /* 1BA5C 8010D65C 03004014 */  bnez       $v0, .L8010D66C
    /* 1BA60 8010D660 00000000 */   nop
  .L8010D664:
    /* 1BA64 8010D664 AFD8030C */  jal        func_800F62BC
    /* 1BA68 8010D668 3E000424 */   addiu     $a0, $zero, 0x3E
  .L8010D66C:
    /* 1BA6C 8010D66C 9CDC030C */  jal        func_800F7270
    /* 1BA70 8010D670 3D000424 */   addiu     $a0, $zero, 0x3D
    /* 1BA74 8010D674 1200043C */  lui        $a0, (0x12F000 >> 16)
    /* 1BA78 8010D678 1ADB030C */  jal        func_800F6C68
    /* 1BA7C 8010D67C 00F08434 */   ori       $a0, $a0, (0x12F000 & 0xFFFF)
    /* 1BA80 8010D680 93E0030C */  jal        func_800F824C
    /* 1BA84 8010D684 06000424 */   addiu     $a0, $zero, 0x6
    /* 1BA88 8010D688 A835040C */  jal        func_8010D6A0
    /* 1BA8C 8010D68C 00000000 */   nop
    /* 1BA90 8010D690 1000BF8F */  lw         $ra, 0x10($sp)
    /* 1BA94 8010D694 00000000 */  nop
    /* 1BA98 8010D698 0800E003 */  jr         $ra
    /* 1BA9C 8010D69C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8010D61C
