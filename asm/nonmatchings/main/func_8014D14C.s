nonmatching func_8014D14C, 0x1D0

glabel func_8014D14C
    /* 5B54C 8014D14C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 5B550 8014D150 1000BFAF */  sw         $ra, 0x10($sp)
    /* 5B554 8014D154 04D5030C */  jal        func_800F5410
    /* 5B558 8014D158 00000000 */   nop
    /* 5B55C 8014D15C 02D0030C */  jal        func_800F4008
    /* 5B560 8014D160 28000424 */   addiu     $a0, $zero, 0x28
    /* 5B564 8014D164 93E0030C */  jal        func_800F824C
    /* 5B568 8014D168 26000424 */   addiu     $a0, $zero, 0x26
    /* 5B56C 8014D16C 53D9030C */  jal        func_800F654C
    /* 5B570 8014D170 10000424 */   addiu     $a0, $zero, 0x10
    /* 5B574 8014D174 93E0030C */  jal        func_800F824C
    /* 5B578 8014D178 28000424 */   addiu     $a0, $zero, 0x28
    /* 5B57C 8014D17C C8C9010C */  jal        func_80072720
    /* 5B580 8014D180 00000000 */   nop
    /* 5B584 8014D184 59D9030C */  jal        func_800F6564
    /* 5B588 8014D188 79F20434 */   ori       $a0, $zero, 0xF279
    /* 5B58C 8014D18C 0DD9030C */  jal        func_800F6434
    /* 5B590 8014D190 02020424 */   addiu     $a0, $zero, 0x202
    /* 5B594 8014D194 48004014 */  bnez       $v0, .L8014D2B8
    /* 5B598 8014D198 00000000 */   nop
    /* 5B59C 8014D19C 59D9030C */  jal        func_800F6564
    /* 5B5A0 8014D1A0 84F20434 */   ori       $a0, $zero, 0xF284
    /* 5B5A4 8014D1A4 93E0030C */  jal        func_800F824C
    /* 5B5A8 8014D1A8 26000424 */   addiu     $a0, $zero, 0x26
    /* 5B5AC 8014D1AC 40DD030C */  jal        func_800F7500
    /* 5B5B0 8014D1B0 21200000 */   addu      $a0, $zero, $zero
  .L8014D1B4:
    /* 5B5B4 8014D1B4 0FCF030C */  jal        func_800F3C3C
    /* 5B5B8 8014D1B8 26000424 */   addiu     $a0, $zero, 0x26
    /* 5B5BC 8014D1BC CAD3030C */  jal        func_800F4F28
    /* 5B5C0 8014D1C0 21204000 */   addu      $a0, $v0, $zero
    /* 5B5C4 8014D1C4 EBD3030C */  jal        func_800F4FAC
    /* 5B5C8 8014D1C8 01010424 */   addiu     $a0, $zero, 0x101
    /* 5B5CC 8014D1CC 30004014 */  bnez       $v0, .L8014D290
    /* 5B5D0 8014D1D0 00000000 */   nop
    /* 5B5D4 8014D1D4 E7E4030C */  jal        func_800F939C
    /* 5B5D8 8014D1D8 00000000 */   nop
    /* 5B5DC 8014D1DC 1A80033C */  lui        $v1, %hi(D_8019ED60)
    /* 5B5E0 8014D1E0 60ED638C */  lw         $v1, %lo(D_8019ED60)($v1)
    /* 5B5E4 8014D1E4 1A80043C */  lui        $a0, %hi(D_8019ED40)
    /* 5B5E8 8014D1E8 40ED848C */  lw         $a0, %lo(D_8019ED40)($a0)
    /* 5B5EC 8014D1EC 00006290 */  lbu        $v0, 0x0($v1)
    /* 5B5F0 8014D1F0 00000000 */  nop
    /* 5B5F4 8014D1F4 000082A0 */  sb         $v0, 0x0($a0)
    /* 5B5F8 8014D1F8 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 5B5FC 8014D1FC 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 5B600 8014D200 00000000 */  nop
    /* 5B604 8014D204 00006290 */  lbu        $v0, 0x0($v1)
    /* 5B608 8014D208 00000000 */  nop
    /* 5B60C 8014D20C 40110200 */  sll        $v0, $v0, 5
    /* 5B610 8014D210 000062A0 */  sb         $v0, 0x0($v1)
    /* 5B614 8014D214 1A80043C */  lui        $a0, %hi(D_8019ED44)
    /* 5B618 8014D218 44ED848C */  lw         $a0, %lo(D_8019ED44)($a0)
    /* 5B61C 8014D21C 1A80033C */  lui        $v1, %hi(D_8019ED58)
    /* 5B620 8014D220 58ED638C */  lw         $v1, %lo(D_8019ED58)($v1)
    /* 5B624 8014D224 00008294 */  lhu        $v0, 0x0($a0)
    /* 5B628 8014D228 10000424 */  addiu      $a0, $zero, 0x10
    /* 5B62C 8014D22C 53D9030C */  jal        func_800F654C
    /* 5B630 8014D230 000062A4 */   sh        $v0, 0x0($v1)
    /* 5B634 8014D234 93E0030C */  jal        func_800F824C
    /* 5B638 8014D238 28000424 */   addiu     $a0, $zero, 0x28
    /* 5B63C 8014D23C 9CDC030C */  jal        func_800F7270
    /* 5B640 8014D240 2A000424 */   addiu     $a0, $zero, 0x2A
    /* 5B644 8014D244 0E00043C */  lui        $a0, (0xECB00 >> 16)
  .L8014D248:
    /* 5B648 8014D248 1ADB030C */  jal        func_800F6C68
    /* 5B64C 8014D24C 00CB8434 */   ori       $a0, $a0, (0xECB00 & 0xFFFF)
    /* 5B650 8014D250 58E2030C */  jal        func_800F8960
    /* 5B654 8014D254 70EE0434 */   ori       $a0, $zero, 0xEE70
    /* 5B658 8014D258 58E2030C */  jal        func_800F8960
    /* 5B65C 8014D25C 80EE0434 */   ori       $a0, $zero, 0xEE80
    /* 5B660 8014D260 D9D8030C */  jal        func_800F6364
    /* 5B664 8014D264 00000000 */   nop
    /* 5B668 8014D268 EFD8030C */  jal        func_800F63BC
    /* 5B66C 8014D26C 00000000 */   nop
    /* 5B670 8014D270 68D7030C */  jal        func_800F5DA0
    /* 5B674 8014D274 28000424 */   addiu     $a0, $zero, 0x28
    /* 5B678 8014D278 E3D6030C */  jal        func_800F5B8C
    /* 5B67C 8014D27C 02020424 */   addiu     $a0, $zero, 0x202
    /* 5B680 8014D280 F1FF4014 */  bnez       $v0, .L8014D248
    /* 5B684 8014D284 0E00043C */   lui       $a0, (0xECB00 >> 16)
    /* 5B688 8014D288 83E5030C */  jal        func_800F960C
    /* 5B68C 8014D28C 00000000 */   nop
  .L8014D290:
    /* 5B690 8014D290 EFD8030C */  jal        func_800F63BC
    /* 5B694 8014D294 00000000 */   nop
    /* 5B698 8014D298 A4D6030C */  jal        func_800F5A90
    /* 5B69C 8014D29C 05000424 */   addiu     $a0, $zero, 0x5
    /* 5B6A0 8014D2A0 F5D4030C */  jal        func_800F53D4
    /* 5B6A4 8014D2A4 00000000 */   nop
    /* 5B6A8 8014D2A8 C2FF4010 */  beqz       $v0, .L8014D1B4
    /* 5B6AC 8014D2AC 00000000 */   nop
    /* 5B6B0 8014D2B0 C3340508 */  j          .L8014D30C
    /* 5B6B4 8014D2B4 00000000 */   nop
  .L8014D2B8:
    /* 5B6B8 8014D2B8 40DD030C */  jal        func_800F7500
    /* 5B6BC 8014D2BC 21200000 */   addu      $a0, $zero, $zero
    /* 5B6C0 8014D2C0 9CDC030C */  jal        func_800F7270
    /* 5B6C4 8014D2C4 2A000424 */   addiu     $a0, $zero, 0x2A
    /* 5B6C8 8014D2C8 0E00043C */  lui        $a0, (0xECB00 >> 16)
  .L8014D2CC:
    /* 5B6CC 8014D2CC 1ADB030C */  jal        func_800F6C68
    /* 5B6D0 8014D2D0 00CB8434 */   ori       $a0, $a0, (0xECB00 & 0xFFFF)
    /* 5B6D4 8014D2D4 58E2030C */  jal        func_800F8960
    /* 5B6D8 8014D2D8 30EE0434 */   ori       $a0, $zero, 0xEE30
    /* 5B6DC 8014D2DC 58E2030C */  jal        func_800F8960
    /* 5B6E0 8014D2E0 40EE0434 */   ori       $a0, $zero, 0xEE40
    /* 5B6E4 8014D2E4 D9D8030C */  jal        func_800F6364
    /* 5B6E8 8014D2E8 00000000 */   nop
    /* 5B6EC 8014D2EC EFD8030C */  jal        func_800F63BC
    /* 5B6F0 8014D2F0 00000000 */   nop
    /* 5B6F4 8014D2F4 A4D6030C */  jal        func_800F5A90
    /* 5B6F8 8014D2F8 10000424 */   addiu     $a0, $zero, 0x10
    /* 5B6FC 8014D2FC F5D4030C */  jal        func_800F53D4
    /* 5B700 8014D300 00000000 */   nop
    /* 5B704 8014D304 F1FF4010 */  beqz       $v0, .L8014D2CC
    /* 5B708 8014D308 0E00043C */   lui       $a0, (0xECB00 >> 16)
  .L8014D30C:
    /* 5B70C 8014D30C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 5B710 8014D310 00000000 */  nop
    /* 5B714 8014D314 0800E003 */  jr         $ra
    /* 5B718 8014D318 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8014D14C
