nonmatching func_8012FBB0, 0x3EC

glabel func_8012FBB0
    /* 3DFB0 8012FBB0 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 3DFB4 8012FBB4 1000BFAF */  sw         $ra, 0x10($sp)
    /* 3DFB8 8012FBB8 80E4030C */  jal        func_800F9200
    /* 3DFBC 8012FBBC 00000000 */   nop
    /* 3DFC0 8012FBC0 CCE4030C */  jal        func_800F9330
    /* 3DFC4 8012FBC4 00000000 */   nop
    /* 3DFC8 8012FBC8 5DD5030C */  jal        func_800F5574
    /* 3DFCC 8012FBCC 0E000424 */   addiu     $a0, $zero, 0xE
    /* 3DFD0 8012FBD0 F0D4030C */  jal        func_800F53C0
    /* 3DFD4 8012FBD4 00000000 */   nop
    /* 3DFD8 8012FBD8 25004010 */  beqz       $v0, .L8012FC70
    /* 3DFDC 8012FBDC 00000000 */   nop
    /* 3DFE0 8012FBE0 5DD5030C */  jal        func_800F5574
    /* 3DFE4 8012FBE4 1C000424 */   addiu     $a0, $zero, 0x1C
    /* 3DFE8 8012FBE8 F0D4030C */  jal        func_800F53C0
    /* 3DFEC 8012FBEC 00000000 */   nop
    /* 3DFF0 8012FBF0 1F004014 */  bnez       $v0, .L8012FC70
    /* 3DFF4 8012FBF4 00000000 */   nop
    /* 3DFF8 8012FBF8 62E0030C */  jal        func_800F8188
    /* 3DFFC 8012FBFC 871A0424 */   addiu     $a0, $zero, 0x1A87
    /* 3E000 8012FC00 E7E4030C */  jal        func_800F939C
    /* 3E004 8012FC04 00000000 */   nop
    /* 3E008 8012FC08 F2C2040C */  jal        func_80130BC8
    /* 3E00C 8012FC0C 00000000 */   nop
    /* 3E010 8012FC10 83E5030C */  jal        func_800F960C
    /* 3E014 8012FC14 00000000 */   nop
    /* 3E018 8012FC18 62E0030C */  jal        func_800F8188
    /* 3E01C 8012FC1C C41B0424 */   addiu     $a0, $zero, 0x1BC4
    /* 3E020 8012FC20 DDE3030C */  jal        func_800F8F74
    /* 3E024 8012FC24 C51B0424 */   addiu     $a0, $zero, 0x1BC5
    /* 3E028 8012FC28 8CD9030C */  jal        func_800F6630
    /* 3E02C 8012FC2C E8000424 */   addiu     $a0, $zero, 0xE8
    /* 3E030 8012FC30 AB93040C */  jal        func_80124EAC
    /* 3E034 8012FC34 00000000 */   nop
    /* 3E038 8012FC38 91E5030C */  jal        func_800F9644
    /* 3E03C 8012FC3C 20000424 */   addiu     $a0, $zero, 0x20
    /* 3E040 8012FC40 F8DA030C */  jal        func_800F6BE0
    /* 3E044 8012FC44 0B000424 */   addiu     $a0, $zero, 0xB
    /* 3E048 8012FC48 C1CE030C */  jal        func_800F3B04
    /* 3E04C 8012FC4C C41B0424 */   addiu     $a0, $zero, 0x1BC4
    /* 3E050 8012FC50 48D5030C */  jal        func_800F5520
    /* 3E054 8012FC54 21204000 */   addu      $a0, $v0, $zero
    /* 3E058 8012FC58 98E5030C */  jal        func_800F9660
    /* 3E05C 8012FC5C 20000424 */   addiu     $a0, $zero, 0x20
    /* 3E060 8012FC60 F0D4030C */  jal        func_800F53C0
    /* 3E064 8012FC64 00000000 */   nop
    /* 3E068 8012FC68 11004014 */  bnez       $v0, .L8012FCB0
    /* 3E06C 8012FC6C 00000000 */   nop
  .L8012FC70:
    /* 3E070 8012FC70 59D9030C */  jal        func_800F6564
    /* 3E074 8012FC74 C81B0424 */   addiu     $a0, $zero, 0x1BC8
    /* 3E078 8012FC78 0DD9030C */  jal        func_800F6434
    /* 3E07C 8012FC7C 02020424 */   addiu     $a0, $zero, 0x202
    /* 3E080 8012FC80 0B004014 */  bnez       $v0, .L8012FCB0
    /* 3E084 8012FC84 00000000 */   nop
  .L8012FC88:
    /* 3E088 8012FC88 8CD9030C */  jal        func_800F6630
    /* 3E08C 8012FC8C 34000424 */   addiu     $a0, $zero, 0x34
    /* 3E090 8012FC90 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 3E094 8012FC94 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 3E098 8012FC98 00000000 */  nop
    /* 3E09C 8012FC9C 00006290 */  lbu        $v0, 0x0($v1)
    /* 3E0A0 8012FCA0 00000000 */  nop
    /* 3E0A4 8012FCA4 04004234 */  ori        $v0, $v0, 0x4
    /* 3E0A8 8012FCA8 5CBF0408 */  j          .L8012FD70
    /* 3E0AC 8012FCAC 000062A0 */   sb        $v0, 0x0($v1)
  .L8012FCB0:
    /* 3E0B0 8012FCB0 59D9030C */  jal        func_800F6564
    /* 3E0B4 8012FCB4 871A0424 */   addiu     $a0, $zero, 0x1A87
    /* 3E0B8 8012FCB8 5DD5030C */  jal        func_800F5574
    /* 3E0BC 8012FCBC 12000424 */   addiu     $a0, $zero, 0x12
    /* 3E0C0 8012FCC0 F5D4030C */  jal        func_800F53D4
    /* 3E0C4 8012FCC4 00000000 */   nop
    /* 3E0C8 8012FCC8 27004014 */  bnez       $v0, .L8012FD68
    /* 3E0CC 8012FCCC 00000000 */   nop
    /* 3E0D0 8012FCD0 59D9030C */  jal        func_800F6564
    /* 3E0D4 8012FCD4 861A0424 */   addiu     $a0, $zero, 0x1A86
    /* 3E0D8 8012FCD8 92D0030C */  jal        func_800F4248
    /* 3E0DC 8012FCDC 28000424 */   addiu     $a0, $zero, 0x28
    /* 3E0E0 8012FCE0 48D0030C */  jal        func_800F4120
    /* 3E0E4 8012FCE4 02000424 */   addiu     $a0, $zero, 0x2
    /* 3E0E8 8012FCE8 1F004014 */  bnez       $v0, .L8012FD68
    /* 3E0EC 8012FCEC 00000000 */   nop
    /* 3E0F0 8012FCF0 92D0030C */  jal        func_800F4248
    /* 3E0F4 8012FCF4 20000424 */   addiu     $a0, $zero, 0x20
    /* 3E0F8 8012FCF8 48D0030C */  jal        func_800F4120
    /* 3E0FC 8012FCFC 02000424 */   addiu     $a0, $zero, 0x2
    /* 3E100 8012FD00 09004014 */  bnez       $v0, .L8012FD28
    /* 3E104 8012FD04 00000000 */   nop
    /* 3E108 8012FD08 59D9030C */  jal        func_800F6564
    /* 3E10C 8012FD0C 871A0424 */   addiu     $a0, $zero, 0x1A87
    /* 3E110 8012FD10 5DD5030C */  jal        func_800F5574
    /* 3E114 8012FD14 19000424 */   addiu     $a0, $zero, 0x19
    /* 3E118 8012FD18 F5D4030C */  jal        func_800F53D4
    /* 3E11C 8012FD1C 00000000 */   nop
    /* 3E120 8012FD20 11004014 */  bnez       $v0, .L8012FD68
    /* 3E124 8012FD24 00000000 */   nop
  .L8012FD28:
    /* 3E128 8012FD28 59D9030C */  jal        func_800F6564
    /* 3E12C 8012FD2C 861A0424 */   addiu     $a0, $zero, 0x1A86
    /* 3E130 8012FD30 92D0030C */  jal        func_800F4248
    /* 3E134 8012FD34 08000424 */   addiu     $a0, $zero, 0x8
    /* 3E138 8012FD38 48D0030C */  jal        func_800F4120
    /* 3E13C 8012FD3C 02000424 */   addiu     $a0, $zero, 0x2
    /* 3E140 8012FD40 D1FF4014 */  bnez       $v0, .L8012FC88
    /* 3E144 8012FD44 00000000 */   nop
    /* 3E148 8012FD48 59D9030C */  jal        func_800F6564
    /* 3E14C 8012FD4C 871A0424 */   addiu     $a0, $zero, 0x1A87
    /* 3E150 8012FD50 5DD5030C */  jal        func_800F5574
    /* 3E154 8012FD54 1A000424 */   addiu     $a0, $zero, 0x1A
    /* 3E158 8012FD58 F5D4030C */  jal        func_800F53D4
    /* 3E15C 8012FD5C 00000000 */   nop
    /* 3E160 8012FD60 C9FF4010 */  beqz       $v0, .L8012FC88
    /* 3E164 8012FD64 00000000 */   nop
  .L8012FD68:
    /* 3E168 8012FD68 8CD9030C */  jal        func_800F6630
    /* 3E16C 8012FD6C 34000424 */   addiu     $a0, $zero, 0x34
  .L8012FD70:
    /* 3E170 8012FD70 93E0030C */  jal        func_800F824C
    /* 3E174 8012FD74 DB000424 */   addiu     $a0, $zero, 0xDB
    /* 3E178 8012FD78 68E5030C */  jal        func_800F95A0
    /* 3E17C 8012FD7C 00000000 */   nop
    /* 3E180 8012FD80 F7E4030C */  jal        func_800F93DC
    /* 3E184 8012FD84 00000000 */   nop
    /* 3E188 8012FD88 80E4030C */  jal        func_800F9200
    /* 3E18C 8012FD8C 00000000 */   nop
    /* 3E190 8012FD90 91E5030C */  jal        func_800F9644
    /* 3E194 8012FD94 20000424 */   addiu     $a0, $zero, 0x20
    /* 3E198 8012FD98 1A80033C */  lui        $v1, %hi(D_8019ED54)
    /* 3E19C 8012FD9C 54ED638C */  lw         $v1, %lo(D_8019ED54)($v1)
    /* 3E1A0 8012FDA0 1A80043C */  lui        $a0, %hi(D_8019ED44)
    /* 3E1A4 8012FDA4 44ED848C */  lw         $a0, %lo(D_8019ED44)($a0)
    /* 3E1A8 8012FDA8 00006294 */  lhu        $v0, 0x0($v1)
    /* 3E1AC 8012FDAC 04D5030C */  jal        func_800F5410
    /* 3E1B0 8012FDB0 000082A4 */   sh        $v0, 0x0($a0)
    /* 3E1B4 8012FDB4 0FCF030C */  jal        func_800F3C3C
    /* 3E1B8 8012FDB8 29000424 */   addiu     $a0, $zero, 0x29
    /* 3E1BC 8012FDBC E5CF030C */  jal        func_800F3F94
    /* 3E1C0 8012FDC0 21204000 */   addu      $a0, $v0, $zero
    /* 3E1C4 8012FDC4 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 3E1C8 8012FDC8 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 3E1CC 8012FDCC 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 3E1D0 8012FDD0 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 3E1D4 8012FDD4 00004394 */  lhu        $v1, 0x0($v0)
    /* 3E1D8 8012FDD8 20000424 */  addiu      $a0, $zero, 0x20
    /* 3E1DC 8012FDDC 98E5030C */  jal        func_800F9660
    /* 3E1E0 8012FDE0 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 3E1E4 8012FDE4 F7E4030C */  jal        func_800F93DC
    /* 3E1E8 8012FDE8 00000000 */   nop
    /* 3E1EC 8012FDEC 9BE4030C */  jal        func_800F926C
    /* 3E1F0 8012FDF0 00000000 */   nop
    /* 3E1F4 8012FDF4 CCE4030C */  jal        func_800F9330
    /* 3E1F8 8012FDF8 00000000 */   nop
    /* 3E1FC 8012FDFC E7E4030C */  jal        func_800F939C
    /* 3E200 8012FE00 00000000 */   nop
    /* 3E204 8012FE04 52CF030C */  jal        func_800F3D48
    /* 3E208 8012FE08 00000000 */   nop
    /* 3E20C 8012FE0C 53D9030C */  jal        func_800F654C
    /* 3E210 8012FE10 21200000 */   addu      $a0, $zero, $zero
    /* 3E214 8012FE14 52CF030C */  jal        func_800F3D48
    /* 3E218 8012FE18 00000000 */   nop
    /* 3E21C 8012FE1C 91E5030C */  jal        func_800F9644
    /* 3E220 8012FE20 20000424 */   addiu     $a0, $zero, 0x20
    /* 3E224 8012FE24 5BD4030C */  jal        func_800F516C
    /* 3E228 8012FE28 00000000 */   nop
    /* 3E22C 8012FE2C 9DE0030C */  jal        func_800F8274
    /* 3E230 8012FE30 45000424 */   addiu     $a0, $zero, 0x45
    /* 3E234 8012FE34 5BD4030C */  jal        func_800F516C
    /* 3E238 8012FE38 00000000 */   nop
    /* 3E23C 8012FE3C 14D4030C */  jal        func_800F5050
    /* 3E240 8012FE40 00000000 */   nop
    /* 3E244 8012FE44 0FCF030C */  jal        func_800F3C3C
    /* 3E248 8012FE48 45000424 */   addiu     $a0, $zero, 0x45
    /* 3E24C 8012FE4C E5CF030C */  jal        func_800F3F94
    /* 3E250 8012FE50 21204000 */   addu      $a0, $v0, $zero
    /* 3E254 8012FE54 19D0030C */  jal        func_800F4064
    /* 3E258 8012FE58 00890434 */   ori       $a0, $zero, 0x8900
    /* 3E25C 8012FE5C 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 3E260 8012FE60 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 3E264 8012FE64 1A80053C */  lui        $a1, %hi(D_8019ED58)
    /* 3E268 8012FE68 58EDA58C */  lw         $a1, %lo(D_8019ED58)($a1)
    /* 3E26C 8012FE6C 00004394 */  lhu        $v1, 0x0($v0)
    /* 3E270 8012FE70 20000424 */  addiu      $a0, $zero, 0x20
    /* 3E274 8012FE74 98E5030C */  jal        func_800F9660
    /* 3E278 8012FE78 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 3E27C 8012FE7C 53D9030C */  jal        func_800F654C
    /* 3E280 8012FE80 0F000424 */   addiu     $a0, $zero, 0xF
    /* 3E284 8012FE84 80E4030C */  jal        func_800F9200
    /* 3E288 8012FE88 00000000 */   nop
    /* 3E28C 8012FE8C 12E5030C */  jal        func_800F9448
    /* 3E290 8012FE90 00000000 */   nop
    /* 3E294 8012FE94 5CDB030C */  jal        func_800F6D70
    /* 3E298 8012FE98 21200000 */   addu      $a0, $zero, $zero
    /* 3E29C 8012FE9C EFD8030C */  jal        func_800F63BC
    /* 3E2A0 8012FEA0 00000000 */   nop
    /* 3E2A4 8012FEA4 7E00043C */  lui        $a0, (0x7E0040 >> 16)
    /* 3E2A8 8012FEA8 17E2030C */  jal        func_800F885C
    /* 3E2AC 8012FEAC 40008434 */   ori       $a0, $a0, (0x7E0040 & 0xFFFF)
    /* 3E2B0 8012FEB0 53D9030C */  jal        func_800F654C
    /* 3E2B4 8012FEB4 FF000424 */   addiu     $a0, $zero, 0xFF
    /* 3E2B8 8012FEB8 17E2030C */  jal        func_800F885C
    /* 3E2BC 8012FEBC 7E00043C */   lui       $a0, (0x7E0000 >> 16)
    /* 3E2C0 8012FEC0 D9D8030C */  jal        func_800F6364
    /* 3E2C4 8012FEC4 00000000 */   nop
    /* 3E2C8 8012FEC8 8CD9030C */  jal        func_800F6630
    /* 3E2CC 8012FECC DB000424 */   addiu     $a0, $zero, 0xDB
    /* 3E2D0 8012FED0 17E2030C */  jal        func_800F885C
    /* 3E2D4 8012FED4 7E00043C */   lui       $a0, (0x7E0000 >> 16)
    /* 3E2D8 8012FED8 7E00043C */  lui        $a0, (0x7E0040 >> 16)
    /* 3E2DC 8012FEDC 17E2030C */  jal        func_800F885C
    /* 3E2E0 8012FEE0 40008434 */   ori       $a0, $a0, (0x7E0040 & 0xFFFF)
    /* 3E2E4 8012FEE4 D9D8030C */  jal        func_800F6364
    /* 3E2E8 8012FEE8 00000000 */   nop
    /* 3E2EC 8012FEEC 53D9030C */  jal        func_800F654C
    /* 3E2F0 8012FEF0 05000424 */   addiu     $a0, $zero, 0x5
    /* 3E2F4 8012FEF4 93E0030C */  jal        func_800F824C
    /* 3E2F8 8012FEF8 45000424 */   addiu     $a0, $zero, 0x45
  .L8012FEFC:
    /* 3E2FC 8012FEFC 5CDB030C */  jal        func_800F6D70
    /* 3E300 8012FF00 21200000 */   addu      $a0, $zero, $zero
    /* 3E304 8012FF04 6D91040C */  jal        func_801245B4
    /* 3E308 8012FF08 00000000 */   nop
    /* 3E30C 8012FF0C 17E2030C */  jal        func_800F885C
    /* 3E310 8012FF10 7E00043C */   lui       $a0, (0x7E0000 >> 16)
    /* 3E314 8012FF14 52CF030C */  jal        func_800F3D48
    /* 3E318 8012FF18 00000000 */   nop
    /* 3E31C 8012FF1C 7E00043C */  lui        $a0, (0x7E0040 >> 16)
    /* 3E320 8012FF20 17E2030C */  jal        func_800F885C
    /* 3E324 8012FF24 40008434 */   ori       $a0, $a0, (0x7E0040 & 0xFFFF)
    /* 3E328 8012FF28 D9D8030C */  jal        func_800F6364
    /* 3E32C 8012FF2C 00000000 */   nop
    /* 3E330 8012FF30 8CD9030C */  jal        func_800F6630
    /* 3E334 8012FF34 DB000424 */   addiu     $a0, $zero, 0xDB
    /* 3E338 8012FF38 17E2030C */  jal        func_800F885C
    /* 3E33C 8012FF3C 7E00043C */   lui       $a0, (0x7E0000 >> 16)
    /* 3E340 8012FF40 7E00043C */  lui        $a0, (0x7E0040 >> 16)
    /* 3E344 8012FF44 17E2030C */  jal        func_800F885C
    /* 3E348 8012FF48 40008434 */   ori       $a0, $a0, (0x7E0040 & 0xFFFF)
    /* 3E34C 8012FF4C D9D8030C */  jal        func_800F6364
    /* 3E350 8012FF50 00000000 */   nop
    /* 3E354 8012FF54 EFD8030C */  jal        func_800F63BC
    /* 3E358 8012FF58 00000000 */   nop
    /* 3E35C 8012FF5C 68D7030C */  jal        func_800F5DA0
    /* 3E360 8012FF60 45000424 */   addiu     $a0, $zero, 0x45
    /* 3E364 8012FF64 E3D6030C */  jal        func_800F5B8C
    /* 3E368 8012FF68 02020424 */   addiu     $a0, $zero, 0x202
    /* 3E36C 8012FF6C E3FF4014 */  bnez       $v0, .L8012FEFC
    /* 3E370 8012FF70 00000000 */   nop
    /* 3E374 8012FF74 83E5030C */  jal        func_800F960C
    /* 3E378 8012FF78 00000000 */   nop
    /* 3E37C 8012FF7C 68E5030C */  jal        func_800F95A0
    /* 3E380 8012FF80 00000000 */   nop
    /* 3E384 8012FF84 12E5030C */  jal        func_800F9448
    /* 3E388 8012FF88 00000000 */   nop
    /* 3E38C 8012FF8C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 3E390 8012FF90 00000000 */  nop
    /* 3E394 8012FF94 0800E003 */  jr         $ra
    /* 3E398 8012FF98 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8012FBB0
