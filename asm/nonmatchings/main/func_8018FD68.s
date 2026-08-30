nonmatching func_8018FD68, 0x29C

glabel func_8018FD68
    /* 9E168 8018FD68 1A80023C */  lui        $v0, %hi(D_8019B9D4)
    /* 9E16C 8018FD6C D4B9428C */  lw         $v0, %lo(D_8019B9D4)($v0)
    /* 9E170 8018FD70 C0FFBD27 */  addiu      $sp, $sp, -0x40
    /* 9E174 8018FD74 3800B6AF */  sw         $s6, 0x38($sp)
    /* 9E178 8018FD78 21B08000 */  addu       $s6, $a0, $zero
    /* 9E17C 8018FD7C 3C00BFAF */  sw         $ra, 0x3C($sp)
    /* 9E180 8018FD80 3400B5AF */  sw         $s5, 0x34($sp)
    /* 9E184 8018FD84 3000B4AF */  sw         $s4, 0x30($sp)
    /* 9E188 8018FD88 2C00B3AF */  sw         $s3, 0x2C($sp)
    /* 9E18C 8018FD8C 2800B2AF */  sw         $s2, 0x28($sp)
    /* 9E190 8018FD90 2400B1AF */  sw         $s1, 0x24($sp)
    /* 9E194 8018FD94 9000C212 */  beq        $s6, $v0, .L8018FFD8
    /* 9E198 8018FD98 2000B0AF */   sw        $s0, 0x20($sp)
    /* 9E19C 8018FD9C 01000424 */  addiu      $a0, $zero, 0x1
    /* 9E1A0 8018FDA0 40101600 */  sll        $v0, $s6, 1
    /* 9E1A4 8018FDA4 21105600 */  addu       $v0, $v0, $s6
    /* 9E1A8 8018FDA8 80100200 */  sll        $v0, $v0, 2
    /* 9E1AC 8018FDAC 23105600 */  subu       $v0, $v0, $s6
    /* 9E1B0 8018FDB0 80100200 */  sll        $v0, $v0, 2
    /* 9E1B4 8018FDB4 1F80053C */  lui        $a1, %hi(D_801F70EC)
    /* 9E1B8 8018FDB8 2128A200 */  addu       $a1, $a1, $v0
    /* 9E1BC 8018FDBC EC70A58C */  lw         $a1, %lo(D_801F70EC)($a1)
    /* 9E1C0 8018FDC0 2080103C */  lui        $s0, %hi(D_801F8710)
    /* 9E1C4 8018FDC4 10871026 */  addiu      $s0, $s0, %lo(D_801F8710)
    /* 9E1C8 8018FDC8 0140060C */  jal        func_80190004
    /* 9E1CC 8018FDCC 21300002 */   addu      $a2, $s0, $zero
    /* 9E1D0 8018FDD0 01000324 */  addiu      $v1, $zero, 0x1
    /* 9E1D4 8018FDD4 0B004310 */  beq        $v0, $v1, .L8018FE04
    /* 9E1D8 8018FDD8 00000000 */   nop
    /* 9E1DC 8018FDDC 1A80023C */  lui        $v0, %hi(D_8019B9F4)
    /* 9E1E0 8018FDE0 F4B9428C */  lw         $v0, %lo(D_8019B9F4)($v0)
    /* 9E1E4 8018FDE4 00000000 */  nop
    /* 9E1E8 8018FDE8 7C004018 */  blez       $v0, .L8018FFDC
    /* 9E1EC 8018FDEC FFFF0224 */   addiu     $v0, $zero, -0x1
    /* 9E1F0 8018FDF0 0F80043C */  lui        $a0, %hi(D_800F339C)
    /* 9E1F4 8018FDF4 323C060C */  jal        func_8018F0C8
    /* 9E1F8 8018FDF8 9C338424 */   addiu     $a0, $a0, %lo(D_800F339C)
    /* 9E1FC 8018FDFC F73F0608 */  j          .L8018FFDC
    /* 9E200 8018FE00 FFFF0224 */   addiu     $v0, $zero, -0x1
  .L8018FE04:
    /* 9E204 8018FE04 1A80023C */  lui        $v0, %hi(D_8019B9F4)
    /* 9E208 8018FE08 F4B9428C */  lw         $v0, %lo(D_8019B9F4)($v0)
    /* 9E20C 8018FE0C 00000000 */  nop
    /* 9E210 8018FE10 02004228 */  slti       $v0, $v0, 0x2
    /* 9E214 8018FE14 05004014 */  bnez       $v0, .L8018FE2C
    /* 9E218 8018FE18 00080226 */   addiu     $v0, $s0, 0x800
    /* 9E21C 8018FE1C 0F80043C */  lui        $a0, %hi(D_800F33BC)
    /* 9E220 8018FE20 323C060C */  jal        func_8018F0C8
    /* 9E224 8018FE24 BC338424 */   addiu     $a0, $a0, %lo(D_800F33BC)
    /* 9E228 8018FE28 00080226 */  addiu      $v0, $s0, 0x800
  .L8018FE2C:
    /* 9E22C 8018FE2C 2B100202 */  sltu       $v0, $s0, $v0
    /* 9E230 8018FE30 55004010 */  beqz       $v0, .L8018FF88
    /* 9E234 8018FE34 21900000 */   addu      $s2, $zero, $zero
    /* 9E238 8018FE38 1F80153C */  lui        $s5, %hi(D_801F6B10)
    /* 9E23C 8018FE3C 106BB526 */  addiu      $s5, $s5, %lo(D_801F6B10)
    /* 9E240 8018FE40 0800B326 */  addiu      $s3, $s5, 0x8
    /* 9E244 8018FE44 21880000 */  addu       $s1, $zero, $zero
    /* 9E248 8018FE48 21A0A002 */  addu       $s4, $s5, $zero
  .L8018FE4C:
    /* 9E24C 8018FE4C 00000292 */  lbu        $v0, 0x0($s0)
    /* 9E250 8018FE50 00000000 */  nop
    /* 9E254 8018FE54 4C004010 */  beqz       $v0, .L8018FF88
    /* 9E258 8018FE58 00000000 */   nop
    /* 9E25C 8018FE5C 0500028A */  lwl        $v0, 0x5($s0)
    /* 9E260 8018FE60 0200029A */  lwr        $v0, 0x2($s0)
    /* 9E264 8018FE64 00000000 */  nop
    /* 9E268 8018FE68 1B00A2AB */  swl        $v0, 0x1B($sp)
    /* 9E26C 8018FE6C 1800A2BB */  swr        $v0, 0x18($sp)
    /* 9E270 8018FE70 1800A48F */  lw         $a0, 0x18($sp)
    /* 9E274 8018FE74 8E45060C */  jal        func_80191638
    /* 9E278 8018FE78 21288002 */   addu      $a1, $s4, $zero
    /* 9E27C 8018FE7C 0400A226 */  addiu      $v0, $s5, 0x4
    /* 9E280 8018FE80 21102202 */  addu       $v0, $s1, $v0
    /* 9E284 8018FE84 0D00038A */  lwl        $v1, 0xD($s0)
    /* 9E288 8018FE88 0A00039A */  lwr        $v1, 0xA($s0)
    /* 9E28C 8018FE8C 00000000 */  nop
    /* 9E290 8018FE90 030043A8 */  swl        $v1, 0x3($v0)
    /* 9E294 8018FE94 000043B8 */  swr        $v1, 0x0($v0)
    /* 9E298 8018FE98 05004012 */  beqz       $s2, .L8018FEB0
    /* 9E29C 8018FE9C 01000224 */   addiu     $v0, $zero, 0x1
    /* 9E2A0 8018FEA0 07004212 */  beq        $s2, $v0, .L8018FEC0
    /* 9E2A4 8018FEA4 21206002 */   addu      $a0, $s3, $zero
    /* 9E2A8 8018FEA8 B73F0608 */  j          .L8018FEDC
    /* 9E2AC 8018FEAC 00000000 */   nop
  .L8018FEB0:
    /* 9E2B0 8018FEB0 0F80023C */  lui        $v0, %hi(D_800F33D8)
    /* 9E2B4 8018FEB4 D8334294 */  lhu        $v0, %lo(D_800F33D8)($v0)
    /* 9E2B8 8018FEB8 BE3F0608 */  j          .L8018FEF8
    /* 9E2BC 8018FEBC 0800A2A6 */   sh        $v0, 0x8($s5)
  .L8018FEC0:
    /* 9E2C0 8018FEC0 0F80023C */  lui        $v0, %hi(D_800F33DC)
    /* 9E2C4 8018FEC4 DC334284 */  lh         $v0, %lo(D_800F33DC)($v0)
    /* 9E2C8 8018FEC8 0F80033C */  lui        $v1, %hi(D_800F33DE)
    /* 9E2CC 8018FECC DE336380 */  lb         $v1, %lo(D_800F33DE)($v1)
    /* 9E2D0 8018FED0 2000A2A6 */  sh         $v0, 0x20($s5)
    /* 9E2D4 8018FED4 BE3F0608 */  j          .L8018FEF8
    /* 9E2D8 8018FED8 2200A3A2 */   sb        $v1, 0x22($s5)
  .L8018FEDC:
    /* 9E2DC 8018FEDC 20000692 */  lbu        $a2, 0x20($s0)
    /* 9E2E0 8018FEE0 2240060C */  jal        func_80190088
    /* 9E2E4 8018FEE4 21000526 */   addiu     $a1, $s0, 0x21
    /* 9E2E8 8018FEE8 20000292 */  lbu        $v0, 0x20($s0)
    /* 9E2EC 8018FEEC 00000000 */  nop
    /* 9E2F0 8018FEF0 21106202 */  addu       $v0, $s3, $v0
    /* 9E2F4 8018FEF4 000040A0 */  sb         $zero, 0x0($v0)
  .L8018FEF8:
    /* 9E2F8 8018FEF8 1A80023C */  lui        $v0, %hi(D_8019B9F4)
    /* 9E2FC 8018FEFC F4B9428C */  lw         $v0, %lo(D_8019B9F4)($v0)
    /* 9E300 8018FF00 00000000 */  nop
    /* 9E304 8018FF04 02004228 */  slti       $v0, $v0, 0x2
    /* 9E308 8018FF08 12004014 */  bnez       $v0, .L8018FF54
    /* 9E30C 8018FF0C 00000000 */   nop
    /* 9E310 8018FF10 1F80053C */  lui        $a1, %hi(D_801F6B10)
    /* 9E314 8018FF14 2128B100 */  addu       $a1, $a1, $s1
    /* 9E318 8018FF18 106BA590 */  lbu        $a1, %lo(D_801F6B10)($a1)
    /* 9E31C 8018FF1C 1F80063C */  lui        $a2, %hi(D_801F6B11)
    /* 9E320 8018FF20 2130D100 */  addu       $a2, $a2, $s1
    /* 9E324 8018FF24 116BC690 */  lbu        $a2, %lo(D_801F6B11)($a2)
    /* 9E328 8018FF28 1F80073C */  lui        $a3, %hi(D_801F6B12)
    /* 9E32C 8018FF2C 2138F100 */  addu       $a3, $a3, $s1
    /* 9E330 8018FF30 126BE790 */  lbu        $a3, %lo(D_801F6B12)($a3)
    /* 9E334 8018FF34 1F80023C */  lui        $v0, %hi(D_801F6B14)
    /* 9E338 8018FF38 21105100 */  addu       $v0, $v0, $s1
    /* 9E33C 8018FF3C 146B428C */  lw         $v0, %lo(D_801F6B14)($v0)
    /* 9E340 8018FF40 0F80043C */  lui        $a0, %hi(D_800F33E0)
    /* 9E344 8018FF44 E0338424 */  addiu      $a0, $a0, %lo(D_800F33E0)
    /* 9E348 8018FF48 1400B3AF */  sw         $s3, 0x14($sp)
    /* 9E34C 8018FF4C 323C060C */  jal        func_8018F0C8
    /* 9E350 8018FF50 1000A2AF */   sw        $v0, 0x10($sp)
  .L8018FF54:
    /* 9E354 8018FF54 18007326 */  addiu      $s3, $s3, 0x18
    /* 9E358 8018FF58 18003126 */  addiu      $s1, $s1, 0x18
    /* 9E35C 8018FF5C 00000292 */  lbu        $v0, 0x0($s0)
    /* 9E360 8018FF60 01005226 */  addiu      $s2, $s2, 0x1
    /* 9E364 8018FF64 21800202 */  addu       $s0, $s0, $v0
    /* 9E368 8018FF68 4000422A */  slti       $v0, $s2, 0x40
    /* 9E36C 8018FF6C 06004010 */  beqz       $v0, .L8018FF88
    /* 9E370 8018FF70 18009426 */   addiu     $s4, $s4, 0x18
    /* 9E374 8018FF74 2080023C */  lui        $v0, %hi(D_801F8F10)
    /* 9E378 8018FF78 108F4224 */  addiu      $v0, $v0, %lo(D_801F8F10)
    /* 9E37C 8018FF7C 2B100202 */  sltu       $v0, $s0, $v0
    /* 9E380 8018FF80 B2FF4014 */  bnez       $v0, .L8018FE4C
    /* 9E384 8018FF84 00000000 */   nop
  .L8018FF88:
    /* 9E388 8018FF88 1A80013C */  lui        $at, %hi(D_8019B9D4)
    /* 9E38C 8018FF8C D4B936AC */  sw         $s6, %lo(D_8019B9D4)($at)
    /* 9E390 8018FF90 4000422A */  slti       $v0, $s2, 0x40
    /* 9E394 8018FF94 06004010 */  beqz       $v0, .L8018FFB0
    /* 9E398 8018FF98 40101200 */   sll       $v0, $s2, 1
    /* 9E39C 8018FF9C 21105200 */  addu       $v0, $v0, $s2
    /* 9E3A0 8018FFA0 C0100200 */  sll        $v0, $v0, 3
    /* 9E3A4 8018FFA4 1F80013C */  lui        $at, %hi(D_801F6B18)
    /* 9E3A8 8018FFA8 21082200 */  addu       $at, $at, $v0
    /* 9E3AC 8018FFAC 186B20A0 */  sb         $zero, %lo(D_801F6B18)($at)
  .L8018FFB0:
    /* 9E3B0 8018FFB0 1A80023C */  lui        $v0, %hi(D_8019B9F4)
    /* 9E3B4 8018FFB4 F4B9428C */  lw         $v0, %lo(D_8019B9F4)($v0)
    /* 9E3B8 8018FFB8 00000000 */  nop
    /* 9E3BC 8018FFBC 02004228 */  slti       $v0, $v0, 0x2
    /* 9E3C0 8018FFC0 06004014 */  bnez       $v0, .L8018FFDC
    /* 9E3C4 8018FFC4 01000224 */   addiu     $v0, $zero, 0x1
    /* 9E3C8 8018FFC8 0F80043C */  lui        $a0, %hi(D_800F33FC)
    /* 9E3CC 8018FFCC FC338424 */  addiu      $a0, $a0, %lo(D_800F33FC)
    /* 9E3D0 8018FFD0 323C060C */  jal        func_8018F0C8
    /* 9E3D4 8018FFD4 21284002 */   addu      $a1, $s2, $zero
  .L8018FFD8:
    /* 9E3D8 8018FFD8 01000224 */  addiu      $v0, $zero, 0x1
  .L8018FFDC:
    /* 9E3DC 8018FFDC 3C00BF8F */  lw         $ra, 0x3C($sp)
    /* 9E3E0 8018FFE0 3800B68F */  lw         $s6, 0x38($sp)
    /* 9E3E4 8018FFE4 3400B58F */  lw         $s5, 0x34($sp)
    /* 9E3E8 8018FFE8 3000B48F */  lw         $s4, 0x30($sp)
    /* 9E3EC 8018FFEC 2C00B38F */  lw         $s3, 0x2C($sp)
    /* 9E3F0 8018FFF0 2800B28F */  lw         $s2, 0x28($sp)
    /* 9E3F4 8018FFF4 2400B18F */  lw         $s1, 0x24($sp)
    /* 9E3F8 8018FFF8 2000B08F */  lw         $s0, 0x20($sp)
    /* 9E3FC 8018FFFC 0800E003 */  jr         $ra
    /* 9E400 80190000 4000BD27 */   addiu     $sp, $sp, 0x40
endlabel func_8018FD68
