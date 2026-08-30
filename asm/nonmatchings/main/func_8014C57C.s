nonmatching func_8014C57C, 0xE8

glabel func_8014C57C
    /* 5A97C 8014C57C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 5A980 8014C580 1000BFAF */  sw         $ra, 0x10($sp)
    /* 5A984 8014C584 59D9030C */  jal        func_800F6564
    /* 5A988 8014C588 87F40434 */   ori       $a0, $zero, 0xF487
    /* 5A98C 8014C58C 0DD9030C */  jal        func_800F6434
    /* 5A990 8014C590 02000424 */   addiu     $a0, $zero, 0x2
    /* 5A994 8014C594 2F004010 */  beqz       $v0, .L8014C654
    /* 5A998 8014C598 00000000 */   nop
    /* 5A99C 8014C59C 90D8030C */  jal        func_800F6240
    /* 5A9A0 8014C5A0 87F40434 */   ori       $a0, $zero, 0xF487
    /* 5A9A4 8014C5A4 77DC030C */  jal        func_800F71DC
    /* 5A9A8 8014C5A8 21200000 */   addu      $a0, $zero, $zero
  .L8014C5AC:
    /* 5A9AC 8014C5AC DADA030C */  jal        func_800F6B68
    /* 5A9B0 8014C5B0 70ED0434 */   ori       $a0, $zero, 0xED70
    /* 5A9B4 8014C5B4 DAE1030C */  jal        func_800F8768
    /* 5A9B8 8014C5B8 C4F30434 */   ori       $a0, $zero, 0xF3C4
    /* 5A9BC 8014C5BC D9D8030C */  jal        func_800F6364
    /* 5A9C0 8014C5C0 00000000 */   nop
    /* 5A9C4 8014C5C4 56D6030C */  jal        func_800F5958
    /* 5A9C8 8014C5C8 40000424 */   addiu     $a0, $zero, 0x40
    /* 5A9CC 8014C5CC F5D4030C */  jal        func_800F53D4
    /* 5A9D0 8014C5D0 00000000 */   nop
    /* 5A9D4 8014C5D4 F5FF4010 */  beqz       $v0, .L8014C5AC
    /* 5A9D8 8014C5D8 00000000 */   nop
    /* 5A9DC 8014C5DC 59D9030C */  jal        func_800F6564
    /* 5A9E0 8014C5E0 02180424 */   addiu     $a0, $zero, 0x1802
    /* 5A9E4 8014C5E4 92D0030C */  jal        func_800F4248
    /* 5A9E8 8014C5E8 1F000424 */   addiu     $a0, $zero, 0x1F
    /* 5A9EC 8014C5EC 0D00043C */  lui        $a0, (0xDFFED >> 16)
    /* 5A9F0 8014C5F0 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 5A9F4 8014C5F4 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 5A9F8 8014C5F8 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 5A9FC 8014C5FC 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 5AA00 8014C600 00004394 */  lhu        $v1, 0x0($v0)
    /* 5AA04 8014C604 EDFF8434 */  ori        $a0, $a0, (0xDFFED & 0xFFFF)
    /* 5AA08 8014C608 1ADB030C */  jal        func_800F6C68
    /* 5AA0C 8014C60C 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 5AA10 8014C610 1A80033C */  lui        $v1, %hi(D_8019ED44)
    /* 5AA14 8014C614 44ED638C */  lw         $v1, %lo(D_8019ED44)($v1)
    /* 5AA18 8014C618 1A80043C */  lui        $a0, %hi(D_8019ED54)
    /* 5AA1C 8014C61C 54ED848C */  lw         $a0, %lo(D_8019ED54)($a0)
    /* 5AA20 8014C620 00006294 */  lhu        $v0, 0x0($v1)
    /* 5AA24 8014C624 00000000 */  nop
    /* 5AA28 8014C628 000082A4 */  sh         $v0, 0x0($a0)
  .L8014C62C:
    /* 5AA2C 8014C62C 67C9010C */  jal        func_8007259C
    /* 5AA30 8014C630 00000000 */   nop
    /* 5AA34 8014C634 9931050C */  jal        func_8014C664
    /* 5AA38 8014C638 00000000 */   nop
    /* 5AA3C 8014C63C 92D7030C */  jal        func_800F5E48
    /* 5AA40 8014C640 00000000 */   nop
    /* 5AA44 8014C644 19D7030C */  jal        func_800F5C64
    /* 5AA48 8014C648 02020424 */   addiu     $a0, $zero, 0x202
    /* 5AA4C 8014C64C F7FF4014 */  bnez       $v0, .L8014C62C
    /* 5AA50 8014C650 00000000 */   nop
  .L8014C654:
    /* 5AA54 8014C654 1000BF8F */  lw         $ra, 0x10($sp)
    /* 5AA58 8014C658 00000000 */  nop
    /* 5AA5C 8014C65C 0800E003 */  jr         $ra
    /* 5AA60 8014C660 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8014C57C
