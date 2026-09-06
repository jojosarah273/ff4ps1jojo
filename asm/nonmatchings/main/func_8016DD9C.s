nonmatching func_8016DD9C, 0x35C

glabel func_8016DD9C
    /* 7C19C 8016DD9C C8FFBD27 */  addiu      $sp, $sp, -0x38
    /* 7C1A0 8016DDA0 21200000 */  addu       $a0, $zero, $zero
    /* 7C1A4 8016DDA4 3000BFAF */  sw         $ra, 0x30($sp)
    /* 7C1A8 8016DDA8 2C00B7AF */  sw         $s7, 0x2C($sp)
    /* 7C1AC 8016DDAC 2800B6AF */  sw         $s6, 0x28($sp)
    /* 7C1B0 8016DDB0 2400B5AF */  sw         $s5, 0x24($sp)
    /* 7C1B4 8016DDB4 2000B4AF */  sw         $s4, 0x20($sp)
    /* 7C1B8 8016DDB8 1C00B3AF */  sw         $s3, 0x1C($sp)
    /* 7C1BC 8016DDBC 1800B2AF */  sw         $s2, 0x18($sp)
    /* 7C1C0 8016DDC0 1400B1AF */  sw         $s1, 0x14($sp)
    /* 7C1C4 8016DDC4 0FCF030C */  jal        func_800F3C3C
    /* 7C1C8 8016DDC8 1000B0AF */   sw        $s0, 0x10($sp)
    /* 7C1CC 8016DDCC 00200424 */  addiu      $a0, $zero, 0x2000
    /* 7C1D0 8016DDD0 C1CE030C */  jal        func_800F3B04
    /* 7C1D4 8016DDD4 21904000 */   addu      $s2, $v0, $zero
    /* 7C1D8 8016DDD8 1300043C */  lui        $a0, (0x138000 >> 16)
    /* 7C1DC 8016DDDC 00808434 */  ori        $a0, $a0, (0x138000 & 0xFFFF)
    /* 7C1E0 8016DDE0 21A04000 */  addu       $s4, $v0, $zero
    /* 7C1E4 8016DDE4 E7CE030C */  jal        func_800F3B9C
    /* 7C1E8 8016DDE8 21280000 */   addu      $a1, $zero, $zero
    /* 7C1EC 8016DDEC 21B84000 */  addu       $s7, $v0, $zero
    /* 7C1F0 8016DDF0 21B00000 */  addu       $s6, $zero, $zero
    /* 7C1F4 8016DDF4 21A80000 */  addu       $s5, $zero, $zero
    /* 7C1F8 8016DDF8 2110B402 */  addu       $v0, $s5, $s4
  .L8016DDFC:
    /* 7C1FC 8016DDFC 03034390 */  lbu        $v1, 0x303($v0)
    /* 7C200 8016DE00 00000000 */  nop
    /* 7C204 8016DE04 0C006014 */  bnez       $v1, .L8016DE38
    /* 7C208 8016DE08 21984000 */   addu      $s3, $v0, $zero
    /* 7C20C 8016DE0C 83086292 */  lbu        $v0, 0x883($s3)
    /* 7C210 8016DE10 00000000 */  nop
    /* 7C214 8016DE14 FFFF4224 */  addiu      $v0, $v0, -0x1
    /* 7C218 8016DE18 830862A2 */  sb         $v0, 0x883($s3)
    /* 7C21C 8016DE1C FF004230 */  andi       $v0, $v0, 0xFF
    /* 7C220 8016DE20 96004014 */  bnez       $v0, .L8016E07C
    /* 7C224 8016DE24 0200C226 */   addiu     $v0, $s6, 0x2
    /* 7C228 8016DE28 01006224 */  addiu      $v0, $v1, 0x1
    /* 7C22C 8016DE2C 030362A2 */  sb         $v0, 0x303($s3)
    /* 7C230 8016DE30 97B70508 */  j          .L8016DE5C
    /* 7C234 8016DE34 2188D402 */   addu      $s1, $s6, $s4
  .L8016DE38:
    /* 7C238 8016DE38 2110D402 */  addu       $v0, $s6, $s4
    /* 7C23C 8016DE3C 21884000 */  addu       $s1, $v0, $zero
    /* 7C240 8016DE40 040A4390 */  lbu        $v1, 0xA04($v0)
    /* 7C244 8016DE44 030A4590 */  lbu        $a1, 0xA03($v0)
    /* 7C248 8016DE48 001A0300 */  sll        $v1, $v1, 8
    /* 7C24C 8016DE4C 2528A300 */  or         $a1, $a1, $v1
    /* 7C250 8016DE50 4001A22C */  sltiu      $v0, $a1, 0x140
    /* 7C254 8016DE54 27004014 */  bnez       $v0, .L8016DEF4
    /* 7C258 8016DE58 00000000 */   nop
  .L8016DE5C:
    /* 7C25C 8016DE5C CEB6050C */  jal        func_8016DB38
    /* 7C260 8016DE60 00000000 */   nop
    /* 7C264 8016DE64 1A80023C */  lui        $v0, %hi(D_8019ED40)
    /* 7C268 8016DE68 40ED428C */  lw         $v0, %lo(D_8019ED40)($v0)
    /* 7C26C 8016DE6C 00000000 */  nop
    /* 7C270 8016DE70 00004690 */  lbu        $a2, 0x0($v0)
    /* 7C274 8016DE74 00000000 */  nop
    /* 7C278 8016DE78 40280600 */  sll        $a1, $a2, 1
    /* 7C27C 8016DE7C 0300C330 */  andi       $v1, $a2, 0x3
    /* 7C280 8016DE80 02120500 */  srl        $v0, $a1, 8
    /* 7C284 8016DE84 000046A2 */  sb         $a2, 0x0($s2)
    /* 7C288 8016DE88 830663A2 */  sb         $v1, 0x683($s3)
    /* 7C28C 8016DE8C 010040A2 */  sb         $zero, 0x1($s2)
    /* 7C290 8016DE90 830725A2 */  sb         $a1, 0x783($s1)
    /* 7C294 8016DE94 40280300 */  sll        $a1, $v1, 1
    /* 7C298 8016DE98 840722A2 */  sb         $v0, 0x784($s1)
    /* 7C29C 8016DE9C 3F00C230 */  andi       $v0, $a2, 0x3F
    /* 7C2A0 8016DEA0 0F00C330 */  andi       $v1, $a2, 0xF
    /* 7C2A4 8016DEA4 030926A2 */  sb         $a2, 0x903($s1)
    /* 7C2A8 8016DEA8 040920A2 */  sb         $zero, 0x904($s1)
    /* 7C2AC 8016DEAC 020042A2 */  sb         $v0, 0x2($s2)
    /* 7C2B0 8016DEB0 21104300 */  addu       $v0, $v0, $v1
    /* 7C2B4 8016DEB4 030040A2 */  sb         $zero, 0x3($s2)
    /* 7C2B8 8016DEB8 030A22A2 */  sb         $v0, 0xA03($s1)
    /* 7C2BC 8016DEBC 01000224 */  addiu      $v0, $zero, 0x1
    /* 7C2C0 8016DEC0 2120B700 */  addu       $a0, $a1, $s7
    /* 7C2C4 8016DEC4 040A20A2 */  sb         $zero, 0xA04($s1)
    /* 7C2C8 8016DEC8 030B22A2 */  sb         $v0, 0xB03($s1)
    /* 7C2CC 8016DECC 040B20A2 */  sb         $zero, 0xB04($s1)
    /* 7C2D0 8016DED0 796C8290 */  lbu        $v0, 0x6C79($a0)
    /* 7C2D4 8016DED4 00000000 */  nop
    /* 7C2D8 8016DED8 830522A2 */  sb         $v0, 0x583($s1)
    /* 7C2DC 8016DEDC 7A6C8390 */  lbu        $v1, 0x6C7A($a0)
    /* 7C2E0 8016DEE0 00000000 */  nop
    /* 7C2E4 8016DEE4 840523A2 */  sb         $v1, 0x584($s1)
    /* 7C2E8 8016DEE8 7B6C8290 */  lbu        $v0, 0x6C7B($a0)
    /* 7C2EC 8016DEEC 00000000 */  nop
    /* 7C2F0 8016DEF0 850522A2 */  sb         $v0, 0x585($s1)
  .L8016DEF4:
    /* 7C2F4 8016DEF4 030A2692 */  lbu        $a2, 0xA03($s1)
    /* 7C2F8 8016DEF8 00000000 */  nop
    /* 7C2FC 8016DEFC 000046A2 */  sb         $a2, 0x0($s2)
    /* 7C300 8016DF00 0E0046A2 */  sb         $a2, 0xE($s2)
    /* 7C304 8016DF04 040A2692 */  lbu        $a2, 0xA04($s1)
    /* 7C308 8016DF08 00000000 */  nop
    /* 7C30C 8016DF0C 010046A2 */  sb         $a2, 0x1($s2)
    /* 7C310 8016DF10 0F0046A2 */  sb         $a2, 0xF($s2)
    /* 7C314 8016DF14 84072292 */  lbu        $v0, 0x784($s1)
    /* 7C318 8016DF18 83073092 */  lbu        $s0, 0x783($s1)
    /* 7C31C 8016DF1C 00120200 */  sll        $v0, $v0, 8
    /* 7C320 8016DF20 25800202 */  or         $s0, $s0, $v0
    /* 7C324 8016DF24 02121000 */  srl        $v0, $s0, 8
    /* 7C328 8016DF28 020050A2 */  sb         $s0, 0x2($s2)
    /* 7C32C 8016DF2C 030042A2 */  sb         $v0, 0x3($s2)
    /* 7C330 8016DF30 1A80033C */  lui        $v1, %hi(D_8019ED44)
    /* 7C334 8016DF34 44ED638C */  lw         $v1, %lo(D_8019ED44)($v1)
    /* 7C338 8016DF38 E5B6050C */  jal        func_8016DB94
    /* 7C33C 8016DF3C 000070A4 */   sh        $s0, 0x0($v1)
    /* 7C340 8016DF40 15004292 */  lbu        $v0, 0x15($s2)
    /* 7C344 8016DF44 14004592 */  lbu        $a1, 0x14($s2)
    /* 7C348 8016DF48 00120200 */  sll        $v0, $v0, 8
    /* 7C34C 8016DF4C 2528A200 */  or         $a1, $a1, $v0
    /* 7C350 8016DF50 7000A324 */  addiu      $v1, $a1, 0x70
    /* 7C354 8016DF54 FFFF6530 */  andi       $a1, $v1, 0xFFFF
    /* 7C358 8016DF58 02120500 */  srl        $v0, $a1, 8
    /* 7C35C 8016DF5C 830425A2 */  sb         $a1, 0x483($s1)
    /* 7C360 8016DF60 840422A2 */  sb         $v0, 0x484($s1)
    /* 7C364 8016DF64 00004392 */  lbu        $v1, 0x0($s2)
    /* 7C368 8016DF68 01004292 */  lbu        $v0, 0x1($s2)
    /* 7C36C 8016DF6C 0E0043A2 */  sb         $v1, 0xE($s2)
    /* 7C370 8016DF70 0F0042A2 */  sb         $v0, 0xF($s2)
    /* 7C374 8016DF74 1A80033C */  lui        $v1, %hi(D_8019ED44)
    /* 7C378 8016DF78 44ED638C */  lw         $v1, %lo(D_8019ED44)($v1)
    /* 7C37C 8016DF7C 80000226 */  addiu      $v0, $s0, 0x80
    /* 7C380 8016DF80 E5B6050C */  jal        func_8016DB94
    /* 7C384 8016DF84 000062A4 */   sh        $v0, 0x0($v1)
    /* 7C388 8016DF88 14004592 */  lbu        $a1, 0x14($s2)
    /* 7C38C 8016DF8C 15004292 */  lbu        $v0, 0x15($s2)
    /* 7C390 8016DF90 83053092 */  lbu        $s0, 0x583($s1)
    /* 7C394 8016DF94 00120200 */  sll        $v0, $v0, 8
    /* 7C398 8016DF98 2528A200 */  or         $a1, $a1, $v0
    /* 7C39C 8016DF9C 8000A324 */  addiu      $v1, $a1, 0x80
    /* 7C3A0 8016DFA0 84052292 */  lbu        $v0, 0x584($s1)
    /* 7C3A4 8016DFA4 FFFF6530 */  andi       $a1, $v1, 0xFFFF
    /* 7C3A8 8016DFA8 830325A2 */  sb         $a1, 0x383($s1)
    /* 7C3AC 8016DFAC 00120200 */  sll        $v0, $v0, 8
    /* 7C3B0 8016DFB0 25800202 */  or         $s0, $s0, $v0
    /* 7C3B4 8016DFB4 02120500 */  srl        $v0, $a1, 8
    /* 7C3B8 8016DFB8 021A1000 */  srl        $v1, $s0, 8
    /* 7C3BC 8016DFBC 840322A2 */  sb         $v0, 0x384($s1)
    /* 7C3C0 8016DFC0 980050A2 */  sb         $s0, 0x98($s2)
    /* 7C3C4 8016DFC4 990043A2 */  sb         $v1, 0x99($s2)
    /* 7C3C8 8016DFC8 04092292 */  lbu        $v0, 0x904($s1)
    /* 7C3CC 8016DFCC 03092592 */  lbu        $a1, 0x903($s1)
    /* 7C3D0 8016DFD0 00120200 */  sll        $v0, $v0, 8
    /* 7C3D4 8016DFD4 2528A200 */  or         $a1, $a1, $v0
    /* 7C3D8 8016DFD8 2118B000 */  addu       $v1, $a1, $s0
    /* 7C3DC 8016DFDC FFFF6530 */  andi       $a1, $v1, 0xFFFF
    /* 7C3E0 8016DFE0 02220500 */  srl        $a0, $a1, 8
    /* 7C3E4 8016DFE4 0100023C */  lui        $v0, (0x10000 >> 16)
    /* 7C3E8 8016DFE8 24186200 */  and        $v1, $v1, $v0
    /* 7C3EC 8016DFEC 2B180300 */  sltu       $v1, $zero, $v1
    /* 7C3F0 8016DFF0 030925A2 */  sb         $a1, 0x903($s1)
    /* 7C3F4 8016DFF4 030B2592 */  lbu        $a1, 0xB03($s1)
    /* 7C3F8 8016DFF8 040B2292 */  lbu        $v0, 0xB04($s1)
    /* 7C3FC 8016DFFC 40300300 */  sll        $a2, $v1, 1
    /* 7C400 8016E000 040924A2 */  sb         $a0, 0x904($s1)
    /* 7C404 8016E004 00120200 */  sll        $v0, $v0, 8
    /* 7C408 8016E008 2528A200 */  or         $a1, $a1, $v0
    /* 7C40C 8016E00C 2118A600 */  addu       $v1, $a1, $a2
    /* 7C410 8016E010 FFFF6530 */  andi       $a1, $v1, 0xFFFF
    /* 7C414 8016E014 FF00A630 */  andi       $a2, $a1, 0xFF
    /* 7C418 8016E018 2180C000 */  addu       $s0, $a2, $zero
    /* 7C41C 8016E01C 030B26A2 */  sb         $a2, 0xB03($s1)
    /* 7C420 8016E020 020046A2 */  sb         $a2, 0x2($s2)
    /* 7C424 8016E024 02320500 */  srl        $a2, $a1, 8
    /* 7C428 8016E028 00120600 */  sll        $v0, $a2, 8
    /* 7C42C 8016E02C 25100202 */  or         $v0, $s0, $v0
    /* 7C430 8016E030 040B26A2 */  sb         $a2, 0xB04($s1)
    /* 7C434 8016E034 00004592 */  lbu        $a1, 0x0($s2)
    /* 7C438 8016E038 01004392 */  lbu        $v1, 0x1($s2)
    /* 7C43C 8016E03C FFFF5030 */  andi       $s0, $v0, 0xFFFF
    /* 7C440 8016E040 030046A2 */  sb         $a2, 0x3($s2)
    /* 7C444 8016E044 001A0300 */  sll        $v1, $v1, 8
    /* 7C448 8016E048 2528A300 */  or         $a1, $a1, $v1
    /* 7C44C 8016E04C 2110B000 */  addu       $v0, $a1, $s0
    /* 7C450 8016E050 FFFF4530 */  andi       $a1, $v0, 0xFFFF
    /* 7C454 8016E054 02120500 */  srl        $v0, $a1, 8
    /* 7C458 8016E058 030A25A2 */  sb         $a1, 0xA03($s1)
    /* 7C45C 8016E05C 02290500 */  srl        $a1, $a1, 4
    /* 7C460 8016E060 040A22A2 */  sb         $v0, 0xA04($s1)
    /* 7C464 8016E064 02120500 */  srl        $v0, $a1, 8
    /* 7C468 8016E068 0F00A330 */  andi       $v1, $a1, 0xF
    /* 7C46C 8016E06C 000045A2 */  sb         $a1, 0x0($s2)
    /* 7C470 8016E070 010042A2 */  sb         $v0, 0x1($s2)
    /* 7C474 8016E074 030763A2 */  sb         $v1, 0x703($s3)
    /* 7C478 8016E078 0200C226 */  addiu      $v0, $s6, 0x2
  .L8016E07C:
    /* 7C47C 8016E07C FFFF5630 */  andi       $s6, $v0, 0xFFFF
    /* 7C480 8016E080 0100A326 */  addiu      $v1, $s5, 0x1
    /* 7C484 8016E084 FFFF7530 */  andi       $s5, $v1, 0xFFFF
    /* 7C488 8016E088 97004292 */  lbu        $v0, 0x97($s2)
    /* 7C48C 8016E08C 96005092 */  lbu        $s0, 0x96($s2)
    /* 7C490 8016E090 00120200 */  sll        $v0, $v0, 8
    /* 7C494 8016E094 25800202 */  or         $s0, $s0, $v0
    /* 7C498 8016E098 0900B012 */  beq        $s5, $s0, .L8016E0C0
    /* 7C49C 8016E09C 1B000224 */   addiu     $v0, $zero, 0x1B
    /* 7C4A0 8016E0A0 0300A212 */  beq        $s5, $v0, .L8016E0B0
    /* 7C4A4 8016E0A4 35000224 */   addiu     $v0, $zero, 0x35
    /* 7C4A8 8016E0A8 54FFA216 */  bne        $s5, $v0, .L8016DDFC
    /* 7C4AC 8016E0AC 2110B402 */   addu      $v0, $s5, $s4
  .L8016E0B0:
    /* 7C4B0 8016E0B0 6BDF050C */  jal        func_80177DAC
    /* 7C4B4 8016E0B4 00000000 */   nop
    /* 7C4B8 8016E0B8 7FB70508 */  j          .L8016DDFC
    /* 7C4BC 8016E0BC 2110B402 */   addu      $v0, $s5, $s4
  .L8016E0C0:
    /* 7C4C0 8016E0C0 95004292 */  lbu        $v0, 0x95($s2)
    /* 7C4C4 8016E0C4 3000BF8F */  lw         $ra, 0x30($sp)
    /* 7C4C8 8016E0C8 2C00B78F */  lw         $s7, 0x2C($sp)
    /* 7C4CC 8016E0CC 2800B68F */  lw         $s6, 0x28($sp)
    /* 7C4D0 8016E0D0 2400B58F */  lw         $s5, 0x24($sp)
    /* 7C4D4 8016E0D4 2000B48F */  lw         $s4, 0x20($sp)
    /* 7C4D8 8016E0D8 1C00B38F */  lw         $s3, 0x1C($sp)
    /* 7C4DC 8016E0DC 1400B18F */  lw         $s1, 0x14($sp)
    /* 7C4E0 8016E0E0 1000B08F */  lw         $s0, 0x10($sp)
    /* 7C4E4 8016E0E4 01004224 */  addiu      $v0, $v0, 0x1
    /* 7C4E8 8016E0E8 950042A2 */  sb         $v0, 0x95($s2)
    /* 7C4EC 8016E0EC 1800B28F */  lw         $s2, 0x18($sp)
    /* 7C4F0 8016E0F0 0800E003 */  jr         $ra
    /* 7C4F4 8016E0F4 3800BD27 */   addiu     $sp, $sp, 0x38
endlabel func_8016DD9C
