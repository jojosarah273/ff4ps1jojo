nonmatching func_8011CC98, 0x180

glabel func_8011CC98
    /* 2B098 8011CC98 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 2B09C 8011CC9C 21200000 */  addu       $a0, $zero, $zero
    /* 2B0A0 8011CCA0 1400BFAF */  sw         $ra, 0x14($sp)
    /* 2B0A4 8011CCA4 40DD030C */  jal        func_800F7500
    /* 2B0A8 8011CCA8 1000B0AF */   sw        $s0, 0x10($sp)
  .L8011CCAC:
    /* 2B0AC 8011CCAC 9CDC030C */  jal        func_800F7270
    /* 2B0B0 8011CCB0 3D000424 */   addiu     $a0, $zero, 0x3D
    /* 2B0B4 8011CCB4 7F00043C */  lui        $a0, (0x7F5C71 >> 16)
    /* 2B0B8 8011CCB8 1ADB030C */  jal        func_800F6C68
    /* 2B0BC 8011CCBC 715C8434 */   ori       $a0, $a0, (0x7F5C71 & 0xFFFF)
    /* 2B0C0 8011CCC0 93E0030C */  jal        func_800F824C
    /* 2B0C4 8011CCC4 18000424 */   addiu     $a0, $zero, 0x18
    /* 2B0C8 8011CCC8 EEE3030C */  jal        func_800F8FB8
    /* 2B0CC 8011CCCC 19000424 */   addiu     $a0, $zero, 0x19
    /* 2B0D0 8011CCD0 91E5030C */  jal        func_800F9644
    /* 2B0D4 8011CCD4 20000424 */   addiu     $a0, $zero, 0x20
    /* 2B0D8 8011CCD8 0FCF030C */  jal        func_800F3C3C
    /* 2B0DC 8011CCDC 18000424 */   addiu     $a0, $zero, 0x18
    /* 2B0E0 8011CCE0 09D4030C */  jal        func_800F5024
    /* 2B0E4 8011CCE4 21204000 */   addu      $a0, $v0, $zero
    /* 2B0E8 8011CCE8 9CDC030C */  jal        func_800F7270
    /* 2B0EC 8011CCEC 18000424 */   addiu     $a0, $zero, 0x18
    /* 2B0F0 8011CCF0 7F00043C */  lui        $a0, (0x7F4800 >> 16)
    /* 2B0F4 8011CCF4 3DDB030C */  jal        func_800F6CF4
    /* 2B0F8 8011CCF8 00488434 */   ori       $a0, $a0, (0x7F4800 & 0xFFFF)
    /* 2B0FC 8011CCFC 7F00043C */  lui        $a0, (0x7F4900 >> 16)
    /* 2B100 8011CD00 00498434 */  ori        $a0, $a0, (0x7F4900 & 0xFFFF)
    /* 2B104 8011CD04 1A80033C */  lui        $v1, %hi(D_8019ED44)
    /* 2B108 8011CD08 44ED638C */  lw         $v1, %lo(D_8019ED44)($v1)
    /* 2B10C 8011CD0C 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 2B110 8011CD10 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 2B114 8011CD14 00007094 */  lhu        $s0, 0x0($v1)
    /* 2B118 8011CD18 0000A294 */  lhu        $v0, 0x0($a1)
    /* 2B11C 8011CD1C 00201032 */  andi       $s0, $s0, 0x2000
    /* 2B120 8011CD20 42100200 */  srl        $v0, $v0, 1
    /* 2B124 8011CD24 25800202 */  or         $s0, $s0, $v0
    /* 2B128 8011CD28 3DDB030C */  jal        func_800F6CF4
    /* 2B12C 8011CD2C FFFF1032 */   andi      $s0, $s0, 0xFFFF
    /* 2B130 8011CD30 1A80033C */  lui        $v1, %hi(D_8019ED44)
    /* 2B134 8011CD34 44ED638C */  lw         $v1, %lo(D_8019ED44)($v1)
    /* 2B138 8011CD38 7F00043C */  lui        $a0, (0x7F4A00 >> 16)
    /* 2B13C 8011CD3C 00006294 */  lhu        $v0, 0x0($v1)
    /* 2B140 8011CD40 004A8434 */  ori        $a0, $a0, (0x7F4A00 & 0xFFFF)
    /* 2B144 8011CD44 00204230 */  andi       $v0, $v0, 0x2000
    /* 2B148 8011CD48 42100200 */  srl        $v0, $v0, 1
    /* 2B14C 8011CD4C 25800202 */  or         $s0, $s0, $v0
    /* 2B150 8011CD50 3DDB030C */  jal        func_800F6CF4
    /* 2B154 8011CD54 FFFF1032 */   andi      $s0, $s0, 0xFFFF
    /* 2B158 8011CD58 1A80033C */  lui        $v1, %hi(D_8019ED44)
    /* 2B15C 8011CD5C 44ED638C */  lw         $v1, %lo(D_8019ED44)($v1)
    /* 2B160 8011CD60 7F00043C */  lui        $a0, (0x7F4B00 >> 16)
    /* 2B164 8011CD64 00006294 */  lhu        $v0, 0x0($v1)
    /* 2B168 8011CD68 004B8434 */  ori        $a0, $a0, (0x7F4B00 & 0xFFFF)
    /* 2B16C 8011CD6C 00204230 */  andi       $v0, $v0, 0x2000
    /* 2B170 8011CD70 82100200 */  srl        $v0, $v0, 2
    /* 2B174 8011CD74 25800202 */  or         $s0, $s0, $v0
    /* 2B178 8011CD78 3DDB030C */  jal        func_800F6CF4
    /* 2B17C 8011CD7C FFFF1032 */   andi      $s0, $s0, 0xFFFF
    /* 2B180 8011CD80 1A80033C */  lui        $v1, %hi(D_8019ED44)
    /* 2B184 8011CD84 44ED638C */  lw         $v1, %lo(D_8019ED44)($v1)
    /* 2B188 8011CD88 00000000 */  nop
    /* 2B18C 8011CD8C 00006294 */  lhu        $v0, 0x0($v1)
    /* 2B190 8011CD90 DB0A0424 */  addiu      $a0, $zero, 0xADB
    /* 2B194 8011CD94 00204230 */  andi       $v0, $v0, 0x2000
    /* 2B198 8011CD98 C2100200 */  srl        $v0, $v0, 3
    /* 2B19C 8011CD9C 25800202 */  or         $s0, $s0, $v0
    /* 2B1A0 8011CDA0 75E2030C */  jal        func_800F89D4
    /* 2B1A4 8011CDA4 000070A4 */   sh        $s0, 0x0($v1)
    /* 2B1A8 8011CDA8 75E2030C */  jal        func_800F89D4
    /* 2B1AC 8011CDAC DD0A0424 */   addiu     $a0, $zero, 0xADD
    /* 2B1B0 8011CDB0 75E2030C */  jal        func_800F89D4
    /* 2B1B4 8011CDB4 1B0B0424 */   addiu     $a0, $zero, 0xB1B
    /* 2B1B8 8011CDB8 75E2030C */  jal        func_800F89D4
    /* 2B1BC 8011CDBC 1D0B0424 */   addiu     $a0, $zero, 0xB1D
    /* 2B1C0 8011CDC0 56D9030C */  jal        func_800F6558
    /* 2B1C4 8011CDC4 21200000 */   addu      $a0, $zero, $zero
    /* 2B1C8 8011CDC8 98E5030C */  jal        func_800F9660
    /* 2B1CC 8011CDCC 20000424 */   addiu     $a0, $zero, 0x20
    /* 2B1D0 8011CDD0 1A80033C */  lui        $v1, %hi(D_8019ED58)
    /* 2B1D4 8011CDD4 58ED638C */  lw         $v1, %lo(D_8019ED58)($v1)
    /* 2B1D8 8011CDD8 00000000 */  nop
    /* 2B1DC 8011CDDC 00006294 */  lhu        $v0, 0x0($v1)
    /* 2B1E0 8011CDE0 3D000424 */  addiu      $a0, $zero, 0x3D
    /* 2B1E4 8011CDE4 04004224 */  addiu      $v0, $v0, 0x4
    /* 2B1E8 8011CDE8 AFD8030C */  jal        func_800F62BC
    /* 2B1EC 8011CDEC 000062A4 */   sh        $v0, 0x0($v1)
    /* 2B1F0 8011CDF0 A4D6030C */  jal        func_800F5A90
    /* 2B1F4 8011CDF4 40000424 */   addiu     $a0, $zero, 0x40
    /* 2B1F8 8011CDF8 F5D4030C */  jal        func_800F53D4
    /* 2B1FC 8011CDFC 00000000 */   nop
    /* 2B200 8011CE00 AAFF4010 */  beqz       $v0, .L8011CCAC
    /* 2B204 8011CE04 00000000 */   nop
    /* 2B208 8011CE08 1400BF8F */  lw         $ra, 0x14($sp)
    /* 2B20C 8011CE0C 1000B08F */  lw         $s0, 0x10($sp)
    /* 2B210 8011CE10 0800E003 */  jr         $ra
    /* 2B214 8011CE14 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8011CC98
