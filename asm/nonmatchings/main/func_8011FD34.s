nonmatching func_8011FD34, 0x20C

glabel func_8011FD34
    /* 2E134 8011FD34 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 2E138 8011FD38 1000BFAF */  sw         $ra, 0x10($sp)
  .L8011FD3C:
    /* 2E13C 8011FD3C 1A80053C */  lui        $a1, %hi(D_8019ED58)
    /* 2E140 8011FD40 58EDA58C */  lw         $a1, %lo(D_8019ED58)($a1)
    /* 2E144 8011FD44 00000000 */  nop
    /* 2E148 8011FD48 0000A294 */  lhu        $v0, 0x0($a1)
    /* 2E14C 8011FD4C 0B000324 */  addiu      $v1, $zero, 0xB
    /* 2E150 8011FD50 02130200 */  srl        $v0, $v0, 12
    /* 2E154 8011FD54 06004314 */  bne        $v0, $v1, .L8011FD70
    /* 2E158 8011FD58 1A80033C */   lui       $v1, %hi(D_80199328)
    /* 2E15C 8011FD5C FFFF043C */  lui        $a0, (0xFFFF4DEF >> 16)
    /* 2E160 8011FD60 EF4D8434 */  ori        $a0, $a0, (0xFFFF4DEF & 0xFFFF)
    /* 2E164 8011FD64 0000A294 */  lhu        $v0, 0x0($a1)
    /* 2E168 8011FD68 617F0408 */  j          .L8011FD84
    /* 2E16C 8011FD6C 28936324 */   addiu     $v1, $v1, %lo(D_80199328)
  .L8011FD70:
    /* 2E170 8011FD70 FFFF043C */  lui        $a0, (0xFFFF24AF >> 16)
    /* 2E174 8011FD74 AF248434 */  ori        $a0, $a0, (0xFFFF24AF & 0xFFFF)
    /* 2E178 8011FD78 1A80033C */  lui        $v1, %hi(D_80199374)
    /* 2E17C 8011FD7C 0000A294 */  lhu        $v0, 0x0($a1)
    /* 2E180 8011FD80 74936324 */  addiu      $v1, $v1, %lo(D_80199374)
  .L8011FD84:
    /* 2E184 8011FD84 21104400 */  addu       $v0, $v0, $a0
    /* 2E188 8011FD88 21104300 */  addu       $v0, $v0, $v1
    /* 2E18C 8011FD8C 1A80043C */  lui        $a0, %hi(D_8019ED40)
    /* 2E190 8011FD90 40ED848C */  lw         $a0, %lo(D_8019ED40)($a0)
    /* 2E194 8011FD94 00004390 */  lbu        $v1, 0x0($v0)
    /* 2E198 8011FD98 00000000 */  nop
    /* 2E19C 8011FD9C 000083A0 */  sb         $v1, 0x0($a0)
    /* 2E1A0 8011FDA0 0DD9030C */  jal        func_800F6434
    /* 2E1A4 8011FDA4 02000424 */   addiu     $a0, $zero, 0x2
    /* 2E1A8 8011FDA8 16004014 */  bnez       $v0, .L8011FE04
    /* 2E1AC 8011FDAC 00000000 */   nop
    /* 2E1B0 8011FDB0 EFD8030C */  jal        func_800F63BC
    /* 2E1B4 8011FDB4 00000000 */   nop
    /* 2E1B8 8011FDB8 5DD5030C */  jal        func_800F5574
    /* 2E1BC 8011FDBC 01000424 */   addiu     $a0, $zero, 0x1
    /* 2E1C0 8011FDC0 F5D4030C */  jal        func_800F53D4
    /* 2E1C4 8011FDC4 00000000 */   nop
    /* 2E1C8 8011FDC8 16004014 */  bnez       $v0, .L8011FE24
    /* 2E1CC 8011FDCC 00000000 */   nop
    /* 2E1D0 8011FDD0 6D91040C */  jal        func_801245B4
    /* 2E1D4 8011FDD4 00000000 */   nop
    /* 2E1D8 8011FDD8 17E2030C */  jal        func_800F885C
    /* 2E1DC 8011FDDC 7E00043C */   lui       $a0, (0x7E0000 >> 16)
    /* 2E1E0 8011FDE0 52CF030C */  jal        func_800F3D48
    /* 2E1E4 8011FDE4 00000000 */   nop
    /* 2E1E8 8011FDE8 7E00043C */  lui        $a0, (0x7E0040 >> 16)
    /* 2E1EC 8011FDEC 17E2030C */  jal        func_800F885C
    /* 2E1F0 8011FDF0 40008434 */   ori       $a0, $a0, (0x7E0040 & 0xFFFF)
    /* 2E1F4 8011FDF4 1A80033C */  lui        $v1, %hi(D_8019ED54)
    /* 2E1F8 8011FDF8 54ED638C */  lw         $v1, %lo(D_8019ED54)($v1)
    /* 2E1FC 8011FDFC C67F0408 */  j          .L8011FF18
    /* 2E200 8011FE00 00000000 */   nop
  .L8011FE04:
    /* 2E204 8011FE04 68E5030C */  jal        func_800F95A0
    /* 2E208 8011FE08 00000000 */   nop
    /* 2E20C 8011FE0C 2EE5030C */  jal        func_800F94B8
    /* 2E210 8011FE10 00000000 */   nop
    /* 2E214 8011FE14 12E5030C */  jal        func_800F9448
    /* 2E218 8011FE18 00000000 */   nop
    /* 2E21C 8011FE1C CC7F0408 */  j          .L8011FF30
    /* 2E220 8011FE20 00000000 */   nop
  .L8011FE24:
    /* 2E224 8011FE24 91E5030C */  jal        func_800F9644
    /* 2E228 8011FE28 20000424 */   addiu     $a0, $zero, 0x20
    /* 2E22C 8011FE2C 1A80043C */  lui        $a0, %hi(D_8019ED58)
    /* 2E230 8011FE30 58ED848C */  lw         $a0, %lo(D_8019ED58)($a0)
    /* 2E234 8011FE34 00000000 */  nop
    /* 2E238 8011FE38 00008294 */  lhu        $v0, 0x0($a0)
    /* 2E23C 8011FE3C 0B000324 */  addiu      $v1, $zero, 0xB
    /* 2E240 8011FE40 02130200 */  srl        $v0, $v0, 12
    /* 2E244 8011FE44 10004314 */  bne        $v0, $v1, .L8011FE88
    /* 2E248 8011FE48 FFFF033C */   lui       $v1, (0xFFFF4DEF >> 16)
    /* 2E24C 8011FE4C EF4D6334 */  ori        $v1, $v1, (0xFFFF4DEF & 0xFFFF)
    /* 2E250 8011FE50 1A80063C */  lui        $a2, %hi(D_80199328)
    /* 2E254 8011FE54 2893C624 */  addiu      $a2, $a2, %lo(D_80199328)
    /* 2E258 8011FE58 00008294 */  lhu        $v0, 0x0($a0)
    /* 2E25C 8011FE5C 1A80043C */  lui        $a0, %hi(D_8019ED40)
    /* 2E260 8011FE60 40ED848C */  lw         $a0, %lo(D_8019ED40)($a0)
    /* 2E264 8011FE64 21104300 */  addu       $v0, $v0, $v1
    /* 2E268 8011FE68 21104600 */  addu       $v0, $v0, $a2
    /* 2E26C 8011FE6C 00004390 */  lbu        $v1, 0x0($v0)
    /* 2E270 8011FE70 FFFF023C */  lui        $v0, (0xFFFF4DF0 >> 16)
    /* 2E274 8011FE74 000083A0 */  sb         $v1, 0x0($a0)
    /* 2E278 8011FE78 1A80053C */  lui        $a1, %hi(D_8019ED58)
    /* 2E27C 8011FE7C 58EDA58C */  lw         $a1, %lo(D_8019ED58)($a1)
    /* 2E280 8011FE80 B07F0408 */  j          .L8011FEC0
    /* 2E284 8011FE84 F04D4234 */   ori       $v0, $v0, (0xFFFF4DF0 & 0xFFFF)
  .L8011FE88:
    /* 2E288 8011FE88 AF246334 */  ori        $v1, $v1, (0xFFFF24AF & 0xFFFF)
    /* 2E28C 8011FE8C 1A80063C */  lui        $a2, %hi(D_80199374)
    /* 2E290 8011FE90 7493C624 */  addiu      $a2, $a2, %lo(D_80199374)
    /* 2E294 8011FE94 00008294 */  lhu        $v0, 0x0($a0)
    /* 2E298 8011FE98 1A80043C */  lui        $a0, %hi(D_8019ED40)
    /* 2E29C 8011FE9C 40ED848C */  lw         $a0, %lo(D_8019ED40)($a0)
    /* 2E2A0 8011FEA0 21104300 */  addu       $v0, $v0, $v1
    /* 2E2A4 8011FEA4 21104600 */  addu       $v0, $v0, $a2
    /* 2E2A8 8011FEA8 00004390 */  lbu        $v1, 0x0($v0)
    /* 2E2AC 8011FEAC FFFF023C */  lui        $v0, (0xFFFF24B0 >> 16)
    /* 2E2B0 8011FEB0 000083A0 */  sb         $v1, 0x0($a0)
    /* 2E2B4 8011FEB4 1A80053C */  lui        $a1, %hi(D_8019ED58)
    /* 2E2B8 8011FEB8 58EDA58C */  lw         $a1, %lo(D_8019ED58)($a1)
    /* 2E2BC 8011FEBC B0244234 */  ori        $v0, $v0, (0xFFFF24B0 & 0xFFFF)
  .L8011FEC0:
    /* 2E2C0 8011FEC0 0000A394 */  lhu        $v1, 0x0($a1)
    /* 2E2C4 8011FEC4 1A80043C */  lui        $a0, %hi(D_8019ED40)
    /* 2E2C8 8011FEC8 40ED848C */  lw         $a0, %lo(D_8019ED40)($a0)
    /* 2E2CC 8011FECC 21186200 */  addu       $v1, $v1, $v0
    /* 2E2D0 8011FED0 21186600 */  addu       $v1, $v1, $a2
    /* 2E2D4 8011FED4 00006290 */  lbu        $v0, 0x0($v1)
    /* 2E2D8 8011FED8 04D5030C */  jal        func_800F5410
    /* 2E2DC 8011FEDC 010082A0 */   sb        $v0, 0x1($a0)
    /* 2E2E0 8011FEE0 0FCF030C */  jal        func_800F3C3C
    /* 2E2E4 8011FEE4 29000424 */   addiu     $a0, $zero, 0x29
    /* 2E2E8 8011FEE8 E5CF030C */  jal        func_800F3F94
    /* 2E2EC 8011FEEC 21204000 */   addu      $a0, $v0, $zero
    /* 2E2F0 8011FEF0 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 2E2F4 8011FEF4 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 2E2F8 8011FEF8 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 2E2FC 8011FEFC 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 2E300 8011FF00 00004394 */  lhu        $v1, 0x0($v0)
    /* 2E304 8011FF04 20000424 */  addiu      $a0, $zero, 0x20
    /* 2E308 8011FF08 98E5030C */  jal        func_800F9660
    /* 2E30C 8011FF0C 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 2E310 8011FF10 1A80033C */  lui        $v1, %hi(D_8019ED58)
    /* 2E314 8011FF14 58ED638C */  lw         $v1, %lo(D_8019ED58)($v1)
  .L8011FF18:
    /* 2E318 8011FF18 00000000 */  nop
    /* 2E31C 8011FF1C 00006294 */  lhu        $v0, 0x0($v1)
    /* 2E320 8011FF20 00000000 */  nop
    /* 2E324 8011FF24 02004224 */  addiu      $v0, $v0, 0x2
    /* 2E328 8011FF28 4F7F0408 */  j          .L8011FD3C
    /* 2E32C 8011FF2C 000062A4 */   sh        $v0, 0x0($v1)
  .L8011FF30:
    /* 2E330 8011FF30 1000BF8F */  lw         $ra, 0x10($sp)
    /* 2E334 8011FF34 00000000 */  nop
    /* 2E338 8011FF38 0800E003 */  jr         $ra
    /* 2E33C 8011FF3C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8011FD34
