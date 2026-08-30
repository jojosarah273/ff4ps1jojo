nonmatching func_800FCCDC, 0x6A0

glabel func_800FCCDC
    /* B0DC 800FCCDC E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* B0E0 800FCCE0 1000BFAF */  sw         $ra, 0x10($sp)
    /* B0E4 800FCCE4 59D9030C */  jal        func_800F6564
    /* B0E8 800FCCE8 04170424 */   addiu     $a0, $zero, 0x1704
    /* B0EC 800FCCEC 0DD9030C */  jal        func_800F6434
    /* B0F0 800FCCF0 02020424 */   addiu     $a0, $zero, 0x202
    /* B0F4 800FCCF4 1B004014 */  bnez       $v0, .L800FCD64
    /* B0F8 800FCCF8 00000000 */   nop
    /* B0FC 800FCCFC 8CD9030C */  jal        func_800F6630
    /* B100 800FCD00 A2000424 */   addiu     $a0, $zero, 0xA2
    /* B104 800FCD04 92D0030C */  jal        func_800F4248
    /* B108 800FCD08 40000424 */   addiu     $a0, $zero, 0x40
    /* B10C 800FCD0C 48D0030C */  jal        func_800F4120
    /* B110 800FCD10 02000424 */   addiu     $a0, $zero, 0x2
    /* B114 800FCD14 13004014 */  bnez       $v0, .L800FCD64
    /* B118 800FCD18 00000000 */   nop
    /* B11C 800FCD1C 8CD9030C */  jal        func_800F6630
    /* B120 800FCD20 C0000424 */   addiu     $a0, $zero, 0xC0
    /* B124 800FCD24 0DD9030C */  jal        func_800F6434
    /* B128 800FCD28 02020424 */   addiu     $a0, $zero, 0x202
    /* B12C 800FCD2C 21004014 */  bnez       $v0, .L800FCDB4
    /* B130 800FCD30 00000000 */   nop
    /* B134 800FCD34 8CD9030C */  jal        func_800F6630
    /* B138 800FCD38 AB000424 */   addiu     $a0, $zero, 0xAB
    /* B13C 800FCD3C 0DD9030C */  jal        func_800F6434
    /* B140 800FCD40 02000424 */   addiu     $a0, $zero, 0x2
    /* B144 800FCD44 07004014 */  bnez       $v0, .L800FCD64
    /* B148 800FCD48 00000000 */   nop
    /* B14C 800FCD4C 8CD9030C */  jal        func_800F6630
    /* B150 800FCD50 D5000424 */   addiu     $a0, $zero, 0xD5
    /* B154 800FCD54 0DD9030C */  jal        func_800F6434
    /* B158 800FCD58 02000424 */   addiu     $a0, $zero, 0x2
    /* B15C 800FCD5C 15004010 */  beqz       $v0, .L800FCDB4
    /* B160 800FCD60 00000000 */   nop
  .L800FCD64:
    /* B164 800FCD64 8CD9030C */  jal        func_800F6630
    /* B168 800FCD68 C0000424 */   addiu     $a0, $zero, 0xC0
    /* B16C 800FCD6C 0DD9030C */  jal        func_800F6434
    /* B170 800FCD70 02000424 */   addiu     $a0, $zero, 0x2
    /* B174 800FCD74 7D014014 */  bnez       $v0, .L800FD36C
    /* B178 800FCD78 00000000 */   nop
    /* B17C 800FCD7C EEE3030C */  jal        func_800F8FB8
    /* B180 800FCD80 C0000424 */   addiu     $a0, $zero, 0xC0
    /* B184 800FCD84 53D9030C */  jal        func_800F654C
    /* B188 800FCD88 02000424 */   addiu     $a0, $zero, 0x2
    /* B18C 800FCD8C 62E0030C */  jal        func_800F8188
    /* B190 800FCD90 001E0424 */   addiu     $a0, $zero, 0x1E00
    /* B194 800FCD94 53D9030C */  jal        func_800F654C
    /* B198 800FCD98 01000424 */   addiu     $a0, $zero, 0x1
    /* B19C 800FCD9C 62E0030C */  jal        func_800F8188
    /* B1A0 800FCDA0 011E0424 */   addiu     $a0, $zero, 0x1E01
    /* B1A4 800FCDA4 4AA4050C */  jal        func_80169128
    /* B1A8 800FCDA8 00000000 */   nop
    /* B1AC 800FCDAC DBF40308 */  j          .L800FD36C
    /* B1B0 800FCDB0 00000000 */   nop
  .L800FCDB4:
    /* B1B4 800FCDB4 AFD8030C */  jal        func_800F62BC
    /* B1B8 800FCDB8 88000424 */   addiu     $a0, $zero, 0x88
    /* B1BC 800FCDBC AFD8030C */  jal        func_800F62BC
    /* B1C0 800FCDC0 86000424 */   addiu     $a0, $zero, 0x86
    /* B1C4 800FCDC4 2AD8030C */  jal        func_800F60A8
    /* B1C8 800FCDC8 02020424 */   addiu     $a0, $zero, 0x202
    /* B1CC 800FCDCC 09004014 */  bnez       $v0, .L800FCDF4
    /* B1D0 800FCDD0 00000000 */   nop
    /* B1D4 800FCDD4 59D9030C */  jal        func_800F6564
    /* B1D8 800FCDD8 EF170424 */   addiu     $a0, $zero, 0x17EF
    /* B1DC 800FCDDC 04D5030C */  jal        func_800F5410
    /* B1E0 800FCDE0 00000000 */   nop
    /* B1E4 800FCDE4 02D0030C */  jal        func_800F4008
    /* B1E8 800FCDE8 11000424 */   addiu     $a0, $zero, 0x11
    /* B1EC 800FCDEC 62E0030C */  jal        func_800F8188
    /* B1F0 800FCDF0 EF170424 */   addiu     $a0, $zero, 0x17EF
  .L800FCDF4:
    /* B1F4 800FCDF4 59D9030C */  jal        func_800F6564
    /* B1F8 800FCDF8 00170424 */   addiu     $a0, $zero, 0x1700
    /* B1FC 800FCDFC 5DD5030C */  jal        func_800F5574
    /* B200 800FCE00 21200000 */   addu      $a0, $zero, $zero
    /* B204 800FCE04 F5D4030C */  jal        func_800F53D4
    /* B208 800FCE08 00000000 */   nop
    /* B20C 800FCE0C 48004010 */  beqz       $v0, .L800FCF30
    /* B210 800FCE10 00000000 */   nop
    /* B214 800FCE14 59D9030C */  jal        func_800F6564
    /* B218 800FCE18 07170424 */   addiu     $a0, $zero, 0x1707
    /* B21C 800FCE1C 4400838F */  lw         $v1, %gp_rel(D_8019ED40)($gp)
    /* B220 800FCE20 00000000 */  nop
    /* B224 800FCE24 00006290 */  lbu        $v0, 0x0($v1)
    /* B228 800FCE28 F8000424 */  addiu      $a0, $zero, 0xF8
    /* B22C 800FCE2C 82100200 */  srl        $v0, $v0, 2
    /* B230 800FCE30 92D0030C */  jal        func_800F4248
    /* B234 800FCE34 000062A0 */   sb        $v0, 0x0($v1)
    /* B238 800FCE38 93E0030C */  jal        func_800F824C
    /* B23C 800FCE3C 06000424 */   addiu     $a0, $zero, 0x6
    /* B240 800FCE40 59D9030C */  jal        func_800F6564
    /* B244 800FCE44 06170424 */   addiu     $a0, $zero, 0x1706
    /* B248 800FCE48 4400838F */  lw         $v1, %gp_rel(D_8019ED40)($gp)
    /* B24C 800FCE4C 00000000 */  nop
    /* B250 800FCE50 00006290 */  lbu        $v0, 0x0($v1)
    /* B254 800FCE54 00000000 */  nop
    /* B258 800FCE58 42110200 */  srl        $v0, $v0, 5
    /* B25C 800FCE5C 04D5030C */  jal        func_800F5410
    /* B260 800FCE60 000062A0 */   sb        $v0, 0x0($v1)
    /* B264 800FCE64 0FCF030C */  jal        func_800F3C3C
    /* B268 800FCE68 06000424 */   addiu     $a0, $zero, 0x6
    /* B26C 800FCE6C CECF030C */  jal        func_800F3F38
    /* B270 800FCE70 21204000 */   addu      $a0, $v0, $zero
    /* B274 800FCE74 A4E5030C */  jal        func_800F9690
    /* B278 800FCE78 00000000 */   nop
    /* B27C 800FCE7C 0E00043C */  lui        $a0, (0xEC300 >> 16)
    /* B280 800FCE80 1ADB030C */  jal        func_800F6C68
    /* B284 800FCE84 00C38434 */   ori       $a0, $a0, (0xEC300 & 0xFFFF)
    /* B288 800FCE88 93E0030C */  jal        func_800F824C
    /* B28C 800FCE8C 06000424 */   addiu     $a0, $zero, 0x6
    /* B290 800FCE90 CCE4030C */  jal        func_800F9330
    /* B294 800FCE94 00000000 */   nop
    /* B298 800FCE98 83E5030C */  jal        func_800F960C
    /* B29C 800FCE9C 00000000 */   nop
    /* B2A0 800FCEA0 8CD9030C */  jal        func_800F6630
    /* B2A4 800FCEA4 C0000424 */   addiu     $a0, $zero, 0xC0
    /* B2A8 800FCEA8 0DD9030C */  jal        func_800F6434
    /* B2AC 800FCEAC 02020424 */   addiu     $a0, $zero, 0x202
    /* B2B0 800FCEB0 16004014 */  bnez       $v0, .L800FCF0C
    /* B2B4 800FCEB4 00000000 */   nop
    /* B2B8 800FCEB8 8CD9030C */  jal        func_800F6630
    /* B2BC 800FCEBC 86000424 */   addiu     $a0, $zero, 0x86
    /* B2C0 800FCEC0 A4E5030C */  jal        func_800F9690
    /* B2C4 800FCEC4 00000000 */   nop
    /* B2C8 800FCEC8 1400043C */  lui        $a0, (0x14EE00 >> 16)
    /* B2CC 800FCECC 1ADB030C */  jal        func_800F6C68
    /* B2D0 800FCED0 00EE8434 */   ori       $a0, $a0, (0x14EE00 & 0xFFFF)
    /* B2D4 800FCED4 04D5030C */  jal        func_800F5410
    /* B2D8 800FCED8 00000000 */   nop
    /* B2DC 800FCEDC C1CE030C */  jal        func_800F3B04
    /* B2E0 800FCEE0 EF170424 */   addiu     $a0, $zero, 0x17EF
    /* B2E4 800FCEE4 CECF030C */  jal        func_800F3F38
    /* B2E8 800FCEE8 21204000 */   addu      $a0, $v0, $zero
    /* B2EC 800FCEEC 0FCF030C */  jal        func_800F3C3C
    /* B2F0 800FCEF0 06000424 */   addiu     $a0, $zero, 0x6
    /* B2F4 800FCEF4 35D5030C */  jal        func_800F54D4
    /* B2F8 800FCEF8 21204000 */   addu      $a0, $v0, $zero
    /* B2FC 800FCEFC F0D4030C */  jal        func_800F53C0
    /* B300 800FCF00 00000000 */   nop
    /* B304 800FCF04 19014014 */  bnez       $v0, .L800FD36C
    /* B308 800FCF08 00000000 */   nop
  .L800FCF0C:
    /* B30C 800FCF0C E7E4030C */  jal        func_800F939C
    /* B310 800FCF10 00000000 */   nop
    /* B314 800FCF14 68E5030C */  jal        func_800F95A0
    /* B318 800FCF18 00000000 */   nop
    /* B31C 800FCF1C 0E00043C */  lui        $a0, (0xEC542 >> 16)
    /* B320 800FCF20 1ADB030C */  jal        func_800F6C68
    /* B324 800FCF24 42C58434 */   ori       $a0, $a0, (0xEC542 & 0xFFFF)
    /* B328 800FCF28 50F40308 */  j          .L800FD140
    /* B32C 800FCF2C 00000000 */   nop
  .L800FCF30:
    /* B330 800FCF30 5DD5030C */  jal        func_800F5574
    /* B334 800FCF34 01000424 */   addiu     $a0, $zero, 0x1
    /* B338 800FCF38 F5D4030C */  jal        func_800F53D4
    /* B33C 800FCF3C 00000000 */   nop
    /* B340 800FCF40 3D004010 */  beqz       $v0, .L800FD038
    /* B344 800FCF44 00000000 */   nop
    /* B348 800FCF48 8CD9030C */  jal        func_800F6630
    /* B34C 800FCF4C C0000424 */   addiu     $a0, $zero, 0xC0
    /* B350 800FCF50 0DD9030C */  jal        func_800F6434
    /* B354 800FCF54 02020424 */   addiu     $a0, $zero, 0x202
    /* B358 800FCF58 18004014 */  bnez       $v0, .L800FCFBC
    /* B35C 800FCF5C 00000000 */   nop
    /* B360 800FCF60 8CD9030C */  jal        func_800F6630
    /* B364 800FCF64 86000424 */   addiu     $a0, $zero, 0x86
    /* B368 800FCF68 A4E5030C */  jal        func_800F9690
    /* B36C 800FCF6C 00000000 */   nop
    /* B370 800FCF70 1400043C */  lui        $a0, (0x14EE00 >> 16)
    /* B374 800FCF74 1ADB030C */  jal        func_800F6C68
    /* B378 800FCF78 00EE8434 */   ori       $a0, $a0, (0x14EE00 & 0xFFFF)
    /* B37C 800FCF7C 04D5030C */  jal        func_800F5410
    /* B380 800FCF80 00000000 */   nop
    /* B384 800FCF84 C1CE030C */  jal        func_800F3B04
    /* B388 800FCF88 EF170424 */   addiu     $a0, $zero, 0x17EF
    /* B38C 800FCF8C CECF030C */  jal        func_800F3F38
    /* B390 800FCF90 21204000 */   addu      $a0, $v0, $zero
    /* B394 800FCF94 0E00043C */  lui        $a0, (0xEC340 >> 16)
    /* B398 800FCF98 40C38434 */  ori        $a0, $a0, (0xEC340 & 0xFFFF)
    /* B39C 800FCF9C E7CE030C */  jal        func_800F3B9C
    /* B3A0 800FCFA0 21280000 */   addu      $a1, $zero, $zero
    /* B3A4 800FCFA4 35D5030C */  jal        func_800F54D4
    /* B3A8 800FCFA8 21204000 */   addu      $a0, $v0, $zero
    /* B3AC 800FCFAC F0D4030C */  jal        func_800F53C0
    /* B3B0 800FCFB0 00000000 */   nop
    /* B3B4 800FCFB4 ED004014 */  bnez       $v0, .L800FD36C
    /* B3B8 800FCFB8 00000000 */   nop
  .L800FCFBC:
    /* B3BC 800FCFBC 59D9030C */  jal        func_800F6564
    /* B3C0 800FCFC0 07170424 */   addiu     $a0, $zero, 0x1707
    /* B3C4 800FCFC4 4400838F */  lw         $v1, %gp_rel(D_8019ED40)($gp)
    /* B3C8 800FCFC8 00000000 */  nop
    /* B3CC 800FCFCC 00006290 */  lbu        $v0, 0x0($v1)
    /* B3D0 800FCFD0 FC000424 */  addiu      $a0, $zero, 0xFC
    /* B3D4 800FCFD4 C2100200 */  srl        $v0, $v0, 3
    /* B3D8 800FCFD8 92D0030C */  jal        func_800F4248
    /* B3DC 800FCFDC 000062A0 */   sb        $v0, 0x0($v1)
    /* B3E0 800FCFE0 93E0030C */  jal        func_800F824C
    /* B3E4 800FCFE4 06000424 */   addiu     $a0, $zero, 0x6
    /* B3E8 800FCFE8 59D9030C */  jal        func_800F6564
    /* B3EC 800FCFEC 06170424 */   addiu     $a0, $zero, 0x1706
    /* B3F0 800FCFF0 4400838F */  lw         $v1, %gp_rel(D_8019ED40)($gp)
    /* B3F4 800FCFF4 00000000 */  nop
    /* B3F8 800FCFF8 00006290 */  lbu        $v0, 0x0($v1)
    /* B3FC 800FCFFC 00000000 */  nop
    /* B400 800FD000 42110200 */  srl        $v0, $v0, 5
    /* B404 800FD004 04D5030C */  jal        func_800F5410
    /* B408 800FD008 000062A0 */   sb        $v0, 0x0($v1)
    /* B40C 800FD00C 0FCF030C */  jal        func_800F3C3C
    /* B410 800FD010 06000424 */   addiu     $a0, $zero, 0x6
    /* B414 800FD014 CECF030C */  jal        func_800F3F38
    /* B418 800FD018 21204000 */   addu      $a0, $v0, $zero
    /* B41C 800FD01C A4E5030C */  jal        func_800F9690
    /* B420 800FD020 00000000 */   nop
    /* B424 800FD024 0E00043C */  lui        $a0, (0xEC582 >> 16)
    /* B428 800FD028 1ADB030C */  jal        func_800F6C68
    /* B42C 800FD02C 82C58434 */   ori       $a0, $a0, (0xEC582 & 0xFFFF)
    /* B430 800FD030 50F40308 */  j          .L800FD140
    /* B434 800FD034 00000000 */   nop
  .L800FD038:
    /* B438 800FD038 5DD5030C */  jal        func_800F5574
    /* B43C 800FD03C 02000424 */   addiu     $a0, $zero, 0x2
    /* B440 800FD040 F5D4030C */  jal        func_800F53D4
    /* B444 800FD044 00000000 */   nop
    /* B448 800FD048 6A004010 */  beqz       $v0, .L800FD1F4
    /* B44C 800FD04C 00000000 */   nop
    /* B450 800FD050 8CD9030C */  jal        func_800F6630
    /* B454 800FD054 C0000424 */   addiu     $a0, $zero, 0xC0
    /* B458 800FD058 0DD9030C */  jal        func_800F6434
    /* B45C 800FD05C 02020424 */   addiu     $a0, $zero, 0x202
    /* B460 800FD060 18004014 */  bnez       $v0, .L800FD0C4
    /* B464 800FD064 00000000 */   nop
    /* B468 800FD068 8CD9030C */  jal        func_800F6630
    /* B46C 800FD06C 86000424 */   addiu     $a0, $zero, 0x86
    /* B470 800FD070 A4E5030C */  jal        func_800F9690
    /* B474 800FD074 00000000 */   nop
    /* B478 800FD078 1400043C */  lui        $a0, (0x14EE00 >> 16)
    /* B47C 800FD07C 1ADB030C */  jal        func_800F6C68
    /* B480 800FD080 00EE8434 */   ori       $a0, $a0, (0x14EE00 & 0xFFFF)
    /* B484 800FD084 04D5030C */  jal        func_800F5410
    /* B488 800FD088 00000000 */   nop
    /* B48C 800FD08C C1CE030C */  jal        func_800F3B04
    /* B490 800FD090 EF170424 */   addiu     $a0, $zero, 0x17EF
    /* B494 800FD094 CECF030C */  jal        func_800F3F38
    /* B498 800FD098 21204000 */   addu      $a0, $v0, $zero
    /* B49C 800FD09C 0E00043C */  lui        $a0, (0xEC341 >> 16)
    /* B4A0 800FD0A0 41C38434 */  ori        $a0, $a0, (0xEC341 & 0xFFFF)
    /* B4A4 800FD0A4 E7CE030C */  jal        func_800F3B9C
    /* B4A8 800FD0A8 21280000 */   addu      $a1, $zero, $zero
    /* B4AC 800FD0AC 35D5030C */  jal        func_800F54D4
    /* B4B0 800FD0B0 21204000 */   addu      $a0, $v0, $zero
    /* B4B4 800FD0B4 F0D4030C */  jal        func_800F53C0
    /* B4B8 800FD0B8 00000000 */   nop
    /* B4BC 800FD0BC AB004014 */  bnez       $v0, .L800FD36C
    /* B4C0 800FD0C0 00000000 */   nop
  .L800FD0C4:
    /* B4C4 800FD0C4 EEE3030C */  jal        func_800F8FB8
    /* B4C8 800FD0C8 06000424 */   addiu     $a0, $zero, 0x6
    /* B4CC 800FD0CC 59D9030C */  jal        func_800F6564
    /* B4D0 800FD0D0 07170424 */   addiu     $a0, $zero, 0x1707
    /* B4D4 800FD0D4 5DD5030C */  jal        func_800F5574
    /* B4D8 800FD0D8 20000424 */   addiu     $a0, $zero, 0x20
    /* B4DC 800FD0DC F0D4030C */  jal        func_800F53C0
    /* B4E0 800FD0E0 00000000 */   nop
    /* B4E4 800FD0E4 05004010 */  beqz       $v0, .L800FD0FC
    /* B4E8 800FD0E8 00000000 */   nop
    /* B4EC 800FD0EC 53D9030C */  jal        func_800F654C
    /* B4F0 800FD0F0 02000424 */   addiu     $a0, $zero, 0x2
    /* B4F4 800FD0F4 93E0030C */  jal        func_800F824C
    /* B4F8 800FD0F8 06000424 */   addiu     $a0, $zero, 0x6
  .L800FD0FC:
    /* B4FC 800FD0FC 59D9030C */  jal        func_800F6564
    /* B500 800FD100 06170424 */   addiu     $a0, $zero, 0x1706
    /* B504 800FD104 5DD5030C */  jal        func_800F5574
    /* B508 800FD108 20000424 */   addiu     $a0, $zero, 0x20
    /* B50C 800FD10C F0D4030C */  jal        func_800F53C0
    /* B510 800FD110 00000000 */   nop
    /* B514 800FD114 03004010 */  beqz       $v0, .L800FD124
    /* B518 800FD118 00000000 */   nop
    /* B51C 800FD11C AFD8030C */  jal        func_800F62BC
    /* B520 800FD120 06000424 */   addiu     $a0, $zero, 0x6
  .L800FD124:
    /* B524 800FD124 8CD9030C */  jal        func_800F6630
    /* B528 800FD128 06000424 */   addiu     $a0, $zero, 0x6
    /* B52C 800FD12C A4E5030C */  jal        func_800F9690
    /* B530 800FD130 00000000 */   nop
    /* B534 800FD134 0E00043C */  lui        $a0, (0xEC592 >> 16)
    /* B538 800FD138 1ADB030C */  jal        func_800F6C68
    /* B53C 800FD13C 92C58434 */   ori       $a0, $a0, (0xEC592 & 0xFFFF)
  .L800FD140:
    /* B540 800FD140 25F5030C */  jal        func_800FD494
    /* B544 800FD144 00000000 */   nop
    /* B548 800FD148 EEE3030C */  jal        func_800F8FB8
    /* B54C 800FD14C 3E000424 */   addiu     $a0, $zero, 0x3E
    /* B550 800FD150 9CDC030C */  jal        func_800F7270
    /* B554 800FD154 3D000424 */   addiu     $a0, $zero, 0x3D
    /* B558 800FD158 0E00043C */  lui        $a0, (0xEC796 >> 16)
    /* B55C 800FD15C 1ADB030C */  jal        func_800F6C68
    /* B560 800FD160 96C78434 */   ori       $a0, $a0, (0xEC796 & 0xFFFF)
    /* B564 800FD164 62E0030C */  jal        func_800F8188
    /* B568 800FD168 00180424 */   addiu     $a0, $zero, 0x1800
    /* B56C 800FD16C 59D9030C */  jal        func_800F6564
    /* B570 800FD170 01170424 */   addiu     $a0, $zero, 0x1701
    /* B574 800FD174 0DD9030C */  jal        func_800F6434
    /* B578 800FD178 02000424 */   addiu     $a0, $zero, 0x2
    /* B57C 800FD17C 03004014 */  bnez       $v0, .L800FD18C
    /* B580 800FD180 00000000 */   nop
    /* B584 800FD184 53D9030C */  jal        func_800F654C
    /* B588 800FD188 01000424 */   addiu     $a0, $zero, 0x1
  .L800FD18C:
    /* B58C 800FD18C 62E0030C */  jal        func_800F8188
    /* B590 800FD190 01180424 */   addiu     $a0, $zero, 0x1801
    /* B594 800FD194 8CD9030C */  jal        func_800F6630
    /* B598 800FD198 A2000424 */   addiu     $a0, $zero, 0xA2
    /* B59C 800FD19C 92D0030C */  jal        func_800F4248
    /* B5A0 800FD1A0 07000424 */   addiu     $a0, $zero, 0x7
    /* B5A4 800FD1A4 B8E5030C */  jal        func_800F96E0
    /* B5A8 800FD1A8 00000000 */   nop
    /* B5AC 800FD1AC 1A80023C */  lui        $v0, %hi(D_80198A80)
    /* B5B0 800FD1B0 5C00848F */  lw         $a0, %gp_rel(D_8019ED58)($gp)
    /* B5B4 800FD1B4 808A4224 */  addiu      $v0, $v0, %lo(D_80198A80)
    /* B5B8 800FD1B8 00008394 */  lhu        $v1, 0x0($a0)
    /* B5BC 800FD1BC 4400858F */  lw         $a1, %gp_rel(D_8019ED40)($gp)
    /* B5C0 800FD1C0 21186200 */  addu       $v1, $v1, $v0
    /* B5C4 800FD1C4 00006290 */  lbu        $v0, 0x0($v1)
    /* B5C8 800FD1C8 02180424 */  addiu      $a0, $zero, 0x1802
    /* B5CC 800FD1CC 62E0030C */  jal        func_800F8188
    /* B5D0 800FD1D0 0000A2A0 */   sb        $v0, 0x0($a1)
    /* B5D4 800FD1D4 EEE3030C */  jal        func_800F8FB8
    /* B5D8 800FD1D8 C0000424 */   addiu     $a0, $zero, 0xC0
    /* B5DC 800FD1DC 53D9030C */  jal        func_800F654C
    /* B5E0 800FD1E0 01000424 */   addiu     $a0, $zero, 0x1
    /* B5E4 800FD1E4 93E0030C */  jal        func_800F824C
    /* B5E8 800FD1E8 85000424 */   addiu     $a0, $zero, 0x85
    /* B5EC 800FD1EC DBF40308 */  j          .L800FD36C
    /* B5F0 800FD1F0 00000000 */   nop
  .L800FD1F4:
    /* B5F4 800FD1F4 59D9030C */  jal        func_800F6564
    /* B5F8 800FD1F8 02170424 */   addiu     $a0, $zero, 0x1702
    /* B5FC 800FD1FC 93E0030C */  jal        func_800F824C
    /* B600 800FD200 3D000424 */   addiu     $a0, $zero, 0x3D
    /* B604 800FD204 59D9030C */  jal        func_800F6564
    /* B608 800FD208 01170424 */   addiu     $a0, $zero, 0x1701
    /* B60C 800FD20C 0DD9030C */  jal        func_800F6434
    /* B610 800FD210 02000424 */   addiu     $a0, $zero, 0x2
    /* B614 800FD214 03004014 */  bnez       $v0, .L800FD224
    /* B618 800FD218 00000000 */   nop
    /* B61C 800FD21C 53D9030C */  jal        func_800F654C
    /* B620 800FD220 01000424 */   addiu     $a0, $zero, 0x1
  .L800FD224:
    /* B624 800FD224 93E0030C */  jal        func_800F824C
    /* B628 800FD228 3E000424 */   addiu     $a0, $zero, 0x3E
    /* B62C 800FD22C 9CDC030C */  jal        func_800F7270
    /* B630 800FD230 3D000424 */   addiu     $a0, $zero, 0x3D
    /* B634 800FD234 0E00043C */  lui        $a0, (0xEC342 >> 16)
    /* B638 800FD238 1ADB030C */  jal        func_800F6C68
    /* B63C 800FD23C 42C38434 */   ori       $a0, $a0, (0xEC342 & 0xFFFF)
    /* B640 800FD240 0DD9030C */  jal        func_800F6434
    /* B644 800FD244 02000424 */   addiu     $a0, $zero, 0x2
    /* B648 800FD248 1E004014 */  bnez       $v0, .L800FD2C4
    /* B64C 800FD24C 00000000 */   nop
    /* B650 800FD250 93E0030C */  jal        func_800F824C
    /* B654 800FD254 06000424 */   addiu     $a0, $zero, 0x6
    /* B658 800FD258 8CD9030C */  jal        func_800F6630
    /* B65C 800FD25C C0000424 */   addiu     $a0, $zero, 0xC0
    /* B660 800FD260 0DD9030C */  jal        func_800F6434
    /* B664 800FD264 02020424 */   addiu     $a0, $zero, 0x202
    /* B668 800FD268 28004014 */  bnez       $v0, .L800FD30C
    /* B66C 800FD26C 00000000 */   nop
    /* B670 800FD270 8CD9030C */  jal        func_800F6630
    /* B674 800FD274 86000424 */   addiu     $a0, $zero, 0x86
    /* B678 800FD278 A4E5030C */  jal        func_800F9690
    /* B67C 800FD27C 00000000 */   nop
    /* B680 800FD280 1400043C */  lui        $a0, (0x14EE00 >> 16)
    /* B684 800FD284 1ADB030C */  jal        func_800F6C68
    /* B688 800FD288 00EE8434 */   ori       $a0, $a0, (0x14EE00 & 0xFFFF)
    /* B68C 800FD28C 04D5030C */  jal        func_800F5410
    /* B690 800FD290 00000000 */   nop
    /* B694 800FD294 C1CE030C */  jal        func_800F3B04
    /* B698 800FD298 EF170424 */   addiu     $a0, $zero, 0x17EF
    /* B69C 800FD29C CECF030C */  jal        func_800F3F38
    /* B6A0 800FD2A0 21204000 */   addu      $a0, $v0, $zero
    /* B6A4 800FD2A4 0FCF030C */  jal        func_800F3C3C
    /* B6A8 800FD2A8 06000424 */   addiu     $a0, $zero, 0x6
    /* B6AC 800FD2AC 35D5030C */  jal        func_800F54D4
    /* B6B0 800FD2B0 21204000 */   addu      $a0, $v0, $zero
    /* B6B4 800FD2B4 F0D4030C */  jal        func_800F53C0
    /* B6B8 800FD2B8 00000000 */   nop
    /* B6BC 800FD2BC 13004010 */  beqz       $v0, .L800FD30C
    /* B6C0 800FD2C0 00000000 */   nop
  .L800FD2C4:
    /* B6C4 800FD2C4 8CD9030C */  jal        func_800F6630
    /* B6C8 800FD2C8 C0000424 */   addiu     $a0, $zero, 0xC0
    /* B6CC 800FD2CC 0DD9030C */  jal        func_800F6434
    /* B6D0 800FD2D0 02000424 */   addiu     $a0, $zero, 0x2
    /* B6D4 800FD2D4 25004014 */  bnez       $v0, .L800FD36C
    /* B6D8 800FD2D8 00000000 */   nop
    /* B6DC 800FD2DC EEE3030C */  jal        func_800F8FB8
    /* B6E0 800FD2E0 C0000424 */   addiu     $a0, $zero, 0xC0
    /* B6E4 800FD2E4 53D9030C */  jal        func_800F654C
    /* B6E8 800FD2E8 02000424 */   addiu     $a0, $zero, 0x2
    /* B6EC 800FD2EC 62E0030C */  jal        func_800F8188
    /* B6F0 800FD2F0 001E0424 */   addiu     $a0, $zero, 0x1E00
    /* B6F4 800FD2F4 DDE3030C */  jal        func_800F8F74
    /* B6F8 800FD2F8 011E0424 */   addiu     $a0, $zero, 0x1E01
    /* B6FC 800FD2FC 4AA4050C */  jal        func_80169128
    /* B700 800FD300 00000000 */   nop
    /* B704 800FD304 DBF40308 */  j          .L800FD36C
    /* B708 800FD308 00000000 */   nop
  .L800FD30C:
    /* B70C 800FD30C 9CDC030C */  jal        func_800F7270
    /* B710 800FD310 3D000424 */   addiu     $a0, $zero, 0x3D
    /* B714 800FD314 0E00043C */  lui        $a0, (0xEC596 >> 16)
    /* B718 800FD318 1ADB030C */  jal        func_800F6C68
    /* B71C 800FD31C 96C58434 */   ori       $a0, $a0, (0xEC596 & 0xFFFF)
    /* B720 800FD320 25F5030C */  jal        func_800FD494
    /* B724 800FD324 00000000 */   nop
    /* B728 800FD328 9CDC030C */  jal        func_800F7270
    /* B72C 800FD32C 3D000424 */   addiu     $a0, $zero, 0x3D
    /* B730 800FD330 0E00043C */  lui        $a0, (0xEC816 >> 16)
    /* B734 800FD334 1ADB030C */  jal        func_800F6C68
    /* B738 800FD338 16C88434 */   ori       $a0, $a0, (0xEC816 & 0xFFFF)
    /* B73C 800FD33C 62E0030C */  jal        func_800F8188
    /* B740 800FD340 00180424 */   addiu     $a0, $zero, 0x1800
    /* B744 800FD344 DFF4030C */  jal        func_800FD37C
    /* B748 800FD348 00000000 */   nop
    /* B74C 800FD34C EEE3030C */  jal        func_800F8FB8
    /* B750 800FD350 C0000424 */   addiu     $a0, $zero, 0xC0
    /* B754 800FD354 53D9030C */  jal        func_800F654C
    /* B758 800FD358 01000424 */   addiu     $a0, $zero, 0x1
    /* B75C 800FD35C 93E0030C */  jal        func_800F824C
    /* B760 800FD360 85000424 */   addiu     $a0, $zero, 0x85
    /* B764 800FD364 EEE3030C */  jal        func_800F8FB8
    /* B768 800FD368 88000424 */   addiu     $a0, $zero, 0x88
  .L800FD36C:
    /* B76C 800FD36C 1000BF8F */  lw         $ra, 0x10($sp)
    /* B770 800FD370 00000000 */  nop
    /* B774 800FD374 0800E003 */  jr         $ra
    /* B778 800FD378 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800FCCDC
