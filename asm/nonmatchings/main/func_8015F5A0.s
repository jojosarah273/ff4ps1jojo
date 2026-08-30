nonmatching func_8015F5A0, 0xC0

glabel func_8015F5A0
    /* 6D9A0 8015F5A0 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 6D9A4 8015F5A4 1000BFAF */  sw         $ra, 0x10($sp)
    /* 6D9A8 8015F5A8 77DC030C */  jal        func_800F71DC
    /* 6D9AC 8015F5AC 03000424 */   addiu     $a0, $zero, 0x3
    /* 6D9B0 8015F5B0 53D9030C */  jal        func_800F654C
    /* 6D9B4 8015F5B4 05000424 */   addiu     $a0, $zero, 0x5
    /* 6D9B8 8015F5B8 8948050C */  jal        func_80152224
    /* 6D9BC 8015F5BC 00000000 */   nop
    /* 6D9C0 8015F5C0 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 6D9C4 8015F5C4 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 6D9C8 8015F5C8 1A80053C */  lui        $a1, %hi(D_8019ED58)
    /* 6D9CC 8015F5CC 58EDA58C */  lw         $a1, %lo(D_8019ED58)($a1)
    /* 6D9D0 8015F5D0 00004394 */  lhu        $v1, 0x0($v0)
    /* 6D9D4 8015F5D4 A9000424 */  addiu      $a0, $zero, 0xA9
    /* 6D9D8 8015F5D8 62E0030C */  jal        func_800F8188
    /* 6D9DC 8015F5DC 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 6D9E0 8015F5E0 20D5030C */  jal        func_800F5480
    /* 6D9E4 8015F5E4 00000000 */   nop
  .L8015F5E8:
    /* 6D9E8 8015F5E8 C1CE030C */  jal        func_800F3B04
    /* 6D9EC 8015F5EC A4280424 */   addiu     $a0, $zero, 0x28A4
    /* 6D9F0 8015F5F0 32DF030C */  jal        func_800F7CC8
    /* 6D9F4 8015F5F4 21204000 */   addu      $a0, $v0, $zero
    /* 6D9F8 8015F5F8 43DF030C */  jal        func_800F7D0C
    /* 6D9FC 8015F5FC 00000000 */   nop
    /* 6DA00 8015F600 A8D7030C */  jal        func_800F5EA0
    /* 6DA04 8015F604 00000000 */   nop
    /* 6DA08 8015F608 19D7030C */  jal        func_800F5C64
    /* 6DA0C 8015F60C 02020424 */   addiu     $a0, $zero, 0x202
    /* 6DA10 8015F610 F5FF4014 */  bnez       $v0, .L8015F5E8
    /* 6DA14 8015F614 00000000 */   nop
    /* 6DA18 8015F618 59D9030C */  jal        func_800F6564
    /* 6DA1C 8015F61C A9000424 */   addiu     $a0, $zero, 0xA9
    /* 6DA20 8015F620 5DD5030C */  jal        func_800F5574
    /* 6DA24 8015F624 05000424 */   addiu     $a0, $zero, 0x5
    /* 6DA28 8015F628 F5D4030C */  jal        func_800F53D4
    /* 6DA2C 8015F62C 00000000 */   nop
    /* 6DA30 8015F630 05004014 */  bnez       $v0, .L8015F648
    /* 6DA34 8015F634 00000000 */   nop
    /* 6DA38 8015F638 DD95010C */  jal        func_80065774
    /* 6DA3C 8015F63C 00000000 */   nop
    /* 6DA40 8015F640 947D0508 */  j          .L8015F650
    /* 6DA44 8015F644 00000000 */   nop
  .L8015F648:
    /* 6DA48 8015F648 4D95010C */  jal        func_80065534
    /* 6DA4C 8015F64C 00000000 */   nop
  .L8015F650:
    /* 6DA50 8015F650 1000BF8F */  lw         $ra, 0x10($sp)
    /* 6DA54 8015F654 00000000 */  nop
    /* 6DA58 8015F658 0800E003 */  jr         $ra
    /* 6DA5C 8015F65C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8015F5A0
