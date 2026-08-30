nonmatching func_8011FBA4, 0x190

glabel func_8011FBA4
    /* 2DFA4 8011FBA4 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 2DFA8 8011FBA8 1000BFAF */  sw         $ra, 0x10($sp)
    /* 2DFAC 8011FBAC 9BE4030C */  jal        func_800F926C
    /* 2DFB0 8011FBB0 00000000 */   nop
    /* 2DFB4 8011FBB4 A6E4030C */  jal        func_800F9298
    /* 2DFB8 8011FBB8 00000000 */   nop
    /* 2DFBC 8011FBBC CCE4030C */  jal        func_800F9330
    /* 2DFC0 8011FBC0 00000000 */   nop
    /* 2DFC4 8011FBC4 77DC030C */  jal        func_800F71DC
    /* 2DFC8 8011FBC8 00010424 */   addiu     $a0, $zero, 0x100
    /* 2DFCC 8011FBCC CCE4030C */  jal        func_800F9330
    /* 2DFD0 8011FBD0 00000000 */   nop
    /* 2DFD4 8011FBD4 2EE5030C */  jal        func_800F94B8
    /* 2DFD8 8011FBD8 00000000 */   nop
    /* 2DFDC 8011FBDC 1A80023C */  lui        $v0, %hi(D_8019ED4C)
    /* 2DFE0 8011FBE0 4CED428C */  lw         $v0, %lo(D_8019ED4C)($v0)
    /* 2DFE4 8011FBE4 0D80043C */  lui        $a0, %hi(D_800D0000)
    /* 2DFE8 8011FBE8 00004394 */  lhu        $v1, 0x0($v0)
    /* 2DFEC 8011FBEC 01000224 */  addiu      $v0, $zero, 0x1
    /* 2DFF0 8011FBF0 21186400 */  addu       $v1, $v1, $a0
    /* 2DFF4 8011FBF4 000062A0 */  sb         $v0, %lo(D_800D0000)($v1)
    /* 2DFF8 8011FBF8 1A80043C */  lui        $a0, %hi(D_8019ED4C)
    /* 2DFFC 8011FBFC 4CED848C */  lw         $a0, %lo(D_8019ED4C)($a0)
    /* 2E000 8011FC00 00000000 */  nop
    /* 2E004 8011FC04 00008294 */  lhu        $v0, 0x0($a0)
    /* 2E008 8011FC08 00000000 */  nop
    /* 2E00C 8011FC0C FFFF4224 */  addiu      $v0, $v0, -0x1
    /* 2E010 8011FC10 12E5030C */  jal        func_800F9448
    /* 2E014 8011FC14 000082A4 */   sh        $v0, 0x0($a0)
    /* 2E018 8011FC18 91E5030C */  jal        func_800F9644
    /* 2E01C 8011FC1C 20000424 */   addiu     $a0, $zero, 0x20
    /* 2E020 8011FC20 1A80043C */  lui        $a0, %hi(D_8019ED58)
    /* 2E024 8011FC24 58ED848C */  lw         $a0, %lo(D_8019ED58)($a0)
    /* 2E028 8011FC28 00000000 */  nop
    /* 2E02C 8011FC2C 00008294 */  lhu        $v0, 0x0($a0)
    /* 2E030 8011FC30 0B000324 */  addiu      $v1, $zero, 0xB
    /* 2E034 8011FC34 02130200 */  srl        $v0, $v0, 12
    /* 2E038 8011FC38 10004314 */  bne        $v0, $v1, .L8011FC7C
    /* 2E03C 8011FC3C FFFF033C */   lui       $v1, (0xFFFF4DEF >> 16)
    /* 2E040 8011FC40 EF4D6334 */  ori        $v1, $v1, (0xFFFF4DEF & 0xFFFF)
    /* 2E044 8011FC44 1A80063C */  lui        $a2, %hi(D_80199328)
    /* 2E048 8011FC48 2893C624 */  addiu      $a2, $a2, %lo(D_80199328)
    /* 2E04C 8011FC4C 00008294 */  lhu        $v0, 0x0($a0)
    /* 2E050 8011FC50 1A80043C */  lui        $a0, %hi(D_8019ED40)
    /* 2E054 8011FC54 40ED848C */  lw         $a0, %lo(D_8019ED40)($a0)
    /* 2E058 8011FC58 21104300 */  addu       $v0, $v0, $v1
    /* 2E05C 8011FC5C 21104600 */  addu       $v0, $v0, $a2
    /* 2E060 8011FC60 00004390 */  lbu        $v1, 0x0($v0)
    /* 2E064 8011FC64 FFFF023C */  lui        $v0, (0xFFFF4DF0 >> 16)
    /* 2E068 8011FC68 000083A0 */  sb         $v1, 0x0($a0)
    /* 2E06C 8011FC6C 1A80053C */  lui        $a1, %hi(D_8019ED58)
    /* 2E070 8011FC70 58EDA58C */  lw         $a1, %lo(D_8019ED58)($a1)
    /* 2E074 8011FC74 2D7F0408 */  j          .L8011FCB4
    /* 2E078 8011FC78 F04D4234 */   ori       $v0, $v0, (0xFFFF4DF0 & 0xFFFF)
  .L8011FC7C:
    /* 2E07C 8011FC7C AF246334 */  ori        $v1, $v1, (0xFFFF24AF & 0xFFFF)
    /* 2E080 8011FC80 1A80063C */  lui        $a2, %hi(D_80199374)
    /* 2E084 8011FC84 7493C624 */  addiu      $a2, $a2, %lo(D_80199374)
    /* 2E088 8011FC88 00008294 */  lhu        $v0, 0x0($a0)
    /* 2E08C 8011FC8C 1A80043C */  lui        $a0, %hi(D_8019ED40)
    /* 2E090 8011FC90 40ED848C */  lw         $a0, %lo(D_8019ED40)($a0)
    /* 2E094 8011FC94 21104300 */  addu       $v0, $v0, $v1
    /* 2E098 8011FC98 21104600 */  addu       $v0, $v0, $a2
    /* 2E09C 8011FC9C 00004390 */  lbu        $v1, 0x0($v0)
    /* 2E0A0 8011FCA0 FFFF023C */  lui        $v0, (0xFFFF24B0 >> 16)
    /* 2E0A4 8011FCA4 000083A0 */  sb         $v1, 0x0($a0)
    /* 2E0A8 8011FCA8 1A80053C */  lui        $a1, %hi(D_8019ED58)
    /* 2E0AC 8011FCAC 58EDA58C */  lw         $a1, %lo(D_8019ED58)($a1)
    /* 2E0B0 8011FCB0 B0244234 */  ori        $v0, $v0, (0xFFFF24B0 & 0xFFFF)
  .L8011FCB4:
    /* 2E0B4 8011FCB4 0000A394 */  lhu        $v1, 0x0($a1)
    /* 2E0B8 8011FCB8 1A80043C */  lui        $a0, %hi(D_8019ED40)
    /* 2E0BC 8011FCBC 40ED848C */  lw         $a0, %lo(D_8019ED40)($a0)
    /* 2E0C0 8011FCC0 21186200 */  addu       $v1, $v1, $v0
    /* 2E0C4 8011FCC4 21186600 */  addu       $v1, $v1, $a2
    /* 2E0C8 8011FCC8 00006290 */  lbu        $v0, 0x0($v1)
    /* 2E0CC 8011FCCC 04D5030C */  jal        func_800F5410
    /* 2E0D0 8011FCD0 010082A0 */   sb        $v0, 0x1($a0)
    /* 2E0D4 8011FCD4 0FCF030C */  jal        func_800F3C3C
    /* 2E0D8 8011FCD8 29000424 */   addiu     $a0, $zero, 0x29
    /* 2E0DC 8011FCDC E5CF030C */  jal        func_800F3F94
    /* 2E0E0 8011FCE0 21204000 */   addu      $a0, $v0, $zero
    /* 2E0E4 8011FCE4 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 2E0E8 8011FCE8 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 2E0EC 8011FCEC 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 2E0F0 8011FCF0 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 2E0F4 8011FCF4 00004394 */  lhu        $v1, 0x0($v0)
    /* 2E0F8 8011FCF8 20000424 */  addiu      $a0, $zero, 0x20
    /* 2E0FC 8011FCFC 98E5030C */  jal        func_800F9660
    /* 2E100 8011FD00 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 2E104 8011FD04 1A80033C */  lui        $v1, %hi(D_8019ED58)
    /* 2E108 8011FD08 58ED638C */  lw         $v1, %lo(D_8019ED58)($v1)
    /* 2E10C 8011FD0C 00000000 */  nop
    /* 2E110 8011FD10 00006294 */  lhu        $v0, 0x0($v1)
    /* 2E114 8011FD14 00000000 */  nop
    /* 2E118 8011FD18 02004224 */  addiu      $v0, $v0, 0x2
    /* 2E11C 8011FD1C 4D7F040C */  jal        func_8011FD34
    /* 2E120 8011FD20 000062A4 */   sh        $v0, 0x0($v1)
    /* 2E124 8011FD24 1000BF8F */  lw         $ra, 0x10($sp)
    /* 2E128 8011FD28 00000000 */  nop
    /* 2E12C 8011FD2C 0800E003 */  jr         $ra
    /* 2E130 8011FD30 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8011FBA4
