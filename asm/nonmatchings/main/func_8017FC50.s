nonmatching func_8017FC50, 0x398

glabel func_8017FC50
    /* 8E050 8017FC50 B8FFBD27 */  addiu      $sp, $sp, -0x48
    /* 8E054 8017FC54 00240400 */  sll        $a0, $a0, 16
    /* 8E058 8017FC58 03640400 */  sra        $t4, $a0, 16
    /* 8E05C 8017FC5C FFFF0924 */  addiu      $t1, $zero, -0x1
    /* 8E060 8017FC60 0100083C */  lui        $t0, (0x10000 >> 16)
    /* 8E064 8017FC64 2128A003 */  addu       $a1, $sp, $zero
    /* 8E068 8017FC68 01000A3C */  lui        $t2, (0x10000 >> 16)
    /* 8E06C 8017FC6C 1E80023C */  lui        $v0, %hi(D_801E09C8)
    /* 8E070 8017FC70 C8094224 */  addiu      $v0, $v0, %lo(D_801E09C8)
    /* 8E074 8017FC74 04004724 */  addiu      $a3, $v0, 0x4
    /* 8E078 8017FC78 4000BEAF */  sw         $fp, 0x40($sp)
    /* 8E07C 8017FC7C 3C00B7AF */  sw         $s7, 0x3C($sp)
    /* 8E080 8017FC80 3800B6AF */  sw         $s6, 0x38($sp)
    /* 8E084 8017FC84 3400B5AF */  sw         $s5, 0x34($sp)
    /* 8E088 8017FC88 3000B4AF */  sw         $s4, 0x30($sp)
    /* 8E08C 8017FC8C 2C00B3AF */  sw         $s3, 0x2C($sp)
    /* 8E090 8017FC90 2800B2AF */  sw         $s2, 0x28($sp)
    /* 8E094 8017FC94 2400B1AF */  sw         $s1, 0x24($sp)
    /* 8E098 8017FC98 2000B0AF */  sw         $s0, 0x20($sp)
  .L8017FC9C:
    /* 8E09C 8017FC9C 07000424 */  addiu      $a0, $zero, 0x7
    /* 8E0A0 8017FCA0 3800E224 */  addiu      $v0, $a3, 0x38
  .L8017FCA4:
    /* 8E0A4 8017FCA4 000049A4 */  sh         $t1, 0x0($v0)
    /* 8E0A8 8017FCA8 FFFF8424 */  addiu      $a0, $a0, -0x1
    /* 8E0AC 8017FCAC FDFF8104 */  bgez       $a0, .L8017FCA4
    /* 8E0B0 8017FCB0 F8FF4224 */   addiu     $v0, $v0, -0x8
    /* 8E0B4 8017FCB4 0000A0A4 */  sh         $zero, 0x0($a1)
    /* 8E0B8 8017FCB8 21180001 */  addu       $v1, $t0, $zero
    /* 8E0BC 8017FCBC 21400A01 */  addu       $t0, $t0, $t2
    /* 8E0C0 8017FCC0 0200A524 */  addiu      $a1, $a1, 0x2
    /* 8E0C4 8017FCC4 03340300 */  sra        $a2, $v1, 16
    /* 8E0C8 8017FCC8 1000C228 */  slti       $v0, $a2, 0x10
    /* 8E0CC 8017FCCC F3FF4014 */  bnez       $v0, .L8017FC9C
    /* 8E0D0 8017FCD0 4000E724 */   addiu     $a3, $a3, 0x40
    /* 8E0D4 8017FCD4 21300000 */  addu       $a2, $zero, $zero
    /* 8E0D8 8017FCD8 0E80113C */  lui        $s1, %hi(D_800E6C00)
    /* 8E0DC 8017FCDC 1E80023C */  lui        $v0, %hi(D_801E09C8)
    /* 8E0E0 8017FCE0 C8095424 */  addiu      $s4, $v0, %lo(D_801E09C8)
    /* 8E0E4 8017FCE4 04009E26 */  addiu      $fp, $s4, 0x4
    /* 8E0E8 8017FCE8 04001724 */  addiu      $s7, $zero, 0x4
    /* 8E0EC 8017FCEC 06009626 */  addiu      $s6, $s4, 0x6
    /* 8E0F0 8017FCF0 02009026 */  addiu      $s0, $s4, 0x2
    /* 8E0F4 8017FCF4 07001924 */  addiu      $t9, $zero, 0x7
    /* 8E0F8 8017FCF8 0100153C */  lui        $s5, (0x10000 >> 16)
    /* 8E0FC 8017FCFC 21984000 */  addu       $s3, $v0, $zero
  .L8017FD00:
    /* 8E100 8017FD00 2110D100 */  addu       $v0, $a2, $s1
    /* 8E104 8017FD04 006C4890 */  lbu        $t0, %lo(D_800E6C00)($v0)
    /* 8E108 8017FD08 21200000 */  addu       $a0, $zero, $zero
    /* 8E10C 8017FD0C 0100D224 */  addiu      $s2, $a2, 0x1
    /* 8E110 8017FD10 0F00C230 */  andi       $v0, $a2, 0xF
    /* 8E114 8017FD14 C0100200 */  sll        $v0, $v0, 3
    /* 8E118 8017FD18 00024A24 */  addiu      $t2, $v0, 0x200
    /* 8E11C 8017FD1C 0100073C */  lui        $a3, (0x10000 >> 16)
    /* 8E120 8017FD20 2128A003 */  addu       $a1, $sp, $zero
    /* 8E124 8017FD24 F000C930 */  andi       $t1, $a2, 0xF0
  .L8017FD28:
    /* 8E128 8017FD28 21108401 */  addu       $v0, $t4, $a0
    /* 8E12C 8017FD2C 16000215 */  bne        $t0, $v0, .L8017FD88
    /* 8E130 8017FD30 2118E000 */   addu      $v1, $a3, $zero
    /* 8E134 8017FD34 0000A384 */  lh         $v1, 0x0($a1)
    /* 8E138 8017FD38 80110400 */  sll        $v0, $a0, 6
    /* 8E13C 8017FD3C C0180300 */  sll        $v1, $v1, 3
    /* 8E140 8017FD40 21186200 */  addu       $v1, $v1, $v0
    /* 8E144 8017FD44 21207E00 */  addu       $a0, $v1, $fp
    /* 8E148 8017FD48 21107400 */  addu       $v0, $v1, $s4
    /* 8E14C 8017FD4C 000097A4 */  sh         $s7, 0x0($a0)
    /* 8E150 8017FD50 21207000 */  addu       $a0, $v1, $s0
    /* 8E154 8017FD54 00004AA4 */  sh         $t2, 0x0($v0)
    /* 8E158 8017FD58 000089A4 */  sh         $t1, 0x0($a0)
    /* 8E15C 8017FD5C 0000A294 */  lhu        $v0, 0x0($a1)
    /* 8E160 8017FD60 21187600 */  addu       $v1, $v1, $s6
    /* 8E164 8017FD64 000066A4 */  sh         $a2, 0x0($v1)
    /* 8E168 8017FD68 01004224 */  addiu      $v0, $v0, 0x1
    /* 8E16C 8017FD6C 0000A2A4 */  sh         $v0, 0x0($a1)
    /* 8E170 8017FD70 00140200 */  sll        $v0, $v0, 16
    /* 8E174 8017FD74 03140200 */  sra        $v0, $v0, 16
    /* 8E178 8017FD78 08004228 */  slti       $v0, $v0, 0x8
    /* 8E17C 8017FD7C 02004014 */  bnez       $v0, .L8017FD88
    /* 8E180 8017FD80 2118E000 */   addu      $v1, $a3, $zero
    /* 8E184 8017FD84 0000B9A4 */  sh         $t9, 0x0($a1)
  .L8017FD88:
    /* 8E188 8017FD88 2138F500 */  addu       $a3, $a3, $s5
    /* 8E18C 8017FD8C 03240300 */  sra        $a0, $v1, 16
    /* 8E190 8017FD90 04008228 */  slti       $v0, $a0, 0x4
    /* 8E194 8017FD94 E4FF4014 */  bnez       $v0, .L8017FD28
    /* 8E198 8017FD98 0200A524 */   addiu     $a1, $a1, 0x2
    /* 8E19C 8017FD9C 2110D100 */  addu       $v0, $a2, $s1
    /* 8E1A0 8017FDA0 806C4890 */  lbu        $t0, %lo(D_800E6C80)($v0)
    /* 8E1A4 8017FDA4 21200000 */  addu       $a0, $zero, $zero
    /* 8E1A8 8017FDA8 C8096926 */  addiu      $t1, $s3, %lo(D_801E09C8)
    /* 8E1AC 8017FDAC 04003825 */  addiu      $t8, $t1, 0x4
    /* 8E1B0 8017FDB0 04000F24 */  addiu      $t7, $zero, 0x4
    /* 8E1B4 8017FDB4 0F00C230 */  andi       $v0, $a2, 0xF
    /* 8E1B8 8017FDB8 C0100200 */  sll        $v0, $v0, 3
    /* 8E1BC 8017FDBC 04024B24 */  addiu      $t3, $v0, 0x204
    /* 8E1C0 8017FDC0 06002E25 */  addiu      $t6, $t1, 0x6
    /* 8E1C4 8017FDC4 0100073C */  lui        $a3, (0x10000 >> 16)
    /* 8E1C8 8017FDC8 2128A003 */  addu       $a1, $sp, $zero
    /* 8E1CC 8017FDCC F000CA30 */  andi       $t2, $a2, 0xF0
    /* 8E1D0 8017FDD0 01000D3C */  lui        $t5, (0x10000 >> 16)
  .L8017FDD4:
    /* 8E1D4 8017FDD4 21108401 */  addu       $v0, $t4, $a0
    /* 8E1D8 8017FDD8 16000215 */  bne        $t0, $v0, .L8017FE34
    /* 8E1DC 8017FDDC 2118E000 */   addu      $v1, $a3, $zero
    /* 8E1E0 8017FDE0 0000A384 */  lh         $v1, 0x0($a1)
    /* 8E1E4 8017FDE4 80110400 */  sll        $v0, $a0, 6
    /* 8E1E8 8017FDE8 C0180300 */  sll        $v1, $v1, 3
    /* 8E1EC 8017FDEC 21186200 */  addu       $v1, $v1, $v0
    /* 8E1F0 8017FDF0 21207800 */  addu       $a0, $v1, $t8
    /* 8E1F4 8017FDF4 21106900 */  addu       $v0, $v1, $t1
    /* 8E1F8 8017FDF8 00008FA4 */  sh         $t7, 0x0($a0)
    /* 8E1FC 8017FDFC 21207000 */  addu       $a0, $v1, $s0
    /* 8E200 8017FE00 00004BA4 */  sh         $t3, 0x0($v0)
    /* 8E204 8017FE04 00008AA4 */  sh         $t2, 0x0($a0)
    /* 8E208 8017FE08 0000A294 */  lhu        $v0, 0x0($a1)
    /* 8E20C 8017FE0C 21186E00 */  addu       $v1, $v1, $t6
    /* 8E210 8017FE10 000066A4 */  sh         $a2, 0x0($v1)
    /* 8E214 8017FE14 01004224 */  addiu      $v0, $v0, 0x1
    /* 8E218 8017FE18 0000A2A4 */  sh         $v0, 0x0($a1)
    /* 8E21C 8017FE1C 00140200 */  sll        $v0, $v0, 16
    /* 8E220 8017FE20 03140200 */  sra        $v0, $v0, 16
    /* 8E224 8017FE24 08004228 */  slti       $v0, $v0, 0x8
    /* 8E228 8017FE28 02004014 */  bnez       $v0, .L8017FE34
    /* 8E22C 8017FE2C 2118E000 */   addu      $v1, $a3, $zero
    /* 8E230 8017FE30 0000B9A4 */  sh         $t9, 0x0($a1)
  .L8017FE34:
    /* 8E234 8017FE34 2138ED00 */  addu       $a3, $a3, $t5
    /* 8E238 8017FE38 03240300 */  sra        $a0, $v1, 16
    /* 8E23C 8017FE3C 04008228 */  slti       $v0, $a0, 0x4
    /* 8E240 8017FE40 E4FF4014 */  bnez       $v0, .L8017FDD4
    /* 8E244 8017FE44 0200A524 */   addiu     $a1, $a1, 0x2
    /* 8E248 8017FE48 2110D100 */  addu       $v0, $a2, $s1
    /* 8E24C 8017FE4C 006D4890 */  lbu        $t0, %lo(D_800E6D00)($v0)
    /* 8E250 8017FE50 21200000 */  addu       $a0, $zero, $zero
    /* 8E254 8017FE54 C8096926 */  addiu      $t1, $s3, %lo(D_801E09C8)
    /* 8E258 8017FE58 04003825 */  addiu      $t8, $t1, 0x4
    /* 8E25C 8017FE5C 04000F24 */  addiu      $t7, $zero, 0x4
    /* 8E260 8017FE60 0F00C230 */  andi       $v0, $a2, 0xF
    /* 8E264 8017FE64 C0100200 */  sll        $v0, $v0, 3
    /* 8E268 8017FE68 00024B24 */  addiu      $t3, $v0, 0x200
    /* 8E26C 8017FE6C F000C330 */  andi       $v1, $a2, 0xF0
    /* 8E270 8017FE70 08006A24 */  addiu      $t2, $v1, 0x8
    /* 8E274 8017FE74 06002E25 */  addiu      $t6, $t1, 0x6
    /* 8E278 8017FE78 0100073C */  lui        $a3, (0x10000 >> 16)
    /* 8E27C 8017FE7C 2128A003 */  addu       $a1, $sp, $zero
    /* 8E280 8017FE80 01000D3C */  lui        $t5, (0x10000 >> 16)
  .L8017FE84:
    /* 8E284 8017FE84 21108401 */  addu       $v0, $t4, $a0
    /* 8E288 8017FE88 16000215 */  bne        $t0, $v0, .L8017FEE4
    /* 8E28C 8017FE8C 2118E000 */   addu      $v1, $a3, $zero
    /* 8E290 8017FE90 0000A384 */  lh         $v1, 0x0($a1)
    /* 8E294 8017FE94 80110400 */  sll        $v0, $a0, 6
    /* 8E298 8017FE98 C0180300 */  sll        $v1, $v1, 3
    /* 8E29C 8017FE9C 21186200 */  addu       $v1, $v1, $v0
    /* 8E2A0 8017FEA0 21207800 */  addu       $a0, $v1, $t8
    /* 8E2A4 8017FEA4 21106900 */  addu       $v0, $v1, $t1
    /* 8E2A8 8017FEA8 00008FA4 */  sh         $t7, 0x0($a0)
    /* 8E2AC 8017FEAC 21207000 */  addu       $a0, $v1, $s0
    /* 8E2B0 8017FEB0 00004BA4 */  sh         $t3, 0x0($v0)
    /* 8E2B4 8017FEB4 00008AA4 */  sh         $t2, 0x0($a0)
    /* 8E2B8 8017FEB8 0000A294 */  lhu        $v0, 0x0($a1)
    /* 8E2BC 8017FEBC 21186E00 */  addu       $v1, $v1, $t6
    /* 8E2C0 8017FEC0 000066A4 */  sh         $a2, 0x0($v1)
    /* 8E2C4 8017FEC4 01004224 */  addiu      $v0, $v0, 0x1
    /* 8E2C8 8017FEC8 0000A2A4 */  sh         $v0, 0x0($a1)
    /* 8E2CC 8017FECC 00140200 */  sll        $v0, $v0, 16
    /* 8E2D0 8017FED0 03140200 */  sra        $v0, $v0, 16
    /* 8E2D4 8017FED4 08004228 */  slti       $v0, $v0, 0x8
    /* 8E2D8 8017FED8 02004014 */  bnez       $v0, .L8017FEE4
    /* 8E2DC 8017FEDC 2118E000 */   addu      $v1, $a3, $zero
    /* 8E2E0 8017FEE0 0000B9A4 */  sh         $t9, 0x0($a1)
  .L8017FEE4:
    /* 8E2E4 8017FEE4 2138ED00 */  addu       $a3, $a3, $t5
    /* 8E2E8 8017FEE8 03240300 */  sra        $a0, $v1, 16
    /* 8E2EC 8017FEEC 04008228 */  slti       $v0, $a0, 0x4
    /* 8E2F0 8017FEF0 E4FF4014 */  bnez       $v0, .L8017FE84
    /* 8E2F4 8017FEF4 0200A524 */   addiu     $a1, $a1, 0x2
    /* 8E2F8 8017FEF8 2110D100 */  addu       $v0, $a2, $s1
    /* 8E2FC 8017FEFC 806D4890 */  lbu        $t0, %lo(D_800E6D80)($v0)
    /* 8E300 8017FF00 21200000 */  addu       $a0, $zero, $zero
    /* 8E304 8017FF04 C8096926 */  addiu      $t1, $s3, %lo(D_801E09C8)
    /* 8E308 8017FF08 04003825 */  addiu      $t8, $t1, 0x4
    /* 8E30C 8017FF0C 04000F24 */  addiu      $t7, $zero, 0x4
    /* 8E310 8017FF10 0F00C230 */  andi       $v0, $a2, 0xF
    /* 8E314 8017FF14 C0100200 */  sll        $v0, $v0, 3
    /* 8E318 8017FF18 04024B24 */  addiu      $t3, $v0, 0x204
    /* 8E31C 8017FF1C F000C330 */  andi       $v1, $a2, 0xF0
    /* 8E320 8017FF20 08006A24 */  addiu      $t2, $v1, 0x8
    /* 8E324 8017FF24 06002E25 */  addiu      $t6, $t1, 0x6
    /* 8E328 8017FF28 0100073C */  lui        $a3, (0x10000 >> 16)
    /* 8E32C 8017FF2C 2128A003 */  addu       $a1, $sp, $zero
    /* 8E330 8017FF30 01000D3C */  lui        $t5, (0x10000 >> 16)
  .L8017FF34:
    /* 8E334 8017FF34 21108401 */  addu       $v0, $t4, $a0
    /* 8E338 8017FF38 16000215 */  bne        $t0, $v0, .L8017FF94
    /* 8E33C 8017FF3C 2118E000 */   addu      $v1, $a3, $zero
    /* 8E340 8017FF40 0000A384 */  lh         $v1, 0x0($a1)
    /* 8E344 8017FF44 80110400 */  sll        $v0, $a0, 6
    /* 8E348 8017FF48 C0180300 */  sll        $v1, $v1, 3
    /* 8E34C 8017FF4C 21186200 */  addu       $v1, $v1, $v0
    /* 8E350 8017FF50 21207800 */  addu       $a0, $v1, $t8
    /* 8E354 8017FF54 21106900 */  addu       $v0, $v1, $t1
    /* 8E358 8017FF58 00008FA4 */  sh         $t7, 0x0($a0)
    /* 8E35C 8017FF5C 21207000 */  addu       $a0, $v1, $s0
    /* 8E360 8017FF60 00004BA4 */  sh         $t3, 0x0($v0)
    /* 8E364 8017FF64 00008AA4 */  sh         $t2, 0x0($a0)
    /* 8E368 8017FF68 0000A294 */  lhu        $v0, 0x0($a1)
    /* 8E36C 8017FF6C 21186E00 */  addu       $v1, $v1, $t6
    /* 8E370 8017FF70 000066A4 */  sh         $a2, 0x0($v1)
    /* 8E374 8017FF74 01004224 */  addiu      $v0, $v0, 0x1
    /* 8E378 8017FF78 0000A2A4 */  sh         $v0, 0x0($a1)
    /* 8E37C 8017FF7C 00140200 */  sll        $v0, $v0, 16
    /* 8E380 8017FF80 03140200 */  sra        $v0, $v0, 16
    /* 8E384 8017FF84 08004228 */  slti       $v0, $v0, 0x8
    /* 8E388 8017FF88 02004014 */  bnez       $v0, .L8017FF94
    /* 8E38C 8017FF8C 2118E000 */   addu      $v1, $a3, $zero
    /* 8E390 8017FF90 0000B9A4 */  sh         $t9, 0x0($a1)
  .L8017FF94:
    /* 8E394 8017FF94 2138ED00 */  addu       $a3, $a3, $t5
    /* 8E398 8017FF98 03240300 */  sra        $a0, $v1, 16
    /* 8E39C 8017FF9C 04008228 */  slti       $v0, $a0, 0x4
    /* 8E3A0 8017FFA0 E4FF4014 */  bnez       $v0, .L8017FF34
    /* 8E3A4 8017FFA4 0200A524 */   addiu     $a1, $a1, 0x2
    /* 8E3A8 8017FFA8 00141200 */  sll        $v0, $s2, 16
    /* 8E3AC 8017FFAC 03340200 */  sra        $a2, $v0, 16
    /* 8E3B0 8017FFB0 8000C328 */  slti       $v1, $a2, 0x80
    /* 8E3B4 8017FFB4 52FF6014 */  bnez       $v1, .L8017FD00
    /* 8E3B8 8017FFB8 00000000 */   nop
    /* 8E3BC 8017FFBC 4000BE8F */  lw         $fp, 0x40($sp)
    /* 8E3C0 8017FFC0 3C00B78F */  lw         $s7, 0x3C($sp)
    /* 8E3C4 8017FFC4 3800B68F */  lw         $s6, 0x38($sp)
    /* 8E3C8 8017FFC8 3400B58F */  lw         $s5, 0x34($sp)
    /* 8E3CC 8017FFCC 3000B48F */  lw         $s4, 0x30($sp)
    /* 8E3D0 8017FFD0 2C00B38F */  lw         $s3, 0x2C($sp)
    /* 8E3D4 8017FFD4 2800B28F */  lw         $s2, 0x28($sp)
    /* 8E3D8 8017FFD8 2400B18F */  lw         $s1, 0x24($sp)
    /* 8E3DC 8017FFDC 2000B08F */  lw         $s0, 0x20($sp)
    /* 8E3E0 8017FFE0 0800E003 */  jr         $ra
    /* 8E3E4 8017FFE4 4800BD27 */   addiu     $sp, $sp, 0x48
endlabel func_8017FC50
