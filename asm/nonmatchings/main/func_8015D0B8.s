nonmatching func_8015D0B8, 0x110

glabel func_8015D0B8
    /* 6B4B8 8015D0B8 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 6B4BC 8015D0BC 1000BFAF */  sw         $ra, 0x10($sp)
    /* 6B4C0 8015D0C0 59D9030C */  jal        func_800F6564
    /* 6B4C4 8015D0C4 22180424 */   addiu     $a0, $zero, 0x1822
    /* 6B4C8 8015D0C8 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 6B4CC 8015D0CC 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 6B4D0 8015D0D0 1A80053C */  lui        $a1, %hi(D_8019ED58)
    /* 6B4D4 8015D0D4 58EDA58C */  lw         $a1, %lo(D_8019ED58)($a1)
    /* 6B4D8 8015D0D8 00004394 */  lhu        $v1, 0x0($v0)
    /* 6B4DC 8015D0DC DC380424 */  addiu      $a0, $zero, 0x38DC
    /* 6B4E0 8015D0E0 5CDB030C */  jal        func_800F6D70
    /* 6B4E4 8015D0E4 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 6B4E8 8015D0E8 0DD9030C */  jal        func_800F6434
    /* 6B4EC 8015D0EC 02000424 */   addiu     $a0, $zero, 0x2
    /* 6B4F0 8015D0F0 31004014 */  bnez       $v0, .L8015D1B8
    /* 6B4F4 8015D0F4 00000000 */   nop
    /* 6B4F8 8015D0F8 59D9030C */  jal        func_800F6564
    /* 6B4FC 8015D0FC 22180424 */   addiu     $a0, $zero, 0x1822
    /* 6B500 8015D100 62E0030C */  jal        func_800F8188
    /* 6B504 8015D104 75390424 */   addiu     $a0, $zero, 0x3975
    /* 6B508 8015D108 424A050C */  jal        func_80152908
    /* 6B50C 8015D10C 00000000 */   nop
    /* 6B510 8015D110 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 6B514 8015D114 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 6B518 8015D118 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 6B51C 8015D11C 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 6B520 8015D120 00004394 */  lhu        $v1, 0x0($v0)
    /* 6B524 8015D124 DC380424 */  addiu      $a0, $zero, 0x38DC
    /* 6B528 8015D128 5CDB030C */  jal        func_800F6D70
    /* 6B52C 8015D12C 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 6B530 8015D130 0DD9030C */  jal        func_800F6434
    /* 6B534 8015D134 80800434 */   ori       $a0, $zero, 0x8080
    /* 6B538 8015D138 09004014 */  bnez       $v0, .L8015D160
    /* 6B53C 8015D13C 00000000 */   nop
    /* 6B540 8015D140 D9D8030C */  jal        func_800F6364
    /* 6B544 8015D144 00000000 */   nop
    /* 6B548 8015D148 D9D8030C */  jal        func_800F6364
    /* 6B54C 8015D14C 00000000 */   nop
    /* 6B550 8015D150 D9D8030C */  jal        func_800F6364
    /* 6B554 8015D154 00000000 */   nop
    /* 6B558 8015D158 D9D8030C */  jal        func_800F6364
    /* 6B55C 8015D15C 00000000 */   nop
  .L8015D160:
    /* 6B560 8015D160 C7E5030C */  jal        func_800F971C
    /* 6B564 8015D164 00000000 */   nop
    /* 6B568 8015D168 58E2030C */  jal        func_800F8960
    /* 6B56C 8015D16C DC380424 */   addiu     $a0, $zero, 0x38DC
    /* 6B570 8015D170 3BE4030C */  jal        func_800F90EC
    /* 6B574 8015D174 DB320424 */   addiu     $a0, $zero, 0x32DB
    /* 6B578 8015D178 3BE4030C */  jal        func_800F90EC
    /* 6B57C 8015D17C DC320424 */   addiu     $a0, $zero, 0x32DC
    /* 6B580 8015D180 53D9030C */  jal        func_800F654C
    /* 6B584 8015D184 80000424 */   addiu     $a0, $zero, 0x80
    /* 6B588 8015D188 DAE1030C */  jal        func_800F8768
    /* 6B58C 8015D18C DA320424 */   addiu     $a0, $zero, 0x32DA
    /* 6B590 8015D190 59D9030C */  jal        func_800F6564
    /* 6B594 8015D194 75390424 */   addiu     $a0, $zero, 0x3975
    /* 6B598 8015D198 374B050C */  jal        func_80152CDC
    /* 6B59C 8015D19C 00000000 */   nop
    /* 6B5A0 8015D1A0 A168050C */  jal        func_8015A284
    /* 6B5A4 8015D1A4 00000000 */   nop
    /* 6B5A8 8015D1A8 DE55050C */  jal        func_80155778
    /* 6B5AC 8015D1AC 00000000 */   nop
    /* 6B5B0 8015D1B0 FF60050C */  jal        func_801583FC
    /* 6B5B4 8015D1B4 00000000 */   nop
  .L8015D1B8:
    /* 6B5B8 8015D1B8 1000BF8F */  lw         $ra, 0x10($sp)
    /* 6B5BC 8015D1BC 00000000 */  nop
    /* 6B5C0 8015D1C0 0800E003 */  jr         $ra
    /* 6B5C4 8015D1C4 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8015D0B8
