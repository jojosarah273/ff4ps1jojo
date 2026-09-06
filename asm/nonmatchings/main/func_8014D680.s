nonmatching func_8014D680, 0x88

glabel func_8014D680
    /* 5BA80 8014D680 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 5BA84 8014D684 1000BFAF */  sw         $ra, 0x10($sp)
    /* 5BA88 8014D688 CCE4030C */  jal        func_800F9330
    /* 5BA8C 8014D68C 00000000 */   nop
    /* 5BA90 8014D690 E7E4030C */  jal        func_800F939C
    /* 5BA94 8014D694 00000000 */   nop
    /* 5BA98 8014D698 59D9030C */  jal        func_800F6564
    /* 5BA9C 8014D69C 7FF40434 */   ori       $a0, $zero, 0xF47F
    /* 5BAA0 8014D6A0 5DD5030C */  jal        func_800F5574
    /* 5BAA4 8014D6A4 FF000424 */   addiu     $a0, $zero, 0xFF
    /* 5BAA8 8014D6A8 F5D4030C */  jal        func_800F53D4
    /* 5BAAC 8014D6AC 00000000 */   nop
    /* 5BAB0 8014D6B0 0D004014 */  bnez       $v0, .L8014D6E8
    /* 5BAB4 8014D6B4 0F00043C */   lui       $a0, (0xFA350 >> 16)
    /* 5BAB8 8014D6B8 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 5BABC 8014D6BC 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 5BAC0 8014D6C0 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 5BAC4 8014D6C4 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 5BAC8 8014D6C8 00004394 */  lhu        $v1, 0x0($v0)
    /* 5BACC 8014D6CC 50A38434 */  ori        $a0, $a0, (0xFA350 & 0xFFFF)
    /* 5BAD0 8014D6D0 1ADB030C */  jal        func_800F6C68
    /* 5BAD4 8014D6D4 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 5BAD8 8014D6D8 6835050C */  jal        func_8014D5A0
    /* 5BADC 8014D6DC 00000000 */   nop
    /* 5BAE0 8014D6E0 BE350508 */  j          .L8014D6F8
    /* 5BAE4 8014D6E4 00000000 */   nop
  .L8014D6E8:
    /* 5BAE8 8014D6E8 83E5030C */  jal        func_800F960C
    /* 5BAEC 8014D6EC 00000000 */   nop
    /* 5BAF0 8014D6F0 68E5030C */  jal        func_800F95A0
    /* 5BAF4 8014D6F4 00000000 */   nop
  .L8014D6F8:
    /* 5BAF8 8014D6F8 1000BF8F */  lw         $ra, 0x10($sp)
    /* 5BAFC 8014D6FC 00000000 */  nop
    /* 5BB00 8014D700 0800E003 */  jr         $ra
    /* 5BB04 8014D704 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8014D680
