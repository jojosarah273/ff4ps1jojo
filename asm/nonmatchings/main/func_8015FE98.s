nonmatching func_8015FE98, 0x5D4

glabel func_8015FE98
    /* 6E298 8015FE98 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 6E29C 8015FE9C 1000BFAF */  sw         $ra, 0x10($sp)
    /* 6E2A0 8015FEA0 53D9030C */  jal        func_800F654C
    /* 6E2A4 8015FEA4 03000424 */   addiu     $a0, $zero, 0x3
    /* 6E2A8 8015FEA8 62E0030C */  jal        func_800F8188
    /* 6E2AC 8015FEAC E6380424 */   addiu     $a0, $zero, 0x38E6
    /* 6E2B0 8015FEB0 90D8030C */  jal        func_800F6240
    /* 6E2B4 8015FEB4 82380424 */   addiu     $a0, $zero, 0x3882
    /* 6E2B8 8015FEB8 59D9030C */  jal        func_800F6564
    /* 6E2BC 8015FEBC 83260424 */   addiu     $a0, $zero, 0x2683
    /* 6E2C0 8015FEC0 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 6E2C4 8015FEC4 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 6E2C8 8015FEC8 00000000 */  nop
    /* 6E2CC 8015FECC 00006290 */  lbu        $v0, 0x0($v1)
    /* 6E2D0 8015FED0 83260424 */  addiu      $a0, $zero, 0x2683
    /* 6E2D4 8015FED4 80004234 */  ori        $v0, $v0, 0x80
    /* 6E2D8 8015FED8 62E0030C */  jal        func_800F8188
    /* 6E2DC 8015FEDC 000062A0 */   sb        $v0, 0x0($v1)
    /* 6E2E0 8015FEE0 59D9030C */  jal        func_800F6564
    /* 6E2E4 8015FEE4 03270424 */   addiu     $a0, $zero, 0x2703
    /* 6E2E8 8015FEE8 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 6E2EC 8015FEEC 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 6E2F0 8015FEF0 00000000 */  nop
    /* 6E2F4 8015FEF4 00006290 */  lbu        $v0, 0x0($v1)
    /* 6E2F8 8015FEF8 03270424 */  addiu      $a0, $zero, 0x2703
    /* 6E2FC 8015FEFC 80004234 */  ori        $v0, $v0, 0x80
    /* 6E300 8015FF00 62E0030C */  jal        func_800F8188
    /* 6E304 8015FF04 000062A0 */   sb        $v0, 0x0($v1)
    /* 6E308 8015FF08 59D9030C */  jal        func_800F6564
    /* 6E30C 8015FF0C A0290424 */   addiu     $a0, $zero, 0x29A0
    /* 6E310 8015FF10 93E0030C */  jal        func_800F824C
    /* 6E314 8015FF14 A9000424 */   addiu     $a0, $zero, 0xA9
    /* 6E318 8015FF18 92D0030C */  jal        func_800F4248
    /* 6E31C 8015FF1C 03000424 */   addiu     $a0, $zero, 0x3
    /* 6E320 8015FF20 5DD5030C */  jal        func_800F5574
    /* 6E324 8015FF24 03000424 */   addiu     $a0, $zero, 0x3
    /* 6E328 8015FF28 F5D4030C */  jal        func_800F53D4
    /* 6E32C 8015FF2C 00000000 */   nop
    /* 6E330 8015FF30 A9004014 */  bnez       $v0, .L801601D8
    /* 6E334 8015FF34 00000000 */   nop
    /* 6E338 8015FF38 C7E5030C */  jal        func_800F971C
    /* 6E33C 8015FF3C 00000000 */   nop
    /* 6E340 8015FF40 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 6E344 8015FF44 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 6E348 8015FF48 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 6E34C 8015FF4C 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 6E350 8015FF50 00004394 */  lhu        $v1, 0x0($v0)
    /* 6E354 8015FF54 AB000424 */  addiu      $a0, $zero, 0xAB
    /* 6E358 8015FF58 5BE3030C */  jal        func_800F8D6C
    /* 6E35C 8015FF5C 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 6E360 8015FF60 04D5030C */  jal        func_800F5410
    /* 6E364 8015FF64 00000000 */   nop
  .L8015FF68:
    /* 6E368 8015FF68 DADA030C */  jal        func_800F6B68
    /* 6E36C 8015FF6C B5290424 */   addiu     $a0, $zero, 0x29B5
    /* 6E370 8015FF70 0DD9030C */  jal        func_800F6434
    /* 6E374 8015FF74 80000424 */   addiu     $a0, $zero, 0x80
    /* 6E378 8015FF78 07004014 */  bnez       $v0, .L8015FF98
    /* 6E37C 8015FF7C 00000000 */   nop
    /* 6E380 8015FF80 0FCF030C */  jal        func_800F3C3C
    /* 6E384 8015FF84 AB000424 */   addiu     $a0, $zero, 0xAB
    /* 6E388 8015FF88 CECF030C */  jal        func_800F3F38
    /* 6E38C 8015FF8C 21204000 */   addu      $a0, $v0, $zero
    /* 6E390 8015FF90 93E0030C */  jal        func_800F824C
    /* 6E394 8015FF94 AB000424 */   addiu     $a0, $zero, 0xAB
  .L8015FF98:
    /* 6E398 8015FF98 D9D8030C */  jal        func_800F6364
    /* 6E39C 8015FF9C 00000000 */   nop
    /* 6E3A0 8015FFA0 56D6030C */  jal        func_800F5958
    /* 6E3A4 8015FFA4 08000424 */   addiu     $a0, $zero, 0x8
    /* 6E3A8 8015FFA8 F5D4030C */  jal        func_800F53D4
    /* 6E3AC 8015FFAC 00000000 */   nop
    /* 6E3B0 8015FFB0 EDFF4010 */  beqz       $v0, .L8015FF68
    /* 6E3B4 8015FFB4 00000000 */   nop
    /* 6E3B8 8015FFB8 8CD9030C */  jal        func_800F6630
    /* 6E3BC 8015FFBC AB000424 */   addiu     $a0, $zero, 0xAB
    /* 6E3C0 8015FFC0 0DD9030C */  jal        func_800F6434
    /* 6E3C4 8015FFC4 02020424 */   addiu     $a0, $zero, 0x202
    /* 6E3C8 8015FFC8 53004014 */  bnez       $v0, .L80160118
    /* 6E3CC 8015FFCC 00000000 */   nop
    /* 6E3D0 8015FFD0 8CD9030C */  jal        func_800F6630
    /* 6E3D4 8015FFD4 A9000424 */   addiu     $a0, $zero, 0xA9
    /* 6E3D8 8015FFD8 92D0030C */  jal        func_800F4248
    /* 6E3DC 8015FFDC C0000424 */   addiu     $a0, $zero, 0xC0
    /* 6E3E0 8015FFE0 884A050C */  jal        func_80152A20
    /* 6E3E4 8015FFE4 00000000 */   nop
    /* 6E3E8 8015FFE8 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 6E3EC 8015FFEC 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 6E3F0 8015FFF0 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 6E3F4 8015FFF4 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 6E3F8 8015FFF8 00004394 */  lhu        $v1, 0x0($v0)
    /* 6E3FC 8015FFFC 8A000424 */  addiu      $a0, $zero, 0x8A
    /* 6E400 80160000 5BE3030C */  jal        func_800F8D6C
    /* 6E404 80160004 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 6E408 80160008 EEE3030C */  jal        func_800F8FB8
    /* 6E40C 8016000C B1000424 */   addiu     $a0, $zero, 0xB1
    /* 6E410 80160010 EEE3030C */  jal        func_800F8FB8
    /* 6E414 80160014 B2000424 */   addiu     $a0, $zero, 0xB2
    /* 6E418 80160018 7481050C */  jal        func_801605D0
    /* 6E41C 8016001C 00000000 */   nop
    /* 6E420 80160020 8CD9030C */  jal        func_800F6630
    /* 6E424 80160024 A9000424 */   addiu     $a0, $zero, 0xA9
    /* 6E428 80160028 92D0030C */  jal        func_800F4248
    /* 6E42C 8016002C 30000424 */   addiu     $a0, $zero, 0x30
    /* 6E430 80160030 CE4A050C */  jal        func_80152B38
    /* 6E434 80160034 00000000 */   nop
    /* 6E438 80160038 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 6E43C 8016003C 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 6E440 80160040 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 6E444 80160044 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 6E448 80160048 00004394 */  lhu        $v1, 0x0($v0)
    /* 6E44C 8016004C 8C000424 */  addiu      $a0, $zero, 0x8C
    /* 6E450 80160050 5BE3030C */  jal        func_800F8D6C
    /* 6E454 80160054 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 6E458 80160058 5CDC030C */  jal        func_800F7170
    /* 6E45C 8016005C 02000424 */   addiu     $a0, $zero, 0x2
    /* 6E460 80160060 0D004014 */  bnez       $v0, .L80160098
    /* 6E464 80160064 00000000 */   nop
  .L80160068:
    /* 6E468 80160068 53D9030C */  jal        func_800F654C
    /* 6E46C 8016006C 01000424 */   addiu     $a0, $zero, 0x1
    /* 6E470 80160070 1B81050C */  jal        func_8016046C
    /* 6E474 80160074 00000000 */   nop
    /* 6E478 80160078 68D7030C */  jal        func_800F5DA0
    /* 6E47C 8016007C 8C000424 */   addiu     $a0, $zero, 0x8C
    /* 6E480 80160080 8CD9030C */  jal        func_800F6630
    /* 6E484 80160084 8C000424 */   addiu     $a0, $zero, 0x8C
    /* 6E488 80160088 0DD9030C */  jal        func_800F6434
    /* 6E48C 8016008C 02020424 */   addiu     $a0, $zero, 0x202
    /* 6E490 80160090 F5FF4014 */  bnez       $v0, .L80160068
    /* 6E494 80160094 00000000 */   nop
  .L80160098:
    /* 6E498 80160098 59D9030C */  jal        func_800F6564
    /* 6E49C 8016009C A0290424 */   addiu     $a0, $zero, 0x29A0
    /* 6E4A0 801600A0 92D0030C */  jal        func_800F4248
    /* 6E4A4 801600A4 0C000424 */   addiu     $a0, $zero, 0xC
    /* 6E4A8 801600A8 144B050C */  jal        func_80152C50
    /* 6E4AC 801600AC 00000000 */   nop
    /* 6E4B0 801600B0 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 6E4B4 801600B4 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 6E4B8 801600B8 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 6E4BC 801600BC 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 6E4C0 801600C0 00004394 */  lhu        $v1, 0x0($v0)
    /* 6E4C4 801600C4 8C000424 */  addiu      $a0, $zero, 0x8C
    /* 6E4C8 801600C8 5BE3030C */  jal        func_800F8D6C
    /* 6E4CC 801600CC 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 6E4D0 801600D0 5CDC030C */  jal        func_800F7170
    /* 6E4D4 801600D4 02000424 */   addiu     $a0, $zero, 0x2
    /* 6E4D8 801600D8 E0004014 */  bnez       $v0, .L8016045C
    /* 6E4DC 801600DC 00000000 */   nop
  .L801600E0:
    /* 6E4E0 801600E0 53D9030C */  jal        func_800F654C
    /* 6E4E4 801600E4 02000424 */   addiu     $a0, $zero, 0x2
    /* 6E4E8 801600E8 1B81050C */  jal        func_8016046C
    /* 6E4EC 801600EC 00000000 */   nop
    /* 6E4F0 801600F0 68D7030C */  jal        func_800F5DA0
    /* 6E4F4 801600F4 8C000424 */   addiu     $a0, $zero, 0x8C
    /* 6E4F8 801600F8 8CD9030C */  jal        func_800F6630
    /* 6E4FC 801600FC 8C000424 */   addiu     $a0, $zero, 0x8C
    /* 6E500 80160100 0DD9030C */  jal        func_800F6434
    /* 6E504 80160104 02020424 */   addiu     $a0, $zero, 0x202
    /* 6E508 80160108 F5FF4014 */  bnez       $v0, .L801600E0
    /* 6E50C 8016010C 00000000 */   nop
    /* 6E510 80160110 17810508 */  j          .L8016045C
    /* 6E514 80160114 00000000 */   nop
  .L80160118:
    /* 6E518 80160118 53D9030C */  jal        func_800F654C
    /* 6E51C 8016011C 01000424 */   addiu     $a0, $zero, 0x1
    /* 6E520 80160120 93E0030C */  jal        func_800F824C
    /* 6E524 80160124 B1000424 */   addiu     $a0, $zero, 0xB1
    /* 6E528 80160128 7AD8030C */  jal        func_800F61E8
    /* 6E52C 8016012C 00000000 */   nop
    /* 6E530 80160130 93E0030C */  jal        func_800F824C
    /* 6E534 80160134 B2000424 */   addiu     $a0, $zero, 0xB2
    /* 6E538 80160138 7481050C */  jal        func_801605D0
    /* 6E53C 8016013C 00000000 */   nop
    /* 6E540 80160140 C7E5030C */  jal        func_800F971C
    /* 6E544 80160144 00000000 */   nop
    /* 6E548 80160148 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 6E54C 8016014C 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 6E550 80160150 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 6E554 80160154 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 6E558 80160158 00004394 */  lhu        $v1, 0x0($v0)
    /* 6E55C 8016015C 8A000424 */  addiu      $a0, $zero, 0x8A
    /* 6E560 80160160 5BE3030C */  jal        func_800F8D6C
    /* 6E564 80160164 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 6E568 80160168 8CD9030C */  jal        func_800F6630
    /* 6E56C 8016016C A9000424 */   addiu     $a0, $zero, 0xA9
    /* 6E570 80160170 92D0030C */  jal        func_800F4248
    /* 6E574 80160174 C0000424 */   addiu     $a0, $zero, 0xC0
    /* 6E578 80160178 884A050C */  jal        func_80152A20
    /* 6E57C 8016017C 00000000 */   nop
    /* 6E580 80160180 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 6E584 80160184 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 6E588 80160188 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 6E58C 8016018C 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 6E590 80160190 00004394 */  lhu        $v1, 0x0($v0)
    /* 6E594 80160194 8C000424 */  addiu      $a0, $zero, 0x8C
    /* 6E598 80160198 5BE3030C */  jal        func_800F8D6C
    /* 6E59C 8016019C 0000A3A4 */   sh        $v1, 0x0($a1)
  .L801601A0:
    /* 6E5A0 801601A0 53D9030C */  jal        func_800F654C
    /* 6E5A4 801601A4 21200000 */   addu      $a0, $zero, $zero
    /* 6E5A8 801601A8 1B81050C */  jal        func_8016046C
    /* 6E5AC 801601AC 00000000 */   nop
    /* 6E5B0 801601B0 68D7030C */  jal        func_800F5DA0
    /* 6E5B4 801601B4 8C000424 */   addiu     $a0, $zero, 0x8C
    /* 6E5B8 801601B8 8CD9030C */  jal        func_800F6630
    /* 6E5BC 801601BC 8C000424 */   addiu     $a0, $zero, 0x8C
    /* 6E5C0 801601C0 0DD9030C */  jal        func_800F6434
    /* 6E5C4 801601C4 02020424 */   addiu     $a0, $zero, 0x202
    /* 6E5C8 801601C8 F5FF4014 */  bnez       $v0, .L801601A0
    /* 6E5CC 801601CC 00000000 */   nop
    /* 6E5D0 801601D0 17810508 */  j          .L8016045C
    /* 6E5D4 801601D4 00000000 */   nop
  .L801601D8:
    /* 6E5D8 801601D8 C7E5030C */  jal        func_800F971C
    /* 6E5DC 801601DC 00000000 */   nop
    /* 6E5E0 801601E0 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 6E5E4 801601E4 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 6E5E8 801601E8 1A80043C */  lui        $a0, %hi(D_8019ED54)
    /* 6E5EC 801601EC 54ED848C */  lw         $a0, %lo(D_8019ED54)($a0)
    /* 6E5F0 801601F0 00004394 */  lhu        $v1, 0x0($v0)
    /* 6E5F4 801601F4 04D5030C */  jal        func_800F5410
    /* 6E5F8 801601F8 000083A4 */   sh        $v1, 0x0($a0)
  .L801601FC:
    /* 6E5FC 801601FC DADA030C */  jal        func_800F6B68
    /* 6E600 80160200 B5290424 */   addiu     $a0, $zero, 0x29B5
    /* 6E604 80160204 5DD5030C */  jal        func_800F5574
    /* 6E608 80160208 02000424 */   addiu     $a0, $zero, 0x2
    /* 6E60C 8016020C F5D4030C */  jal        func_800F53D4
    /* 6E610 80160210 00000000 */   nop
    /* 6E614 80160214 4B004014 */  bnez       $v0, .L80160344
    /* 6E618 80160218 00000000 */   nop
    /* 6E61C 8016021C D9D8030C */  jal        func_800F6364
    /* 6E620 80160220 00000000 */   nop
    /* 6E624 80160224 56D6030C */  jal        func_800F5958
    /* 6E628 80160228 08000424 */   addiu     $a0, $zero, 0x8
    /* 6E62C 8016022C F5D4030C */  jal        func_800F53D4
    /* 6E630 80160230 00000000 */   nop
    /* 6E634 80160234 F1FF4010 */  beqz       $v0, .L801601FC
    /* 6E638 80160238 00000000 */   nop
    /* 6E63C 8016023C 8CD9030C */  jal        func_800F6630
    /* 6E640 80160240 A9000424 */   addiu     $a0, $zero, 0xA9
    /* 6E644 80160244 92D0030C */  jal        func_800F4248
    /* 6E648 80160248 C0000424 */   addiu     $a0, $zero, 0xC0
    /* 6E64C 8016024C 884A050C */  jal        func_80152A20
    /* 6E650 80160250 00000000 */   nop
    /* 6E654 80160254 62E0030C */  jal        func_800F8188
    /* 6E658 80160258 AB000424 */   addiu     $a0, $zero, 0xAB
    /* 6E65C 8016025C 8CD9030C */  jal        func_800F6630
    /* 6E660 80160260 A9000424 */   addiu     $a0, $zero, 0xA9
    /* 6E664 80160264 92D0030C */  jal        func_800F4248
    /* 6E668 80160268 30000424 */   addiu     $a0, $zero, 0x30
    /* 6E66C 8016026C CE4A050C */  jal        func_80152B38
    /* 6E670 80160270 00000000 */   nop
    /* 6E674 80160274 04D5030C */  jal        func_800F5410
    /* 6E678 80160278 00000000 */   nop
    /* 6E67C 8016027C C1CE030C */  jal        func_800F3B04
    /* 6E680 80160280 AB000424 */   addiu     $a0, $zero, 0xAB
    /* 6E684 80160284 CECF030C */  jal        func_800F3F38
    /* 6E688 80160288 21204000 */   addu      $a0, $v0, $zero
    /* 6E68C 8016028C 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 6E690 80160290 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 6E694 80160294 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 6E698 80160298 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 6E69C 8016029C 00004394 */  lhu        $v1, 0x0($v0)
    /* 6E6A0 801602A0 8A000424 */  addiu      $a0, $zero, 0x8A
    /* 6E6A4 801602A4 5BE3030C */  jal        func_800F8D6C
    /* 6E6A8 801602A8 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 6E6AC 801602AC 53D9030C */  jal        func_800F654C
    /* 6E6B0 801602B0 21200000 */   addu      $a0, $zero, $zero
    /* 6E6B4 801602B4 93E0030C */  jal        func_800F824C
    /* 6E6B8 801602B8 B1000424 */   addiu     $a0, $zero, 0xB1
    /* 6E6BC 801602BC 7AD8030C */  jal        func_800F61E8
    /* 6E6C0 801602C0 00000000 */   nop
    /* 6E6C4 801602C4 93E0030C */  jal        func_800F824C
    /* 6E6C8 801602C8 B2000424 */   addiu     $a0, $zero, 0xB2
    /* 6E6CC 801602CC 7481050C */  jal        func_801605D0
    /* 6E6D0 801602D0 00000000 */   nop
    /* 6E6D4 801602D4 8CD9030C */  jal        func_800F6630
    /* 6E6D8 801602D8 A9000424 */   addiu     $a0, $zero, 0xA9
    /* 6E6DC 801602DC 92D0030C */  jal        func_800F4248
    /* 6E6E0 801602E0 0C000424 */   addiu     $a0, $zero, 0xC
    /* 6E6E4 801602E4 144B050C */  jal        func_80152C50
    /* 6E6E8 801602E8 00000000 */   nop
    /* 6E6EC 801602EC 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 6E6F0 801602F0 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 6E6F4 801602F4 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 6E6F8 801602F8 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 6E6FC 801602FC 00004394 */  lhu        $v1, 0x0($v0)
    /* 6E700 80160300 8C000424 */  addiu      $a0, $zero, 0x8C
    /* 6E704 80160304 5BE3030C */  jal        func_800F8D6C
    /* 6E708 80160308 0000A3A4 */   sh        $v1, 0x0($a1)
  .L8016030C:
    /* 6E70C 8016030C 53D9030C */  jal        func_800F654C
    /* 6E710 80160310 02000424 */   addiu     $a0, $zero, 0x2
    /* 6E714 80160314 1B81050C */  jal        func_8016046C
    /* 6E718 80160318 00000000 */   nop
    /* 6E71C 8016031C 68D7030C */  jal        func_800F5DA0
    /* 6E720 80160320 8C000424 */   addiu     $a0, $zero, 0x8C
    /* 6E724 80160324 8CD9030C */  jal        func_800F6630
    /* 6E728 80160328 8C000424 */   addiu     $a0, $zero, 0x8C
    /* 6E72C 8016032C 0DD9030C */  jal        func_800F6434
    /* 6E730 80160330 02020424 */   addiu     $a0, $zero, 0x202
    /* 6E734 80160334 F5FF4014 */  bnez       $v0, .L8016030C
    /* 6E738 80160338 00000000 */   nop
    /* 6E73C 8016033C 17810508 */  j          .L8016045C
    /* 6E740 80160340 00000000 */   nop
  .L80160344:
    /* 6E744 80160344 C7E5030C */  jal        func_800F971C
    /* 6E748 80160348 00000000 */   nop
    /* 6E74C 8016034C 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 6E750 80160350 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 6E754 80160354 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 6E758 80160358 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 6E75C 8016035C 00004394 */  lhu        $v1, 0x0($v0)
    /* 6E760 80160360 8A000424 */  addiu      $a0, $zero, 0x8A
    /* 6E764 80160364 5BE3030C */  jal        func_800F8D6C
    /* 6E768 80160368 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 6E76C 8016036C 53D9030C */  jal        func_800F654C
    /* 6E770 80160370 02000424 */   addiu     $a0, $zero, 0x2
    /* 6E774 80160374 93E0030C */  jal        func_800F824C
    /* 6E778 80160378 B1000424 */   addiu     $a0, $zero, 0xB1
    /* 6E77C 8016037C 93E0030C */  jal        func_800F824C
    /* 6E780 80160380 B2000424 */   addiu     $a0, $zero, 0xB2
    /* 6E784 80160384 7481050C */  jal        func_801605D0
    /* 6E788 80160388 00000000 */   nop
    /* 6E78C 8016038C 8CD9030C */  jal        func_800F6630
    /* 6E790 80160390 A9000424 */   addiu     $a0, $zero, 0xA9
    /* 6E794 80160394 92D0030C */  jal        func_800F4248
    /* 6E798 80160398 C0000424 */   addiu     $a0, $zero, 0xC0
    /* 6E79C 8016039C 884A050C */  jal        func_80152A20
    /* 6E7A0 801603A0 00000000 */   nop
    /* 6E7A4 801603A4 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 6E7A8 801603A8 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 6E7AC 801603AC 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 6E7B0 801603B0 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 6E7B4 801603B4 00004394 */  lhu        $v1, 0x0($v0)
    /* 6E7B8 801603B8 8C000424 */  addiu      $a0, $zero, 0x8C
    /* 6E7BC 801603BC 5BE3030C */  jal        func_800F8D6C
    /* 6E7C0 801603C0 0000A3A4 */   sh        $v1, 0x0($a1)
  .L801603C4:
    /* 6E7C4 801603C4 53D9030C */  jal        func_800F654C
    /* 6E7C8 801603C8 21200000 */   addu      $a0, $zero, $zero
    /* 6E7CC 801603CC 1B81050C */  jal        func_8016046C
    /* 6E7D0 801603D0 00000000 */   nop
    /* 6E7D4 801603D4 68D7030C */  jal        func_800F5DA0
    /* 6E7D8 801603D8 8C000424 */   addiu     $a0, $zero, 0x8C
    /* 6E7DC 801603DC 8CD9030C */  jal        func_800F6630
    /* 6E7E0 801603E0 8C000424 */   addiu     $a0, $zero, 0x8C
    /* 6E7E4 801603E4 0DD9030C */  jal        func_800F6434
    /* 6E7E8 801603E8 02020424 */   addiu     $a0, $zero, 0x202
    /* 6E7EC 801603EC F5FF4014 */  bnez       $v0, .L801603C4
    /* 6E7F0 801603F0 00000000 */   nop
    /* 6E7F4 801603F4 59D9030C */  jal        func_800F6564
    /* 6E7F8 801603F8 A0290424 */   addiu     $a0, $zero, 0x29A0
    /* 6E7FC 801603FC 92D0030C */  jal        func_800F4248
    /* 6E800 80160400 30000424 */   addiu     $a0, $zero, 0x30
    /* 6E804 80160404 CE4A050C */  jal        func_80152B38
    /* 6E808 80160408 00000000 */   nop
    /* 6E80C 8016040C 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 6E810 80160410 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 6E814 80160414 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 6E818 80160418 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 6E81C 8016041C 00004394 */  lhu        $v1, 0x0($v0)
    /* 6E820 80160420 8C000424 */  addiu      $a0, $zero, 0x8C
    /* 6E824 80160424 5BE3030C */  jal        func_800F8D6C
    /* 6E828 80160428 0000A3A4 */   sh        $v1, 0x0($a1)
  .L8016042C:
    /* 6E82C 8016042C 53D9030C */  jal        func_800F654C
    /* 6E830 80160430 01000424 */   addiu     $a0, $zero, 0x1
    /* 6E834 80160434 1B81050C */  jal        func_8016046C
    /* 6E838 80160438 00000000 */   nop
    /* 6E83C 8016043C 68D7030C */  jal        func_800F5DA0
    /* 6E840 80160440 8C000424 */   addiu     $a0, $zero, 0x8C
    /* 6E844 80160444 8CD9030C */  jal        func_800F6630
    /* 6E848 80160448 8C000424 */   addiu     $a0, $zero, 0x8C
    /* 6E84C 8016044C 0DD9030C */  jal        func_800F6434
    /* 6E850 80160450 02020424 */   addiu     $a0, $zero, 0x202
    /* 6E854 80160454 F5FF4014 */  bnez       $v0, .L8016042C
    /* 6E858 80160458 00000000 */   nop
  .L8016045C:
    /* 6E85C 8016045C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 6E860 80160460 00000000 */  nop
    /* 6E864 80160464 0800E003 */  jr         $ra
    /* 6E868 80160468 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8015FE98
