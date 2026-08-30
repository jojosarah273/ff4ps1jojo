nonmatching func_8014FA4C, 0x438

glabel func_8014FA4C
    /* 5DE4C 8014FA4C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 5DE50 8014FA50 1000BFAF */  sw         $ra, 0x10($sp)
    /* 5DE54 8014FA54 59D9030C */  jal        func_800F6564
    /* 5DE58 8014FA58 D0F20434 */   ori       $a0, $zero, 0xF2D0
    /* 5DE5C 8014FA5C 5DD5030C */  jal        func_800F5574
    /* 5DE60 8014FA60 07000424 */   addiu     $a0, $zero, 0x7
    /* 5DE64 8014FA64 F5D4030C */  jal        func_800F53D4
    /* 5DE68 8014FA68 00000000 */   nop
    /* 5DE6C 8014FA6C 11004014 */  bnez       $v0, .L8014FAB4
    /* 5DE70 8014FA70 00000000 */   nop
    /* 5DE74 8014FA74 5DD5030C */  jal        func_800F5574
    /* 5DE78 8014FA78 01000424 */   addiu     $a0, $zero, 0x1
    /* 5DE7C 8014FA7C F5D4030C */  jal        func_800F53D4
    /* 5DE80 8014FA80 00000000 */   nop
    /* 5DE84 8014FA84 0B004014 */  bnez       $v0, .L8014FAB4
    /* 5DE88 8014FA88 00000000 */   nop
    /* 5DE8C 8014FA8C 5DD5030C */  jal        func_800F5574
    /* 5DE90 8014FA90 04000424 */   addiu     $a0, $zero, 0x4
    /* 5DE94 8014FA94 F5D4030C */  jal        func_800F53D4
    /* 5DE98 8014FA98 00000000 */   nop
    /* 5DE9C 8014FA9C 05004014 */  bnez       $v0, .L8014FAB4
    /* 5DEA0 8014FAA0 00000000 */   nop
    /* 5DEA4 8014FAA4 53D9030C */  jal        func_800F654C
    /* 5DEA8 8014FAA8 30000424 */   addiu     $a0, $zero, 0x30
    /* 5DEAC 8014FAAC AF3E0508 */  j          .L8014FABC
    /* 5DEB0 8014FAB0 00000000 */   nop
  .L8014FAB4:
    /* 5DEB4 8014FAB4 53D9030C */  jal        func_800F654C
    /* 5DEB8 8014FAB8 20000424 */   addiu     $a0, $zero, 0x20
  .L8014FABC:
    /* 5DEBC 8014FABC 93E0030C */  jal        func_800F824C
    /* 5DEC0 8014FAC0 1A000424 */   addiu     $a0, $zero, 0x1A
    /* 5DEC4 8014FAC4 59D9030C */  jal        func_800F6564
    /* 5DEC8 8014FAC8 4DF20434 */   ori       $a0, $zero, 0xF24D
    /* 5DECC 8014FACC 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 5DED0 8014FAD0 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 5DED4 8014FAD4 00000000 */  nop
    /* 5DED8 8014FAD8 00006290 */  lbu        $v0, 0x0($v1)
    /* 5DEDC 8014FADC 12000424 */  addiu      $a0, $zero, 0x12
    /* 5DEE0 8014FAE0 C0100200 */  sll        $v0, $v0, 3
    /* 5DEE4 8014FAE4 93E0030C */  jal        func_800F824C
    /* 5DEE8 8014FAE8 000062A0 */   sb        $v0, 0x0($v1)
    /* 5DEEC 8014FAEC 59D9030C */  jal        func_800F6564
    /* 5DEF0 8014FAF0 4EF20434 */   ori       $a0, $zero, 0xF24E
    /* 5DEF4 8014FAF4 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 5DEF8 8014FAF8 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 5DEFC 8014FAFC 00000000 */  nop
    /* 5DF00 8014FB00 00006290 */  lbu        $v0, 0x0($v1)
    /* 5DF04 8014FB04 13000424 */  addiu      $a0, $zero, 0x13
    /* 5DF08 8014FB08 C0100200 */  sll        $v0, $v0, 3
    /* 5DF0C 8014FB0C 93E0030C */  jal        func_800F824C
    /* 5DF10 8014FB10 000062A0 */   sb        $v0, 0x0($v1)
    /* 5DF14 8014FB14 59D9030C */  jal        func_800F6564
    /* 5DF18 8014FB18 4AF20434 */   ori       $a0, $zero, 0xF24A
    /* 5DF1C 8014FB1C 20D5030C */  jal        func_800F5480
    /* 5DF20 8014FB20 00000000 */   nop
    /* 5DF24 8014FB24 0FCF030C */  jal        func_800F3C3C
    /* 5DF28 8014FB28 12000424 */   addiu     $a0, $zero, 0x12
    /* 5DF2C 8014FB2C D2DF030C */  jal        func_800F7F48
    /* 5DF30 8014FB30 21204000 */   addu      $a0, $v0, $zero
    /* 5DF34 8014FB34 93E0030C */  jal        func_800F824C
    /* 5DF38 8014FB38 12000424 */   addiu     $a0, $zero, 0x12
    /* 5DF3C 8014FB3C 59D9030C */  jal        func_800F6564
    /* 5DF40 8014FB40 4BF20434 */   ori       $a0, $zero, 0xF24B
    /* 5DF44 8014FB44 20D5030C */  jal        func_800F5480
    /* 5DF48 8014FB48 00000000 */   nop
    /* 5DF4C 8014FB4C 0FCF030C */  jal        func_800F3C3C
    /* 5DF50 8014FB50 13000424 */   addiu     $a0, $zero, 0x13
    /* 5DF54 8014FB54 D2DF030C */  jal        func_800F7F48
    /* 5DF58 8014FB58 21204000 */   addu      $a0, $v0, $zero
    /* 5DF5C 8014FB5C 93E0030C */  jal        func_800F824C
    /* 5DF60 8014FB60 13000424 */   addiu     $a0, $zero, 0x13
    /* 5DF64 8014FB64 59D9030C */  jal        func_800F6564
    /* 5DF68 8014FB68 48F20434 */   ori       $a0, $zero, 0xF248
    /* 5DF6C 8014FB6C 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 5DF70 8014FB70 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 5DF74 8014FB74 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 5DF78 8014FB78 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 5DF7C 8014FB7C 00004394 */  lhu        $v1, 0x0($v0)
    /* 5DF80 8014FB80 1C000424 */  addiu      $a0, $zero, 0x1C
    /* 5DF84 8014FB84 5BE3030C */  jal        func_800F8D6C
    /* 5DF88 8014FB88 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 5DF8C 8014FB8C 59D9030C */  jal        func_800F6564
    /* 5DF90 8014FB90 49F20434 */   ori       $a0, $zero, 0xF249
    /* 5DF94 8014FB94 91E5030C */  jal        func_800F9644
    /* 5DF98 8014FB98 20000424 */   addiu     $a0, $zero, 0x20
    /* 5DF9C 8014FB9C 1A80033C */  lui        $v1, %hi(D_8019ED44)
    /* 5DFA0 8014FBA0 44ED638C */  lw         $v1, %lo(D_8019ED44)($v1)
    /* 5DFA4 8014FBA4 00000000 */  nop
    /* 5DFA8 8014FBA8 00006294 */  lhu        $v0, 0x0($v1)
    /* 5DFAC 8014FBAC 00000000 */  nop
    /* 5DFB0 8014FBB0 C0110200 */  sll        $v0, $v0, 7
    /* 5DFB4 8014FBB4 04D5030C */  jal        func_800F5410
    /* 5DFB8 8014FBB8 000062A4 */   sh        $v0, 0x0($v1)
    /* 5DFBC 8014FBBC 0FCF030C */  jal        func_800F3C3C
    /* 5DFC0 8014FBC0 1C000424 */   addiu     $a0, $zero, 0x1C
    /* 5DFC4 8014FBC4 E5CF030C */  jal        func_800F3F94
    /* 5DFC8 8014FBC8 21204000 */   addu      $a0, $v0, $zero
    /* 5DFCC 8014FBCC 5BD4030C */  jal        func_800F516C
    /* 5DFD0 8014FBD0 00000000 */   nop
    /* 5DFD4 8014FBD4 1A80033C */  lui        $v1, %hi(D_8019ED44)
    /* 5DFD8 8014FBD8 44ED638C */  lw         $v1, %lo(D_8019ED44)($v1)
    /* 5DFDC 8014FBDC 1A80043C */  lui        $a0, %hi(D_8019ED54)
    /* 5DFE0 8014FBE0 54ED848C */  lw         $a0, %lo(D_8019ED54)($a0)
    /* 5DFE4 8014FBE4 00006294 */  lhu        $v0, 0x0($v1)
    /* 5DFE8 8014FBE8 C7E5030C */  jal        func_800F971C
    /* 5DFEC 8014FBEC 000082A4 */   sh        $v0, 0x0($a0)
    /* 5DFF0 8014FBF0 98E5030C */  jal        func_800F9660
    /* 5DFF4 8014FBF4 20000424 */   addiu     $a0, $zero, 0x20
    /* 5DFF8 8014FBF8 0F00043C */  lui        $a0, (0xFDDE0 >> 16)
    /* 5DFFC 8014FBFC 1ADB030C */  jal        func_800F6C68
    /* 5E000 8014FC00 E0DD8434 */   ori       $a0, $a0, (0xFDDE0 & 0xFFFF)
    /* 5E004 8014FC04 93E0030C */  jal        func_800F824C
    /* 5E008 8014FC08 1C000424 */   addiu     $a0, $zero, 0x1C
    /* 5E00C 8014FC0C 0F00043C */  lui        $a0, (0xFDDE1 >> 16)
    /* 5E010 8014FC10 1ADB030C */  jal        func_800F6C68
    /* 5E014 8014FC14 E1DD8434 */   ori       $a0, $a0, (0xFDDE1 & 0xFFFF)
    /* 5E018 8014FC18 93E0030C */  jal        func_800F824C
    /* 5E01C 8014FC1C 1D000424 */   addiu     $a0, $zero, 0x1D
    /* 5E020 8014FC20 53D9030C */  jal        func_800F654C
    /* 5E024 8014FC24 0F000424 */   addiu     $a0, $zero, 0xF
    /* 5E028 8014FC28 93E0030C */  jal        func_800F824C
    /* 5E02C 8014FC2C 1E000424 */   addiu     $a0, $zero, 0x1E
    /* 5E030 8014FC30 84DC030C */  jal        func_800F7210
    /* 5E034 8014FC34 4DF20434 */   ori       $a0, $zero, 0xF24D
    /* 5E038 8014FC38 5BE3030C */  jal        func_800F8D6C
    /* 5E03C 8014FC3C 10000424 */   addiu     $a0, $zero, 0x10
    /* 5E040 8014FC40 9CDC030C */  jal        func_800F7270
    /* 5E044 8014FC44 12000424 */   addiu     $a0, $zero, 0x12
    /* 5E048 8014FC48 5BE3030C */  jal        func_800F8D6C
    /* 5E04C 8014FC4C 14000424 */   addiu     $a0, $zero, 0x14
    /* 5E050 8014FC50 40DD030C */  jal        func_800F7500
    /* 5E054 8014FC54 21200000 */   addu      $a0, $zero, $zero
  .L8014FC58:
    /* 5E058 8014FC58 AADB030C */  jal        func_800F6EA8
    /* 5E05C 8014FC5C 1C000424 */   addiu     $a0, $zero, 0x1C
    /* 5E060 8014FC60 0DD9030C */  jal        func_800F6434
    /* 5E064 8014FC64 80000424 */   addiu     $a0, $zero, 0x80
    /* 5E068 8014FC68 0F004014 */  bnez       $v0, .L8014FCA8
    /* 5E06C 8014FC6C 00000000 */   nop
    /* 5E070 8014FC70 9CDC030C */  jal        func_800F7270
    /* 5E074 8014FC74 1C000424 */   addiu     $a0, $zero, 0x1C
    /* 5E078 8014FC78 D9D8030C */  jal        func_800F6364
    /* 5E07C 8014FC7C 00000000 */   nop
    /* 5E080 8014FC80 5BE3030C */  jal        func_800F8D6C
    /* 5E084 8014FC84 1C000424 */   addiu     $a0, $zero, 0x1C
    /* 5E088 8014FC88 7099050C */  jal        func_801665C0
    /* 5E08C 8014FC8C 00000000 */   nop
    /* 5E090 8014FC90 F0D4030C */  jal        func_800F53C0
    /* 5E094 8014FC94 00000000 */   nop
    /* 5E098 8014FC98 2B004010 */  beqz       $v0, .L8014FD48
    /* 5E09C 8014FC9C 00000000 */   nop
    /* 5E0A0 8014FCA0 163F0508 */  j          .L8014FC58
    /* 5E0A4 8014FCA4 00000000 */   nop
  .L8014FCA8:
    /* 5E0A8 8014FCA8 5DD5030C */  jal        func_800F5574
    /* 5E0AC 8014FCAC FF000424 */   addiu     $a0, $zero, 0xFF
    /* 5E0B0 8014FCB0 F5D4030C */  jal        func_800F53D4
    /* 5E0B4 8014FCB4 00000000 */   nop
    /* 5E0B8 8014FCB8 23004014 */  bnez       $v0, .L8014FD48
    /* 5E0BC 8014FCBC 00000000 */   nop
    /* 5E0C0 8014FCC0 93E0030C */  jal        func_800F824C
    /* 5E0C4 8014FCC4 16000424 */   addiu     $a0, $zero, 0x16
    /* 5E0C8 8014FCC8 9CDC030C */  jal        func_800F7270
    /* 5E0CC 8014FCCC 1C000424 */   addiu     $a0, $zero, 0x1C
    /* 5E0D0 8014FCD0 D9D8030C */  jal        func_800F6364
    /* 5E0D4 8014FCD4 00000000 */   nop
    /* 5E0D8 8014FCD8 5BE3030C */  jal        func_800F8D6C
    /* 5E0DC 8014FCDC 1C000424 */   addiu     $a0, $zero, 0x1C
    /* 5E0E0 8014FCE0 AADB030C */  jal        func_800F6EA8
    /* 5E0E4 8014FCE4 1C000424 */   addiu     $a0, $zero, 0x1C
    /* 5E0E8 8014FCE8 93E0030C */  jal        func_800F824C
    /* 5E0EC 8014FCEC 17000424 */   addiu     $a0, $zero, 0x17
    /* 5E0F0 8014FCF0 9CDC030C */  jal        func_800F7270
    /* 5E0F4 8014FCF4 1C000424 */   addiu     $a0, $zero, 0x1C
    /* 5E0F8 8014FCF8 D9D8030C */  jal        func_800F6364
    /* 5E0FC 8014FCFC 00000000 */   nop
    /* 5E100 8014FD00 5BE3030C */  jal        func_800F8D6C
    /* 5E104 8014FD04 1C000424 */   addiu     $a0, $zero, 0x1C
  .L8014FD08:
    /* 5E108 8014FD08 8CD9030C */  jal        func_800F6630
    /* 5E10C 8014FD0C 16000424 */   addiu     $a0, $zero, 0x16
    /* 5E110 8014FD10 7099050C */  jal        func_801665C0
    /* 5E114 8014FD14 00000000 */   nop
    /* 5E118 8014FD18 F0D4030C */  jal        func_800F53C0
    /* 5E11C 8014FD1C 00000000 */   nop
    /* 5E120 8014FD20 09004010 */  beqz       $v0, .L8014FD48
    /* 5E124 8014FD24 00000000 */   nop
    /* 5E128 8014FD28 68D7030C */  jal        func_800F5DA0
    /* 5E12C 8014FD2C 17000424 */   addiu     $a0, $zero, 0x17
    /* 5E130 8014FD30 E3D6030C */  jal        func_800F5B8C
    /* 5E134 8014FD34 02020424 */   addiu     $a0, $zero, 0x202
    /* 5E138 8014FD38 F3FF4014 */  bnez       $v0, .L8014FD08
    /* 5E13C 8014FD3C 00000000 */   nop
    /* 5E140 8014FD40 163F0508 */  j          .L8014FC58
    /* 5E144 8014FD44 00000000 */   nop
  .L8014FD48:
    /* 5E148 8014FD48 94E3030C */  jal        func_800F8E50
    /* 5E14C 8014FD4C B2F20434 */   ori       $a0, $zero, 0xF2B2
    /* 5E150 8014FD50 59D9030C */  jal        func_800F6564
    /* 5E154 8014FD54 A0F20434 */   ori       $a0, $zero, 0xF2A0
    /* 5E158 8014FD58 5DD5030C */  jal        func_800F5574
    /* 5E15C 8014FD5C 04000424 */   addiu     $a0, $zero, 0x4
    /* 5E160 8014FD60 F5D4030C */  jal        func_800F53D4
    /* 5E164 8014FD64 00000000 */   nop
    /* 5E168 8014FD68 0D004014 */  bnez       $v0, .L8014FDA0
    /* 5E16C 8014FD6C 00000000 */   nop
    /* 5E170 8014FD70 5DD5030C */  jal        func_800F5574
    /* 5E174 8014FD74 03000424 */   addiu     $a0, $zero, 0x3
    /* 5E178 8014FD78 F5D4030C */  jal        func_800F53D4
    /* 5E17C 8014FD7C 00000000 */   nop
    /* 5E180 8014FD80 07004014 */  bnez       $v0, .L8014FDA0
    /* 5E184 8014FD84 00000000 */   nop
    /* 5E188 8014FD88 5DD5030C */  jal        func_800F5574
    /* 5E18C 8014FD8C 02000424 */   addiu     $a0, $zero, 0x2
    /* 5E190 8014FD90 F5D4030C */  jal        func_800F53D4
    /* 5E194 8014FD94 00000000 */   nop
    /* 5E198 8014FD98 36004010 */  beqz       $v0, .L8014FE74
    /* 5E19C 8014FD9C 00000000 */   nop
  .L8014FDA0:
    /* 5E1A0 8014FDA0 77DC030C */  jal        func_800F71DC
    /* 5E1A4 8014FDA4 21200000 */   addu      $a0, $zero, $zero
    /* 5E1A8 8014FDA8 40DD030C */  jal        func_800F7500
    /* 5E1AC 8014FDAC 21200000 */   addu      $a0, $zero, $zero
  .L8014FDB0:
    /* 5E1B0 8014FDB0 5CDB030C */  jal        func_800F6D70
    /* 5E1B4 8014FDB4 E6EB0434 */   ori       $a0, $zero, 0xEBE6
    /* 5E1B8 8014FDB8 04D5030C */  jal        func_800F5410
    /* 5E1BC 8014FDBC 00000000 */   nop
    /* 5E1C0 8014FDC0 1A80023C */  lui        $v0, %hi(D_8019ED54)
    /* 5E1C4 8014FDC4 54ED428C */  lw         $v0, %lo(D_8019ED54)($v0)
    /* 5E1C8 8014FDC8 00000000 */  nop
    /* 5E1CC 8014FDCC 00004394 */  lhu        $v1, 0x0($v0)
    /* 5E1D0 8014FDD0 B0F30434 */  ori        $a0, $zero, 0xF3B0
    /* 5E1D4 8014FDD4 C1CE030C */  jal        func_800F3B04
    /* 5E1D8 8014FDD8 21206400 */   addu      $a0, $v1, $a0
    /* 5E1DC 8014FDDC CECF030C */  jal        func_800F3F38
    /* 5E1E0 8014FDE0 21204000 */   addu      $a0, $v0, $zero
    /* 5E1E4 8014FDE4 58E2030C */  jal        func_800F8960
    /* 5E1E8 8014FDE8 E6EB0434 */   ori       $a0, $zero, 0xEBE6
    /* 5E1EC 8014FDEC 5CDB030C */  jal        func_800F6D70
    /* 5E1F0 8014FDF0 E7EB0434 */   ori       $a0, $zero, 0xEBE7
    /* 5E1F4 8014FDF4 04D5030C */  jal        func_800F5410
    /* 5E1F8 8014FDF8 00000000 */   nop
    /* 5E1FC 8014FDFC 1A80023C */  lui        $v0, %hi(D_8019ED54)
    /* 5E200 8014FE00 54ED428C */  lw         $v0, %lo(D_8019ED54)($v0)
    /* 5E204 8014FE04 00000000 */  nop
    /* 5E208 8014FE08 00004394 */  lhu        $v1, 0x0($v0)
    /* 5E20C 8014FE0C B1F30434 */  ori        $a0, $zero, 0xF3B1
    /* 5E210 8014FE10 C1CE030C */  jal        func_800F3B04
    /* 5E214 8014FE14 21206400 */   addu      $a0, $v1, $a0
    /* 5E218 8014FE18 CECF030C */  jal        func_800F3F38
    /* 5E21C 8014FE1C 21204000 */   addu      $a0, $v0, $zero
    /* 5E220 8014FE20 58E2030C */  jal        func_800F8960
    /* 5E224 8014FE24 E7EB0434 */   ori       $a0, $zero, 0xEBE7
    /* 5E228 8014FE28 1A80033C */  lui        $v1, %hi(D_8019ED54)
    /* 5E22C 8014FE2C 54ED638C */  lw         $v1, %lo(D_8019ED54)($v1)
    /* 5E230 8014FE30 00000000 */  nop
    /* 5E234 8014FE34 00006294 */  lhu        $v0, 0x0($v1)
    /* 5E238 8014FE38 00000000 */  nop
    /* 5E23C 8014FE3C 02004224 */  addiu      $v0, $v0, 0x2
    /* 5E240 8014FE40 000062A4 */  sh         $v0, 0x0($v1)
    /* 5E244 8014FE44 1A80053C */  lui        $a1, %hi(D_8019ED58)
    /* 5E248 8014FE48 58EDA58C */  lw         $a1, %lo(D_8019ED58)($a1)
    /* 5E24C 8014FE4C 00000000 */  nop
    /* 5E250 8014FE50 0000A294 */  lhu        $v0, 0x0($a1)
    /* 5E254 8014FE54 24000424 */  addiu      $a0, $zero, 0x24
    /* 5E258 8014FE58 04004224 */  addiu      $v0, $v0, 0x4
    /* 5E25C 8014FE5C A4D6030C */  jal        func_800F5A90
    /* 5E260 8014FE60 0000A2A4 */   sh        $v0, 0x0($a1)
    /* 5E264 8014FE64 F5D4030C */  jal        func_800F53D4
    /* 5E268 8014FE68 00000000 */   nop
    /* 5E26C 8014FE6C D0FF4010 */  beqz       $v0, .L8014FDB0
    /* 5E270 8014FE70 00000000 */   nop
  .L8014FE74:
    /* 5E274 8014FE74 1000BF8F */  lw         $ra, 0x10($sp)
    /* 5E278 8014FE78 00000000 */  nop
    /* 5E27C 8014FE7C 0800E003 */  jr         $ra
    /* 5E280 8014FE80 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8014FA4C
