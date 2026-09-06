nonmatching func_8012DD58, 0x408

glabel func_8012DD58
    /* 3C158 8012DD58 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 3C15C 8012DD5C 1000BFAF */  sw         $ra, 0x10($sp)
    /* 3C160 8012DD60 90D8030C */  jal        func_800F6240
    /* 3C164 8012DD64 271B0424 */   addiu     $a0, $zero, 0x1B27
    /* 3C168 8012DD68 90D8030C */  jal        func_800F6240
    /* 3C16C 8012DD6C B81B0424 */   addiu     $a0, $zero, 0x1BB8
    /* 3C170 8012DD70 AFD8030C */  jal        func_800F62BC
    /* 3C174 8012DD74 84000424 */   addiu     $a0, $zero, 0x84
  .L8012DD78:
    /* 3C178 8012DD78 FD8B040C */  jal        func_80122FF4
    /* 3C17C 8012DD7C 00000000 */   nop
    /* 3C180 8012DD80 8CD9030C */  jal        func_800F6630
    /* 3C184 8012DD84 E8000424 */   addiu     $a0, $zero, 0xE8
    /* 3C188 8012DD88 5DD5030C */  jal        func_800F5574
    /* 3C18C 8012DD8C 7F000424 */   addiu     $a0, $zero, 0x7F
    /* 3C190 8012DD90 F5D4030C */  jal        func_800F53D4
    /* 3C194 8012DD94 00000000 */   nop
    /* 3C198 8012DD98 13004010 */  beqz       $v0, .L8012DDE8
    /* 3C19C 8012DD9C 00000000 */   nop
    /* 3C1A0 8012DDA0 53D9030C */  jal        func_800F654C
    /* 3C1A4 8012DDA4 01000424 */   addiu     $a0, $zero, 0x1
    /* 3C1A8 8012DDA8 C1CE030C */  jal        func_800F3B04
    /* 3C1AC 8012DDAC A8160424 */   addiu     $a0, $zero, 0x16A8
    /* 3C1B0 8012DDB0 B3D7030C */  jal        func_800F5ECC
    /* 3C1B4 8012DDB4 21204000 */   addu      $a0, $v0, $zero
    /* 3C1B8 8012DDB8 62E0030C */  jal        func_800F8188
    /* 3C1BC 8012DDBC A8160424 */   addiu     $a0, $zero, 0x16A8
    /* 3C1C0 8012DDC0 A78A040C */  jal        func_80122A9C
    /* 3C1C4 8012DDC4 00000000 */   nop
    /* 3C1C8 8012DDC8 4E89040C */  jal        func_80122538
    /* 3C1CC 8012DDCC 00000000 */   nop
    /* 3C1D0 8012DDD0 4A99040C */  jal        func_80126528
    /* 3C1D4 8012DDD4 00000000 */   nop
    /* 3C1D8 8012DDD8 C37B040C */  jal        func_8011EF0C
    /* 3C1DC 8012DDDC 00000000 */   nop
    /* 3C1E0 8012DDE0 5EB70408 */  j          .L8012DD78
    /* 3C1E4 8012DDE4 00000000 */   nop
  .L8012DDE8:
    /* 3C1E8 8012DDE8 8CD9030C */  jal        func_800F6630
    /* 3C1EC 8012DDEC E8000424 */   addiu     $a0, $zero, 0xE8
    /* 3C1F0 8012DDF0 0DD9030C */  jal        func_800F6434
    /* 3C1F4 8012DDF4 80800434 */   ori       $a0, $zero, 0x8080
    /* 3C1F8 8012DDF8 05004014 */  bnez       $v0, .L8012DE10
    /* 3C1FC 8012DDFC 00000000 */   nop
    /* 3C200 8012DE00 EEE3030C */  jal        func_800F8FB8
    /* 3C204 8012DE04 E8000424 */   addiu     $a0, $zero, 0xE8
    /* 3C208 8012DE08 54B80408 */  j          .L8012E150
    /* 3C20C 8012DE0C 00000000 */   nop
  .L8012DE10:
    /* 3C210 8012DE10 8CD9030C */  jal        func_800F6630
    /* 3C214 8012DE14 E7000424 */   addiu     $a0, $zero, 0xE7
    /* 3C218 8012DE18 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 3C21C 8012DE1C 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 3C220 8012DE20 00000000 */  nop
    /* 3C224 8012DE24 00006290 */  lbu        $v0, 0x0($v1)
    /* 3C228 8012DE28 45000424 */  addiu      $a0, $zero, 0x45
    /* 3C22C 8012DE2C C0100200 */  sll        $v0, $v0, 3
    /* 3C230 8012DE30 93E0030C */  jal        func_800F824C
    /* 3C234 8012DE34 000062A0 */   sb        $v0, 0x0($v1)
    /* 3C238 8012DE38 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 3C23C 8012DE3C 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 3C240 8012DE40 00000000 */  nop
    /* 3C244 8012DE44 00006290 */  lbu        $v0, 0x0($v1)
    /* 3C248 8012DE48 00000000 */  nop
    /* 3C24C 8012DE4C 40100200 */  sll        $v0, $v0, 1
    /* 3C250 8012DE50 50D4030C */  jal        func_800F5140
    /* 3C254 8012DE54 000062A0 */   sb        $v0, 0x0($v1)
    /* 3C258 8012DE58 D3D3030C */  jal        func_800F4F4C
    /* 3C25C 8012DE5C 00000000 */   nop
    /* 3C260 8012DE60 0FCF030C */  jal        func_800F3C3C
    /* 3C264 8012DE64 45000424 */   addiu     $a0, $zero, 0x45
    /* 3C268 8012DE68 CECF030C */  jal        func_800F3F38
    /* 3C26C 8012DE6C 21204000 */   addu      $a0, $v0, $zero
    /* 3C270 8012DE70 02D0030C */  jal        func_800F4008
    /* 3C274 8012DE74 14000424 */   addiu     $a0, $zero, 0x14
    /* 3C278 8012DE78 93E0030C */  jal        func_800F824C
    /* 3C27C 8012DE7C 46000424 */   addiu     $a0, $zero, 0x46
    /* 3C280 8012DE80 53D9030C */  jal        func_800F654C
    /* 3C284 8012DE84 04000424 */   addiu     $a0, $zero, 0x4
    /* 3C288 8012DE88 93E0030C */  jal        func_800F824C
    /* 3C28C 8012DE8C 45000424 */   addiu     $a0, $zero, 0x45
    /* 3C290 8012DE90 AB7D040C */  jal        func_8011F6AC
    /* 3C294 8012DE94 00000000 */   nop
    /* 3C298 8012DE98 8CD9030C */  jal        func_800F6630
    /* 3C29C 8012DE9C E8000424 */   addiu     $a0, $zero, 0xE8
    /* 3C2A0 8012DEA0 93E0030C */  jal        func_800F824C
    /* 3C2A4 8012DEA4 D9000424 */   addiu     $a0, $zero, 0xD9
    /* 3C2A8 8012DEA8 DDE3030C */  jal        func_800F8F74
    /* 3C2AC 8012DEAC 271B0424 */   addiu     $a0, $zero, 0x1B27
    /* 3C2B0 8012DEB0 FD8B040C */  jal        func_80122FF4
    /* 3C2B4 8012DEB4 00000000 */   nop
    /* 3C2B8 8012DEB8 8CD9030C */  jal        func_800F6630
    /* 3C2BC 8012DEBC E8000424 */   addiu     $a0, $zero, 0xE8
    /* 3C2C0 8012DEC0 0DD9030C */  jal        func_800F6434
    /* 3C2C4 8012DEC4 80800434 */   ori       $a0, $zero, 0x8080
    /* 3C2C8 8012DEC8 09004014 */  bnez       $v0, .L8012DEF0
    /* 3C2CC 8012DECC 00000000 */   nop
    /* 3C2D0 8012DED0 EEE3030C */  jal        func_800F8FB8
    /* 3C2D4 8012DED4 E8000424 */   addiu     $a0, $zero, 0xE8
    /* 3C2D8 8012DED8 36AC040C */  jal        func_8012B0D8
    /* 3C2DC 8012DEDC 00000000 */   nop
    /* 3C2E0 8012DEE0 5AAC040C */  jal        func_8012B168
    /* 3C2E4 8012DEE4 00000000 */   nop
    /* 3C2E8 8012DEE8 54B80408 */  j          .L8012E150
    /* 3C2EC 8012DEEC 00000000 */   nop
  .L8012DEF0:
    /* 3C2F0 8012DEF0 93E0030C */  jal        func_800F824C
    /* 3C2F4 8012DEF4 DA000424 */   addiu     $a0, $zero, 0xDA
    /* 3C2F8 8012DEF8 0FCF030C */  jal        func_800F3C3C
    /* 3C2FC 8012DEFC D9000424 */   addiu     $a0, $zero, 0xD9
    /* 3C300 8012DF00 35D5030C */  jal        func_800F54D4
    /* 3C304 8012DF04 21204000 */   addu      $a0, $v0, $zero
    /* 3C308 8012DF08 F5D4030C */  jal        func_800F53D4
    /* 3C30C 8012DF0C 00000000 */   nop
    /* 3C310 8012DF10 BFFF4014 */  bnez       $v0, .L8012DE10
    /* 3C314 8012DF14 00000000 */   nop
    /* 3C318 8012DF18 8CD9030C */  jal        func_800F6630
    /* 3C31C 8012DF1C D9000424 */   addiu     $a0, $zero, 0xD9
    /* 3C320 8012DF20 81B4040C */  jal        func_8012D204
    /* 3C324 8012DF24 00000000 */   nop
    /* 3C328 8012DF28 93E0030C */  jal        func_800F824C
    /* 3C32C 8012DF2C 45000424 */   addiu     $a0, $zero, 0x45
    /* 3C330 8012DF30 8CD9030C */  jal        func_800F6630
    /* 3C334 8012DF34 DA000424 */   addiu     $a0, $zero, 0xDA
    /* 3C338 8012DF38 81B4040C */  jal        func_8012D204
    /* 3C33C 8012DF3C 00000000 */   nop
    /* 3C340 8012DF40 0FCF030C */  jal        func_800F3C3C
    /* 3C344 8012DF44 45000424 */   addiu     $a0, $zero, 0x45
    /* 3C348 8012DF48 31DE030C */  jal        func_800F78C4
    /* 3C34C 8012DF4C 21204000 */   addu      $a0, $v0, $zero
    /* 3C350 8012DF50 46DE030C */  jal        func_800F7918
    /* 3C354 8012DF54 02020424 */   addiu     $a0, $zero, 0x202
    /* 3C358 8012DF58 05004014 */  bnez       $v0, .L8012DF70
    /* 3C35C 8012DF5C 00000000 */   nop
    /* 3C360 8012DF60 36AC040C */  jal        func_8012B0D8
    /* 3C364 8012DF64 00000000 */   nop
    /* 3C368 8012DF68 54B80408 */  j          .L8012E150
    /* 3C36C 8012DF6C 00000000 */   nop
  .L8012DF70:
    /* 3C370 8012DF70 A690040C */  jal        func_80124298
    /* 3C374 8012DF74 00000000 */   nop
    /* 3C378 8012DF78 6AB9040C */  jal        func_8012E5A8
    /* 3C37C 8012DF7C 00000000 */   nop
    /* 3C380 8012DF80 91E5030C */  jal        func_800F9644
    /* 3C384 8012DF84 20000424 */   addiu     $a0, $zero, 0x20
    /* 3C388 8012DF88 96D9030C */  jal        func_800F6658
    /* 3C38C 8012DF8C DA000424 */   addiu     $a0, $zero, 0xDA
    /* 3C390 8012DF90 99D0030C */  jal        func_800F4264
    /* 3C394 8012DF94 FF000424 */   addiu     $a0, $zero, 0xFF
    /* 3C398 8012DF98 1A80033C */  lui        $v1, %hi(D_8019ED44)
    /* 3C39C 8012DF9C 44ED638C */  lw         $v1, %lo(D_8019ED44)($v1)
    /* 3C3A0 8012DFA0 00000000 */  nop
    /* 3C3A4 8012DFA4 00006294 */  lhu        $v0, 0x0($v1)
    /* 3C3A8 8012DFA8 00000000 */  nop
    /* 3C3AC 8012DFAC 40110200 */  sll        $v0, $v0, 5
    /* 3C3B0 8012DFB0 5BD4030C */  jal        func_800F516C
    /* 3C3B4 8012DFB4 000062A4 */   sh        $v0, 0x0($v1)
    /* 3C3B8 8012DFB8 14D4030C */  jal        func_800F5050
    /* 3C3BC 8012DFBC 00000000 */   nop
    /* 3C3C0 8012DFC0 19D0030C */  jal        func_800F4064
    /* 3C3C4 8012DFC4 00100424 */   addiu     $a0, $zero, 0x1000
    /* 3C3C8 8012DFC8 1A80033C */  lui        $v1, %hi(D_8019ED44)
    /* 3C3CC 8012DFCC 44ED638C */  lw         $v1, %lo(D_8019ED44)($v1)
    /* 3C3D0 8012DFD0 1A80043C */  lui        $a0, %hi(D_8019ED54)
    /* 3C3D4 8012DFD4 54ED848C */  lw         $a0, %lo(D_8019ED54)($a0)
    /* 3C3D8 8012DFD8 00006294 */  lhu        $v0, 0x0($v1)
    /* 3C3DC 8012DFDC CCE4030C */  jal        func_800F9330
    /* 3C3E0 8012DFE0 000082A4 */   sh        $v0, 0x0($a0)
    /* 3C3E4 8012DFE4 40DD030C */  jal        func_800F7500
    /* 3C3E8 8012DFE8 00F60434 */   ori       $a0, $zero, 0xF600
    /* 3C3EC 8012DFEC 56D9030C */  jal        func_800F6558
    /* 3C3F0 8012DFF0 3F000424 */   addiu     $a0, $zero, 0x3F
    /* 3C3F4 8012DFF4 59CF030C */  jal        func_800F3D64
    /* 3C3F8 8012DFF8 7E000424 */   addiu     $a0, $zero, 0x7E
    /* 3C3FC 8012DFFC 83E5030C */  jal        func_800F960C
    /* 3C400 8012E000 00000000 */   nop
    /* 3C404 8012E004 96D9030C */  jal        func_800F6658
    /* 3C408 8012E008 D9000424 */   addiu     $a0, $zero, 0xD9
    /* 3C40C 8012E00C 99D0030C */  jal        func_800F4264
    /* 3C410 8012E010 FF000424 */   addiu     $a0, $zero, 0xFF
    /* 3C414 8012E014 1A80033C */  lui        $v1, %hi(D_8019ED44)
    /* 3C418 8012E018 44ED638C */  lw         $v1, %lo(D_8019ED44)($v1)
    /* 3C41C 8012E01C 00000000 */  nop
    /* 3C420 8012E020 00006294 */  lhu        $v0, 0x0($v1)
    /* 3C424 8012E024 00000000 */  nop
    /* 3C428 8012E028 40110200 */  sll        $v0, $v0, 5
    /* 3C42C 8012E02C 5BD4030C */  jal        func_800F516C
    /* 3C430 8012E030 000062A4 */   sh        $v0, 0x0($v1)
    /* 3C434 8012E034 14D4030C */  jal        func_800F5050
    /* 3C438 8012E038 00000000 */   nop
    /* 3C43C 8012E03C 19D0030C */  jal        func_800F4064
    /* 3C440 8012E040 00100424 */   addiu     $a0, $zero, 0x1000
    /* 3C444 8012E044 1A80033C */  lui        $v1, %hi(D_8019ED44)
    /* 3C448 8012E048 44ED638C */  lw         $v1, %lo(D_8019ED44)($v1)
    /* 3C44C 8012E04C 1A80043C */  lui        $a0, %hi(D_8019ED54)
    /* 3C450 8012E050 54ED848C */  lw         $a0, %lo(D_8019ED54)($a0)
    /* 3C454 8012E054 00006294 */  lhu        $v0, 0x0($v1)
    /* 3C458 8012E058 CCE4030C */  jal        func_800F9330
    /* 3C45C 8012E05C 000082A4 */   sh        $v0, 0x0($a0)
    /* 3C460 8012E060 56D9030C */  jal        func_800F6558
    /* 3C464 8012E064 3F000424 */   addiu     $a0, $zero, 0x3F
    /* 3C468 8012E068 59CF030C */  jal        func_800F3D64
    /* 3C46C 8012E06C 7E7E0424 */   addiu     $a0, $zero, 0x7E7E
    /* 3C470 8012E070 83E5030C */  jal        func_800F960C
    /* 3C474 8012E074 00000000 */   nop
    /* 3C478 8012E078 77DC030C */  jal        func_800F71DC
    /* 3C47C 8012E07C 00F60434 */   ori       $a0, $zero, 0xF600
    /* 3C480 8012E080 56D9030C */  jal        func_800F6558
    /* 3C484 8012E084 3F000424 */   addiu     $a0, $zero, 0x3F
    /* 3C488 8012E088 59CF030C */  jal        func_800F3D64
    /* 3C48C 8012E08C 7E7E0424 */   addiu     $a0, $zero, 0x7E7E
    /* 3C490 8012E090 98E5030C */  jal        func_800F9660
    /* 3C494 8012E094 20000424 */   addiu     $a0, $zero, 0x20
    /* 3C498 8012E098 8CD9030C */  jal        func_800F6630
    /* 3C49C 8012E09C D9000424 */   addiu     $a0, $zero, 0xD9
    /* 3C4A0 8012E0A0 3489040C */  jal        func_801224D0
    /* 3C4A4 8012E0A4 00000000 */   nop
    /* 3C4A8 8012E0A8 DADA030C */  jal        func_800F6B68
    /* 3C4AC 8012E0AC B9160424 */   addiu     $a0, $zero, 0x16B9
    /* 3C4B0 8012E0B0 80E4030C */  jal        func_800F9200
    /* 3C4B4 8012E0B4 00000000 */   nop
    /* 3C4B8 8012E0B8 1A80023C */  lui        $v0, %hi(D_8019ED54)
    /* 3C4BC 8012E0BC 54ED428C */  lw         $v0, %lo(D_8019ED54)($v0)
    /* 3C4C0 8012E0C0 1A80053C */  lui        $a1, %hi(D_8019ED58)
    /* 3C4C4 8012E0C4 58EDA58C */  lw         $a1, %lo(D_8019ED58)($a1)
    /* 3C4C8 8012E0C8 00004394 */  lhu        $v1, 0x0($v0)
    /* 3C4CC 8012E0CC DA000424 */  addiu      $a0, $zero, 0xDA
    /* 3C4D0 8012E0D0 8CD9030C */  jal        func_800F6630
    /* 3C4D4 8012E0D4 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 3C4D8 8012E0D8 3489040C */  jal        func_801224D0
    /* 3C4DC 8012E0DC 00000000 */   nop
    /* 3C4E0 8012E0E0 DADA030C */  jal        func_800F6B68
    /* 3C4E4 8012E0E4 B9160424 */   addiu     $a0, $zero, 0x16B9
    /* 3C4E8 8012E0E8 58E2030C */  jal        func_800F8960
    /* 3C4EC 8012E0EC B9160424 */   addiu     $a0, $zero, 0x16B9
    /* 3C4F0 8012E0F0 F7E4030C */  jal        func_800F93DC
    /* 3C4F4 8012E0F4 00000000 */   nop
    /* 3C4F8 8012E0F8 DAE1030C */  jal        func_800F8768
    /* 3C4FC 8012E0FC B9160424 */   addiu     $a0, $zero, 0x16B9
    /* 3C500 8012E100 B9DC050C */  jal        func_801772E4
    /* 3C504 8012E104 00000000 */   nop
    /* 3C508 8012E108 9996040C */  jal        func_80125A64
    /* 3C50C 8012E10C 00000000 */   nop
    /* 3C510 8012E110 36AC040C */  jal        func_8012B0D8
    /* 3C514 8012E114 00000000 */   nop
    /* 3C518 8012E118 A78A040C */  jal        func_80122A9C
    /* 3C51C 8012E11C 00000000 */   nop
    /* 3C520 8012E120 4E89040C */  jal        func_80122538
    /* 3C524 8012E124 00000000 */   nop
    /* 3C528 8012E128 4A99040C */  jal        func_80126528
    /* 3C52C 8012E12C 00000000 */   nop
    /* 3C530 8012E130 C37B040C */  jal        func_8011EF0C
    /* 3C534 8012E134 00000000 */   nop
    /* 3C538 8012E138 1D80043C */  lui        $a0, %hi(D_801D7D68)
    /* 3C53C 8012E13C 687D8424 */  addiu      $a0, $a0, %lo(D_801D7D68)
    /* 3C540 8012E140 00030524 */  addiu      $a1, $zero, 0x300
    /* 3C544 8012E144 21300000 */  addu       $a2, $zero, $zero
    /* 3C548 8012E148 3EFE050C */  jal        func_8017F8F8
    /* 3C54C 8012E14C FFFF0724 */   addiu     $a3, $zero, -0x1
  .L8012E150:
    /* 3C550 8012E150 1000BF8F */  lw         $ra, 0x10($sp)
    /* 3C554 8012E154 00000000 */  nop
    /* 3C558 8012E158 0800E003 */  jr         $ra
    /* 3C55C 8012E15C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8012DD58
