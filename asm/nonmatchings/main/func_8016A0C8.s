nonmatching func_8016A0C8, 0x140

glabel func_8016A0C8
    /* 784C8 8016A0C8 E0FFBD27 */  addiu      $sp, $sp, -0x20
    /* 784CC 8016A0CC 1800BFAF */  sw         $ra, 0x18($sp)
    /* 784D0 8016A0D0 1400B1AF */  sw         $s1, 0x14($sp)
    /* 784D4 8016A0D4 9BE4030C */  jal        func_800F926C
    /* 784D8 8016A0D8 1000B0AF */   sw        $s0, 0x10($sp)
    /* 784DC 8016A0DC 80E4030C */  jal        func_800F9200
    /* 784E0 8016A0E0 1D80113C */   lui       $s1, %hi(D_801CFD68)
    /* 784E4 8016A0E4 12E5030C */  jal        func_800F9448
    /* 784E8 8016A0E8 00000000 */   nop
    /* 784EC 8016A0EC 1A80023C */  lui        $v0, %hi(D_8019ED58)
    /* 784F0 8016A0F0 58ED428C */  lw         $v0, %lo(D_8019ED58)($v0)
    /* 784F4 8016A0F4 00000000 */  nop
    /* 784F8 8016A0F8 00005094 */  lhu        $s0, 0x0($v0)
    /* 784FC 8016A0FC 5BE3030C */  jal        func_800F8D6C
    /* 78500 8016A100 02000424 */   addiu     $a0, $zero, 0x2
    /* 78504 8016A104 40DD030C */  jal        func_800F7500
    /* 78508 8016A108 21200000 */   addu      $a0, $zero, $zero
  .L8016A10C:
    /* 7850C 8016A10C 91E5030C */  jal        func_800F9644
    /* 78510 8016A110 20000424 */   addiu     $a0, $zero, 0x20
    /* 78514 8016A114 8BE4030C */  jal        func_800F922C
    /* 78518 8016A118 00000000 */   nop
    /* 7851C 8016A11C 77DC030C */  jal        func_800F71DC
    /* 78520 8016A120 08000424 */   addiu     $a0, $zero, 0x8
  .L8016A124:
    /* 78524 8016A124 D9D9030C */  jal        func_800F6764
    /* 78528 8016A128 02000424 */   addiu     $a0, $zero, 0x2
    /* 7852C 8016A12C 40181000 */  sll        $v1, $s0, 1
    /* 78530 8016A130 01000226 */  addiu      $v0, $s0, 0x1
    /* 78534 8016A134 FFFF5030 */  andi       $s0, $v0, 0xFFFF
    /* 78538 8016A138 1A80043C */  lui        $a0, %hi(D_8019ED44)
    /* 7853C 8016A13C 44ED848C */  lw         $a0, %lo(D_8019ED44)($a0)
    /* 78540 8016A140 68FD2226 */  addiu      $v0, $s1, %lo(D_801CFD68)
    /* 78544 8016A144 00008594 */  lhu        $a1, 0x0($a0)
    /* 78548 8016A148 21186200 */  addu       $v1, $v1, $v0
    /* 7854C 8016A14C EFD8030C */  jal        func_800F63BC
    /* 78550 8016A150 000065A4 */   sh        $a1, 0x0($v1)
    /* 78554 8016A154 EFD8030C */  jal        func_800F63BC
    /* 78558 8016A158 00000000 */   nop
    /* 7855C 8016A15C 92D7030C */  jal        func_800F5E48
    /* 78560 8016A160 00000000 */   nop
    /* 78564 8016A164 19D7030C */  jal        func_800F5C64
    /* 78568 8016A168 02020424 */   addiu     $a0, $zero, 0x202
    /* 7856C 8016A16C EDFF4014 */  bnez       $v0, .L8016A124
    /* 78570 8016A170 00000000 */   nop
    /* 78574 8016A174 77DC030C */  jal        func_800F71DC
    /* 78578 8016A178 08000424 */   addiu     $a0, $zero, 0x8
    /* 7857C 8016A17C 04E5030C */  jal        func_800F9410
    /* 78580 8016A180 00000000 */   nop
    /* 78584 8016A184 98E5030C */  jal        func_800F9660
    /* 78588 8016A188 20000424 */   addiu     $a0, $zero, 0x20
  .L8016A18C:
    /* 7858C 8016A18C B6D9030C */  jal        func_800F66D8
    /* 78590 8016A190 02000424 */   addiu     $a0, $zero, 0x2
    /* 78594 8016A194 40181000 */  sll        $v1, $s0, 1
    /* 78598 8016A198 01000226 */  addiu      $v0, $s0, 0x1
    /* 7859C 8016A19C FFFF5030 */  andi       $s0, $v0, 0xFFFF
    /* 785A0 8016A1A0 1A80043C */  lui        $a0, %hi(D_8019ED40)
    /* 785A4 8016A1A4 40ED848C */  lw         $a0, %lo(D_8019ED40)($a0)
    /* 785A8 8016A1A8 68FD2226 */  addiu      $v0, $s1, %lo(D_801CFD68)
    /* 785AC 8016A1AC 00008590 */  lbu        $a1, 0x0($a0)
    /* 785B0 8016A1B0 21186200 */  addu       $v1, $v1, $v0
    /* 785B4 8016A1B4 EFD8030C */  jal        func_800F63BC
    /* 785B8 8016A1B8 000065A4 */   sh        $a1, 0x0($v1)
    /* 785BC 8016A1BC 92D7030C */  jal        func_800F5E48
    /* 785C0 8016A1C0 00000000 */   nop
    /* 785C4 8016A1C4 19D7030C */  jal        func_800F5C64
    /* 785C8 8016A1C8 02020424 */   addiu     $a0, $zero, 0x202
    /* 785CC 8016A1CC EFFF4014 */  bnez       $v0, .L8016A18C
    /* 785D0 8016A1D0 00000000 */   nop
    /* 785D4 8016A1D4 68D7030C */  jal        func_800F5DA0
    /* 785D8 8016A1D8 21200000 */   addu      $a0, $zero, $zero
    /* 785DC 8016A1DC E3D6030C */  jal        func_800F5B8C
    /* 785E0 8016A1E0 02020424 */   addiu     $a0, $zero, 0x202
    /* 785E4 8016A1E4 C9FF4014 */  bnez       $v0, .L8016A10C
    /* 785E8 8016A1E8 00000000 */   nop
    /* 785EC 8016A1EC 12E5030C */  jal        func_800F9448
    /* 785F0 8016A1F0 00000000 */   nop
    /* 785F4 8016A1F4 1800BF8F */  lw         $ra, 0x18($sp)
    /* 785F8 8016A1F8 1400B18F */  lw         $s1, 0x14($sp)
    /* 785FC 8016A1FC 1000B08F */  lw         $s0, 0x10($sp)
    /* 78600 8016A200 0800E003 */  jr         $ra
    /* 78604 8016A204 2000BD27 */   addiu     $sp, $sp, 0x20
endlabel func_8016A0C8
