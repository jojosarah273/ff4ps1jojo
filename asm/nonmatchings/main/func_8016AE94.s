nonmatching func_8016AE94, 0x5DC

glabel func_8016AE94
    /* 79294 8016AE94 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 79298 8016AE98 1000BFAF */  sw         $ra, 0x10($sp)
    /* 7929C 8016AE9C DDE3030C */  jal        func_800F8F74
    /* 792A0 8016AEA0 257D0424 */   addiu     $a0, $zero, 0x7D25
    /* 792A4 8016AEA4 77DC030C */  jal        func_800F71DC
    /* 792A8 8016AEA8 80000424 */   addiu     $a0, $zero, 0x80
    /* 792AC 8016AEAC 5BE3030C */  jal        func_800F8D6C
    /* 792B0 8016AEB0 08000424 */   addiu     $a0, $zero, 0x8
    /* 792B4 8016AEB4 5BE3030C */  jal        func_800F8D6C
    /* 792B8 8016AEB8 0A000424 */   addiu     $a0, $zero, 0xA
    /* 792BC 8016AEBC 77DC030C */  jal        func_800F71DC
    /* 792C0 8016AEC0 00010424 */   addiu     $a0, $zero, 0x100
    /* 792C4 8016AEC4 5BE3030C */  jal        func_800F8D6C
    /* 792C8 8016AEC8 21200000 */   addu      $a0, $zero, $zero
    /* 792CC 8016AECC 5BE3030C */  jal        func_800F8D6C
    /* 792D0 8016AED0 06000424 */   addiu     $a0, $zero, 0x6
    /* 792D4 8016AED4 77DC030C */  jal        func_800F71DC
    /* 792D8 8016AED8 00010424 */   addiu     $a0, $zero, 0x100
    /* 792DC 8016AEDC 77AB050C */  jal        func_8016ADDC
    /* 792E0 8016AEE0 00000000 */   nop
    /* 792E4 8016AEE4 91E5030C */  jal        func_800F9644
    /* 792E8 8016AEE8 20000424 */   addiu     $a0, $zero, 0x20
    /* 792EC 8016AEEC C7E5030C */  jal        func_800F971C
    /* 792F0 8016AEF0 00000000 */   nop
    /* 792F4 8016AEF4 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 792F8 8016AEF8 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 792FC 8016AEFC 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 79300 8016AF00 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 79304 8016AF04 00004394 */  lhu        $v1, 0x0($v0)
    /* 79308 8016AF08 80020424 */  addiu      $a0, $zero, 0x280
    /* 7930C 8016AF0C 40DD030C */  jal        func_800F7500
    /* 79310 8016AF10 0000A3A4 */   sh        $v1, 0x0($a1)
  .L8016AF14:
    /* 79314 8016AF14 96D9030C */  jal        func_800F6658
    /* 79318 8016AF18 21200000 */   addu      $a0, $zero, $zero
    /* 7931C 8016AF1C 75E2030C */  jal        func_800F89D4
    /* 79320 8016AF20 19330424 */   addiu     $a0, $zero, 0x3319
    /* 79324 8016AF24 96D9030C */  jal        func_800F6658
    /* 79328 8016AF28 06000424 */   addiu     $a0, $zero, 0x6
    /* 7932C 8016AF2C 75E2030C */  jal        func_800F89D4
    /* 79330 8016AF30 1B370424 */   addiu     $a0, $zero, 0x371B
    /* 79334 8016AF34 96D9030C */  jal        func_800F6658
    /* 79338 8016AF38 21200000 */   addu      $a0, $zero, $zero
    /* 7933C 8016AF3C 20D5030C */  jal        func_800F5480
    /* 79340 8016AF40 00000000 */   nop
    /* 79344 8016AF44 34E0030C */  jal        func_800F80D0
    /* 79348 8016AF48 02000424 */   addiu     $a0, $zero, 0x2
    /* 7934C 8016AF4C 9DE0030C */  jal        func_800F8274
    /* 79350 8016AF50 21200000 */   addu      $a0, $zero, $zero
    /* 79354 8016AF54 96D9030C */  jal        func_800F6658
    /* 79358 8016AF58 06000424 */   addiu     $a0, $zero, 0x6
    /* 7935C 8016AF5C 20D5030C */  jal        func_800F5480
    /* 79360 8016AF60 00000000 */   nop
    /* 79364 8016AF64 34E0030C */  jal        func_800F80D0
    /* 79368 8016AF68 01000424 */   addiu     $a0, $zero, 0x1
    /* 7936C 8016AF6C 9DE0030C */  jal        func_800F8274
    /* 79370 8016AF70 06000424 */   addiu     $a0, $zero, 0x6
    /* 79374 8016AF74 1A80033C */  lui        $v1, %hi(D_8019ED58)
    /* 79378 8016AF78 58ED638C */  lw         $v1, %lo(D_8019ED58)($v1)
    /* 7937C 8016AF7C 1A80043C */  lui        $a0, %hi(D_8019ED44)
    /* 79380 8016AF80 44ED848C */  lw         $a0, %lo(D_8019ED44)($a0)
    /* 79384 8016AF84 00006294 */  lhu        $v0, 0x0($v1)
    /* 79388 8016AF88 04D5030C */  jal        func_800F5410
    /* 7938C 8016AF8C 000082A4 */   sh        $v0, 0x0($a0)
    /* 79390 8016AF90 19D0030C */  jal        func_800F4064
    /* 79394 8016AF94 04000424 */   addiu     $a0, $zero, 0x4
    /* 79398 8016AF98 1A80033C */  lui        $v1, %hi(D_8019ED44)
    /* 7939C 8016AF9C 44ED638C */  lw         $v1, %lo(D_8019ED44)($v1)
    /* 793A0 8016AFA0 1A80043C */  lui        $a0, %hi(D_8019ED58)
    /* 793A4 8016AFA4 58ED848C */  lw         $a0, %lo(D_8019ED58)($a0)
    /* 793A8 8016AFA8 00006294 */  lhu        $v0, 0x0($v1)
    /* 793AC 8016AFAC D9D8030C */  jal        func_800F6364
    /* 793B0 8016AFB0 000082A4 */   sh        $v0, 0x0($a0)
    /* 793B4 8016AFB4 A4D6030C */  jal        func_800F5A90
    /* 793B8 8016AFB8 00040424 */   addiu     $a0, $zero, 0x400
    /* 793BC 8016AFBC F5D4030C */  jal        func_800F53D4
    /* 793C0 8016AFC0 00000000 */   nop
    /* 793C4 8016AFC4 D3FF4010 */  beqz       $v0, .L8016AF14
    /* 793C8 8016AFC8 00000000 */   nop
    /* 793CC 8016AFCC 96D9030C */  jal        func_800F6658
    /* 793D0 8016AFD0 64000424 */   addiu     $a0, $zero, 0x64
    /* 793D4 8016AFD4 99D0030C */  jal        func_800F4264
    /* 793D8 8016AFD8 FF000424 */   addiu     $a0, $zero, 0xFF
    /* 793DC 8016AFDC 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 793E0 8016AFE0 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 793E4 8016AFE4 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 793E8 8016AFE8 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 793EC 8016AFEC 00004394 */  lhu        $v1, 0x0($v0)
    /* 793F0 8016AFF0 02000424 */  addiu      $a0, $zero, 0x2
    /* 793F4 8016AFF4 56D6030C */  jal        func_800F5958
    /* 793F8 8016AFF8 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 793FC 8016AFFC F5D4030C */  jal        func_800F53D4
    /* 79400 8016B000 00000000 */   nop
    /* 79404 8016B004 32004014 */  bnez       $v0, .L8016B0D0
    /* 79408 8016B008 00000000 */   nop
    /* 7940C 8016B00C 40DD030C */  jal        func_800F7500
    /* 79410 8016B010 80020424 */   addiu     $a0, $zero, 0x280
    /* 79414 8016B014 77DC030C */  jal        func_800F71DC
    /* 79418 8016B018 04010424 */   addiu     $a0, $zero, 0x104
  .L8016B01C:
    /* 7941C 8016B01C 7ADB030C */  jal        func_800F6DE8
    /* 79420 8016B020 19330424 */   addiu     $a0, $zero, 0x3319
    /* 79424 8016B024 F7E1030C */  jal        func_800F87DC
    /* 79428 8016B028 19330424 */   addiu     $a0, $zero, 0x3319
    /* 7942C 8016B02C 7ADB030C */  jal        func_800F6DE8
    /* 79430 8016B030 1B370424 */   addiu     $a0, $zero, 0x371B
    /* 79434 8016B034 F7E1030C */  jal        func_800F87DC
    /* 79438 8016B038 1B370424 */   addiu     $a0, $zero, 0x371B
    /* 7943C 8016B03C 1A80033C */  lui        $v1, %hi(D_8019ED54)
    /* 79440 8016B040 54ED638C */  lw         $v1, %lo(D_8019ED54)($v1)
    /* 79444 8016B044 1A80043C */  lui        $a0, %hi(D_8019ED44)
    /* 79448 8016B048 44ED848C */  lw         $a0, %lo(D_8019ED44)($a0)
    /* 7944C 8016B04C 00006294 */  lhu        $v0, 0x0($v1)
    /* 79450 8016B050 20D5030C */  jal        func_800F5480
    /* 79454 8016B054 000082A4 */   sh        $v0, 0x0($a0)
    /* 79458 8016B058 34E0030C */  jal        func_800F80D0
    /* 7945C 8016B05C 04000424 */   addiu     $a0, $zero, 0x4
    /* 79460 8016B060 1A80033C */  lui        $v1, %hi(D_8019ED44)
    /* 79464 8016B064 44ED638C */  lw         $v1, %lo(D_8019ED44)($v1)
    /* 79468 8016B068 1A80043C */  lui        $a0, %hi(D_8019ED54)
    /* 7946C 8016B06C 54ED848C */  lw         $a0, %lo(D_8019ED54)($a0)
    /* 79470 8016B070 00006294 */  lhu        $v0, 0x0($v1)
    /* 79474 8016B074 00000000 */  nop
    /* 79478 8016B078 000082A4 */  sh         $v0, 0x0($a0)
    /* 7947C 8016B07C 1A80033C */  lui        $v1, %hi(D_8019ED58)
    /* 79480 8016B080 58ED638C */  lw         $v1, %lo(D_8019ED58)($v1)
    /* 79484 8016B084 1A80043C */  lui        $a0, %hi(D_8019ED44)
    /* 79488 8016B088 44ED848C */  lw         $a0, %lo(D_8019ED44)($a0)
    /* 7948C 8016B08C 00006294 */  lhu        $v0, 0x0($v1)
    /* 79490 8016B090 04D5030C */  jal        func_800F5410
    /* 79494 8016B094 000082A4 */   sh        $v0, 0x0($a0)
    /* 79498 8016B098 19D0030C */  jal        func_800F4064
    /* 7949C 8016B09C 04000424 */   addiu     $a0, $zero, 0x4
    /* 794A0 8016B0A0 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 794A4 8016B0A4 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 794A8 8016B0A8 1A80053C */  lui        $a1, %hi(D_8019ED58)
    /* 794AC 8016B0AC 58EDA58C */  lw         $a1, %lo(D_8019ED58)($a1)
    /* 794B0 8016B0B0 00004394 */  lhu        $v1, 0x0($v0)
    /* 794B4 8016B0B4 00040424 */  addiu      $a0, $zero, 0x400
    /* 794B8 8016B0B8 A4D6030C */  jal        func_800F5A90
    /* 794BC 8016B0BC 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 794C0 8016B0C0 F5D4030C */  jal        func_800F53D4
    /* 794C4 8016B0C4 00000000 */   nop
    /* 794C8 8016B0C8 D4FF4010 */  beqz       $v0, .L8016B01C
    /* 794CC 8016B0CC 00000000 */   nop
  .L8016B0D0:
    /* 794D0 8016B0D0 C7E5030C */  jal        func_800F971C
    /* 794D4 8016B0D4 00000000 */   nop
    /* 794D8 8016B0D8 98E5030C */  jal        func_800F9660
    /* 794DC 8016B0DC 20000424 */   addiu     $a0, $zero, 0x20
    /* 794E0 8016B0E0 8CD9030C */  jal        func_800F6630
    /* 794E4 8016B0E4 64000424 */   addiu     $a0, $zero, 0x64
    /* 794E8 8016B0E8 5DD5030C */  jal        func_800F5574
    /* 794EC 8016B0EC 01000424 */   addiu     $a0, $zero, 0x1
    /* 794F0 8016B0F0 F5D4030C */  jal        func_800F53D4
    /* 794F4 8016B0F4 00000000 */   nop
    /* 794F8 8016B0F8 0B004014 */  bnez       $v0, .L8016B128
    /* 794FC 8016B0FC 00000000 */   nop
    /* 79500 8016B100 77DC030C */  jal        func_800F71DC
    /* 79504 8016B104 80000424 */   addiu     $a0, $zero, 0x80
    /* 79508 8016B108 40E3030C */  jal        func_800F8D00
    /* 7950C 8016B10C 8C000424 */   addiu     $a0, $zero, 0x8C
    /* 79510 8016B110 40E3030C */  jal        func_800F8D00
    /* 79514 8016B114 8E000424 */   addiu     $a0, $zero, 0x8E
    /* 79518 8016B118 77DC030C */  jal        func_800F71DC
    /* 7951C 8016B11C 00010424 */   addiu     $a0, $zero, 0x100
    /* 79520 8016B120 5AAC0508 */  j          .L8016B168
    /* 79524 8016B124 00000000 */   nop
  .L8016B128:
    /* 79528 8016B128 C7E5030C */  jal        func_800F971C
    /* 7952C 8016B12C 00000000 */   nop
    /* 79530 8016B130 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 79534 8016B134 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 79538 8016B138 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 7953C 8016B13C 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 79540 8016B140 00004394 */  lhu        $v1, 0x0($v0)
    /* 79544 8016B144 8C000424 */  addiu      $a0, $zero, 0x8C
    /* 79548 8016B148 40E3030C */  jal        func_800F8D00
    /* 7954C 8016B14C 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 79550 8016B150 77DC030C */  jal        func_800F71DC
    /* 79554 8016B154 20000424 */   addiu     $a0, $zero, 0x20
    /* 79558 8016B158 40E3030C */  jal        func_800F8D00
    /* 7955C 8016B15C 8E000424 */   addiu     $a0, $zero, 0x8E
    /* 79560 8016B160 77DC030C */  jal        func_800F71DC
    /* 79564 8016B164 000A0424 */   addiu     $a0, $zero, 0xA00
  .L8016B168:
    /* 79568 8016B168 40E3030C */  jal        func_800F8D00
    /* 7956C 8016B16C 61000424 */   addiu     $a0, $zero, 0x61
    /* 79570 8016B170 C7E5030C */  jal        func_800F971C
    /* 79574 8016B174 00000000 */   nop
    /* 79578 8016B178 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 7957C 8016B17C 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 79580 8016B180 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 79584 8016B184 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 79588 8016B188 00004394 */  lhu        $v1, 0x0($v0)
    /* 7958C 8016B18C 40000424 */  addiu      $a0, $zero, 0x40
    /* 79590 8016B190 5BE3030C */  jal        func_800F8D6C
    /* 79594 8016B194 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 79598 8016B198 5BE3030C */  jal        func_800F8D6C
    /* 7959C 8016B19C 5D000424 */   addiu     $a0, $zero, 0x5D
    /* 795A0 8016B1A0 5BE3030C */  jal        func_800F8D6C
    /* 795A4 8016B1A4 5F000424 */   addiu     $a0, $zero, 0x5F
    /* 795A8 8016B1A8 93E0030C */  jal        func_800F824C
    /* 795AC 8016B1AC 63000424 */   addiu     $a0, $zero, 0x63
    /* 795B0 8016B1B0 93E0030C */  jal        func_800F824C
    /* 795B4 8016B1B4 4A000424 */   addiu     $a0, $zero, 0x4A
    /* 795B8 8016B1B8 62E0030C */  jal        func_800F8188
    /* 795BC 8016B1BC 5B000424 */   addiu     $a0, $zero, 0x5B
    /* 795C0 8016B1C0 77DC030C */  jal        func_800F71DC
    /* 795C4 8016B1C4 00100424 */   addiu     $a0, $zero, 0x1000
    /* 795C8 8016B1C8 5BE3030C */  jal        func_800F8D6C
    /* 795CC 8016B1CC 92000424 */   addiu     $a0, $zero, 0x92
    /* 795D0 8016B1D0 77DC030C */  jal        func_800F71DC
    /* 795D4 8016B1D4 00800434 */   ori       $a0, $zero, 0x8000
    /* 795D8 8016B1D8 5BE3030C */  jal        func_800F8D6C
    /* 795DC 8016B1DC 90000424 */   addiu     $a0, $zero, 0x90
    /* 795E0 8016B1E0 C7E5030C */  jal        func_800F971C
    /* 795E4 8016B1E4 00000000 */   nop
    /* 795E8 8016B1E8 1A80033C */  lui        $v1, %hi(D_8019ED44)
    /* 795EC 8016B1EC 44ED638C */  lw         $v1, %lo(D_8019ED44)($v1)
    /* 795F0 8016B1F0 1A80043C */  lui        $a0, %hi(D_8019ED54)
    /* 795F4 8016B1F4 54ED848C */  lw         $a0, %lo(D_8019ED54)($a0)
    /* 795F8 8016B1F8 00006294 */  lhu        $v0, 0x0($v1)
    /* 795FC 8016B1FC 00000000 */  nop
    /* 79600 8016B200 000082A4 */  sh         $v0, 0x0($a0)
  .L8016B204:
    /* 79604 8016B204 8CD9030C */  jal        func_800F6630
    /* 79608 8016B208 64000424 */   addiu     $a0, $zero, 0x64
    /* 7960C 8016B20C 5DD5030C */  jal        func_800F5574
    /* 79610 8016B210 02000424 */   addiu     $a0, $zero, 0x2
    /* 79614 8016B214 F5D4030C */  jal        func_800F53D4
    /* 79618 8016B218 00000000 */   nop
    /* 7961C 8016B21C 05004010 */  beqz       $v0, .L8016B234
    /* 79620 8016B220 1300043C */   lui       $a0, (0x13D510 >> 16)
    /* 79624 8016B224 1ADB030C */  jal        func_800F6C68
    /* 79628 8016B228 10D58434 */   ori       $a0, $a0, (0x13D510 & 0xFFFF)
    /* 7962C 8016B22C 8FAC0508 */  j          .L8016B23C
    /* 79630 8016B230 00000000 */   nop
  .L8016B234:
    /* 79634 8016B234 1ADB030C */  jal        func_800F6C68
    /* 79638 8016B238 00D28434 */   ori       $a0, $a0, (0x13D200 & 0xFFFF)
  .L8016B23C:
    /* 7963C 8016B23C DAE1030C */  jal        func_800F8768
    /* 79640 8016B240 03210424 */   addiu     $a0, $zero, 0x2103
    /* 79644 8016B244 DAE1030C */  jal        func_800F8768
    /* 79648 8016B248 03220424 */   addiu     $a0, $zero, 0x2203
    /* 7964C 8016B24C D9D8030C */  jal        func_800F6364
    /* 79650 8016B250 00000000 */   nop
    /* 79654 8016B254 56D6030C */  jal        func_800F5958
    /* 79658 8016B258 00010424 */   addiu     $a0, $zero, 0x100
    /* 7965C 8016B25C F5D4030C */  jal        func_800F53D4
    /* 79660 8016B260 00000000 */   nop
    /* 79664 8016B264 E7FF4010 */  beqz       $v0, .L8016B204
    /* 79668 8016B268 00000000 */   nop
    /* 7966C 8016B26C DDE3030C */  jal        func_800F8F74
    /* 79670 8016B270 00210424 */   addiu     $a0, $zero, 0x2100
    /* 79674 8016B274 77DC030C */  jal        func_800F71DC
    /* 79678 8016B278 00100424 */   addiu     $a0, $zero, 0x1000
    /* 7967C 8016B27C 5BE3030C */  jal        func_800F8D6C
    /* 79680 8016B280 21200000 */   addu      $a0, $zero, $zero
    /* 79684 8016B284 77DC030C */  jal        func_800F71DC
    /* 79688 8016B288 00CC0434 */   ori       $a0, $zero, 0xCC00
    /* 7968C 8016B28C 40DD030C */  jal        func_800F7500
    /* 79690 8016B290 00400424 */   addiu     $a0, $zero, 0x4000
    /* 79694 8016B294 53D9030C */  jal        func_800F654C
    /* 79698 8016B298 15000424 */   addiu     $a0, $zero, 0x15
    /* 7969C 8016B29C 6CAD050C */  jal        func_8016B5B0
    /* 796A0 8016B2A0 00000000 */   nop
    /* 796A4 8016B2A4 77DC030C */  jal        func_800F71DC
    /* 796A8 8016B2A8 70000424 */   addiu     $a0, $zero, 0x70
    /* 796AC 8016B2AC 5BE3030C */  jal        func_800F8D6C
    /* 796B0 8016B2B0 6C000424 */   addiu     $a0, $zero, 0x6C
    /* 796B4 8016B2B4 77DC030C */  jal        func_800F71DC
    /* 796B8 8016B2B8 50000424 */   addiu     $a0, $zero, 0x50
    /* 796BC 8016B2BC 5BE3030C */  jal        func_800F8D6C
    /* 796C0 8016B2C0 6E000424 */   addiu     $a0, $zero, 0x6E
    /* 796C4 8016B2C4 77DC030C */  jal        func_800F71DC
    /* 796C8 8016B2C8 70000424 */   addiu     $a0, $zero, 0x70
    /* 796CC 8016B2CC 5BE3030C */  jal        func_800F8D6C
    /* 796D0 8016B2D0 70000424 */   addiu     $a0, $zero, 0x70
    /* 796D4 8016B2D4 77DC030C */  jal        func_800F71DC
    /* 796D8 8016B2D8 50000424 */   addiu     $a0, $zero, 0x50
    /* 796DC 8016B2DC 5BE3030C */  jal        func_800F8D6C
    /* 796E0 8016B2E0 72000424 */   addiu     $a0, $zero, 0x72
    /* 796E4 8016B2E4 B3AA050C */  jal        func_8016AACC
    /* 796E8 8016B2E8 00000000 */   nop
    /* 796EC 8016B2EC B5AF050C */  jal        func_8016BED4
    /* 796F0 8016B2F0 00000000 */   nop
    /* 796F4 8016B2F4 77DC030C */  jal        func_800F71DC
    /* 796F8 8016B2F8 40000424 */   addiu     $a0, $zero, 0x40
    /* 796FC 8016B2FC 40E3030C */  jal        func_800F8D00
    /* 79700 8016B300 84200424 */   addiu     $a0, $zero, 0x2084
    /* 79704 8016B304 77DC030C */  jal        func_800F71DC
    /* 79708 8016B308 80010424 */   addiu     $a0, $zero, 0x180
    /* 7970C 8016B30C 40E3030C */  jal        func_800F8D00
    /* 79710 8016B310 C4200424 */   addiu     $a0, $zero, 0x20C4
    /* 79714 8016B314 77DC030C */  jal        func_800F71DC
    /* 79718 8016B318 40000424 */   addiu     $a0, $zero, 0x40
    /* 7971C 8016B31C 40E3030C */  jal        func_800F8D00
    /* 79720 8016B320 8A200424 */   addiu     $a0, $zero, 0x208A
    /* 79724 8016B324 77DC030C */  jal        func_800F71DC
    /* 79728 8016B328 C0000424 */   addiu     $a0, $zero, 0xC0
    /* 7972C 8016B32C 40E3030C */  jal        func_800F8D00
    /* 79730 8016B330 CA200424 */   addiu     $a0, $zero, 0x20CA
    /* 79734 8016B334 77DC030C */  jal        func_800F71DC
    /* 79738 8016B338 80010424 */   addiu     $a0, $zero, 0x180
    /* 7973C 8016B33C 40E3030C */  jal        func_800F8D00
    /* 79740 8016B340 0A200424 */   addiu     $a0, $zero, 0x200A
    /* 79744 8016B344 77DC030C */  jal        func_800F71DC
    /* 79748 8016B348 00030424 */   addiu     $a0, $zero, 0x300
    /* 7974C 8016B34C 40E3030C */  jal        func_800F8D00
    /* 79750 8016B350 4A200424 */   addiu     $a0, $zero, 0x204A
    /* 79754 8016B354 77DC030C */  jal        func_800F71DC
    /* 79758 8016B358 18000424 */   addiu     $a0, $zero, 0x18
    /* 7975C 8016B35C 40E3030C */  jal        func_800F8D00
    /* 79760 8016B360 86200424 */   addiu     $a0, $zero, 0x2086
    /* 79764 8016B364 77DC030C */  jal        func_800F71DC
    /* 79768 8016B368 00010424 */   addiu     $a0, $zero, 0x100
    /* 7976C 8016B36C 40E3030C */  jal        func_800F8D00
    /* 79770 8016B370 C6200424 */   addiu     $a0, $zero, 0x20C6
    /* 79774 8016B374 77DC030C */  jal        func_800F71DC
    /* 79778 8016B378 08000424 */   addiu     $a0, $zero, 0x8
    /* 7977C 8016B37C 40E3030C */  jal        func_800F8D00
    /* 79780 8016B380 88200424 */   addiu     $a0, $zero, 0x2088
    /* 79784 8016B384 77DC030C */  jal        func_800F71DC
    /* 79788 8016B388 A0000424 */   addiu     $a0, $zero, 0xA0
    /* 7978C 8016B38C 40E3030C */  jal        func_800F8D00
    /* 79790 8016B390 C8200424 */   addiu     $a0, $zero, 0x20C8
    /* 79794 8016B394 77DC030C */  jal        func_800F71DC
    /* 79798 8016B398 21200000 */   addu      $a0, $zero, $zero
    /* 7979C 8016B39C 40DD030C */  jal        func_800F7500
    /* 797A0 8016B3A0 00010424 */   addiu     $a0, $zero, 0x100
    /* 797A4 8016B3A4 87AF050C */  jal        func_8016BE1C
    /* 797A8 8016B3A8 00000000 */   nop
    /* 797AC 8016B3AC 77DC030C */  jal        func_800F71DC
    /* 797B0 8016B3B0 02000424 */   addiu     $a0, $zero, 0x2
    /* 797B4 8016B3B4 40DD030C */  jal        func_800F7500
    /* 797B8 8016B3B8 21200000 */   addu      $a0, $zero, $zero
    /* 797BC 8016B3BC 87AF050C */  jal        func_8016BE1C
    /* 797C0 8016B3C0 00000000 */   nop
    /* 797C4 8016B3C4 77DC030C */  jal        func_800F71DC
    /* 797C8 8016B3C8 04000424 */   addiu     $a0, $zero, 0x4
    /* 797CC 8016B3CC 40DD030C */  jal        func_800F7500
    /* 797D0 8016B3D0 00010424 */   addiu     $a0, $zero, 0x100
    /* 797D4 8016B3D4 87AF050C */  jal        func_8016BE1C
    /* 797D8 8016B3D8 00000000 */   nop
    /* 797DC 8016B3DC 77DC030C */  jal        func_800F71DC
    /* 797E0 8016B3E0 06000424 */   addiu     $a0, $zero, 0x6
    /* 797E4 8016B3E4 40DD030C */  jal        func_800F7500
    /* 797E8 8016B3E8 54010424 */   addiu     $a0, $zero, 0x154
    /* 797EC 8016B3EC 87AF050C */  jal        func_8016BE1C
    /* 797F0 8016B3F0 00000000 */   nop
    /* 797F4 8016B3F4 77DC030C */  jal        func_800F71DC
    /* 797F8 8016B3F8 08000424 */   addiu     $a0, $zero, 0x8
    /* 797FC 8016B3FC 40DD030C */  jal        func_800F7500
    /* 79800 8016B400 F4020424 */   addiu     $a0, $zero, 0x2F4
    /* 79804 8016B404 87AF050C */  jal        func_8016BE1C
    /* 79808 8016B408 00000000 */   nop
    /* 7980C 8016B40C 1CAD050C */  jal        func_8016B470
    /* 79810 8016B410 00000000 */   nop
    /* 79814 8016B414 C7E5030C */  jal        func_800F971C
    /* 79818 8016B418 00000000 */   nop
    /* 7981C 8016B41C 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 79820 8016B420 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 79824 8016B424 1A80043C */  lui        $a0, %hi(D_8019ED54)
    /* 79828 8016B428 54ED848C */  lw         $a0, %lo(D_8019ED54)($a0)
    /* 7982C 8016B42C 00004394 */  lhu        $v1, 0x0($v0)
    /* 79830 8016B430 00000000 */  nop
    /* 79834 8016B434 000083A4 */  sh         $v1, 0x0($a0)
  .L8016B438:
    /* 79838 8016B438 DAE1030C */  jal        func_800F8768
    /* 7983C 8016B43C 193D0424 */   addiu     $a0, $zero, 0x3D19
    /* 79840 8016B440 D9D8030C */  jal        func_800F6364
    /* 79844 8016B444 00000000 */   nop
    /* 79848 8016B448 56D6030C */  jal        func_800F5958
    /* 7984C 8016B44C 00400424 */   addiu     $a0, $zero, 0x4000
    /* 79850 8016B450 F5D4030C */  jal        func_800F53D4
    /* 79854 8016B454 00000000 */   nop
    /* 79858 8016B458 F7FF4010 */  beqz       $v0, .L8016B438
    /* 7985C 8016B45C 00000000 */   nop
    /* 79860 8016B460 1000BF8F */  lw         $ra, 0x10($sp)
    /* 79864 8016B464 00000000 */  nop
    /* 79868 8016B468 0800E003 */  jr         $ra
    /* 7986C 8016B46C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8016AE94
