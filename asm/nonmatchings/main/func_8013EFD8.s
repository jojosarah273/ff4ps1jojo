nonmatching func_8013EFD8, 0x14C

glabel func_8013EFD8
    /* 4D3D8 8013EFD8 D0FFBD27 */  addiu      $sp, $sp, -0x30
    /* 4D3DC 8013EFDC 00200424 */  addiu      $a0, $zero, 0x2000
    /* 4D3E0 8013EFE0 2800BFAF */  sw         $ra, 0x28($sp)
    /* 4D3E4 8013EFE4 2400B5AF */  sw         $s5, 0x24($sp)
    /* 4D3E8 8013EFE8 2000B4AF */  sw         $s4, 0x20($sp)
    /* 4D3EC 8013EFEC 1C00B3AF */  sw         $s3, 0x1C($sp)
    /* 4D3F0 8013EFF0 1800B2AF */  sw         $s2, 0x18($sp)
    /* 4D3F4 8013EFF4 1400B1AF */  sw         $s1, 0x14($sp)
    /* 4D3F8 8013EFF8 C1CE030C */  jal        func_800F3B04
    /* 4D3FC 8013EFFC 1000B0AF */   sw        $s0, 0x10($sp)
    /* 4D400 8013F000 21200000 */  addu       $a0, $zero, $zero
    /* 4D404 8013F004 0FCF030C */  jal        func_800F3C3C
    /* 4D408 8013F008 21804000 */   addu      $s0, $v0, $zero
    /* 4D40C 8013F00C C04C0392 */  lbu        $v1, 0x4CC0($s0)
    /* 4D410 8013F010 00000000 */  nop
    /* 4D414 8013F014 3A006010 */  beqz       $v1, .L8013F100
    /* 4D418 8013F018 21904000 */   addu      $s2, $v0, $zero
    /* 4D41C 8013F01C 40001524 */  addiu      $s5, $zero, 0x40
  .L8013F020:
    /* 4D420 8013F020 9CCE030C */  jal        func_800F3A70
    /* 4D424 8013F024 21200000 */   addu      $a0, $zero, $zero
    /* 4D428 8013F028 C1CE030C */  jal        func_800F3B04
    /* 4D42C 8013F02C 21204000 */   addu      $a0, $v0, $zero
    /* 4D430 8013F030 21984000 */  addu       $s3, $v0, $zero
    /* 4D434 8013F034 21880000 */  addu       $s1, $zero, $zero
    /* 4D438 8013F038 21107102 */  addu       $v0, $s3, $s1
  .L8013F03C:
    /* 4D43C 8013F03C 01004390 */  lbu        $v1, 0x1($v0)
    /* 4D440 8013F040 00005090 */  lbu        $s0, 0x0($v0)
    /* 4D444 8013F044 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 4D448 8013F048 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 4D44C 8013F04C 001A0300 */  sll        $v1, $v1, 8
    /* 4D450 8013F050 25800302 */  or         $s0, $s0, $v1
    /* 4D454 8013F054 8BE4030C */  jal        func_800F922C
    /* 4D458 8013F058 000050A4 */   sh        $s0, 0x0($v0)
    /* 4D45C 8013F05C 02002226 */  addiu      $v0, $s1, 0x2
    /* 4D460 8013F060 FFFF5130 */  andi       $s1, $v0, 0xFFFF
    /* 4D464 8013F064 F5FF3516 */  bne        $s1, $s5, .L8013F03C
    /* 4D468 8013F068 21107102 */   addu      $v0, $s3, $s1
    /* 4D46C 8013F06C 21880000 */  addu       $s1, $zero, $zero
    /* 4D470 8013F070 40001424 */  addiu      $s4, $zero, 0x40
  .L8013F074:
    /* 4D474 8013F074 04E5030C */  jal        func_800F9410
    /* 4D478 8013F078 00000000 */   nop
    /* 4D47C 8013F07C 21287102 */  addu       $a1, $s3, $s1
    /* 4D480 8013F080 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 4D484 8013F084 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 4D488 8013F088 02002326 */  addiu      $v1, $s1, 0x2
    /* 4D48C 8013F08C 00004494 */  lhu        $a0, 0x0($v0)
    /* 4D490 8013F090 FFFF7130 */  andi       $s1, $v1, 0xFFFF
    /* 4D494 8013F094 00409038 */  xori       $s0, $a0, 0x4000
    /* 4D498 8013F098 02121000 */  srl        $v0, $s0, 8
    /* 4D49C 8013F09C 0000B0A0 */  sb         $s0, 0x0($a1)
    /* 4D4A0 8013F0A0 F4FF3416 */  bne        $s1, $s4, .L8013F074
    /* 4D4A4 8013F0A4 0100A2A0 */   sb        $v0, 0x1($a1)
    /* 4D4A8 8013F0A8 01004292 */  lbu        $v0, 0x1($s2)
    /* 4D4AC 8013F0AC 00005092 */  lbu        $s0, 0x0($s2)
    /* 4D4B0 8013F0B0 00120200 */  sll        $v0, $v0, 8
    /* 4D4B4 8013F0B4 04D5030C */  jal        func_800F5410
    /* 4D4B8 8013F0B8 25800202 */   or        $s0, $s0, $v0
    /* 4D4BC 8013F0BC 40000226 */  addiu      $v0, $s0, 0x40
    /* 4D4C0 8013F0C0 FFFF5030 */  andi       $s0, $v0, 0xFFFF
    /* 4D4C4 8013F0C4 021A1000 */  srl        $v1, $s0, 8
    /* 4D4C8 8013F0C8 000050A2 */  sb         $s0, 0x0($s2)
    /* 4D4CC 8013F0CC 02005092 */  lbu        $s0, 0x2($s2)
    /* 4D4D0 8013F0D0 03004292 */  lbu        $v0, 0x3($s2)
    /* 4D4D4 8013F0D4 010043A2 */  sb         $v1, 0x1($s2)
    /* 4D4D8 8013F0D8 00120200 */  sll        $v0, $v0, 8
    /* 4D4DC 8013F0DC 25800202 */  or         $s0, $s0, $v0
    /* 4D4E0 8013F0E0 FFFF0326 */  addiu      $v1, $s0, -0x1
    /* 4D4E4 8013F0E4 FFFF7030 */  andi       $s0, $v1, 0xFFFF
    /* 4D4E8 8013F0E8 02121000 */  srl        $v0, $s0, 8
    /* 4D4EC 8013F0EC 020050A2 */  sb         $s0, 0x2($s2)
    /* 4D4F0 8013F0F0 CBFF0016 */  bnez       $s0, .L8013F020
    /* 4D4F4 8013F0F4 030042A2 */   sb        $v0, 0x3($s2)
    /* 4D4F8 8013F0F8 C7E5030C */  jal        func_800F971C
    /* 4D4FC 8013F0FC 00000000 */   nop
  .L8013F100:
    /* 4D500 8013F100 2800BF8F */  lw         $ra, 0x28($sp)
    /* 4D504 8013F104 2400B58F */  lw         $s5, 0x24($sp)
    /* 4D508 8013F108 2000B48F */  lw         $s4, 0x20($sp)
    /* 4D50C 8013F10C 1C00B38F */  lw         $s3, 0x1C($sp)
    /* 4D510 8013F110 1800B28F */  lw         $s2, 0x18($sp)
    /* 4D514 8013F114 1400B18F */  lw         $s1, 0x14($sp)
    /* 4D518 8013F118 1000B08F */  lw         $s0, 0x10($sp)
    /* 4D51C 8013F11C 0800E003 */  jr         $ra
    /* 4D520 8013F120 3000BD27 */   addiu     $sp, $sp, 0x30
endlabel func_8013EFD8
