nonmatching func_8014D5A0, 0xE0

glabel func_8014D5A0
    /* 5B9A0 8014D5A0 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 5B9A4 8014D5A4 1000BFAF */  sw         $ra, 0x10($sp)
    /* 5B9A8 8014D5A8 80E4030C */  jal        func_800F9200
    /* 5B9AC 8014D5AC 00000000 */   nop
    /* 5B9B0 8014D5B0 5DD5030C */  jal        func_800F5574
    /* 5B9B4 8014D5B4 31000424 */   addiu     $a0, $zero, 0x31
    /* 5B9B8 8014D5B8 F5D4030C */  jal        func_800F53D4
    /* 5B9BC 8014D5BC 00000000 */   nop
    /* 5B9C0 8014D5C0 07004014 */  bnez       $v0, .L8014D5E0
    /* 5B9C4 8014D5C4 00000000 */   nop
    /* 5B9C8 8014D5C8 5DD5030C */  jal        func_800F5574
    /* 5B9CC 8014D5CC 33000424 */   addiu     $a0, $zero, 0x33
    /* 5B9D0 8014D5D0 F5D4030C */  jal        func_800F53D4
    /* 5B9D4 8014D5D4 00000000 */   nop
    /* 5B9D8 8014D5D8 05004010 */  beqz       $v0, .L8014D5F0
    /* 5B9DC 8014D5DC 00000000 */   nop
  .L8014D5E0:
    /* 5B9E0 8014D5E0 53D9030C */  jal        func_800F654C
    /* 5B9E4 8014D5E4 80000424 */   addiu     $a0, $zero, 0x80
    /* 5B9E8 8014D5E8 88350508 */  j          .L8014D620
    /* 5B9EC 8014D5EC 00000000 */   nop
  .L8014D5F0:
    /* 5B9F0 8014D5F0 59D9030C */  jal        func_800F6564
    /* 5B9F4 8014D5F4 85F40434 */   ori       $a0, $zero, 0xF485
    /* 5B9F8 8014D5F8 0DD9030C */  jal        func_800F6434
    /* 5B9FC 8014D5FC 80000424 */   addiu     $a0, $zero, 0x80
    /* 5BA00 8014D600 05004014 */  bnez       $v0, .L8014D618
    /* 5BA04 8014D604 00000000 */   nop
    /* 5BA08 8014D608 53D9030C */  jal        func_800F654C
    /* 5BA0C 8014D60C C0000424 */   addiu     $a0, $zero, 0xC0
    /* 5BA10 8014D610 88350508 */  j          .L8014D620
    /* 5BA14 8014D614 00000000 */   nop
  .L8014D618:
    /* 5BA18 8014D618 53D9030C */  jal        func_800F654C
    /* 5BA1C 8014D61C 40000424 */   addiu     $a0, $zero, 0x40
  .L8014D620:
    /* 5BA20 8014D620 62E0030C */  jal        func_800F8188
    /* 5BA24 8014D624 14F40434 */   ori       $a0, $zero, 0xF414
    /* 5BA28 8014D628 F7E4030C */  jal        func_800F93DC
    /* 5BA2C 8014D62C 00000000 */   nop
    /* 5BA30 8014D630 62E0030C */  jal        func_800F8188
    /* 5BA34 8014D634 13F40434 */   ori       $a0, $zero, 0xF413
    /* 5BA38 8014D638 53D9030C */  jal        func_800F654C
    /* 5BA3C 8014D63C FF000424 */   addiu     $a0, $zero, 0xFF
    /* 5BA40 8014D640 62E0030C */  jal        func_800F8188
    /* 5BA44 8014D644 15F40434 */   ori       $a0, $zero, 0xF415
    /* 5BA48 8014D648 53D9030C */  jal        func_800F654C
    /* 5BA4C 8014D64C 02000424 */   addiu     $a0, $zero, 0x2
    /* 5BA50 8014D650 62E0030C */  jal        func_800F8188
    /* 5BA54 8014D654 12F40434 */   ori       $a0, $zero, 0xF412
    /* 5BA58 8014D658 6BDF050C */  jal        func_80177DAC
    /* 5BA5C 8014D65C 00000000 */   nop
    /* 5BA60 8014D660 83E5030C */  jal        func_800F960C
    /* 5BA64 8014D664 00000000 */   nop
    /* 5BA68 8014D668 68E5030C */  jal        func_800F95A0
    /* 5BA6C 8014D66C 00000000 */   nop
    /* 5BA70 8014D670 1000BF8F */  lw         $ra, 0x10($sp)
    /* 5BA74 8014D674 00000000 */  nop
    /* 5BA78 8014D678 0800E003 */  jr         $ra
    /* 5BA7C 8014D67C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8014D5A0
