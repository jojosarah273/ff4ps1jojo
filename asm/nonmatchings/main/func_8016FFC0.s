nonmatching func_8016FFC0, 0xC4

glabel func_8016FFC0
    /* 7E3C0 8016FFC0 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 7E3C4 8016FFC4 1000BFAF */  sw         $ra, 0x10($sp)
    /* 7E3C8 8016FFC8 9BE4030C */  jal        func_800F926C
    /* 7E3CC 8016FFCC 00000000 */   nop
    /* 7E3D0 8016FFD0 C7E5030C */  jal        func_800F971C
    /* 7E3D4 8016FFD4 00000000 */   nop
    /* 7E3D8 8016FFD8 80E4030C */  jal        func_800F9200
    /* 7E3DC 8016FFDC 00000000 */   nop
    /* 7E3E0 8016FFE0 12E5030C */  jal        func_800F9448
    /* 7E3E4 8016FFE4 00000000 */   nop
    /* 7E3E8 8016FFE8 53D9030C */  jal        func_800F654C
    /* 7E3EC 8016FFEC 80000424 */   addiu     $a0, $zero, 0x80
    /* 7E3F0 8016FFF0 62E0030C */  jal        func_800F8188
    /* 7E3F4 8016FFF4 00210424 */   addiu     $a0, $zero, 0x2100
    /* 7E3F8 8016FFF8 93E0030C */  jal        func_800F824C
    /* 7E3FC 8016FFFC 88000424 */   addiu     $a0, $zero, 0x88
    /* 7E400 80170000 53D9030C */  jal        func_800F654C
    /* 7E404 80170004 80000424 */   addiu     $a0, $zero, 0x80
    /* 7E408 80170008 62E0030C */  jal        func_800F8188
    /* 7E40C 8017000C 15210424 */   addiu     $a0, $zero, 0x2115
    /* 7E410 80170010 00200424 */  addiu      $a0, $zero, 0x2000
    /* 7E414 80170014 1D80023C */  lui        $v0, %hi(D_801CFD68)
    /* 7E418 80170018 68FD4724 */  addiu      $a3, $v0, %lo(D_801CFD68)
    /* 7E41C 8017001C 0E80053C */  lui        $a1, (0x800E0A00 >> 16)
    /* 7E420 80170020 000AA534 */  ori        $a1, $a1, (0x800E0A00 & 0xFFFF)
    /* 7E424 80170024 00080624 */  addiu      $a2, $zero, 0x800
  .L80170028:
    /* 7E428 80170028 40180400 */  sll        $v1, $a0, 1
    /* 7E42C 8017002C 21186700 */  addu       $v1, $v1, $a3
    /* 7E430 80170030 FFFFC624 */  addiu      $a2, $a2, -0x1
    /* 7E434 80170034 00006290 */  lbu        $v0, 0x0($v1)
    /* 7E438 80170038 01008424 */  addiu      $a0, $a0, 0x1
    /* 7E43C 8017003C 0000A2A0 */  sb         $v0, 0x0($a1)
    /* 7E440 80170040 00006294 */  lhu        $v0, 0x0($v1)
    /* 7E444 80170044 FFFF8430 */  andi       $a0, $a0, 0xFFFF
    /* 7E448 80170048 02120200 */  srl        $v0, $v0, 8
    /* 7E44C 8017004C 0100A2A0 */  sb         $v0, 0x1($a1)
    /* 7E450 80170050 F5FFC014 */  bnez       $a2, .L80170028
    /* 7E454 80170054 0200A524 */   addiu     $a1, $a1, 0x2
    /* 7E458 80170058 02120400 */  srl        $v0, $a0, 8
    /* 7E45C 8017005C 0D80013C */  lui        $at, %hi(D_800D2116)
    /* 7E460 80170060 162124A0 */  sb         $a0, %lo(D_800D2116)($at)
    /* 7E464 80170064 0D80013C */  lui        $at, %hi(D_800D2117)
    /* 7E468 80170068 172122A0 */  sb         $v0, %lo(D_800D2117)($at)
    /* 7E46C 8017006C 12E5030C */  jal        func_800F9448
    /* 7E470 80170070 00000000 */   nop
    /* 7E474 80170074 1000BF8F */  lw         $ra, 0x10($sp)
    /* 7E478 80170078 00000000 */  nop
    /* 7E47C 8017007C 0800E003 */  jr         $ra
    /* 7E480 80170080 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8016FFC0
