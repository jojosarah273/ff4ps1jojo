nonmatching func_8017CE9C, 0x1DC

glabel func_8017CE9C
    /* 8B29C 8017CE9C C0FFBD27 */  addiu      $sp, $sp, -0x40
    /* 8B2A0 8017CEA0 2800B2AF */  sw         $s2, 0x28($sp)
    /* 8B2A4 8017CEA4 2190A000 */  addu       $s2, $a1, $zero
    /* 8B2A8 8017CEA8 1A80023C */  lui        $v0, %hi(D_8019EE70)
    /* 8B2AC 8017CEAC 70EE4284 */  lh         $v0, %lo(D_8019EE70)($v0)
    /* 8B2B0 8017CEB0 00340600 */  sll        $a2, $a2, 16
    /* 8B2B4 8017CEB4 3400B5AF */  sw         $s5, 0x34($sp)
    /* 8B2B8 8017CEB8 03AC0600 */  sra        $s5, $a2, 16
    /* 8B2BC 8017CEBC 3800BFAF */  sw         $ra, 0x38($sp)
    /* 8B2C0 8017CEC0 3000B4AF */  sw         $s4, 0x30($sp)
    /* 8B2C4 8017CEC4 2C00B3AF */  sw         $s3, 0x2C($sp)
    /* 8B2C8 8017CEC8 2400B1AF */  sw         $s1, 0x24($sp)
    /* 8B2CC 8017CECC F0004228 */  slti       $v0, $v0, 0xF0
    /* 8B2D0 8017CED0 03004014 */  bnez       $v0, .L8017CEE0
    /* 8B2D4 8017CED4 2000B0AF */   sw        $s0, 0x20($sp)
    /* 8B2D8 8017CED8 5E00A016 */  bnez       $s5, .L8017D054
    /* 8B2DC 8017CEDC 00000000 */   nop
  .L8017CEE0:
    /* 8B2E0 8017CEE0 0D004292 */  lbu        $v0, 0xD($s2)
    /* 8B2E4 8017CEE4 00000000 */  nop
    /* 8B2E8 8017CEE8 5A004010 */  beqz       $v0, .L8017D054
    /* 8B2EC 8017CEEC 70009324 */   addiu     $s3, $a0, 0x70
    /* 8B2F0 8017CEF0 10039124 */  addiu      $s1, $a0, 0x310
    /* 8B2F4 8017CEF4 0C004392 */  lbu        $v1, 0xC($s2)
    /* 8B2F8 8017CEF8 1A80043C */  lui        $a0, %hi(D_8019EDEC)
    /* 8B2FC 8017CEFC ECED8484 */  lh         $a0, %lo(D_8019EDEC)($a0)
    /* 8B300 8017CF00 0A004586 */  lh         $a1, 0xA($s2)
    /* 8B304 8017CF04 80180300 */  sll        $v1, $v1, 2
    /* 8B308 8017CF08 21986302 */  addu       $s3, $s3, $v1
    /* 8B30C 8017CF0C 40100400 */  sll        $v0, $a0, 1
    /* 8B310 8017CF10 21104400 */  addu       $v0, $v0, $a0
    /* 8B314 8017CF14 80100200 */  sll        $v0, $v0, 2
    /* 8B318 8017CF18 21882202 */  addu       $s1, $s1, $v0
    /* 8B31C 8017CF1C 1A80033C */  lui        $v1, %hi(D_8019EDEC)
    /* 8B320 8017CF20 ECED6394 */  lhu        $v1, %lo(D_8019EDEC)($v1)
    /* 8B324 8017CF24 0D004492 */  lbu        $a0, 0xD($s2)
    /* 8B328 8017CF28 06004286 */  lh         $v0, 0x6($s2)
    /* 8B32C 8017CF2C 21186400 */  addu       $v1, $v1, $a0
    /* 8B330 8017CF30 21104500 */  addu       $v0, $v0, $a1
    /* 8B334 8017CF34 F1004228 */  slti       $v0, $v0, 0xF1
    /* 8B338 8017CF38 1A80013C */  lui        $at, %hi(D_8019EDEC)
    /* 8B33C 8017CF3C ECED23A4 */  sh         $v1, %lo(D_8019EDEC)($at)
    /* 8B340 8017CF40 06004396 */  lhu        $v1, 0x6($s2)
    /* 8B344 8017CF44 03004014 */  bnez       $v0, .L8017CF54
    /* 8B348 8017CF48 F0000224 */   addiu     $v0, $zero, 0xF0
    /* 8B34C 8017CF4C 23104300 */  subu       $v0, $v0, $v1
    /* 8B350 8017CF50 0A0042A6 */  sh         $v0, 0xA($s2)
  .L8017CF54:
    /* 8B354 8017CF54 04004286 */  lh         $v0, 0x4($s2)
    /* 8B358 8017CF58 04004496 */  lhu        $a0, 0x4($s2)
    /* 8B35C 8017CF5C 00014228 */  slti       $v0, $v0, 0x100
    /* 8B360 8017CF60 0F004010 */  beqz       $v0, .L8017CFA0
    /* 8B364 8017CF64 00010324 */   addiu     $v1, $zero, 0x100
    /* 8B368 8017CF68 1A80033C */  lui        $v1, %hi(D_8019EE40)
    /* 8B36C 8017CF6C 40EE6384 */  lh         $v1, %lo(D_8019EE40)($v1)
    /* 8B370 8017CF70 1800A4A7 */  sh         $a0, 0x18($sp)
    /* 8B374 8017CF74 08004496 */  lhu        $a0, 0x8($s2)
    /* 8B378 8017CF78 0A004596 */  lhu        $a1, 0xA($s2)
    /* 8B37C 8017CF7C 00110300 */  sll        $v0, $v1, 4
    /* 8B380 8017CF80 23104300 */  subu       $v0, $v0, $v1
    /* 8B384 8017CF84 06004396 */  lhu        $v1, 0x6($s2)
    /* 8B388 8017CF88 00110200 */  sll        $v0, $v0, 4
    /* 8B38C 8017CF8C 1C00A4A7 */  sh         $a0, 0x1C($sp)
    /* 8B390 8017CF90 1E00A5A7 */  sh         $a1, 0x1E($sp)
    /* 8B394 8017CF94 21186200 */  addu       $v1, $v1, $v0
    /* 8B398 8017CF98 EDF30508 */  j          .L8017CFB4
    /* 8B39C 8017CF9C 1A00A3A7 */   sh        $v1, 0x1A($sp)
  .L8017CFA0:
    /* 8B3A0 8017CFA0 F0000224 */  addiu      $v0, $zero, 0xF0
    /* 8B3A4 8017CFA4 1800A3A7 */  sh         $v1, 0x18($sp)
    /* 8B3A8 8017CFA8 1A00A0A7 */  sh         $zero, 0x1A($sp)
    /* 8B3AC 8017CFAC 1C00A3A7 */  sh         $v1, 0x1C($sp)
    /* 8B3B0 8017CFB0 1E00A2A7 */  sh         $v0, 0x1E($sp)
  .L8017CFB4:
    /* 8B3B4 8017CFB4 21202002 */  addu       $a0, $s1, $zero
    /* 8B3B8 8017CFB8 4854060C */  jal        func_80195120
    /* 8B3BC 8017CFBC 1800A527 */   addiu     $a1, $sp, 0x18
    /* 8B3C0 8017CFC0 0D004292 */  lbu        $v0, 0xD($s2)
    /* 8B3C4 8017CFC4 00000000 */  nop
    /* 8B3C8 8017CFC8 0D004010 */  beqz       $v0, .L8017D000
    /* 8B3CC 8017CFCC 0100103C */   lui       $s0, (0x10000 >> 16)
    /* 8B3D0 8017CFD0 0100143C */  lui        $s4, (0x10000 >> 16)
  .L8017CFD4:
    /* 8B3D4 8017CFD4 21206002 */  addu       $a0, $s3, $zero
    /* 8B3D8 8017CFD8 825C060C */  jal        func_80197208
    /* 8B3DC 8017CFDC 21282002 */   addu      $a1, $s1, $zero
    /* 8B3E0 8017CFE0 21180002 */  addu       $v1, $s0, $zero
    /* 8B3E4 8017CFE4 21801402 */  addu       $s0, $s0, $s4
    /* 8B3E8 8017CFE8 04007326 */  addiu      $s3, $s3, 0x4
    /* 8B3EC 8017CFEC 0D004292 */  lbu        $v0, 0xD($s2)
    /* 8B3F0 8017CFF0 031C0300 */  sra        $v1, $v1, 16
    /* 8B3F4 8017CFF4 2A106200 */  slt        $v0, $v1, $v0
    /* 8B3F8 8017CFF8 F6FF4014 */  bnez       $v0, .L8017CFD4
    /* 8B3FC 8017CFFC 0C003126 */   addiu     $s1, $s1, 0xC
  .L8017D000:
    /* 8B400 8017D000 21200000 */  addu       $a0, $zero, $zero
    /* 8B404 8017D004 1A80023C */  lui        $v0, %hi(D_801A0960)
    /* 8B408 8017D008 60094224 */  addiu      $v0, $v0, %lo(D_801A0960)
    /* 8B40C 8017D00C 0C004684 */  lh         $a2, 0xC($v0)
    /* 8B410 8017D010 06004396 */  lhu        $v1, 0x6($s2)
    /* 8B414 8017D014 0E004784 */  lh         $a3, 0xE($v0)
    /* 8B418 8017D018 2118A302 */  addu       $v1, $s5, $v1
    /* 8B41C 8017D01C 1A80013C */  lui        $at, %hi(D_8019EE70)
    /* 8B420 8017D020 70EE23A4 */  sh         $v1, %lo(D_8019EE70)($at)
    /* 8B424 8017D024 6A5C060C */  jal        func_801971A8
    /* 8B428 8017D028 21280000 */   addu      $a1, $zero, $zero
    /* 8B42C 8017D02C 21200000 */  addu       $a0, $zero, $zero
    /* 8B430 8017D030 21280000 */  addu       $a1, $zero, $zero
    /* 8B434 8017D034 21300000 */  addu       $a2, $zero, $zero
    /* 8B438 8017D038 80004234 */  ori        $v0, $v0, 0x80
    /* 8B43C 8017D03C FFFF4730 */  andi       $a3, $v0, 0xFFFF
    /* 8B440 8017D040 EE5C060C */  jal        func_801973B8
    /* 8B444 8017D044 1000A0AF */   sw        $zero, 0x10($sp)
    /* 8B448 8017D048 21206002 */  addu       $a0, $s3, $zero
    /* 8B44C 8017D04C 825C060C */  jal        func_80197208
    /* 8B450 8017D050 21280000 */   addu      $a1, $zero, $zero
  .L8017D054:
    /* 8B454 8017D054 3800BF8F */  lw         $ra, 0x38($sp)
    /* 8B458 8017D058 3400B58F */  lw         $s5, 0x34($sp)
    /* 8B45C 8017D05C 3000B48F */  lw         $s4, 0x30($sp)
    /* 8B460 8017D060 2C00B38F */  lw         $s3, 0x2C($sp)
    /* 8B464 8017D064 2800B28F */  lw         $s2, 0x28($sp)
    /* 8B468 8017D068 2400B18F */  lw         $s1, 0x24($sp)
    /* 8B46C 8017D06C 2000B08F */  lw         $s0, 0x20($sp)
    /* 8B470 8017D070 0800E003 */  jr         $ra
    /* 8B474 8017D074 4000BD27 */   addiu     $sp, $sp, 0x40
endlabel func_8017CE9C
