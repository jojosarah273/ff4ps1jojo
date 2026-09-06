nonmatching func_8013FA08, 0x7C4

glabel func_8013FA08
    /* 4DE08 8013FA08 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 4DE0C 8013FA0C 1000BFAF */  sw         $ra, 0x10($sp)
    /* 4DE10 8013FA10 C7E5030C */  jal        func_800F971C
    /* 4DE14 8013FA14 00000000 */   nop
    /* 4DE18 8013FA18 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 4DE1C 8013FA1C 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 4DE20 8013FA20 1A80043C */  lui        $a0, %hi(D_8019ED54)
    /* 4DE24 8013FA24 54ED848C */  lw         $a0, %lo(D_8019ED54)($a0)
    /* 4DE28 8013FA28 00004394 */  lhu        $v1, 0x0($v0)
    /* 4DE2C 8013FA2C 00000000 */  nop
    /* 4DE30 8013FA30 000083A4 */  sh         $v1, 0x0($a0)
  .L8013FA34:
    /* 4DE34 8013FA34 0D00043C */  lui        $a0, (0xDFF29 >> 16)
    /* 4DE38 8013FA38 1ADB030C */  jal        func_800F6C68
    /* 4DE3C 8013FA3C 29FF8434 */   ori       $a0, $a0, (0xDFF29 & 0xFFFF)
    /* 4DE40 8013FA40 DAE1030C */  jal        func_800F8768
    /* 4DE44 8013FA44 FD750424 */   addiu     $a0, $zero, 0x75FD
    /* 4DE48 8013FA48 D9D8030C */  jal        func_800F6364
    /* 4DE4C 8013FA4C 00000000 */   nop
    /* 4DE50 8013FA50 56D6030C */  jal        func_800F5958
    /* 4DE54 8013FA54 15000424 */   addiu     $a0, $zero, 0x15
    /* 4DE58 8013FA58 F5D4030C */  jal        func_800F53D4
    /* 4DE5C 8013FA5C 00000000 */   nop
    /* 4DE60 8013FA60 F4FF4010 */  beqz       $v0, .L8013FA34
    /* 4DE64 8013FA64 00000000 */   nop
    /* 4DE68 8013FA68 C7E5030C */  jal        func_800F971C
    /* 4DE6C 8013FA6C 00000000 */   nop
    /* 4DE70 8013FA70 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 4DE74 8013FA74 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 4DE78 8013FA78 1A80043C */  lui        $a0, %hi(D_8019ED54)
    /* 4DE7C 8013FA7C 54ED848C */  lw         $a0, %lo(D_8019ED54)($a0)
    /* 4DE80 8013FA80 00004394 */  lhu        $v1, 0x0($v0)
    /* 4DE84 8013FA84 00000000 */  nop
    /* 4DE88 8013FA88 000083A4 */  sh         $v1, 0x0($a0)
  .L8013FA8C:
    /* 4DE8C 8013FA8C DAE1030C */  jal        func_800F8768
    /* 4DE90 8013FA90 12760424 */   addiu     $a0, $zero, 0x7612
    /* 4DE94 8013FA94 D9D8030C */  jal        func_800F6364
    /* 4DE98 8013FA98 00000000 */   nop
    /* 4DE9C 8013FA9C 56D6030C */  jal        func_800F5958
    /* 4DEA0 8013FAA0 20160424 */   addiu     $a0, $zero, 0x1620
    /* 4DEA4 8013FAA4 F5D4030C */  jal        func_800F53D4
    /* 4DEA8 8013FAA8 00000000 */   nop
    /* 4DEAC 8013FAAC F7FF4010 */  beqz       $v0, .L8013FA8C
    /* 4DEB0 8013FAB0 00000000 */   nop
    /* 4DEB4 8013FAB4 C7E5030C */  jal        func_800F971C
    /* 4DEB8 8013FAB8 00000000 */   nop
    /* 4DEBC 8013FABC 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 4DEC0 8013FAC0 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 4DEC4 8013FAC4 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 4DEC8 8013FAC8 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 4DECC 8013FACC 00004394 */  lhu        $v1, 0x0($v0)
    /* 4DED0 8013FAD0 FE000424 */  addiu      $a0, $zero, 0xFE
    /* 4DED4 8013FAD4 53D9030C */  jal        func_800F654C
    /* 4DED8 8013FAD8 0000A3A4 */   sh        $v1, 0x0($a1)
  .L8013FADC:
    /* 4DEDC 8013FADC DAE1030C */  jal        func_800F8768
    /* 4DEE0 8013FAE0 147D0424 */   addiu     $a0, $zero, 0x7D14
    /* 4DEE4 8013FAE4 33D7030C */  jal        func_800F5CCC
    /* 4DEE8 8013FAE8 00000000 */   nop
    /* 4DEEC 8013FAEC D9D8030C */  jal        func_800F6364
    /* 4DEF0 8013FAF0 00000000 */   nop
    /* 4DEF4 8013FAF4 D9D8030C */  jal        func_800F6364
    /* 4DEF8 8013FAF8 00000000 */   nop
    /* 4DEFC 8013FAFC D9D8030C */  jal        func_800F6364
    /* 4DF00 8013FB00 00000000 */   nop
    /* 4DF04 8013FB04 D9D8030C */  jal        func_800F6364
    /* 4DF08 8013FB08 00000000 */   nop
    /* 4DF0C 8013FB0C 56D6030C */  jal        func_800F5958
    /* 4DF10 8013FB10 80030424 */   addiu     $a0, $zero, 0x380
    /* 4DF14 8013FB14 F5D4030C */  jal        func_800F53D4
    /* 4DF18 8013FB18 00000000 */   nop
    /* 4DF1C 8013FB1C EFFF4010 */  beqz       $v0, .L8013FADC
    /* 4DF20 8013FB20 00000000 */   nop
    /* 4DF24 8013FB24 77DC030C */  jal        func_800F71DC
    /* 4DF28 8013FB28 30020424 */   addiu     $a0, $zero, 0x230
  .L8013FB2C:
    /* 4DF2C 8013FB2C DADA030C */  jal        func_800F6B68
    /* 4DF30 8013FB30 147D0424 */   addiu     $a0, $zero, 0x7D14
    /* 4DF34 8013FB34 33D7030C */  jal        func_800F5CCC
    /* 4DF38 8013FB38 00000000 */   nop
    /* 4DF3C 8013FB3C DAE1030C */  jal        func_800F8768
    /* 4DF40 8013FB40 94790424 */   addiu     $a0, $zero, 0x7994
    /* 4DF44 8013FB44 D9D8030C */  jal        func_800F6364
    /* 4DF48 8013FB48 00000000 */   nop
    /* 4DF4C 8013FB4C D9D8030C */  jal        func_800F6364
    /* 4DF50 8013FB50 00000000 */   nop
    /* 4DF54 8013FB54 D9D8030C */  jal        func_800F6364
    /* 4DF58 8013FB58 00000000 */   nop
    /* 4DF5C 8013FB5C D9D8030C */  jal        func_800F6364
    /* 4DF60 8013FB60 00000000 */   nop
    /* 4DF64 8013FB64 56D6030C */  jal        func_800F5958
    /* 4DF68 8013FB68 80020424 */   addiu     $a0, $zero, 0x280
    /* 4DF6C 8013FB6C F5D4030C */  jal        func_800F53D4
    /* 4DF70 8013FB70 00000000 */   nop
    /* 4DF74 8013FB74 EDFF4010 */  beqz       $v0, .L8013FB2C
    /* 4DF78 8013FB78 00000000 */   nop
    /* 4DF7C 8013FB7C 91E5030C */  jal        func_800F9644
    /* 4DF80 8013FB80 20000424 */   addiu     $a0, $zero, 0x20
    /* 4DF84 8013FB84 C7E5030C */  jal        func_800F971C
    /* 4DF88 8013FB88 00000000 */   nop
    /* 4DF8C 8013FB8C 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 4DF90 8013FB90 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 4DF94 8013FB94 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 4DF98 8013FB98 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 4DF9C 8013FB9C 00004394 */  lhu        $v1, 0x0($v0)
    /* 4DFA0 8013FBA0 73010424 */  addiu      $a0, $zero, 0x173
    /* 4DFA4 8013FBA4 56D9030C */  jal        func_800F6558
    /* 4DFA8 8013FBA8 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 4DFAC 8013FBAC 40DD030C */  jal        func_800F7500
    /* 4DFB0 8013FBB0 08000424 */   addiu     $a0, $zero, 0x8
  .L8013FBB4:
    /* 4DFB4 8013FBB4 F7E1030C */  jal        func_800F87DC
    /* 4DFB8 8013FBB8 94800434 */   ori       $a0, $zero, 0x8094
    /* 4DFBC 8013FBBC 8BE4030C */  jal        func_800F922C
    /* 4DFC0 8013FBC0 00000000 */   nop
    /* 4DFC4 8013FBC4 04D5030C */  jal        func_800F5410
    /* 4DFC8 8013FBC8 00000000 */   nop
    /* 4DFCC 8013FBCC 19D0030C */  jal        func_800F4064
    /* 4DFD0 8013FBD0 68000424 */   addiu     $a0, $zero, 0x68
    /* 4DFD4 8013FBD4 F7E1030C */  jal        func_800F87DC
    /* 4DFD8 8013FBD8 14830434 */   ori       $a0, $zero, 0x8314
    /* 4DFDC 8013FBDC 04D5030C */  jal        func_800F5410
    /* 4DFE0 8013FBE0 00000000 */   nop
    /* 4DFE4 8013FBE4 19D0030C */  jal        func_800F4064
    /* 4DFE8 8013FBE8 F0000424 */   addiu     $a0, $zero, 0xF0
    /* 4DFEC 8013FBEC F7E1030C */  jal        func_800F87DC
    /* 4DFF0 8013FBF0 F48A0434 */   ori       $a0, $zero, 0x8AF4
    /* 4DFF4 8013FBF4 04E5030C */  jal        func_800F9410
    /* 4DFF8 8013FBF8 00000000 */   nop
    /* 4DFFC 8013FBFC A8D7030C */  jal        func_800F5EA0
    /* 4E000 8013FC00 00000000 */   nop
    /* 4E004 8013FC04 19D7030C */  jal        func_800F5C64
    /* 4E008 8013FC08 02020424 */   addiu     $a0, $zero, 0x202
    /* 4E00C 8013FC0C 07004014 */  bnez       $v0, .L8013FC2C
    /* 4E010 8013FC10 00000000 */   nop
    /* 4E014 8013FC14 04D5030C */  jal        func_800F5410
    /* 4E018 8013FC18 00000000 */   nop
    /* 4E01C 8013FC1C 19D0030C */  jal        func_800F4064
    /* 4E020 8013FC20 04000424 */   addiu     $a0, $zero, 0x4
    /* 4E024 8013FC24 40DD030C */  jal        func_800F7500
    /* 4E028 8013FC28 0C000424 */   addiu     $a0, $zero, 0xC
  .L8013FC2C:
    /* 4E02C 8013FC2C 56D6030C */  jal        func_800F5958
    /* 4E030 8013FC30 10010424 */   addiu     $a0, $zero, 0x110
    /* 4E034 8013FC34 F5D4030C */  jal        func_800F53D4
    /* 4E038 8013FC38 00000000 */   nop
    /* 4E03C 8013FC3C 05004010 */  beqz       $v0, .L8013FC54
    /* 4E040 8013FC40 00000000 */   nop
    /* 4E044 8013FC44 04D5030C */  jal        func_800F5410
    /* 4E048 8013FC48 00000000 */   nop
    /* 4E04C 8013FC4C 19D0030C */  jal        func_800F4064
    /* 4E050 8013FC50 04000424 */   addiu     $a0, $zero, 0x4
  .L8013FC54:
    /* 4E054 8013FC54 D9D8030C */  jal        func_800F6364
    /* 4E058 8013FC58 00000000 */   nop
    /* 4E05C 8013FC5C D9D8030C */  jal        func_800F6364
    /* 4E060 8013FC60 00000000 */   nop
    /* 4E064 8013FC64 D9D8030C */  jal        func_800F6364
    /* 4E068 8013FC68 00000000 */   nop
    /* 4E06C 8013FC6C D9D8030C */  jal        func_800F6364
    /* 4E070 8013FC70 00000000 */   nop
    /* 4E074 8013FC74 56D6030C */  jal        func_800F5958
    /* 4E078 8013FC78 30010424 */   addiu     $a0, $zero, 0x130
    /* 4E07C 8013FC7C F5D4030C */  jal        func_800F53D4
    /* 4E080 8013FC80 00000000 */   nop
    /* 4E084 8013FC84 CBFF4010 */  beqz       $v0, .L8013FBB4
    /* 4E088 8013FC88 00000000 */   nop
    /* 4E08C 8013FC8C C7E5030C */  jal        func_800F971C
    /* 4E090 8013FC90 00000000 */   nop
    /* 4E094 8013FC94 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 4E098 8013FC98 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 4E09C 8013FC9C 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 4E0A0 8013FCA0 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 4E0A4 8013FCA4 00004394 */  lhu        $v1, 0x0($v0)
    /* 4E0A8 8013FCA8 6F010424 */  addiu      $a0, $zero, 0x16F
    /* 4E0AC 8013FCAC 56D9030C */  jal        func_800F6558
    /* 4E0B0 8013FCB0 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 4E0B4 8013FCB4 40DD030C */  jal        func_800F7500
    /* 4E0B8 8013FCB8 08000424 */   addiu     $a0, $zero, 0x8
  .L8013FCBC:
    /* 4E0BC 8013FCBC 1A80023C */  lui        $v0, %hi(D_8019ED54)
    /* 4E0C0 8013FCC0 54ED428C */  lw         $v0, %lo(D_8019ED54)($v0)
    /* 4E0C4 8013FCC4 00000000 */  nop
    /* 4E0C8 8013FCC8 00004394 */  lhu        $v1, 0x0($v0)
    /* 4E0CC 8013FCCC D3810434 */  ori        $a0, $zero, 0x81D3
    /* 4E0D0 8013FCD0 C1CE030C */  jal        func_800F3B04
    /* 4E0D4 8013FCD4 21206400 */   addu      $a0, $v1, $a0
    /* 4E0D8 8013FCD8 41D8030C */  jal        func_800F6104
    /* 4E0DC 8013FCDC 21204000 */   addu      $a0, $v0, $zero
    /* 4E0E0 8013FCE0 F7E1030C */  jal        func_800F87DC
    /* 4E0E4 8013FCE4 D4810434 */   ori       $a0, $zero, 0x81D4
    /* 4E0E8 8013FCE8 A8D7030C */  jal        func_800F5EA0
    /* 4E0EC 8013FCEC 00000000 */   nop
    /* 4E0F0 8013FCF0 19D7030C */  jal        func_800F5C64
    /* 4E0F4 8013FCF4 02020424 */   addiu     $a0, $zero, 0x202
    /* 4E0F8 8013FCF8 07004014 */  bnez       $v0, .L8013FD18
    /* 4E0FC 8013FCFC 00000000 */   nop
    /* 4E100 8013FD00 04D5030C */  jal        func_800F5410
    /* 4E104 8013FD04 00000000 */   nop
    /* 4E108 8013FD08 19D0030C */  jal        func_800F4064
    /* 4E10C 8013FD0C 04000424 */   addiu     $a0, $zero, 0x4
    /* 4E110 8013FD10 40DD030C */  jal        func_800F7500
    /* 4E114 8013FD14 0C000424 */   addiu     $a0, $zero, 0xC
  .L8013FD18:
    /* 4E118 8013FD18 56D6030C */  jal        func_800F5958
    /* 4E11C 8013FD1C 10010424 */   addiu     $a0, $zero, 0x110
    /* 4E120 8013FD20 F5D4030C */  jal        func_800F53D4
    /* 4E124 8013FD24 00000000 */   nop
    /* 4E128 8013FD28 05004010 */  beqz       $v0, .L8013FD40
    /* 4E12C 8013FD2C 00000000 */   nop
    /* 4E130 8013FD30 04D5030C */  jal        func_800F5410
    /* 4E134 8013FD34 00000000 */   nop
    /* 4E138 8013FD38 19D0030C */  jal        func_800F4064
    /* 4E13C 8013FD3C 34010424 */   addiu     $a0, $zero, 0x134
  .L8013FD40:
    /* 4E140 8013FD40 D9D8030C */  jal        func_800F6364
    /* 4E144 8013FD44 00000000 */   nop
    /* 4E148 8013FD48 D9D8030C */  jal        func_800F6364
    /* 4E14C 8013FD4C 00000000 */   nop
    /* 4E150 8013FD50 D9D8030C */  jal        func_800F6364
    /* 4E154 8013FD54 00000000 */   nop
    /* 4E158 8013FD58 D9D8030C */  jal        func_800F6364
    /* 4E15C 8013FD5C 00000000 */   nop
    /* 4E160 8013FD60 56D6030C */  jal        func_800F5958
    /* 4E164 8013FD64 30010424 */   addiu     $a0, $zero, 0x130
    /* 4E168 8013FD68 F5D4030C */  jal        func_800F53D4
    /* 4E16C 8013FD6C 00000000 */   nop
    /* 4E170 8013FD70 D2FF4010 */  beqz       $v0, .L8013FCBC
    /* 4E174 8013FD74 00000000 */   nop
    /* 4E178 8013FD78 C7E5030C */  jal        func_800F971C
    /* 4E17C 8013FD7C 00000000 */   nop
    /* 4E180 8013FD80 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 4E184 8013FD84 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 4E188 8013FD88 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 4E18C 8013FD8C 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 4E190 8013FD90 00004394 */  lhu        $v1, 0x0($v0)
    /* 4E194 8013FD94 6B000424 */  addiu      $a0, $zero, 0x6B
    /* 4E198 8013FD98 56D9030C */  jal        func_800F6558
    /* 4E19C 8013FD9C 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 4E1A0 8013FDA0 40DD030C */  jal        func_800F7500
    /* 4E1A4 8013FDA4 08000424 */   addiu     $a0, $zero, 0x8
  .L8013FDA8:
    /* 4E1A8 8013FDA8 F7E1030C */  jal        func_800F87DC
    /* 4E1AC 8013FDAC 54840434 */   ori       $a0, $zero, 0x8454
    /* 4E1B0 8013FDB0 A8D7030C */  jal        func_800F5EA0
    /* 4E1B4 8013FDB4 00000000 */   nop
    /* 4E1B8 8013FDB8 19D7030C */  jal        func_800F5C64
    /* 4E1BC 8013FDBC 02020424 */   addiu     $a0, $zero, 0x202
    /* 4E1C0 8013FDC0 07004014 */  bnez       $v0, .L8013FDE0
    /* 4E1C4 8013FDC4 00000000 */   nop
    /* 4E1C8 8013FDC8 04D5030C */  jal        func_800F5410
    /* 4E1CC 8013FDCC 00000000 */   nop
    /* 4E1D0 8013FDD0 19D0030C */  jal        func_800F4064
    /* 4E1D4 8013FDD4 04000424 */   addiu     $a0, $zero, 0x4
    /* 4E1D8 8013FDD8 40DD030C */  jal        func_800F7500
    /* 4E1DC 8013FDDC 0C000424 */   addiu     $a0, $zero, 0xC
  .L8013FDE0:
    /* 4E1E0 8013FDE0 56D6030C */  jal        func_800F5958
    /* 4E1E4 8013FDE4 88000424 */   addiu     $a0, $zero, 0x88
    /* 4E1E8 8013FDE8 F5D4030C */  jal        func_800F53D4
    /* 4E1EC 8013FDEC 00000000 */   nop
    /* 4E1F0 8013FDF0 05004010 */  beqz       $v0, .L8013FE08
    /* 4E1F4 8013FDF4 00000000 */   nop
    /* 4E1F8 8013FDF8 04D5030C */  jal        func_800F5410
    /* 4E1FC 8013FDFC 00000000 */   nop
    /* 4E200 8013FE00 19D0030C */  jal        func_800F4064
    /* 4E204 8013FE04 04000424 */   addiu     $a0, $zero, 0x4
  .L8013FE08:
    /* 4E208 8013FE08 D9D8030C */  jal        func_800F6364
    /* 4E20C 8013FE0C 00000000 */   nop
    /* 4E210 8013FE10 D9D8030C */  jal        func_800F6364
    /* 4E214 8013FE14 00000000 */   nop
    /* 4E218 8013FE18 D9D8030C */  jal        func_800F6364
    /* 4E21C 8013FE1C 00000000 */   nop
    /* 4E220 8013FE20 D9D8030C */  jal        func_800F6364
    /* 4E224 8013FE24 00000000 */   nop
    /* 4E228 8013FE28 56D6030C */  jal        func_800F5958
    /* 4E22C 8013FE2C A0000424 */   addiu     $a0, $zero, 0xA0
    /* 4E230 8013FE30 F5D4030C */  jal        func_800F53D4
    /* 4E234 8013FE34 00000000 */   nop
    /* 4E238 8013FE38 DBFF4010 */  beqz       $v0, .L8013FDA8
    /* 4E23C 8013FE3C 00000000 */   nop
    /* 4E240 8013FE40 C7E5030C */  jal        func_800F971C
    /* 4E244 8013FE44 00000000 */   nop
    /* 4E248 8013FE48 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 4E24C 8013FE4C 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 4E250 8013FE50 1A80043C */  lui        $a0, %hi(D_8019ED54)
    /* 4E254 8013FE54 54ED848C */  lw         $a0, %lo(D_8019ED54)($a0)
    /* 4E258 8013FE58 00004394 */  lhu        $v1, 0x0($v0)
    /* 4E25C 8013FE5C 00000000 */  nop
    /* 4E260 8013FE60 000083A4 */  sh         $v1, 0x0($a0)
  .L8013FE64:
    /* 4E264 8013FE64 F8DA030C */  jal        func_800F6BE0
    /* 4E268 8013FE68 72800434 */   ori       $a0, $zero, 0x8072
    /* 4E26C 8013FE6C F7E1030C */  jal        func_800F87DC
    /* 4E270 8013FE70 C2810434 */   ori       $a0, $zero, 0x81C2
    /* 4E274 8013FE74 F7E1030C */  jal        func_800F87DC
    /* 4E278 8013FE78 42840434 */   ori       $a0, $zero, 0x8442
    /* 4E27C 8013FE7C D9D8030C */  jal        func_800F6364
    /* 4E280 8013FE80 00000000 */   nop
    /* 4E284 8013FE84 D9D8030C */  jal        func_800F6364
    /* 4E288 8013FE88 00000000 */   nop
    /* 4E28C 8013FE8C 56D6030C */  jal        func_800F5958
    /* 4E290 8013FE90 10000424 */   addiu     $a0, $zero, 0x10
    /* 4E294 8013FE94 F5D4030C */  jal        func_800F53D4
    /* 4E298 8013FE98 00000000 */   nop
    /* 4E29C 8013FE9C F1FF4010 */  beqz       $v0, .L8013FE64
    /* 4E2A0 8013FEA0 00000000 */   nop
    /* 4E2A4 8013FEA4 C7E5030C */  jal        func_800F971C
    /* 4E2A8 8013FEA8 00000000 */   nop
    /* 4E2AC 8013FEAC 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 4E2B0 8013FEB0 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 4E2B4 8013FEB4 1A80043C */  lui        $a0, %hi(D_8019ED54)
    /* 4E2B8 8013FEB8 54ED848C */  lw         $a0, %lo(D_8019ED54)($a0)
    /* 4E2BC 8013FEBC 00004394 */  lhu        $v1, 0x0($v0)
    /* 4E2C0 8013FEC0 00000000 */  nop
    /* 4E2C4 8013FEC4 000083A4 */  sh         $v1, 0x0($a0)
  .L8013FEC8:
    /* 4E2C8 8013FEC8 56D9030C */  jal        func_800F6558
    /* 4E2CC 8013FECC 01010424 */   addiu     $a0, $zero, 0x101
    /* 4E2D0 8013FED0 F7E1030C */  jal        func_800F87DC
    /* 4E2D4 8013FED4 F2840434 */   ori       $a0, $zero, 0x84F2
    /* 4E2D8 8013FED8 D9D8030C */  jal        func_800F6364
    /* 4E2DC 8013FEDC 00000000 */   nop
    /* 4E2E0 8013FEE0 D9D8030C */  jal        func_800F6364
    /* 4E2E4 8013FEE4 00000000 */   nop
    /* 4E2E8 8013FEE8 D9D8030C */  jal        func_800F6364
    /* 4E2EC 8013FEEC 00000000 */   nop
    /* 4E2F0 8013FEF0 D9D8030C */  jal        func_800F6364
    /* 4E2F4 8013FEF4 00000000 */   nop
    /* 4E2F8 8013FEF8 56D6030C */  jal        func_800F5958
    /* 4E2FC 8013FEFC 00010424 */   addiu     $a0, $zero, 0x100
    /* 4E300 8013FF00 F5D4030C */  jal        func_800F53D4
    /* 4E304 8013FF04 00000000 */   nop
    /* 4E308 8013FF08 EFFF4010 */  beqz       $v0, .L8013FEC8
    /* 4E30C 8013FF0C 00000000 */   nop
    /* 4E310 8013FF10 C7E5030C */  jal        func_800F971C
    /* 4E314 8013FF14 00000000 */   nop
    /* 4E318 8013FF18 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 4E31C 8013FF1C 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 4E320 8013FF20 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 4E324 8013FF24 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 4E328 8013FF28 00004394 */  lhu        $v1, 0x0($v0)
    /* 4E32C 8013FF2C 53000424 */  addiu      $a0, $zero, 0x53
    /* 4E330 8013FF30 56D9030C */  jal        func_800F6558
    /* 4E334 8013FF34 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 4E338 8013FF38 40DD030C */  jal        func_800F7500
    /* 4E33C 8013FF3C 08000424 */   addiu     $a0, $zero, 0x8
  .L8013FF40:
    /* 4E340 8013FF40 F7E1030C */  jal        func_800F87DC
    /* 4E344 8013FF44 F4850434 */   ori       $a0, $zero, 0x85F4
    /* 4E348 8013FF48 F7E1030C */  jal        func_800F87DC
    /* 4E34C 8013FF4C 74880434 */   ori       $a0, $zero, 0x8874
    /* 4E350 8013FF50 8BE4030C */  jal        func_800F922C
    /* 4E354 8013FF54 00000000 */   nop
    /* 4E358 8013FF58 20D5030C */  jal        func_800F5480
    /* 4E35C 8013FF5C 00000000 */   nop
    /* 4E360 8013FF60 34E0030C */  jal        func_800F80D0
    /* 4E364 8013FF64 0C000424 */   addiu     $a0, $zero, 0xC
    /* 4E368 8013FF68 F7E1030C */  jal        func_800F87DC
    /* 4E36C 8013FF6C 74860434 */   ori       $a0, $zero, 0x8674
    /* 4E370 8013FF70 F7E1030C */  jal        func_800F87DC
    /* 4E374 8013FF74 F4880434 */   ori       $a0, $zero, 0x88F4
    /* 4E378 8013FF78 20D5030C */  jal        func_800F5480
    /* 4E37C 8013FF7C 00000000 */   nop
    /* 4E380 8013FF80 34E0030C */  jal        func_800F80D0
    /* 4E384 8013FF84 0C000424 */   addiu     $a0, $zero, 0xC
    /* 4E388 8013FF88 F7E1030C */  jal        func_800F87DC
    /* 4E38C 8013FF8C F4860434 */   ori       $a0, $zero, 0x86F4
    /* 4E390 8013FF90 F7E1030C */  jal        func_800F87DC
    /* 4E394 8013FF94 74890434 */   ori       $a0, $zero, 0x8974
    /* 4E398 8013FF98 20D5030C */  jal        func_800F5480
    /* 4E39C 8013FF9C 00000000 */   nop
    /* 4E3A0 8013FFA0 34E0030C */  jal        func_800F80D0
    /* 4E3A4 8013FFA4 0C000424 */   addiu     $a0, $zero, 0xC
    /* 4E3A8 8013FFA8 F7E1030C */  jal        func_800F87DC
    /* 4E3AC 8013FFAC 74870434 */   ori       $a0, $zero, 0x8774
    /* 4E3B0 8013FFB0 F7E1030C */  jal        func_800F87DC
    /* 4E3B4 8013FFB4 F4890434 */   ori       $a0, $zero, 0x89F4
    /* 4E3B8 8013FFB8 20D5030C */  jal        func_800F5480
    /* 4E3BC 8013FFBC 00000000 */   nop
    /* 4E3C0 8013FFC0 34E0030C */  jal        func_800F80D0
    /* 4E3C4 8013FFC4 0C000424 */   addiu     $a0, $zero, 0xC
    /* 4E3C8 8013FFC8 F7E1030C */  jal        func_800F87DC
    /* 4E3CC 8013FFCC F4870434 */   ori       $a0, $zero, 0x87F4
    /* 4E3D0 8013FFD0 F7E1030C */  jal        func_800F87DC
    /* 4E3D4 8013FFD4 748A0434 */   ori       $a0, $zero, 0x8A74
    /* 4E3D8 8013FFD8 04E5030C */  jal        func_800F9410
    /* 4E3DC 8013FFDC 00000000 */   nop
    /* 4E3E0 8013FFE0 A8D7030C */  jal        func_800F5EA0
    /* 4E3E4 8013FFE4 00000000 */   nop
    /* 4E3E8 8013FFE8 19D7030C */  jal        func_800F5C64
    /* 4E3EC 8013FFEC 02020424 */   addiu     $a0, $zero, 0x202
    /* 4E3F0 8013FFF0 05004014 */  bnez       $v0, .L80140008
    /* 4E3F4 8013FFF4 00000000 */   nop
    /* 4E3F8 8013FFF8 04D5030C */  jal        func_800F5410
    /* 4E3FC 8013FFFC 00000000 */   nop
    /* 4E400 80140000 19D0030C */  jal        func_800F4064
    /* 4E404 80140004 04000424 */   addiu     $a0, $zero, 0x4
  .L80140008:
    /* 4E408 80140008 8BE4030C */  jal        func_800F922C
    /* 4E40C 8014000C 00000000 */   nop
    /* 4E410 80140010 56D9030C */  jal        func_800F6558
    /* 4E414 80140014 AC000424 */   addiu     $a0, $zero, 0xAC
    /* 4E418 80140018 F7E1030C */  jal        func_800F87DC
    /* 4E41C 8014001C 72880434 */   ori       $a0, $zero, 0x8872
    /* 4E420 80140020 F7E1030C */  jal        func_800F87DC
    /* 4E424 80140024 F2880434 */   ori       $a0, $zero, 0x88F2
    /* 4E428 80140028 F7E1030C */  jal        func_800F87DC
    /* 4E42C 8014002C 72890434 */   ori       $a0, $zero, 0x8972
    /* 4E430 80140030 F7E1030C */  jal        func_800F87DC
    /* 4E434 80140034 F2890434 */   ori       $a0, $zero, 0x89F2
    /* 4E438 80140038 F7E1030C */  jal        func_800F87DC
    /* 4E43C 8014003C 728A0434 */   ori       $a0, $zero, 0x8A72
    /* 4E440 80140040 56D9030C */  jal        func_800F6558
    /* 4E444 80140044 BC010424 */   addiu     $a0, $zero, 0x1BC
    /* 4E448 80140048 F7E1030C */  jal        func_800F87DC
    /* 4E44C 8014004C F2850434 */   ori       $a0, $zero, 0x85F2
    /* 4E450 80140050 F7E1030C */  jal        func_800F87DC
    /* 4E454 80140054 72860434 */   ori       $a0, $zero, 0x8672
    /* 4E458 80140058 F7E1030C */  jal        func_800F87DC
    /* 4E45C 8014005C F2860434 */   ori       $a0, $zero, 0x86F2
    /* 4E460 80140060 F7E1030C */  jal        func_800F87DC
    /* 4E464 80140064 72870434 */   ori       $a0, $zero, 0x8772
    /* 4E468 80140068 F7E1030C */  jal        func_800F87DC
    /* 4E46C 8014006C F2870434 */   ori       $a0, $zero, 0x87F2
    /* 4E470 80140070 04E5030C */  jal        func_800F9410
    /* 4E474 80140074 00000000 */   nop
    /* 4E478 80140078 D9D8030C */  jal        func_800F6364
    /* 4E47C 8014007C 00000000 */   nop
    /* 4E480 80140080 D9D8030C */  jal        func_800F6364
    /* 4E484 80140084 00000000 */   nop
    /* 4E488 80140088 D9D8030C */  jal        func_800F6364
    /* 4E48C 8014008C 00000000 */   nop
    /* 4E490 80140090 D9D8030C */  jal        func_800F6364
    /* 4E494 80140094 00000000 */   nop
    /* 4E498 80140098 56D6030C */  jal        func_800F5958
    /* 4E49C 8014009C 70000424 */   addiu     $a0, $zero, 0x70
    /* 4E4A0 801400A0 F5D4030C */  jal        func_800F53D4
    /* 4E4A4 801400A4 00000000 */   nop
    /* 4E4A8 801400A8 A5FF4010 */  beqz       $v0, .L8013FF40
    /* 4E4AC 801400AC 00000000 */   nop
    /* 4E4B0 801400B0 77DC030C */  jal        func_800F71DC
    /* 4E4B4 801400B4 1C000424 */   addiu     $a0, $zero, 0x1C
    /* 4E4B8 801400B8 40DD030C */  jal        func_800F7500
    /* 4E4BC 801400BC 04000424 */   addiu     $a0, $zero, 0x4
    /* 4E4C0 801400C0 56D9030C */  jal        func_800F6558
    /* 4E4C4 801400C4 34010424 */   addiu     $a0, $zero, 0x134
  .L801400C8:
    /* 4E4C8 801400C8 F7E1030C */  jal        func_800F87DC
    /* 4E4CC 801400CC 147D0424 */   addiu     $a0, $zero, 0x7D14
    /* 4E4D0 801400D0 A8D7030C */  jal        func_800F5EA0
    /* 4E4D4 801400D4 00000000 */   nop
    /* 4E4D8 801400D8 19D7030C */  jal        func_800F5C64
    /* 4E4DC 801400DC 02020424 */   addiu     $a0, $zero, 0x202
    /* 4E4E0 801400E0 05004014 */  bnez       $v0, .L801400F8
    /* 4E4E4 801400E4 00000000 */   nop
    /* 4E4E8 801400E8 04D5030C */  jal        func_800F5410
    /* 4E4EC 801400EC 00000000 */   nop
    /* 4E4F0 801400F0 19D0030C */  jal        func_800F4064
    /* 4E4F4 801400F4 04000424 */   addiu     $a0, $zero, 0x4
  .L801400F8:
    /* 4E4F8 801400F8 D9D8030C */  jal        func_800F6364
    /* 4E4FC 801400FC 00000000 */   nop
    /* 4E500 80140100 D9D8030C */  jal        func_800F6364
    /* 4E504 80140104 00000000 */   nop
    /* 4E508 80140108 D9D8030C */  jal        func_800F6364
    /* 4E50C 8014010C 00000000 */   nop
    /* 4E510 80140110 D9D8030C */  jal        func_800F6364
    /* 4E514 80140114 00000000 */   nop
    /* 4E518 80140118 56D6030C */  jal        func_800F5958
    /* 4E51C 8014011C 80000424 */   addiu     $a0, $zero, 0x80
    /* 4E520 80140120 F5D4030C */  jal        func_800F53D4
    /* 4E524 80140124 00000000 */   nop
    /* 4E528 80140128 E7FF4010 */  beqz       $v0, .L801400C8
    /* 4E52C 8014012C 00000000 */   nop
    /* 4E530 80140130 C7E5030C */  jal        func_800F971C
    /* 4E534 80140134 00000000 */   nop
    /* 4E538 80140138 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 4E53C 8014013C 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 4E540 80140140 1A80043C */  lui        $a0, %hi(D_8019ED54)
    /* 4E544 80140144 54ED848C */  lw         $a0, %lo(D_8019ED54)($a0)
    /* 4E548 80140148 00004394 */  lhu        $v1, 0x0($v0)
    /* 4E54C 8014014C 00000000 */  nop
    /* 4E550 80140150 000083A4 */  sh         $v1, 0x0($a0)
  .L80140154:
    /* 4E554 80140154 56D9030C */  jal        func_800F6558
    /* 4E558 80140158 00010424 */   addiu     $a0, $zero, 0x100
    /* 4E55C 8014015C F7E1030C */  jal        func_800F87DC
    /* 4E560 80140160 328C0434 */   ori       $a0, $zero, 0x8C32
    /* 4E564 80140164 56D9030C */  jal        func_800F6558
    /* 4E568 80140168 60010424 */   addiu     $a0, $zero, 0x160
    /* 4E56C 8014016C F7E1030C */  jal        func_800F87DC
    /* 4E570 80140170 348C0434 */   ori       $a0, $zero, 0x8C34
    /* 4E574 80140174 D9D8030C */  jal        func_800F6364
    /* 4E578 80140178 00000000 */   nop
    /* 4E57C 8014017C D9D8030C */  jal        func_800F6364
    /* 4E580 80140180 00000000 */   nop
    /* 4E584 80140184 D9D8030C */  jal        func_800F6364
    /* 4E588 80140188 00000000 */   nop
    /* 4E58C 8014018C D9D8030C */  jal        func_800F6364
    /* 4E590 80140190 00000000 */   nop
    /* 4E594 80140194 56D6030C */  jal        func_800F5958
    /* 4E598 80140198 80000424 */   addiu     $a0, $zero, 0x80
    /* 4E59C 8014019C F5D4030C */  jal        func_800F53D4
    /* 4E5A0 801401A0 00000000 */   nop
    /* 4E5A4 801401A4 EBFF4010 */  beqz       $v0, .L80140154
    /* 4E5A8 801401A8 00000000 */   nop
    /* 4E5AC 801401AC C7E5030C */  jal        func_800F971C
    /* 4E5B0 801401B0 00000000 */   nop
    /* 4E5B4 801401B4 98E5030C */  jal        func_800F9660
    /* 4E5B8 801401B8 20000424 */   addiu     $a0, $zero, 0x20
    /* 4E5BC 801401BC 1000BF8F */  lw         $ra, 0x10($sp)
    /* 4E5C0 801401C0 00000000 */  nop
    /* 4E5C4 801401C4 0800E003 */  jr         $ra
    /* 4E5C8 801401C8 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8013FA08
