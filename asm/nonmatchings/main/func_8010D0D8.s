nonmatching func_8010D0D8, 0x174

glabel func_8010D0D8
    /* 1B4D8 8010D0D8 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 1B4DC 8010D0DC 1000BFAF */  sw         $ra, 0x10($sp)
    /* 1B4E0 8010D0E0 93E0030C */  jal        func_800F824C
    /* 1B4E4 8010D0E4 3E000424 */   addiu     $a0, $zero, 0x3E
    /* 1B4E8 8010D0E8 EEE3030C */  jal        func_800F8FB8
    /* 1B4EC 8010D0EC 3D000424 */   addiu     $a0, $zero, 0x3D
    /* 1B4F0 8010D0F0 0FCF030C */  jal        func_800F3C3C
    /* 1B4F4 8010D0F4 3E000424 */   addiu     $a0, $zero, 0x3E
    /* 1B4F8 8010D0F8 AFDD030C */  jal        func_800F76BC
    /* 1B4FC 8010D0FC 21204000 */   addu      $a0, $v0, $zero
    /* 1B500 8010D100 BADD030C */  jal        func_800F76E8
    /* 1B504 8010D104 00000000 */   nop
    /* 1B508 8010D108 0FCF030C */  jal        func_800F3C3C
    /* 1B50C 8010D10C 3D000424 */   addiu     $a0, $zero, 0x3D
    /* 1B510 8010D110 32DF030C */  jal        func_800F7CC8
    /* 1B514 8010D114 21204000 */   addu      $a0, $v0, $zero
    /* 1B518 8010D118 0FCF030C */  jal        func_800F3C3C
    /* 1B51C 8010D11C 3E000424 */   addiu     $a0, $zero, 0x3E
    /* 1B520 8010D120 AFDD030C */  jal        func_800F76BC
    /* 1B524 8010D124 21204000 */   addu      $a0, $v0, $zero
    /* 1B528 8010D128 BADD030C */  jal        func_800F76E8
    /* 1B52C 8010D12C 00000000 */   nop
    /* 1B530 8010D130 0FCF030C */  jal        func_800F3C3C
    /* 1B534 8010D134 3D000424 */   addiu     $a0, $zero, 0x3D
    /* 1B538 8010D138 32DF030C */  jal        func_800F7CC8
    /* 1B53C 8010D13C 21204000 */   addu      $a0, $v0, $zero
    /* 1B540 8010D140 0FCF030C */  jal        func_800F3C3C
    /* 1B544 8010D144 3E000424 */   addiu     $a0, $zero, 0x3E
    /* 1B548 8010D148 AFDD030C */  jal        func_800F76BC
    /* 1B54C 8010D14C 21204000 */   addu      $a0, $v0, $zero
    /* 1B550 8010D150 BADD030C */  jal        func_800F76E8
    /* 1B554 8010D154 00000000 */   nop
    /* 1B558 8010D158 0FCF030C */  jal        func_800F3C3C
    /* 1B55C 8010D15C 3D000424 */   addiu     $a0, $zero, 0x3D
    /* 1B560 8010D160 32DF030C */  jal        func_800F7CC8
    /* 1B564 8010D164 21204000 */   addu      $a0, $v0, $zero
    /* 1B568 8010D168 9CDC030C */  jal        func_800F7270
    /* 1B56C 8010D16C 3D000424 */   addiu     $a0, $zero, 0x3D
  .L8010D170:
    /* 1B570 8010D170 0D00043C */  lui        $a0, (0xD80D0 >> 16)
    /* 1B574 8010D174 1ADB030C */  jal        func_800F6C68
    /* 1B578 8010D178 D0808434 */   ori       $a0, $a0, (0xD80D0 & 0xFFFF)
    /* 1B57C 8010D17C 58E2030C */  jal        func_800F8960
    /* 1B580 8010D180 5B0E0424 */   addiu     $a0, $zero, 0xE5B
    /* 1B584 8010D184 D9D8030C */  jal        func_800F6364
    /* 1B588 8010D188 00000000 */   nop
    /* 1B58C 8010D18C EFD8030C */  jal        func_800F63BC
    /* 1B590 8010D190 00000000 */   nop
    /* 1B594 8010D194 1A80023C */  lui        $v0, %hi(D_8019ED60)
    /* 1B598 8010D198 60ED428C */  lw         $v0, %lo(D_8019ED60)($v0)
    /* 1B59C 8010D19C 1A80053C */  lui        $a1, %hi(D_8019ED40)
    /* 1B5A0 8010D1A0 40EDA58C */  lw         $a1, %lo(D_8019ED40)($a1)
    /* 1B5A4 8010D1A4 00004390 */  lbu        $v1, 0x0($v0)
    /* 1B5A8 8010D1A8 0F000424 */  addiu      $a0, $zero, 0xF
    /* 1B5AC 8010D1AC 92D0030C */  jal        func_800F4248
    /* 1B5B0 8010D1B0 0000A3A0 */   sb        $v1, 0x0($a1)
    /* 1B5B4 8010D1B4 48D0030C */  jal        func_800F4120
    /* 1B5B8 8010D1B8 02020424 */   addiu     $a0, $zero, 0x202
    /* 1B5BC 8010D1BC ECFF4014 */  bnez       $v0, .L8010D170
    /* 1B5C0 8010D1C0 00000000 */   nop
  .L8010D1C4:
    /* 1B5C4 8010D1C4 53D9030C */  jal        func_800F654C
    /* 1B5C8 8010D1C8 21200000 */   addu      $a0, $zero, $zero
    /* 1B5CC 8010D1CC 58E2030C */  jal        func_800F8960
    /* 1B5D0 8010D1D0 5B0E0424 */   addiu     $a0, $zero, 0xE5B
    /* 1B5D4 8010D1D4 EFD8030C */  jal        func_800F63BC
    /* 1B5D8 8010D1D8 00000000 */   nop
    /* 1B5DC 8010D1DC 1A80023C */  lui        $v0, %hi(D_8019ED60)
    /* 1B5E0 8010D1E0 60ED428C */  lw         $v0, %lo(D_8019ED60)($v0)
    /* 1B5E4 8010D1E4 1A80053C */  lui        $a1, %hi(D_8019ED40)
    /* 1B5E8 8010D1E8 40EDA58C */  lw         $a1, %lo(D_8019ED40)($a1)
    /* 1B5EC 8010D1EC 00004390 */  lbu        $v1, 0x0($v0)
    /* 1B5F0 8010D1F0 0F000424 */  addiu      $a0, $zero, 0xF
    /* 1B5F4 8010D1F4 92D0030C */  jal        func_800F4248
    /* 1B5F8 8010D1F8 0000A3A0 */   sb        $v1, 0x0($a1)
    /* 1B5FC 8010D1FC 48D0030C */  jal        func_800F4120
    /* 1B600 8010D200 02020424 */   addiu     $a0, $zero, 0x202
    /* 1B604 8010D204 EFFF4014 */  bnez       $v0, .L8010D1C4
    /* 1B608 8010D208 00000000 */   nop
    /* 1B60C 8010D20C 1A80023C */  lui        $v0, %hi(D_8019ED60)
    /* 1B610 8010D210 60ED428C */  lw         $v0, %lo(D_8019ED60)($v0)
    /* 1B614 8010D214 1A80053C */  lui        $a1, %hi(D_8019ED40)
    /* 1B618 8010D218 40EDA58C */  lw         $a1, %lo(D_8019ED40)($a1)
    /* 1B61C 8010D21C 00004390 */  lbu        $v1, 0x0($v0)
    /* 1B620 8010D220 3F000424 */  addiu      $a0, $zero, 0x3F
    /* 1B624 8010D224 92D0030C */  jal        func_800F4248
    /* 1B628 8010D228 0000A3A0 */   sb        $v1, 0x0($a1)
    /* 1B62C 8010D22C 48D0030C */  jal        func_800F4120
    /* 1B630 8010D230 02020424 */   addiu     $a0, $zero, 0x202
    /* 1B634 8010D234 CEFF4014 */  bnez       $v0, .L8010D170
    /* 1B638 8010D238 00000000 */   nop
    /* 1B63C 8010D23C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 1B640 8010D240 00000000 */  nop
    /* 1B644 8010D244 0800E003 */  jr         $ra
    /* 1B648 8010D248 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8010D0D8
