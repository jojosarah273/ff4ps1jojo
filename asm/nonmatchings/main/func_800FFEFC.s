nonmatching func_800FFEFC, 0x5D8

glabel func_800FFEFC
    /* E2FC 800FFEFC E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* E300 800FFF00 1000BFAF */  sw         $ra, 0x10($sp)
    /* E304 800FFF04 59D9030C */  jal        func_800F6564
    /* E308 800FFF08 05170424 */   addiu     $a0, $zero, 0x1705
    /* E30C 800FFF0C 0DD9030C */  jal        func_800F6434
    /* E310 800FFF10 02020424 */   addiu     $a0, $zero, 0x202
    /* E314 800FFF14 11004014 */  bnez       $v0, .L800FFF5C
    /* E318 800FFF18 00000000 */   nop
    /* E31C 800FFF1C 8CD9030C */  jal        func_800F6630
    /* E320 800FFF20 A4000424 */   addiu     $a0, $zero, 0xA4
    /* E324 800FFF24 0DD9030C */  jal        func_800F6434
    /* E328 800FFF28 80800434 */   ori       $a0, $zero, 0x8080
    /* E32C 800FFF2C 65014014 */  bnez       $v0, .L801004C4
    /* E330 800FFF30 00000000 */   nop
    /* E334 800FFF34 59D9030C */  jal        func_800F6564
    /* E338 800FFF38 06170424 */   addiu     $a0, $zero, 0x1706
    /* E33C 800FFF3C 93E0030C */  jal        func_800F824C
    /* E340 800FFF40 0C000424 */   addiu     $a0, $zero, 0xC
    /* E344 800FFF44 59D9030C */  jal        func_800F6564
    /* E348 800FFF48 07170424 */   addiu     $a0, $zero, 0x1707
    /* E34C 800FFF4C 33D7030C */  jal        func_800F5CCC
    /* E350 800FFF50 00000000 */   nop
    /* E354 800FFF54 05000408 */  j          .L80100014
    /* E358 800FFF58 00000000 */   nop
  .L800FFF5C:
    /* E35C 800FFF5C 59D9030C */  jal        func_800F6564
    /* E360 800FFF60 05170424 */   addiu     $a0, $zero, 0x1705
    /* E364 800FFF64 5DD5030C */  jal        func_800F5574
    /* E368 800FFF68 01000424 */   addiu     $a0, $zero, 0x1
    /* E36C 800FFF6C F5D4030C */  jal        func_800F53D4
    /* E370 800FFF70 00000000 */   nop
    /* E374 800FFF74 11004010 */  beqz       $v0, .L800FFFBC
    /* E378 800FFF78 00000000 */   nop
    /* E37C 800FFF7C 8CD9030C */  jal        func_800F6630
    /* E380 800FFF80 A6000424 */   addiu     $a0, $zero, 0xA6
    /* E384 800FFF84 0DD9030C */  jal        func_800F6434
    /* E388 800FFF88 80800434 */   ori       $a0, $zero, 0x8080
    /* E38C 800FFF8C 4D014014 */  bnez       $v0, .L801004C4
    /* E390 800FFF90 00000000 */   nop
    /* E394 800FFF94 59D9030C */  jal        func_800F6564
    /* E398 800FFF98 06170424 */   addiu     $a0, $zero, 0x1706
    /* E39C 800FFF9C 7AD8030C */  jal        func_800F61E8
    /* E3A0 800FFFA0 00000000 */   nop
    /* E3A4 800FFFA4 93E0030C */  jal        func_800F824C
    /* E3A8 800FFFA8 0C000424 */   addiu     $a0, $zero, 0xC
    /* E3AC 800FFFAC 59D9030C */  jal        func_800F6564
    /* E3B0 800FFFB0 07170424 */   addiu     $a0, $zero, 0x1707
    /* E3B4 800FFFB4 05000408 */  j          .L80100014
    /* E3B8 800FFFB8 00000000 */   nop
  .L800FFFBC:
    /* E3BC 800FFFBC 59D9030C */  jal        func_800F6564
    /* E3C0 800FFFC0 05170424 */   addiu     $a0, $zero, 0x1705
    /* E3C4 800FFFC4 5DD5030C */  jal        func_800F5574
    /* E3C8 800FFFC8 02000424 */   addiu     $a0, $zero, 0x2
    /* E3CC 800FFFCC F5D4030C */  jal        func_800F53D4
    /* E3D0 800FFFD0 00000000 */   nop
    /* E3D4 800FFFD4 13004010 */  beqz       $v0, .L80100024
    /* E3D8 800FFFD8 00000000 */   nop
    /* E3DC 800FFFDC 8CD9030C */  jal        func_800F6630
    /* E3E0 800FFFE0 A8000424 */   addiu     $a0, $zero, 0xA8
    /* E3E4 800FFFE4 0DD9030C */  jal        func_800F6434
    /* E3E8 800FFFE8 80800434 */   ori       $a0, $zero, 0x8080
    /* E3EC 800FFFEC 35014014 */  bnez       $v0, .L801004C4
    /* E3F0 800FFFF0 00000000 */   nop
    /* E3F4 800FFFF4 59D9030C */  jal        func_800F6564
    /* E3F8 800FFFF8 06170424 */   addiu     $a0, $zero, 0x1706
    /* E3FC 800FFFFC 93E0030C */  jal        func_800F824C
    /* E400 80100000 0C000424 */   addiu     $a0, $zero, 0xC
    /* E404 80100004 59D9030C */  jal        func_800F6564
    /* E408 80100008 07170424 */   addiu     $a0, $zero, 0x1707
    /* E40C 8010000C 7AD8030C */  jal        func_800F61E8
    /* E410 80100010 00000000 */   nop
  .L80100014:
    /* E414 80100014 93E0030C */  jal        func_800F824C
    /* E418 80100018 0E000424 */   addiu     $a0, $zero, 0xE
    /* E41C 8010001C 19000408 */  j          .L80100064
    /* E420 80100020 00000000 */   nop
  .L80100024:
    /* E424 80100024 8CD9030C */  jal        func_800F6630
    /* E428 80100028 AA000424 */   addiu     $a0, $zero, 0xAA
    /* E42C 8010002C 0DD9030C */  jal        func_800F6434
    /* E430 80100030 80800434 */   ori       $a0, $zero, 0x8080
    /* E434 80100034 23014014 */  bnez       $v0, .L801004C4
    /* E438 80100038 00000000 */   nop
    /* E43C 8010003C 59D9030C */  jal        func_800F6564
    /* E440 80100040 06170424 */   addiu     $a0, $zero, 0x1706
    /* E444 80100044 33D7030C */  jal        func_800F5CCC
    /* E448 80100048 00000000 */   nop
    /* E44C 8010004C 93E0030C */  jal        func_800F824C
    /* E450 80100050 0C000424 */   addiu     $a0, $zero, 0xC
    /* E454 80100054 59D9030C */  jal        func_800F6564
    /* E458 80100058 07170424 */   addiu     $a0, $zero, 0x1707
    /* E45C 8010005C 93E0030C */  jal        func_800F824C
    /* E460 80100060 0E000424 */   addiu     $a0, $zero, 0xE
  .L80100064:
    /* E464 80100064 59D9030C */  jal        func_800F6564
    /* E468 80100068 11070424 */   addiu     $a0, $zero, 0x711
    /* E46C 8010006C 0DD9030C */  jal        func_800F6434
    /* E470 80100070 02020424 */   addiu     $a0, $zero, 0x202
    /* E474 80100074 13014010 */  beqz       $v0, .L801004C4
    /* E478 80100078 00000000 */   nop
    /* E47C 8010007C CC02040C */  jal        func_80100B30
    /* E480 80100080 00000000 */   nop
    /* E484 80100084 40DD030C */  jal        func_800F7500
    /* E488 80100088 21200000 */   addu      $a0, $zero, $zero
    /* E48C 8010008C 9CDC030C */  jal        func_800F7270
    /* E490 80100090 3D000424 */   addiu     $a0, $zero, 0x3D
    /* E494 80100094 1500043C */  lui        $a0, (0x158500 >> 16)
  .L80100098:
    /* E498 80100098 1ADB030C */  jal        func_800F6C68
    /* E49C 8010009C 00858434 */   ori       $a0, $a0, (0x158500 & 0xFFFF)
    /* E4A0 801000A0 0FCF030C */  jal        func_800F3C3C
    /* E4A4 801000A4 0C000424 */   addiu     $a0, $zero, 0xC
    /* E4A8 801000A8 35D5030C */  jal        func_800F54D4
    /* E4AC 801000AC 21204000 */   addu      $a0, $v0, $zero
    /* E4B0 801000B0 F5D4030C */  jal        func_800F53D4
    /* E4B4 801000B4 00000000 */   nop
    /* E4B8 801000B8 0C004010 */  beqz       $v0, .L801000EC
    /* E4BC 801000BC 00000000 */   nop
    /* E4C0 801000C0 1500043C */  lui        $a0, (0x158501 >> 16)
    /* E4C4 801000C4 1ADB030C */  jal        func_800F6C68
    /* E4C8 801000C8 01858434 */   ori       $a0, $a0, (0x158501 & 0xFFFF)
    /* E4CC 801000CC 0FCF030C */  jal        func_800F3C3C
    /* E4D0 801000D0 0E000424 */   addiu     $a0, $zero, 0xE
    /* E4D4 801000D4 35D5030C */  jal        func_800F54D4
    /* E4D8 801000D8 21204000 */   addu      $a0, $v0, $zero
    /* E4DC 801000DC F5D4030C */  jal        func_800F53D4
    /* E4E0 801000E0 00000000 */   nop
    /* E4E4 801000E4 16004014 */  bnez       $v0, .L80100140
    /* E4E8 801000E8 00000000 */   nop
  .L801000EC:
    /* E4EC 801000EC 5800838F */  lw         $v1, %gp_rel(D_8019ED54)($gp)
    /* E4F0 801000F0 00000000 */  nop
    /* E4F4 801000F4 00006294 */  lhu        $v0, 0x0($v1)
    /* E4F8 801000F8 00000000 */  nop
    /* E4FC 801000FC 05004224 */  addiu      $v0, $v0, 0x5
    /* E500 80100100 EFD8030C */  jal        func_800F63BC
    /* E504 80100104 000062A4 */   sh        $v0, 0x0($v1)
    /* E508 80100108 6400828F */  lw         $v0, %gp_rel(D_8019ED60)($gp)
    /* E50C 8010010C 4400858F */  lw         $a1, %gp_rel(D_8019ED40)($gp)
    /* E510 80100110 00004390 */  lbu        $v1, 0x0($v0)
    /* E514 80100114 11070424 */  addiu      $a0, $zero, 0x711
    /* E518 80100118 C1CE030C */  jal        func_800F3B04
    /* E51C 8010011C 0000A3A0 */   sb        $v1, 0x0($a1)
    /* E520 80100120 35D5030C */  jal        func_800F54D4
    /* E524 80100124 21204000 */   addu      $a0, $v0, $zero
    /* E528 80100128 F5D4030C */  jal        func_800F53D4
    /* E52C 8010012C 00000000 */   nop
    /* E530 80100130 D9FF4010 */  beqz       $v0, .L80100098
    /* E534 80100134 1500043C */   lui       $a0, (0x158500 >> 16)
    /* E538 80100138 31010408 */  j          .L801004C4
    /* E53C 8010013C 00000000 */   nop
  .L80100140:
    /* E540 80100140 5BE3030C */  jal        func_800F8D6C
    /* E544 80100144 40000424 */   addiu     $a0, $zero, 0x40
    /* E548 80100148 6400828F */  lw         $v0, %gp_rel(D_8019ED60)($gp)
    /* E54C 8010014C 4400848F */  lw         $a0, %gp_rel(D_8019ED40)($gp)
    /* E550 80100150 00004390 */  lbu        $v1, 0x0($v0)
    /* E554 80100154 04D5030C */  jal        func_800F5410
    /* E558 80100158 000083A0 */   sb        $v1, 0x0($a0)
    /* E55C 8010015C C1CE030C */  jal        func_800F3B04
    /* E560 80100160 E70F0424 */   addiu     $a0, $zero, 0xFE7
    /* E564 80100164 CECF030C */  jal        func_800F3F38
    /* E568 80100168 21204000 */   addu      $a0, $v0, $zero
    /* E56C 8010016C 62E0030C */  jal        func_800F8188
    /* E570 80100170 FC080424 */   addiu     $a0, $zero, 0x8FC
    /* E574 80100174 7A02040C */  jal        func_801009E8
    /* E578 80100178 00000000 */   nop
    /* E57C 8010017C 5DD5030C */  jal        func_800F5574
    /* E580 80100180 21200000 */   addu      $a0, $zero, $zero
    /* E584 80100184 F5D4030C */  jal        func_800F53D4
    /* E588 80100188 00000000 */   nop
    /* E58C 8010018C B7004010 */  beqz       $v0, .L8010046C
    /* E590 80100190 00000000 */   nop
    /* E594 80100194 59D9030C */  jal        func_800F6564
    /* E598 80100198 05170424 */   addiu     $a0, $zero, 0x1705
    /* E59C 8010019C A4E5030C */  jal        func_800F9690
    /* E5A0 801001A0 00000000 */   nop
    /* E5A4 801001A4 DADA030C */  jal        func_800F6B68
    /* E5A8 801001A8 0C070424 */   addiu     $a0, $zero, 0x70C
    /* E5AC 801001AC 5DD5030C */  jal        func_800F5574
    /* E5B0 801001B0 78000424 */   addiu     $a0, $zero, 0x78
    /* E5B4 801001B4 F5D4030C */  jal        func_800F53D4
    /* E5B8 801001B8 00000000 */   nop
    /* E5BC 801001BC 24004010 */  beqz       $v0, .L80100250
    /* E5C0 801001C0 00000000 */   nop
    /* E5C4 801001C4 8CD9030C */  jal        func_800F6630
    /* E5C8 801001C8 0C000424 */   addiu     $a0, $zero, 0xC
    /* E5CC 801001CC 93E0030C */  jal        func_800F824C
    /* E5D0 801001D0 3D000424 */   addiu     $a0, $zero, 0x3D
    /* E5D4 801001D4 8CD9030C */  jal        func_800F6630
    /* E5D8 801001D8 0E000424 */   addiu     $a0, $zero, 0xE
    /* E5DC 801001DC 93E0030C */  jal        func_800F824C
    /* E5E0 801001E0 3E000424 */   addiu     $a0, $zero, 0x3E
    /* E5E4 801001E4 9CDC030C */  jal        func_800F7270
    /* E5E8 801001E8 3D000424 */   addiu     $a0, $zero, 0x3D
    /* E5EC 801001EC 53D9030C */  jal        func_800F654C
    /* E5F0 801001F0 77000424 */   addiu     $a0, $zero, 0x77
    /* E5F4 801001F4 7F00043C */  lui        $a0, (0x7F5C71 >> 16)
    /* E5F8 801001F8 17E2030C */  jal        func_800F885C
    /* E5FC 801001FC 715C8434 */   ori       $a0, $a0, (0x7F5C71 & 0xFFFF)
    /* E600 80100200 8C14040C */  jal        func_80105230
    /* E604 80100204 00000000 */   nop
    /* E608 80100208 40E3030C */  jal        func_800F8D00
    /* E60C 8010020C FE060424 */   addiu     $a0, $zero, 0x6FE
    /* E610 80100210 2502040C */  jal        func_80100894
    /* E614 80100214 00000000 */   nop
    /* E618 80100218 53D9030C */  jal        func_800F654C
    /* E61C 8010021C 30000424 */   addiu     $a0, $zero, 0x30
    /* E620 80100220 01F6030C */  jal        func_800FD804
    /* E624 80100224 00000000 */   nop
    /* E628 80100228 53D9030C */  jal        func_800F654C
    /* E62C 8010022C 01000424 */   addiu     $a0, $zero, 0x1
    /* E630 80100230 93E0030C */  jal        func_800F824C
    /* E634 80100234 D4000424 */   addiu     $a0, $zero, 0xD4
    /* E638 80100238 53D9030C */  jal        func_800F654C
    /* E63C 8010023C 01000424 */   addiu     $a0, $zero, 0x1
    /* E640 80100240 93E0030C */  jal        func_800F824C
    /* E644 80100244 B2000424 */   addiu     $a0, $zero, 0xB2
    /* E648 80100248 9C000408 */  j          .L80100270
    /* E64C 8010024C 00000000 */   nop
  .L80100250:
    /* E650 80100250 53D9030C */  jal        func_800F654C
    /* E654 80100254 16000424 */   addiu     $a0, $zero, 0x16
    /* E658 80100258 93E0030C */  jal        func_800F824C
    /* E65C 8010025C B2000424 */   addiu     $a0, $zero, 0xB2
    /* E660 80100260 53D9030C */  jal        func_800F654C
    /* E664 80100264 37000424 */   addiu     $a0, $zero, 0x37
    /* E668 80100268 01F6030C */  jal        func_800FD804
    /* E66C 8010026C 00000000 */   nop
  .L80100270:
    /* E670 80100270 9CDC030C */  jal        func_800F7270
    /* E674 80100274 40000424 */   addiu     $a0, $zero, 0x40
    /* E678 80100278 1500043C */  lui        $a0, (0x158503 >> 16)
    /* E67C 8010027C 1ADB030C */  jal        func_800F6C68
    /* E680 80100280 03858434 */   ori       $a0, $a0, (0x158503 & 0xFFFF)
    /* E684 80100284 93E0030C */  jal        func_800F824C
    /* E688 80100288 09000424 */   addiu     $a0, $zero, 0x9
    /* E68C 8010028C 1500043C */  lui        $a0, (0x158504 >> 16)
    /* E690 80100290 1ADB030C */  jal        func_800F6C68
    /* E694 80100294 04858434 */   ori       $a0, $a0, (0x158504 & 0xFFFF)
    /* E698 80100298 93E0030C */  jal        func_800F824C
    /* E69C 8010029C 08000424 */   addiu     $a0, $zero, 0x8
    /* E6A0 801002A0 8CD9030C */  jal        func_800F6630
    /* E6A4 801002A4 09000424 */   addiu     $a0, $zero, 0x9
    /* E6A8 801002A8 92D0030C */  jal        func_800F4248
    /* E6AC 801002AC 40000424 */   addiu     $a0, $zero, 0x40
    /* E6B0 801002B0 48D0030C */  jal        func_800F4120
    /* E6B4 801002B4 02000424 */   addiu     $a0, $zero, 0x2
    /* E6B8 801002B8 2E004014 */  bnez       $v0, .L80100374
    /* E6BC 801002BC 00000000 */   nop
    /* E6C0 801002C0 8CD9030C */  jal        func_800F6630
    /* E6C4 801002C4 08000424 */   addiu     $a0, $zero, 0x8
    /* E6C8 801002C8 93E0030C */  jal        func_800F824C
    /* E6CC 801002CC C6000424 */   addiu     $a0, $zero, 0xC6
    /* E6D0 801002D0 59D9030C */  jal        func_800F6564
    /* E6D4 801002D4 01170424 */   addiu     $a0, $zero, 0x1701
    /* E6D8 801002D8 4400838F */  lw         $v1, %gp_rel(D_8019ED40)($gp)
    /* E6DC 801002DC 00000000 */  nop
    /* E6E0 801002E0 00006290 */  lbu        $v0, 0x0($v1)
    /* E6E4 801002E4 08000424 */  addiu      $a0, $zero, 0x8
    /* E6E8 801002E8 40110200 */  sll        $v0, $v0, 5
    /* E6EC 801002EC 93E0030C */  jal        func_800F824C
    /* E6F0 801002F0 000062A0 */   sb        $v0, 0x0($v1)
    /* E6F4 801002F4 8CD9030C */  jal        func_800F6630
    /* E6F8 801002F8 09000424 */   addiu     $a0, $zero, 0x9
    /* E6FC 801002FC 92D0030C */  jal        func_800F4248
    /* E700 80100300 1F000424 */   addiu     $a0, $zero, 0x1F
    /* E704 80100304 04D5030C */  jal        func_800F5410
    /* E708 80100308 00000000 */   nop
    /* E70C 8010030C 0FCF030C */  jal        func_800F3C3C
    /* E710 80100310 08000424 */   addiu     $a0, $zero, 0x8
    /* E714 80100314 CECF030C */  jal        func_800F3F38
    /* E718 80100318 21204000 */   addu      $a0, $v0, $zero
    /* E71C 8010031C 04D5030C */  jal        func_800F5410
    /* E720 80100320 00000000 */   nop
    /* E724 80100324 02D0030C */  jal        func_800F4008
    /* E728 80100328 C0000424 */   addiu     $a0, $zero, 0xC0
    /* E72C 8010032C 62E0030C */  jal        func_800F8188
    /* E730 80100330 00180424 */   addiu     $a0, $zero, 0x1800
    /* E734 80100334 53D9030C */  jal        func_800F654C
    /* E738 80100338 01000424 */   addiu     $a0, $zero, 0x1
    /* E73C 8010033C 62E0030C */  jal        func_800F8188
    /* E740 80100340 01180424 */   addiu     $a0, $zero, 0x1801
    /* E744 80100344 01F5030C */  jal        func_800FD404
    /* E748 80100348 00000000 */   nop
    /* E74C 8010034C 53D9030C */  jal        func_800F654C
    /* E750 80100350 01000424 */   addiu     $a0, $zero, 0x1
    /* E754 80100354 93E0030C */  jal        func_800F824C
    /* E758 80100358 85000424 */   addiu     $a0, $zero, 0x85
    /* E75C 8010035C 53D9030C */  jal        func_800F654C
    /* E760 80100360 03000424 */   addiu     $a0, $zero, 0x3
    /* E764 80100364 93E0030C */  jal        func_800F824C
    /* E768 80100368 B2000424 */   addiu     $a0, $zero, 0xB2
    /* E76C 8010036C 13010408 */  j          .L8010044C
    /* E770 80100370 00000000 */   nop
  .L80100374:
    /* E774 80100374 8CD9030C */  jal        func_800F6630
    /* E778 80100378 09000424 */   addiu     $a0, $zero, 0x9
    /* E77C 8010037C 92D0030C */  jal        func_800F4248
    /* E780 80100380 80000424 */   addiu     $a0, $zero, 0x80
    /* E784 80100384 48D0030C */  jal        func_800F4120
    /* E788 80100388 02000424 */   addiu     $a0, $zero, 0x2
    /* E78C 8010038C 0F004014 */  bnez       $v0, .L801003CC
    /* E790 80100390 00000000 */   nop
    /* E794 80100394 8CD9030C */  jal        func_800F6630
    /* E798 80100398 08000424 */   addiu     $a0, $zero, 0x8
    /* E79C 8010039C 62E0030C */  jal        func_800F8188
    /* E7A0 801003A0 FB080424 */   addiu     $a0, $zero, 0x8FB
    /* E7A4 801003A4 B220040C */  jal        func_801082C8
    /* E7A8 801003A8 00000000 */   nop
    /* E7AC 801003AC 261F040C */  jal        func_80107C98
    /* E7B0 801003B0 00000000 */   nop
    /* E7B4 801003B4 CF1F040C */  jal        func_80107F3C
    /* E7B8 801003B8 00000000 */   nop
    /* E7BC 801003BC 7701040C */  jal        func_801005DC
    /* E7C0 801003C0 00000000 */   nop
    /* E7C4 801003C4 31010408 */  j          .L801004C4
    /* E7C8 801003C8 00000000 */   nop
  .L801003CC:
    /* E7CC 801003CC AFD8030C */  jal        func_800F62BC
    /* E7D0 801003D0 B2000424 */   addiu     $a0, $zero, 0xB2
    /* E7D4 801003D4 8CD9030C */  jal        func_800F6630
    /* E7D8 801003D8 08000424 */   addiu     $a0, $zero, 0x8
    /* E7DC 801003DC 92D0030C */  jal        func_800F4248
    /* E7E0 801003E0 7F000424 */   addiu     $a0, $zero, 0x7F
    /* E7E4 801003E4 93E0030C */  jal        func_800F824C
    /* E7E8 801003E8 18000424 */   addiu     $a0, $zero, 0x18
    /* E7EC 801003EC EEE3030C */  jal        func_800F8FB8
    /* E7F0 801003F0 19000424 */   addiu     $a0, $zero, 0x19
    /* E7F4 801003F4 8CD9030C */  jal        func_800F6630
    /* E7F8 801003F8 08000424 */   addiu     $a0, $zero, 0x8
    /* E7FC 801003FC 92D0030C */  jal        func_800F4248
    /* E800 80100400 80000424 */   addiu     $a0, $zero, 0x80
    /* E804 80100404 48D0030C */  jal        func_800F4120
    /* E808 80100408 02020424 */   addiu     $a0, $zero, 0x202
    /* E80C 8010040C 05004014 */  bnez       $v0, .L80100424
    /* E810 80100410 00000000 */   nop
    /* E814 80100414 77DC030C */  jal        func_800F71DC
    /* E818 80100418 0A000424 */   addiu     $a0, $zero, 0xA
    /* E81C 8010041C 0B010408 */  j          .L8010042C
    /* E820 80100420 00000000 */   nop
  .L80100424:
    /* E824 80100424 77DC030C */  jal        func_800F71DC
    /* E828 80100428 E8030424 */   addiu     $a0, $zero, 0x3E8
  .L8010042C:
    /* E82C 8010042C 5BE3030C */  jal        func_800F8D6C
    /* E830 80100430 1A000424 */   addiu     $a0, $zero, 0x1A
    /* E834 80100434 C3D3050C */  jal        func_80174F0C
    /* E838 80100438 00000000 */   nop
    /* E83C 8010043C AC65040C */  jal        func_801196B0
    /* E840 80100440 00000000 */   nop
    /* E844 80100444 3501040C */  jal        func_801004D4
    /* E848 80100448 00000000 */   nop
  .L8010044C:
    /* E84C 8010044C B220040C */  jal        func_801082C8
    /* E850 80100450 00000000 */   nop
    /* E854 80100454 261F040C */  jal        func_80107C98
    /* E858 80100458 00000000 */   nop
    /* E85C 8010045C CF1F040C */  jal        func_80107F3C
    /* E860 80100460 00000000 */   nop
    /* E864 80100464 31010408 */  j          .L801004C4
    /* E868 80100468 00000000 */   nop
  .L8010046C:
    /* E86C 8010046C 59D9030C */  jal        func_800F6564
    /* E870 80100470 05170424 */   addiu     $a0, $zero, 0x1705
    /* E874 80100474 A4E5030C */  jal        func_800F9690
    /* E878 80100478 00000000 */   nop
    /* E87C 8010047C DADA030C */  jal        func_800F6B68
    /* E880 80100480 0C070424 */   addiu     $a0, $zero, 0x70C
    /* E884 80100484 5DD5030C */  jal        func_800F5574
    /* E888 80100488 77000424 */   addiu     $a0, $zero, 0x77
    /* E88C 8010048C F5D4030C */  jal        func_800F53D4
    /* E890 80100490 00000000 */   nop
    /* E894 80100494 0B004010 */  beqz       $v0, .L801004C4
    /* E898 80100498 00000000 */   nop
    /* E89C 8010049C 53D9030C */  jal        func_800F654C
    /* E8A0 801004A0 04000424 */   addiu     $a0, $zero, 0x4
    /* E8A4 801004A4 93E0030C */  jal        func_800F824C
    /* E8A8 801004A8 B2000424 */   addiu     $a0, $zero, 0xB2
    /* E8AC 801004AC B220040C */  jal        func_801082C8
    /* E8B0 801004B0 00000000 */   nop
    /* E8B4 801004B4 261F040C */  jal        func_80107C98
    /* E8B8 801004B8 00000000 */   nop
    /* E8BC 801004BC CF1F040C */  jal        func_80107F3C
    /* E8C0 801004C0 00000000 */   nop
  .L801004C4:
    /* E8C4 801004C4 1000BF8F */  lw         $ra, 0x10($sp)
    /* E8C8 801004C8 00000000 */  nop
    /* E8CC 801004CC 0800E003 */  jr         $ra
    /* E8D0 801004D0 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800FFEFC
