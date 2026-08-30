nonmatching func_8013DE38, 0x3C8

glabel func_8013DE38
    /* 4C238 8013DE38 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 4C23C 8013DE3C 1000BFAF */  sw         $ra, 0x10($sp)
    /* 4C240 8013DE40 CCE4030C */  jal        func_800F9330
    /* 4C244 8013DE44 00000000 */   nop
    /* 4C248 8013DE48 59D9030C */  jal        func_800F6564
    /* 4C24C 8013DE4C C06C0424 */   addiu     $a0, $zero, 0x6CC0
    /* 4C250 8013DE50 0DD9030C */  jal        func_800F6434
    /* 4C254 8013DE54 02000424 */   addiu     $a0, $zero, 0x2
    /* 4C258 8013DE58 59004014 */  bnez       $v0, .L8013DFC0
    /* 4C25C 8013DE5C 00000000 */   nop
    /* 4C260 8013DE60 8CD9030C */  jal        func_800F6630
    /* 4C264 8013DE64 01000424 */   addiu     $a0, $zero, 0x1
    /* 4C268 8013DE68 04D5030C */  jal        func_800F5410
    /* 4C26C 8013DE6C 00000000 */   nop
    /* 4C270 8013DE70 02D0030C */  jal        func_800F4008
    /* 4C274 8013DE74 0F000424 */   addiu     $a0, $zero, 0xF
    /* 4C278 8013DE78 1A80033C */  lui        $v1, %hi(D_8019ED68)
    /* 4C27C 8013DE7C 68ED638C */  lw         $v1, %lo(D_8019ED68)($v1)
    /* 4C280 8013DE80 00000000 */  nop
    /* 4C284 8013DE84 00006290 */  lbu        $v0, 0x0($v1)
    /* 4C288 8013DE88 00000000 */  nop
    /* 4C28C 8013DE8C FD004230 */  andi       $v0, $v0, 0xFD
    /* 4C290 8013DE90 000062A0 */  sb         $v0, 0x0($v1)
    /* 4C294 8013DE94 1A80043C */  lui        $a0, %hi(D_8019ED50)
    /* 4C298 8013DE98 50ED848C */  lw         $a0, %lo(D_8019ED50)($a0)
    /* 4C29C 8013DE9C 1A80053C */  lui        $a1, %hi(D_8019ED68)
    /* 4C2A0 8013DEA0 68EDA58C */  lw         $a1, %lo(D_8019ED68)($a1)
    /* 4C2A4 8013DEA4 00008290 */  lbu        $v0, 0x0($a0)
    /* 4C2A8 8013DEA8 0000A390 */  lbu        $v1, 0x0($a1)
    /* 4C2AC 8013DEAC 02004014 */  bnez       $v0, .L8013DEB8
    /* 4C2B0 8013DEB0 00000000 */   nop
    /* 4C2B4 8013DEB4 02006334 */  ori        $v1, $v1, 0x2
  .L8013DEB8:
    /* 4C2B8 8013DEB8 FFD4030C */  jal        func_800F53FC
    /* 4C2BC 8013DEBC 0000A3A0 */   sb        $v1, 0x0($a1)
    /* 4C2C0 8013DEC0 1D004010 */  beqz       $v0, .L8013DF38
    /* 4C2C4 8013DEC4 00000000 */   nop
    /* 4C2C8 8013DEC8 04D5030C */  jal        func_800F5410
    /* 4C2CC 8013DECC 00000000 */   nop
    /* 4C2D0 8013DED0 0FCF030C */  jal        func_800F3C3C
    /* 4C2D4 8013DED4 21200000 */   addu      $a0, $zero, $zero
    /* 4C2D8 8013DED8 CECF030C */  jal        func_800F3F38
    /* 4C2DC 8013DEDC 21204000 */   addu      $a0, $v0, $zero
    /* 4C2E0 8013DEE0 1A80033C */  lui        $v1, %hi(D_8019ED68)
    /* 4C2E4 8013DEE4 68ED638C */  lw         $v1, %lo(D_8019ED68)($v1)
    /* 4C2E8 8013DEE8 00000000 */  nop
    /* 4C2EC 8013DEEC 00006290 */  lbu        $v0, 0x0($v1)
    /* 4C2F0 8013DEF0 00000000 */  nop
    /* 4C2F4 8013DEF4 FD004230 */  andi       $v0, $v0, 0xFD
    /* 4C2F8 8013DEF8 000062A0 */  sb         $v0, 0x0($v1)
    /* 4C2FC 8013DEFC 1A80043C */  lui        $a0, %hi(D_8019ED50)
    /* 4C300 8013DF00 50ED848C */  lw         $a0, %lo(D_8019ED50)($a0)
    /* 4C304 8013DF04 1A80053C */  lui        $a1, %hi(D_8019ED68)
    /* 4C308 8013DF08 68EDA58C */  lw         $a1, %lo(D_8019ED68)($a1)
    /* 4C30C 8013DF0C 00008290 */  lbu        $v0, 0x0($a0)
    /* 4C310 8013DF10 0000A390 */  lbu        $v1, 0x0($a1)
    /* 4C314 8013DF14 02004014 */  bnez       $v0, .L8013DF20
    /* 4C318 8013DF18 00000000 */   nop
    /* 4C31C 8013DF1C 02006334 */  ori        $v1, $v1, 0x2
  .L8013DF20:
    /* 4C320 8013DF20 F0D4030C */  jal        func_800F53C0
    /* 4C324 8013DF24 0000A3A0 */   sb        $v1, 0x0($a1)
    /* 4C328 8013DF28 61004010 */  beqz       $v0, .L8013E0B0
    /* 4C32C 8013DF2C 00000000 */   nop
    /* 4C330 8013DF30 E8F70408 */  j          .L8013DFA0
    /* 4C334 8013DF34 00000000 */   nop
  .L8013DF38:
    /* 4C338 8013DF38 04D5030C */  jal        func_800F5410
    /* 4C33C 8013DF3C 00000000 */   nop
    /* 4C340 8013DF40 0FCF030C */  jal        func_800F3C3C
    /* 4C344 8013DF44 21200000 */   addu      $a0, $zero, $zero
    /* 4C348 8013DF48 CECF030C */  jal        func_800F3F38
    /* 4C34C 8013DF4C 21204000 */   addu      $a0, $v0, $zero
    /* 4C350 8013DF50 1A80033C */  lui        $v1, %hi(D_8019ED68)
    /* 4C354 8013DF54 68ED638C */  lw         $v1, %lo(D_8019ED68)($v1)
    /* 4C358 8013DF58 00000000 */  nop
    /* 4C35C 8013DF5C 00006290 */  lbu        $v0, 0x0($v1)
    /* 4C360 8013DF60 00000000 */  nop
    /* 4C364 8013DF64 FD004230 */  andi       $v0, $v0, 0xFD
    /* 4C368 8013DF68 000062A0 */  sb         $v0, 0x0($v1)
    /* 4C36C 8013DF6C 1A80043C */  lui        $a0, %hi(D_8019ED50)
    /* 4C370 8013DF70 50ED848C */  lw         $a0, %lo(D_8019ED50)($a0)
    /* 4C374 8013DF74 1A80053C */  lui        $a1, %hi(D_8019ED68)
    /* 4C378 8013DF78 68EDA58C */  lw         $a1, %lo(D_8019ED68)($a1)
    /* 4C37C 8013DF7C 00008290 */  lbu        $v0, 0x0($a0)
    /* 4C380 8013DF80 0000A390 */  lbu        $v1, 0x0($a1)
    /* 4C384 8013DF84 02004014 */  bnez       $v0, .L8013DF90
    /* 4C388 8013DF88 00000000 */   nop
    /* 4C38C 8013DF8C 02006334 */  ori        $v1, $v1, 0x2
  .L8013DF90:
    /* 4C390 8013DF90 F0D4030C */  jal        func_800F53C0
    /* 4C394 8013DF94 0000A3A0 */   sb        $v1, 0x0($a1)
    /* 4C398 8013DF98 45004014 */  bnez       $v0, .L8013E0B0
    /* 4C39C 8013DF9C 00000000 */   nop
  .L8013DFA0:
    /* 4C3A0 8013DFA0 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 4C3A4 8013DFA4 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 4C3A8 8013DFA8 00000000 */  nop
    /* 4C3AC 8013DFAC 00006290 */  lbu        $v0, 0x0($v1)
    /* 4C3B0 8013DFB0 00000000 */  nop
    /* 4C3B4 8013DFB4 27100200 */  nor        $v0, $zero, $v0
    /* 4C3B8 8013DFB8 34F80408 */  j          .L8013E0D0
    /* 4C3BC 8013DFBC 000062A0 */   sb        $v0, 0x0($v1)
  .L8013DFC0:
    /* 4C3C0 8013DFC0 8CD9030C */  jal        func_800F6630
    /* 4C3C4 8013DFC4 01000424 */   addiu     $a0, $zero, 0x1
    /* 4C3C8 8013DFC8 0DD9030C */  jal        func_800F6434
    /* 4C3CC 8013DFCC 80800434 */   ori       $a0, $zero, 0x8080
    /* 4C3D0 8013DFD0 1D004014 */  bnez       $v0, .L8013E048
    /* 4C3D4 8013DFD4 00000000 */   nop
    /* 4C3D8 8013DFD8 04D5030C */  jal        func_800F5410
    /* 4C3DC 8013DFDC 00000000 */   nop
    /* 4C3E0 8013DFE0 0FCF030C */  jal        func_800F3C3C
    /* 4C3E4 8013DFE4 21200000 */   addu      $a0, $zero, $zero
    /* 4C3E8 8013DFE8 CECF030C */  jal        func_800F3F38
    /* 4C3EC 8013DFEC 21204000 */   addu      $a0, $v0, $zero
    /* 4C3F0 8013DFF0 1A80033C */  lui        $v1, %hi(D_8019ED68)
    /* 4C3F4 8013DFF4 68ED638C */  lw         $v1, %lo(D_8019ED68)($v1)
    /* 4C3F8 8013DFF8 00000000 */  nop
    /* 4C3FC 8013DFFC 00006290 */  lbu        $v0, 0x0($v1)
    /* 4C400 8013E000 00000000 */  nop
    /* 4C404 8013E004 FD004230 */  andi       $v0, $v0, 0xFD
    /* 4C408 8013E008 000062A0 */  sb         $v0, 0x0($v1)
    /* 4C40C 8013E00C 1A80043C */  lui        $a0, %hi(D_8019ED50)
    /* 4C410 8013E010 50ED848C */  lw         $a0, %lo(D_8019ED50)($a0)
    /* 4C414 8013E014 1A80053C */  lui        $a1, %hi(D_8019ED68)
    /* 4C418 8013E018 68EDA58C */  lw         $a1, %lo(D_8019ED68)($a1)
    /* 4C41C 8013E01C 00008290 */  lbu        $v0, 0x0($a0)
    /* 4C420 8013E020 0000A390 */  lbu        $v1, 0x0($a1)
    /* 4C424 8013E024 02004014 */  bnez       $v0, .L8013E030
    /* 4C428 8013E028 00000000 */   nop
    /* 4C42C 8013E02C 02006334 */  ori        $v1, $v1, 0x2
  .L8013E030:
    /* 4C430 8013E030 F0D4030C */  jal        func_800F53C0
    /* 4C434 8013E034 0000A3A0 */   sb        $v1, 0x0($a1)
    /* 4C438 8013E038 1D004010 */  beqz       $v0, .L8013E0B0
    /* 4C43C 8013E03C 00000000 */   nop
    /* 4C440 8013E040 34F80408 */  j          .L8013E0D0
    /* 4C444 8013E044 00000000 */   nop
  .L8013E048:
    /* 4C448 8013E048 04D5030C */  jal        func_800F5410
    /* 4C44C 8013E04C 00000000 */   nop
    /* 4C450 8013E050 0FCF030C */  jal        func_800F3C3C
    /* 4C454 8013E054 21200000 */   addu      $a0, $zero, $zero
    /* 4C458 8013E058 CECF030C */  jal        func_800F3F38
    /* 4C45C 8013E05C 21204000 */   addu      $a0, $v0, $zero
    /* 4C460 8013E060 1A80033C */  lui        $v1, %hi(D_8019ED68)
    /* 4C464 8013E064 68ED638C */  lw         $v1, %lo(D_8019ED68)($v1)
    /* 4C468 8013E068 00000000 */  nop
    /* 4C46C 8013E06C 00006290 */  lbu        $v0, 0x0($v1)
    /* 4C470 8013E070 00000000 */  nop
    /* 4C474 8013E074 FD004230 */  andi       $v0, $v0, 0xFD
    /* 4C478 8013E078 000062A0 */  sb         $v0, 0x0($v1)
    /* 4C47C 8013E07C 1A80043C */  lui        $a0, %hi(D_8019ED50)
    /* 4C480 8013E080 50ED848C */  lw         $a0, %lo(D_8019ED50)($a0)
    /* 4C484 8013E084 1A80053C */  lui        $a1, %hi(D_8019ED68)
    /* 4C488 8013E088 68EDA58C */  lw         $a1, %lo(D_8019ED68)($a1)
    /* 4C48C 8013E08C 00008290 */  lbu        $v0, 0x0($a0)
    /* 4C490 8013E090 0000A390 */  lbu        $v1, 0x0($a1)
    /* 4C494 8013E094 02004014 */  bnez       $v0, .L8013E0A0
    /* 4C498 8013E098 00000000 */   nop
    /* 4C49C 8013E09C 02006334 */  ori        $v1, $v1, 0x2
  .L8013E0A0:
    /* 4C4A0 8013E0A0 F0D4030C */  jal        func_800F53C0
    /* 4C4A4 8013E0A4 0000A3A0 */   sb        $v1, 0x0($a1)
    /* 4C4A8 8013E0A8 09004010 */  beqz       $v0, .L8013E0D0
    /* 4C4AC 8013E0AC 00000000 */   nop
  .L8013E0B0:
    /* 4C4B0 8013E0B0 53D9030C */  jal        func_800F654C
    /* 4C4B4 8013E0B4 F0000424 */   addiu     $a0, $zero, 0xF0
    /* 4C4B8 8013E0B8 58E2030C */  jal        func_800F8960
    /* 4C4BC 8013E0BC 40030424 */   addiu     $a0, $zero, 0x340
    /* 4C4C0 8013E0C0 58E2030C */  jal        func_800F8960
    /* 4C4C4 8013E0C4 41030424 */   addiu     $a0, $zero, 0x341
    /* 4C4C8 8013E0C8 72F80408 */  j          .L8013E1C8
    /* 4C4CC 8013E0CC 00000000 */   nop
  .L8013E0D0:
    /* 4C4D0 8013E0D0 58E2030C */  jal        func_800F8960
    /* 4C4D4 8013E0D4 40030424 */   addiu     $a0, $zero, 0x340
    /* 4C4D8 8013E0D8 8CD9030C */  jal        func_800F6630
    /* 4C4DC 8013E0DC 02000424 */   addiu     $a0, $zero, 0x2
    /* 4C4E0 8013E0E0 04D5030C */  jal        func_800F5410
    /* 4C4E4 8013E0E4 00000000 */   nop
    /* 4C4E8 8013E0E8 0FCF030C */  jal        func_800F3C3C
    /* 4C4EC 8013E0EC 03000424 */   addiu     $a0, $zero, 0x3
    /* 4C4F0 8013E0F0 CECF030C */  jal        func_800F3F38
    /* 4C4F4 8013E0F4 21204000 */   addu      $a0, $v0, $zero
    /* 4C4F8 8013E0F8 58E2030C */  jal        func_800F8960
    /* 4C4FC 8013E0FC 41030424 */   addiu     $a0, $zero, 0x341
    /* 4C500 8013E100 8CD9030C */  jal        func_800F6630
    /* 4C504 8013E104 04000424 */   addiu     $a0, $zero, 0x4
    /* 4C508 8013E108 92D0030C */  jal        func_800F4248
    /* 4C50C 8013E10C 60000424 */   addiu     $a0, $zero, 0x60
    /* 4C510 8013E110 1A80053C */  lui        $a1, %hi(D_8019ED40)
    /* 4C514 8013E114 40EDA58C */  lw         $a1, %lo(D_8019ED40)($a1)
    /* 4C518 8013E118 00000000 */  nop
    /* 4C51C 8013E11C 0000A290 */  lbu        $v0, 0x0($a1)
    /* 4C520 8013E120 1600043C */  lui        $a0, (0x16FFE6 >> 16)
    /* 4C524 8013E124 02110200 */  srl        $v0, $v0, 4
    /* 4C528 8013E128 0000A2A0 */  sb         $v0, 0x0($a1)
    /* 4C52C 8013E12C 1A80033C */  lui        $v1, %hi(D_8019ED44)
    /* 4C530 8013E130 44ED638C */  lw         $v1, %lo(D_8019ED44)($v1)
    /* 4C534 8013E134 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 4C538 8013E138 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 4C53C 8013E13C 00006294 */  lhu        $v0, 0x0($v1)
    /* 4C540 8013E140 E6FF8434 */  ori        $a0, $a0, (0x16FFE6 & 0xFFFF)
    /* 4C544 8013E144 1ADB030C */  jal        func_800F6C68
    /* 4C548 8013E148 0000A2A4 */   sh        $v0, 0x0($a1)
    /* 4C54C 8013E14C 58E2030C */  jal        func_800F8960
    /* 4C550 8013E150 42030424 */   addiu     $a0, $zero, 0x342
    /* 4C554 8013E154 1600043C */  lui        $a0, (0x16FFE7 >> 16)
    /* 4C558 8013E158 1ADB030C */  jal        func_800F6C68
    /* 4C55C 8013E15C E7FF8434 */   ori       $a0, $a0, (0x16FFE7 & 0xFFFF)
    /* 4C560 8013E160 0FCF030C */  jal        func_800F3C3C
    /* 4C564 8013E164 05000424 */   addiu     $a0, $zero, 0x5
    /* 4C568 8013E168 B3D7030C */  jal        func_800F5ECC
    /* 4C56C 8013E16C 21204000 */   addu      $a0, $v0, $zero
    /* 4C570 8013E170 80E4030C */  jal        func_800F9200
    /* 4C574 8013E174 00000000 */   nop
    /* 4C578 8013E178 59D9030C */  jal        func_800F6564
    /* 4C57C 8013E17C C06C0424 */   addiu     $a0, $zero, 0x6CC0
    /* 4C580 8013E180 0DD9030C */  jal        func_800F6434
    /* 4C584 8013E184 02000424 */   addiu     $a0, $zero, 0x2
    /* 4C588 8013E188 0B004014 */  bnez       $v0, .L8013E1B8
    /* 4C58C 8013E18C 00000000 */   nop
    /* 4C590 8013E190 F7E4030C */  jal        func_800F93DC
    /* 4C594 8013E194 00000000 */   nop
    /* 4C598 8013E198 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 4C59C 8013E19C 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 4C5A0 8013E1A0 00000000 */  nop
    /* 4C5A4 8013E1A4 00006290 */  lbu        $v0, 0x0($v1)
    /* 4C5A8 8013E1A8 00000000 */  nop
    /* 4C5AC 8013E1AC 40004238 */  xori       $v0, $v0, 0x40
    /* 4C5B0 8013E1B0 80E4030C */  jal        func_800F9200
    /* 4C5B4 8013E1B4 000062A0 */   sb        $v0, 0x0($v1)
  .L8013E1B8:
    /* 4C5B8 8013E1B8 F7E4030C */  jal        func_800F93DC
    /* 4C5BC 8013E1BC 00000000 */   nop
    /* 4C5C0 8013E1C0 58E2030C */  jal        func_800F8960
    /* 4C5C4 8013E1C4 43030424 */   addiu     $a0, $zero, 0x343
  .L8013E1C8:
    /* 4C5C8 8013E1C8 EFD8030C */  jal        func_800F63BC
    /* 4C5CC 8013E1CC 00000000 */   nop
    /* 4C5D0 8013E1D0 EFD8030C */  jal        func_800F63BC
    /* 4C5D4 8013E1D4 00000000 */   nop
    /* 4C5D8 8013E1D8 EFD8030C */  jal        func_800F63BC
    /* 4C5DC 8013E1DC 00000000 */   nop
    /* 4C5E0 8013E1E0 EFD8030C */  jal        func_800F63BC
    /* 4C5E4 8013E1E4 00000000 */   nop
    /* 4C5E8 8013E1E8 68E5030C */  jal        func_800F95A0
    /* 4C5EC 8013E1EC 00000000 */   nop
    /* 4C5F0 8013E1F0 1000BF8F */  lw         $ra, 0x10($sp)
    /* 4C5F4 8013E1F4 00000000 */  nop
    /* 4C5F8 8013E1F8 0800E003 */  jr         $ra
    /* 4C5FC 8013E1FC 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8013DE38
