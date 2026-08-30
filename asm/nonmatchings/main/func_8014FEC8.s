nonmatching func_8014FEC8, 0x49C

glabel func_8014FEC8
    /* 5E2C8 8014FEC8 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 5E2CC 8014FECC 1000BFAF */  sw         $ra, 0x10($sp)
    /* 5E2D0 8014FED0 40DD030C */  jal        func_800F7500
    /* 5E2D4 8014FED4 80000424 */   addiu     $a0, $zero, 0x80
    /* 5E2D8 8014FED8 94E3030C */  jal        func_800F8E50
    /* 5E2DC 8014FEDC 69F40434 */   ori       $a0, $zero, 0xF469
    /* 5E2E0 8014FEE0 40DD030C */  jal        func_800F7500
    /* 5E2E4 8014FEE4 00100424 */   addiu     $a0, $zero, 0x1000
    /* 5E2E8 8014FEE8 94E3030C */  jal        func_800F8E50
    /* 5E2EC 8014FEEC 6BF40434 */   ori       $a0, $zero, 0xF46B
    /* 5E2F0 8014FEF0 80E4030C */  jal        func_800F9200
    /* 5E2F4 8014FEF4 00000000 */   nop
    /* 5E2F8 8014FEF8 5DD5030C */  jal        func_800F5574
    /* 5E2FC 8014FEFC 15000424 */   addiu     $a0, $zero, 0x15
    /* 5E300 8014FF00 F0D4030C */  jal        func_800F53C0
    /* 5E304 8014FF04 00000000 */   nop
    /* 5E308 8014FF08 2D004010 */  beqz       $v0, .L8014FFC0
    /* 5E30C 8014FF0C 00000000 */   nop
    /* 5E310 8014FF10 20D5030C */  jal        func_800F5480
    /* 5E314 8014FF14 00000000 */   nop
    /* 5E318 8014FF18 16E0030C */  jal        func_800F8058
    /* 5E31C 8014FF1C 15000424 */   addiu     $a0, $zero, 0x15
    /* 5E320 8014FF20 CCE4030C */  jal        func_800F9330
    /* 5E324 8014FF24 00000000 */   nop
    /* 5E328 8014FF28 91E5030C */  jal        func_800F9644
    /* 5E32C 8014FF2C 20000424 */   addiu     $a0, $zero, 0x20
    /* 5E330 8014FF30 5BD4030C */  jal        func_800F516C
    /* 5E334 8014FF34 00000000 */   nop
    /* 5E338 8014FF38 1A80033C */  lui        $v1, %hi(D_8019ED44)
    /* 5E33C 8014FF3C 44ED638C */  lw         $v1, %lo(D_8019ED44)($v1)
    /* 5E340 8014FF40 1A80043C */  lui        $a0, %hi(D_8019ED54)
    /* 5E344 8014FF44 54ED848C */  lw         $a0, %lo(D_8019ED54)($a0)
    /* 5E348 8014FF48 00006294 */  lhu        $v0, 0x0($v1)
    /* 5E34C 8014FF4C 0A80053C */  lui        $a1, %hi(D_8009DC9C)
    /* 5E350 8014FF50 000082A4 */  sh         $v0, 0x0($a0)
    /* 5E354 8014FF54 1A80033C */  lui        $v1, %hi(D_8019ED54)
    /* 5E358 8014FF58 54ED638C */  lw         $v1, %lo(D_8019ED54)($v1)
    /* 5E35C 8014FF5C 9CDCA524 */  addiu      $a1, $a1, %lo(D_8009DC9C)
    /* 5E360 8014FF60 00006294 */  lhu        $v0, 0x0($v1)
    /* 5E364 8014FF64 1A80063C */  lui        $a2, %hi(D_8019ED40)
    /* 5E368 8014FF68 40EDC68C */  lw         $a2, %lo(D_8019ED40)($a2)
    /* 5E36C 8014FF6C 21104500 */  addu       $v0, $v0, $a1
    /* 5E370 8014FF70 00004390 */  lbu        $v1, 0x0($v0)
    /* 5E374 8014FF74 00000000 */  nop
    /* 5E378 8014FF78 0000C3A0 */  sb         $v1, 0x0($a2)
    /* 5E37C 8014FF7C 1A80043C */  lui        $a0, %hi(D_8019ED54)
    /* 5E380 8014FF80 54ED848C */  lw         $a0, %lo(D_8019ED54)($a0)
    /* 5E384 8014FF84 00000000 */  nop
    /* 5E388 8014FF88 00008294 */  lhu        $v0, 0x0($a0)
    /* 5E38C 8014FF8C 1A80063C */  lui        $a2, %hi(D_8019ED40)
    /* 5E390 8014FF90 40EDC68C */  lw         $a2, %lo(D_8019ED40)($a2)
    /* 5E394 8014FF94 21104500 */  addu       $v0, $v0, $a1
    /* 5E398 8014FF98 01004390 */  lbu        $v1, 0x1($v0)
    /* 5E39C 8014FF9C 69F40434 */  ori        $a0, $zero, 0xF469
    /* 5E3A0 8014FFA0 6CE0030C */  jal        func_800F81B0
    /* 5E3A4 8014FFA4 0100C3A0 */   sb        $v1, 0x1($a2)
    /* 5E3A8 8014FFA8 C7E5030C */  jal        func_800F971C
    /* 5E3AC 8014FFAC 00000000 */   nop
    /* 5E3B0 8014FFB0 98E5030C */  jal        func_800F9660
    /* 5E3B4 8014FFB4 20000424 */   addiu     $a0, $zero, 0x20
    /* 5E3B8 8014FFB8 68E5030C */  jal        func_800F95A0
    /* 5E3BC 8014FFBC 00000000 */   nop
  .L8014FFC0:
    /* 5E3C0 8014FFC0 53D9030C */  jal        func_800F654C
    /* 5E3C4 8014FFC4 7F000424 */   addiu     $a0, $zero, 0x7F
    /* 5E3C8 8014FFC8 93E0030C */  jal        func_800F824C
    /* 5E3CC 8014FFCC 06000424 */   addiu     $a0, $zero, 0x6
    /* 5E3D0 8014FFD0 53D9030C */  jal        func_800F654C
    /* 5E3D4 8014FFD4 0C000424 */   addiu     $a0, $zero, 0xC
    /* 5E3D8 8014FFD8 93E0030C */  jal        func_800F824C
    /* 5E3DC 8014FFDC 02000424 */   addiu     $a0, $zero, 0x2
    /* 5E3E0 8014FFE0 F7E4030C */  jal        func_800F93DC
    /* 5E3E4 8014FFE4 00000000 */   nop
    /* 5E3E8 8014FFE8 91E5030C */  jal        func_800F9644
    /* 5E3EC 8014FFEC 20000424 */   addiu     $a0, $zero, 0x20
    /* 5E3F0 8014FFF0 1A80033C */  lui        $v1, %hi(D_8019ED44)
    /* 5E3F4 8014FFF4 44ED638C */  lw         $v1, %lo(D_8019ED44)($v1)
    /* 5E3F8 8014FFF8 00000000 */  nop
    /* 5E3FC 8014FFFC 00006294 */  lhu        $v0, 0x0($v1)
    /* 5E400 80150000 00000000 */  nop
    /* 5E404 80150004 80110200 */  sll        $v0, $v0, 6
    /* 5E408 80150008 000062A4 */  sh         $v0, 0x0($v1)
    /* 5E40C 8015000C 1A80043C */  lui        $a0, %hi(D_8019ED44)
    /* 5E410 80150010 44ED848C */  lw         $a0, %lo(D_8019ED44)($a0)
    /* 5E414 80150014 1A80033C */  lui        $v1, %hi(D_8019ED54)
    /* 5E418 80150018 54ED638C */  lw         $v1, %lo(D_8019ED54)($v1)
    /* 5E41C 8015001C 00008294 */  lhu        $v0, 0x0($a0)
    /* 5E420 80150020 E6DB0434 */  ori        $a0, $zero, 0xDBE6
    /* 5E424 80150024 56D9030C */  jal        func_800F6558
    /* 5E428 80150028 000062A4 */   sh        $v0, 0x0($v1)
    /* 5E42C 8015002C 9DE0030C */  jal        func_800F8274
    /* 5E430 80150030 08000424 */   addiu     $a0, $zero, 0x8
    /* 5E434 80150034 56D9030C */  jal        func_800F6558
    /* 5E438 80150038 00F00434 */   ori       $a0, $zero, 0xF000
    /* 5E43C 8015003C 9DE0030C */  jal        func_800F8274
    /* 5E440 80150040 04000424 */   addiu     $a0, $zero, 0x4
    /* 5E444 80150044 4DDD030C */  jal        func_800F7534
    /* 5E448 80150048 69F40434 */   ori       $a0, $zero, 0xF469
  .L8015004C:
    /* 5E44C 8015004C E7E4030C */  jal        func_800F939C
    /* 5E450 80150050 00000000 */   nop
    /* 5E454 80150054 0C00043C */  lui        $a0, (0xCF3C0 >> 16)
    /* 5E458 80150058 3DDB030C */  jal        func_800F6CF4
    /* 5E45C 8015005C C0F38434 */   ori       $a0, $a0, (0xCF3C0 & 0xFFFF)
    /* 5E460 80150060 8BE4030C */  jal        func_800F922C
    /* 5E464 80150064 00000000 */   nop
    /* 5E468 80150068 8BE4030C */  jal        func_800F922C
    /* 5E46C 8015006C 00000000 */   nop
    /* 5E470 80150070 99D0030C */  jal        func_800F4264
    /* 5E474 80150074 FF3F0424 */   addiu     $a0, $zero, 0x3FFF
    /* 5E478 80150078 5BD4030C */  jal        func_800F516C
    /* 5E47C 8015007C 00000000 */   nop
    /* 5E480 80150080 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 5E484 80150084 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 5E488 80150088 1A80053C */  lui        $a1, %hi(D_8019ED58)
    /* 5E48C 8015008C 58EDA58C */  lw         $a1, %lo(D_8019ED58)($a1)
    /* 5E490 80150090 00004394 */  lhu        $v1, 0x0($v0)
    /* 5E494 80150094 04000424 */  addiu      $a0, $zero, 0x4
    /* 5E498 80150098 28DA030C */  jal        func_800F68A0
    /* 5E49C 8015009C 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 5E4A0 801500A0 9DE0030C */  jal        func_800F8274
    /* 5E4A4 801500A4 21200000 */   addu      $a0, $zero, $zero
    /* 5E4A8 801500A8 04E5030C */  jal        func_800F9410
    /* 5E4AC 801500AC 00000000 */   nop
    /* 5E4B0 801500B0 99D0030C */  jal        func_800F4264
    /* 5E4B4 801500B4 00400424 */   addiu     $a0, $zero, 0x4000
    /* 5E4B8 801500B8 9DE0030C */  jal        func_800F8274
    /* 5E4BC 801500BC 0A000424 */   addiu     $a0, $zero, 0xA
    /* 5E4C0 801500C0 04E5030C */  jal        func_800F9410
    /* 5E4C4 801500C4 00000000 */   nop
    /* 5E4C8 801500C8 99D0030C */  jal        func_800F4264
    /* 5E4CC 801500CC 00800434 */   ori       $a0, $zero, 0x8000
    /* 5E4D0 801500D0 7AD0030C */  jal        func_800F41E8
    /* 5E4D4 801500D4 02020424 */   addiu     $a0, $zero, 0x202
    /* 5E4D8 801500D8 31004014 */  bnez       $v0, .L801501A0
    /* 5E4DC 801500DC 00000000 */   nop
    /* 5E4E0 801500E0 40DD030C */  jal        func_800F7500
    /* 5E4E4 801500E4 21200000 */   addu      $a0, $zero, $zero
  .L801500E8:
    /* 5E4E8 801500E8 B7DB030C */  jal        func_800F6EDC
    /* 5E4EC 801500EC 21200000 */   addu      $a0, $zero, $zero
    /* 5E4F0 801500F0 D940050C */  jal        func_80150364
    /* 5E4F4 801500F4 00000000 */   nop
    /* 5E4F8 801500F8 DEE0030C */  jal        func_800F8378
    /* 5E4FC 801500FC 08000424 */   addiu     $a0, $zero, 0x8
    /* 5E500 80150100 BCD8030C */  jal        func_800F62F0
    /* 5E504 80150104 21200000 */   addu      $a0, $zero, $zero
    /* 5E508 80150108 BCD8030C */  jal        func_800F62F0
    /* 5E50C 8015010C 21200000 */   addu      $a0, $zero, $zero
    /* 5E510 80150110 1A80033C */  lui        $v1, %hi(D_8019ED58)
    /* 5E514 80150114 58ED638C */  lw         $v1, %lo(D_8019ED58)($v1)
    /* 5E518 80150118 00000000 */  nop
    /* 5E51C 8015011C 00006294 */  lhu        $v0, 0x0($v1)
    /* 5E520 80150120 10000424 */  addiu      $a0, $zero, 0x10
    /* 5E524 80150124 02004224 */  addiu      $v0, $v0, 0x2
    /* 5E528 80150128 A4D6030C */  jal        func_800F5A90
    /* 5E52C 8015012C 000062A4 */   sh        $v0, 0x0($v1)
    /* 5E530 80150130 F5D4030C */  jal        func_800F53D4
    /* 5E534 80150134 00000000 */   nop
    /* 5E538 80150138 EBFF4010 */  beqz       $v0, .L801500E8
    /* 5E53C 8015013C 00000000 */   nop
  .L80150140:
    /* 5E540 80150140 B7DB030C */  jal        func_800F6EDC
    /* 5E544 80150144 21200000 */   addu      $a0, $zero, $zero
    /* 5E548 80150148 D940050C */  jal        func_80150364
    /* 5E54C 8015014C 00000000 */   nop
    /* 5E550 80150150 99D0030C */  jal        func_800F4264
    /* 5E554 80150154 FF000424 */   addiu     $a0, $zero, 0xFF
    /* 5E558 80150158 DEE0030C */  jal        func_800F8378
    /* 5E55C 8015015C 08000424 */   addiu     $a0, $zero, 0x8
    /* 5E560 80150160 BCD8030C */  jal        func_800F62F0
    /* 5E564 80150164 21200000 */   addu      $a0, $zero, $zero
    /* 5E568 80150168 1A80033C */  lui        $v1, %hi(D_8019ED58)
    /* 5E56C 8015016C 58ED638C */  lw         $v1, %lo(D_8019ED58)($v1)
    /* 5E570 80150170 00000000 */  nop
    /* 5E574 80150174 00006294 */  lhu        $v0, 0x0($v1)
    /* 5E578 80150178 20000424 */  addiu      $a0, $zero, 0x20
    /* 5E57C 8015017C 02004224 */  addiu      $v0, $v0, 0x2
    /* 5E580 80150180 A4D6030C */  jal        func_800F5A90
    /* 5E584 80150184 000062A4 */   sh        $v0, 0x0($v1)
    /* 5E588 80150188 F5D4030C */  jal        func_800F53D4
    /* 5E58C 8015018C 00000000 */   nop
    /* 5E590 80150190 EBFF4010 */  beqz       $v0, .L80150140
    /* 5E594 80150194 00000000 */   nop
    /* 5E598 80150198 98400508 */  j          .L80150260
    /* 5E59C 8015019C 00000000 */   nop
  .L801501A0:
    /* 5E5A0 801501A0 40DD030C */  jal        func_800F7500
    /* 5E5A4 801501A4 0E000424 */   addiu     $a0, $zero, 0xE
  .L801501A8:
    /* 5E5A8 801501A8 B7DB030C */  jal        func_800F6EDC
    /* 5E5AC 801501AC 21200000 */   addu      $a0, $zero, $zero
    /* 5E5B0 801501B0 D940050C */  jal        func_80150364
    /* 5E5B4 801501B4 00000000 */   nop
    /* 5E5B8 801501B8 DEE0030C */  jal        func_800F8378
    /* 5E5BC 801501BC 08000424 */   addiu     $a0, $zero, 0x8
    /* 5E5C0 801501C0 BCD8030C */  jal        func_800F62F0
    /* 5E5C4 801501C4 21200000 */   addu      $a0, $zero, $zero
    /* 5E5C8 801501C8 BCD8030C */  jal        func_800F62F0
    /* 5E5CC 801501CC 21200000 */   addu      $a0, $zero, $zero
    /* 5E5D0 801501D0 1A80033C */  lui        $v1, %hi(D_8019ED58)
    /* 5E5D4 801501D4 58ED638C */  lw         $v1, %lo(D_8019ED58)($v1)
    /* 5E5D8 801501D8 00000000 */  nop
    /* 5E5DC 801501DC 00006294 */  lhu        $v0, 0x0($v1)
    /* 5E5E0 801501E0 FEFF0434 */  ori        $a0, $zero, 0xFFFE
    /* 5E5E4 801501E4 FEFF4224 */  addiu      $v0, $v0, -0x2
    /* 5E5E8 801501E8 A4D6030C */  jal        func_800F5A90
    /* 5E5EC 801501EC 000062A4 */   sh        $v0, 0x0($v1)
    /* 5E5F0 801501F0 F5D4030C */  jal        func_800F53D4
    /* 5E5F4 801501F4 00000000 */   nop
    /* 5E5F8 801501F8 EBFF4010 */  beqz       $v0, .L801501A8
    /* 5E5FC 801501FC 00000000 */   nop
    /* 5E600 80150200 40DD030C */  jal        func_800F7500
    /* 5E604 80150204 1E000424 */   addiu     $a0, $zero, 0x1E
  .L80150208:
    /* 5E608 80150208 B7DB030C */  jal        func_800F6EDC
    /* 5E60C 8015020C 21200000 */   addu      $a0, $zero, $zero
    /* 5E610 80150210 D940050C */  jal        func_80150364
    /* 5E614 80150214 00000000 */   nop
    /* 5E618 80150218 99D0030C */  jal        func_800F4264
    /* 5E61C 8015021C FF000424 */   addiu     $a0, $zero, 0xFF
    /* 5E620 80150220 DEE0030C */  jal        func_800F8378
    /* 5E624 80150224 08000424 */   addiu     $a0, $zero, 0x8
    /* 5E628 80150228 BCD8030C */  jal        func_800F62F0
    /* 5E62C 8015022C 21200000 */   addu      $a0, $zero, $zero
    /* 5E630 80150230 1A80033C */  lui        $v1, %hi(D_8019ED58)
    /* 5E634 80150234 58ED638C */  lw         $v1, %lo(D_8019ED58)($v1)
    /* 5E638 80150238 00000000 */  nop
    /* 5E63C 8015023C 00006294 */  lhu        $v0, 0x0($v1)
    /* 5E640 80150240 0E000424 */  addiu      $a0, $zero, 0xE
    /* 5E644 80150244 FEFF4224 */  addiu      $v0, $v0, -0x2
    /* 5E648 80150248 A4D6030C */  jal        func_800F5A90
    /* 5E64C 8015024C 000062A4 */   sh        $v0, 0x0($v1)
    /* 5E650 80150250 F5D4030C */  jal        func_800F53D4
    /* 5E654 80150254 00000000 */   nop
    /* 5E658 80150258 EBFF4010 */  beqz       $v0, .L80150208
    /* 5E65C 8015025C 00000000 */   nop
  .L80150260:
    /* 5E660 80150260 96D9030C */  jal        func_800F6658
    /* 5E664 80150264 08000424 */   addiu     $a0, $zero, 0x8
    /* 5E668 80150268 04D5030C */  jal        func_800F5410
    /* 5E66C 8015026C 00000000 */   nop
    /* 5E670 80150270 19D0030C */  jal        func_800F4064
    /* 5E674 80150274 20000424 */   addiu     $a0, $zero, 0x20
    /* 5E678 80150278 9DE0030C */  jal        func_800F8274
    /* 5E67C 8015027C 08000424 */   addiu     $a0, $zero, 0x8
    /* 5E680 80150280 1A80033C */  lui        $v1, %hi(D_8019ED54)
    /* 5E684 80150284 54ED638C */  lw         $v1, %lo(D_8019ED54)($v1)
    /* 5E688 80150288 00000000 */  nop
    /* 5E68C 8015028C 00006294 */  lhu        $v0, 0x0($v1)
    /* 5E690 80150290 00000000 */  nop
    /* 5E694 80150294 02004224 */  addiu      $v0, $v0, 0x2
    /* 5E698 80150298 83E5030C */  jal        func_800F960C
    /* 5E69C 8015029C 000062A4 */   sh        $v0, 0x0($v1)
    /* 5E6A0 801502A0 A8D7030C */  jal        func_800F5EA0
    /* 5E6A4 801502A4 00000000 */   nop
    /* 5E6A8 801502A8 19D7030C */  jal        func_800F5C64
    /* 5E6AC 801502AC 02020424 */   addiu     $a0, $zero, 0x202
    /* 5E6B0 801502B0 66FF4014 */  bnez       $v0, .L8015004C
    /* 5E6B4 801502B4 00000000 */   nop
    /* 5E6B8 801502B8 C7E5030C */  jal        func_800F971C
    /* 5E6BC 801502BC 00000000 */   nop
    /* 5E6C0 801502C0 98E5030C */  jal        func_800F9660
    /* 5E6C4 801502C4 20000424 */   addiu     $a0, $zero, 0x20
    /* 5E6C8 801502C8 C7E5030C */  jal        func_800F971C
    /* 5E6CC 801502CC 00000000 */   nop
    /* 5E6D0 801502D0 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 5E6D4 801502D4 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 5E6D8 801502D8 1A80043C */  lui        $a0, %hi(D_8019ED54)
    /* 5E6DC 801502DC 54ED848C */  lw         $a0, %lo(D_8019ED54)($a0)
    /* 5E6E0 801502E0 00004394 */  lhu        $v1, 0x0($v0)
    /* 5E6E4 801502E4 00000000 */  nop
    /* 5E6E8 801502E8 000083A4 */  sh         $v1, 0x0($a0)
  .L801502EC:
    /* 5E6EC 801502EC DAE1030C */  jal        func_800F8768
    /* 5E6F0 801502F0 A6E90434 */   ori       $a0, $zero, 0xE9A6
    /* 5E6F4 801502F4 DAE1030C */  jal        func_800F8768
    /* 5E6F8 801502F8 A6EB0434 */   ori       $a0, $zero, 0xEBA6
    /* 5E6FC 801502FC D9D8030C */  jal        func_800F6364
    /* 5E700 80150300 00000000 */   nop
    /* 5E704 80150304 56D6030C */  jal        func_800F5958
    /* 5E708 80150308 40000424 */   addiu     $a0, $zero, 0x40
    /* 5E70C 8015030C F5D4030C */  jal        func_800F53D4
    /* 5E710 80150310 00000000 */   nop
    /* 5E714 80150314 F5FF4010 */  beqz       $v0, .L801502EC
    /* 5E718 80150318 00000000 */   nop
    /* 5E71C 8015031C 40DD030C */  jal        func_800F7500
    /* 5E720 80150320 00180424 */   addiu     $a0, $zero, 0x1800
    /* 5E724 80150324 84DC030C */  jal        func_800F7210
    /* 5E728 80150328 6BF40434 */   ori       $a0, $zero, 0xF46B
    /* 5E72C 8015032C 5BE3030C */  jal        func_800F8D6C
    /* 5E730 80150330 21200000 */   addu      $a0, $zero, $zero
    /* 5E734 80150334 53D9030C */  jal        func_800F654C
    /* 5E738 80150338 7E000424 */   addiu     $a0, $zero, 0x7E
    /* 5E73C 8015033C 77DC030C */  jal        func_800F71DC
    /* 5E740 80150340 E6DB0434 */   ori       $a0, $zero, 0xDBE6
    /* 5E744 80150344 FCC8010C */  jal        func_800723F0
    /* 5E748 80150348 00000000 */   nop
    /* 5E74C 8015034C 0041050C */  jal        func_80150400
    /* 5E750 80150350 00000000 */   nop
    /* 5E754 80150354 1000BF8F */  lw         $ra, 0x10($sp)
    /* 5E758 80150358 00000000 */  nop
    /* 5E75C 8015035C 0800E003 */  jr         $ra
    /* 5E760 80150360 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8014FEC8
