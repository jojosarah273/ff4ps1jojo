nonmatching func_80160E88, 0x4E0

glabel func_80160E88
    /* 6F288 80160E88 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 6F28C 80160E8C 1000BFAF */  sw         $ra, 0x10($sp)
    /* 6F290 80160E90 53D9030C */  jal        func_800F654C
    /* 6F294 80160E94 17000424 */   addiu     $a0, $zero, 0x17
    /* 6F298 80160E98 62E0030C */  jal        func_800F8188
    /* 6F29C 80160E9C C8340424 */   addiu     $a0, $zero, 0x34C8
    /* 6F2A0 80160EA0 53D9030C */  jal        func_800F654C
    /* 6F2A4 80160EA4 10000424 */   addiu     $a0, $zero, 0x10
    /* 6F2A8 80160EA8 62E0030C */  jal        func_800F8188
    /* 6F2AC 80160EAC C7340424 */   addiu     $a0, $zero, 0x34C7
    /* 6F2B0 80160EB0 53D9030C */  jal        func_800F654C
    /* 6F2B4 80160EB4 F8000424 */   addiu     $a0, $zero, 0xF8
    /* 6F2B8 80160EB8 62E0030C */  jal        func_800F8188
    /* 6F2BC 80160EBC C6330424 */   addiu     $a0, $zero, 0x33C6
    /* 6F2C0 80160EC0 53D9030C */  jal        func_800F654C
    /* 6F2C4 80160EC4 04000424 */   addiu     $a0, $zero, 0x4
    /* 6F2C8 80160EC8 62E0030C */  jal        func_800F8188
    /* 6F2CC 80160ECC C7330424 */   addiu     $a0, $zero, 0x33C7
    /* 6F2D0 80160ED0 B54C050C */  jal        func_801532D4
    /* 6F2D4 80160ED4 00000000 */   nop
    /* 6F2D8 80160ED8 8CD9030C */  jal        func_800F6630
    /* 6F2DC 80160EDC CE000424 */   addiu     $a0, $zero, 0xCE
    /* 6F2E0 80160EE0 0DD9030C */  jal        func_800F6434
    /* 6F2E4 80160EE4 80000424 */   addiu     $a0, $zero, 0x80
    /* 6F2E8 80160EE8 54004010 */  beqz       $v0, .L8016103C
    /* 6F2EC 80160EEC 1B000424 */   addiu     $a0, $zero, 0x1B
    /* 6F2F0 80160EF0 734C050C */  jal        func_801531CC
    /* 6F2F4 80160EF4 00000000 */   nop
    /* 6F2F8 80160EF8 93E0030C */  jal        func_800F824C
    /* 6F2FC 80160EFC A9000424 */   addiu     $a0, $zero, 0xA9
    /* 6F300 80160F00 04D5030C */  jal        func_800F5410
    /* 6F304 80160F04 00000000 */   nop
    /* 6F308 80160F08 53D9030C */  jal        func_800F654C
    /* 6F30C 80160F0C 32000424 */   addiu     $a0, $zero, 0x32
    /* 6F310 80160F10 C1CE030C */  jal        func_800F3B04
    /* 6F314 80160F14 82260424 */   addiu     $a0, $zero, 0x2682
    /* 6F318 80160F18 CECF030C */  jal        func_800F3F38
    /* 6F31C 80160F1C 21204000 */   addu      $a0, $v0, $zero
    /* 6F320 80160F20 20D5030C */  jal        func_800F5480
    /* 6F324 80160F24 00000000 */   nop
    /* 6F328 80160F28 C1CE030C */  jal        func_800F3B04
    /* 6F32C 80160F2C 2F270424 */   addiu     $a0, $zero, 0x272F
    /* 6F330 80160F30 D2DF030C */  jal        func_800F7F48
    /* 6F334 80160F34 21204000 */   addu      $a0, $v0, $zero
    /* 6F338 80160F38 F0D4030C */  jal        func_800F53C0
    /* 6F33C 80160F3C 00000000 */   nop
    /* 6F340 80160F40 05004014 */  bnez       $v0, .L80160F58
    /* 6F344 80160F44 00000000 */   nop
    /* 6F348 80160F48 53D9030C */  jal        func_800F654C
    /* 6F34C 80160F4C 01000424 */   addiu     $a0, $zero, 0x1
    /* 6F350 80160F50 DE830508 */  j          .L80160F78
    /* 6F354 80160F54 00000000 */   nop
  .L80160F58:
    /* 6F358 80160F58 5DD5030C */  jal        func_800F5574
    /* 6F35C 80160F5C 63000424 */   addiu     $a0, $zero, 0x63
    /* 6F360 80160F60 F0D4030C */  jal        func_800F53C0
    /* 6F364 80160F64 00000000 */   nop
    /* 6F368 80160F68 03004010 */  beqz       $v0, .L80160F78
    /* 6F36C 80160F6C 00000000 */   nop
    /* 6F370 80160F70 53D9030C */  jal        func_800F654C
    /* 6F374 80160F74 63000424 */   addiu     $a0, $zero, 0x63
  .L80160F78:
    /* 6F378 80160F78 0FCF030C */  jal        func_800F3C3C
    /* 6F37C 80160F7C A9000424 */   addiu     $a0, $zero, 0xA9
    /* 6F380 80160F80 35D5030C */  jal        func_800F54D4
    /* 6F384 80160F84 21204000 */   addu      $a0, $v0, $zero
    /* 6F388 80160F88 F0D4030C */  jal        func_800F53C0
    /* 6F38C 80160F8C 00000000 */   nop
    /* 6F390 80160F90 30004014 */  bnez       $v0, .L80161054
    /* 6F394 80160F94 00000000 */   nop
    /* 6F398 80160F98 734C050C */  jal        func_801531CC
    /* 6F39C 80160F9C 00000000 */   nop
    /* 6F3A0 80160FA0 C1CE030C */  jal        func_800F3B04
    /* 6F3A4 80160FA4 2F270424 */   addiu     $a0, $zero, 0x272F
    /* 6F3A8 80160FA8 35D5030C */  jal        func_800F54D4
    /* 6F3AC 80160FAC 21204000 */   addu      $a0, $v0, $zero
    /* 6F3B0 80160FB0 F0D4030C */  jal        func_800F53C0
    /* 6F3B4 80160FB4 00000000 */   nop
    /* 6F3B8 80160FB8 1F004010 */  beqz       $v0, .L80161038
    /* 6F3BC 80160FBC 00000000 */   nop
    /* 6F3C0 80160FC0 91E5030C */  jal        func_800F9644
    /* 6F3C4 80160FC4 20000424 */   addiu     $a0, $zero, 0x20
    /* 6F3C8 80160FC8 63D9030C */  jal        func_800F658C
    /* 6F3CC 80160FCC 89260424 */   addiu     $a0, $zero, 0x2689
    /* 6F3D0 80160FD0 CE4A050C */  jal        func_80152B38
    /* 6F3D4 80160FD4 00000000 */   nop
    /* 6F3D8 80160FD8 9DE0030C */  jal        func_800F8274
    /* 6F3DC 80160FDC A9000424 */   addiu     $a0, $zero, 0xA9
    /* 6F3E0 80160FE0 56D9030C */  jal        func_800F6558
    /* 6F3E4 80160FE4 21200000 */   addu      $a0, $zero, $zero
    /* 6F3E8 80160FE8 98E5030C */  jal        func_800F9660
    /* 6F3EC 80160FEC 20000424 */   addiu     $a0, $zero, 0x20
    /* 6F3F0 80160FF0 8CD9030C */  jal        func_800F6630
    /* 6F3F4 80160FF4 CD000424 */   addiu     $a0, $zero, 0xCD
    /* 6F3F8 80160FF8 FED8030C */  jal        func_800F63F8
    /* 6F3FC 80160FFC 00000000 */   nop
    /* 6F400 80161000 0787010C */  jal        func_80061C1C
    /* 6F404 80161004 00000000 */   nop
    /* 6F408 80161008 8CD9030C */  jal        func_800F6630
    /* 6F40C 8016100C A9000424 */   addiu     $a0, $zero, 0xA9
    /* 6F410 80161010 DAE1030C */  jal        func_800F8768
    /* 6F414 80161014 D4340424 */   addiu     $a0, $zero, 0x34D4
    /* 6F418 80161018 8CD9030C */  jal        func_800F6630
    /* 6F41C 8016101C AA000424 */   addiu     $a0, $zero, 0xAA
    /* 6F420 80161020 DAE1030C */  jal        func_800F8768
    /* 6F424 80161024 D5340424 */   addiu     $a0, $zero, 0x34D5
    /* 6F428 80161028 2387010C */  jal        func_80061C8C
    /* 6F42C 8016102C 00000000 */   nop
    /* 6F430 80161030 0F840508 */  j          .L8016103C
    /* 6F434 80161034 1C000424 */   addiu     $a0, $zero, 0x1C
  .L80161038:
    /* 6F438 80161038 1B000424 */  addiu      $a0, $zero, 0x1B
  .L8016103C:
    /* 6F43C 8016103C 53D9030C */  jal        func_800F654C
    /* 6F440 80161040 00000000 */   nop
    /* 6F444 80161044 62E0030C */  jal        func_800F8188
    /* 6F448 80161048 CA340424 */   addiu     $a0, $zero, 0x34CA
    /* 6F44C 8016104C D6840508 */  j          .L80161358
    /* 6F450 80161050 00000000 */   nop
  .L80161054:
    /* 6F454 80161054 59D9030C */  jal        func_800F6564
    /* 6F458 80161058 73270424 */   addiu     $a0, $zero, 0x2773
    /* 6F45C 8016105C 92D0030C */  jal        func_800F4248
    /* 6F460 80161060 C0000424 */   addiu     $a0, $zero, 0xC0
    /* 6F464 80161064 5DD5030C */  jal        func_800F5574
    /* 6F468 80161068 C0000424 */   addiu     $a0, $zero, 0xC0
    /* 6F46C 8016106C F5D4030C */  jal        func_800F53D4
    /* 6F470 80161070 00000000 */   nop
    /* 6F474 80161074 B8004014 */  bnez       $v0, .L80161358
    /* 6F478 80161078 00000000 */   nop
    /* 6F47C 8016107C C7E5030C */  jal        func_800F971C
    /* 6F480 80161080 00000000 */   nop
    /* 6F484 80161084 7AD8030C */  jal        func_800F61E8
    /* 6F488 80161088 00000000 */   nop
    /* 6F48C 8016108C 93E0030C */  jal        func_800F824C
    /* 6F490 80161090 AA000424 */   addiu     $a0, $zero, 0xAA
    /* 6F494 80161094 59D9030C */  jal        func_800F6564
    /* 6F498 80161098 73270424 */   addiu     $a0, $zero, 0x2773
    /* 6F49C 8016109C 92D0030C */  jal        func_800F4248
    /* 6F4A0 801610A0 3F000424 */   addiu     $a0, $zero, 0x3F
    /* 6F4A4 801610A4 654A050C */  jal        func_80152994
    /* 6F4A8 801610A8 00000000 */   nop
    /* 6F4AC 801610AC 0E00043C */  lui        $a0, (0xE9F00 >> 16)
    /* 6F4B0 801610B0 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 6F4B4 801610B4 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 6F4B8 801610B8 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 6F4BC 801610BC 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 6F4C0 801610C0 00004394 */  lhu        $v1, 0x0($v0)
    /* 6F4C4 801610C4 009F8434 */  ori        $a0, $a0, (0xE9F00 & 0xFFFF)
    /* 6F4C8 801610C8 1ADB030C */  jal        func_800F6C68
    /* 6F4CC 801610CC 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 6F4D0 801610D0 0DD9030C */  jal        func_800F6434
    /* 6F4D4 801610D4 02000424 */   addiu     $a0, $zero, 0x2
    /* 6F4D8 801610D8 D8FF4014 */  bnez       $v0, .L8016103C
    /* 6F4DC 801610DC 1B000424 */   addiu     $a0, $zero, 0x1B
    /* 6F4E0 801610E0 93E0030C */  jal        func_800F824C
    /* 6F4E4 801610E4 A9000424 */   addiu     $a0, $zero, 0xA9
    /* 6F4E8 801610E8 5DD5030C */  jal        func_800F5574
    /* 6F4EC 801610EC 61000424 */   addiu     $a0, $zero, 0x61
    /* 6F4F0 801610F0 F0D4030C */  jal        func_800F53C0
    /* 6F4F4 801610F4 00000000 */   nop
    /* 6F4F8 801610F8 0B004014 */  bnez       $v0, .L80161128
    /* 6F4FC 801610FC 00000000 */   nop
    /* 6F500 80161100 5DD5030C */  jal        func_800F5574
    /* 6F504 80161104 54000424 */   addiu     $a0, $zero, 0x54
    /* 6F508 80161108 F0D4030C */  jal        func_800F53C0
    /* 6F50C 8016110C 00000000 */   nop
    /* 6F510 80161110 05004010 */  beqz       $v0, .L80161128
    /* 6F514 80161114 00000000 */   nop
    /* 6F518 80161118 53D9030C */  jal        func_800F654C
    /* 6F51C 8016111C 0A000424 */   addiu     $a0, $zero, 0xA
    /* 6F520 80161120 93E0030C */  jal        func_800F824C
    /* 6F524 80161124 AA000424 */   addiu     $a0, $zero, 0xAA
  .L80161128:
    /* 6F528 80161128 C7E5030C */  jal        func_800F971C
    /* 6F52C 8016112C 00000000 */   nop
    /* 6F530 80161130 1A80033C */  lui        $v1, %hi(D_8019ED44)
    /* 6F534 80161134 44ED638C */  lw         $v1, %lo(D_8019ED44)($v1)
    /* 6F538 80161138 1A80043C */  lui        $a0, %hi(D_8019ED54)
    /* 6F53C 8016113C 54ED848C */  lw         $a0, %lo(D_8019ED54)($a0)
    /* 6F540 80161140 00006294 */  lhu        $v0, 0x0($v1)
    /* 6F544 80161144 00000000 */  nop
    /* 6F548 80161148 000082A4 */  sh         $v0, 0x0($a0)
    /* 6F54C 8016114C 1A80033C */  lui        $v1, %hi(D_8019ED54)
    /* 6F550 80161150 54ED638C */  lw         $v1, %lo(D_8019ED54)($v1)
    /* 6F554 80161154 1A80043C */  lui        $a0, %hi(D_8019ED58)
    /* 6F558 80161158 58ED848C */  lw         $a0, %lo(D_8019ED58)($a0)
    /* 6F55C 8016115C 00006294 */  lhu        $v0, 0x0($v1)
    /* 6F560 80161160 00000000 */  nop
    /* 6F564 80161164 000082A4 */  sh         $v0, 0x0($a0)
  .L80161168:
    /* 6F568 80161168 DADA030C */  jal        func_800F6B68
    /* 6F56C 8016116C 1B320424 */   addiu     $a0, $zero, 0x321B
    /* 6F570 80161170 0FCF030C */  jal        func_800F3C3C
    /* 6F574 80161174 A9000424 */   addiu     $a0, $zero, 0xA9
    /* 6F578 80161178 35D5030C */  jal        func_800F54D4
    /* 6F57C 8016117C 21204000 */   addu      $a0, $v0, $zero
    /* 6F580 80161180 F5D4030C */  jal        func_800F53D4
    /* 6F584 80161184 00000000 */   nop
    /* 6F588 80161188 43004014 */  bnez       $v0, .L80161298
    /* 6F58C 8016118C 00000000 */   nop
  .L80161190:
    /* 6F590 80161190 D9D8030C */  jal        func_800F6364
    /* 6F594 80161194 00000000 */   nop
    /* 6F598 80161198 D9D8030C */  jal        func_800F6364
    /* 6F59C 8016119C 00000000 */   nop
    /* 6F5A0 801611A0 D9D8030C */  jal        func_800F6364
    /* 6F5A4 801611A4 00000000 */   nop
    /* 6F5A8 801611A8 D9D8030C */  jal        func_800F6364
    /* 6F5AC 801611AC 00000000 */   nop
    /* 6F5B0 801611B0 EFD8030C */  jal        func_800F63BC
    /* 6F5B4 801611B4 00000000 */   nop
    /* 6F5B8 801611B8 A4D6030C */  jal        func_800F5A90
    /* 6F5BC 801611BC 30000424 */   addiu     $a0, $zero, 0x30
    /* 6F5C0 801611C0 F5D4030C */  jal        func_800F53D4
    /* 6F5C4 801611C4 00000000 */   nop
    /* 6F5C8 801611C8 E7FF4010 */  beqz       $v0, .L80161168
    /* 6F5CC 801611CC 00000000 */   nop
    /* 6F5D0 801611D0 59D9030C */  jal        func_800F6564
    /* 6F5D4 801611D4 F4380424 */   addiu     $a0, $zero, 0x38F4
    /* 6F5D8 801611D8 5DD5030C */  jal        func_800F5574
    /* 6F5DC 801611DC FF000424 */   addiu     $a0, $zero, 0xFF
    /* 6F5E0 801611E0 F5D4030C */  jal        func_800F53D4
    /* 6F5E4 801611E4 00000000 */   nop
    /* 6F5E8 801611E8 94FF4014 */  bnez       $v0, .L8016103C
    /* 6F5EC 801611EC 1B000424 */   addiu     $a0, $zero, 0x1B
    /* 6F5F0 801611F0 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 6F5F4 801611F4 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 6F5F8 801611F8 1A80053C */  lui        $a1, %hi(D_8019ED58)
    /* 6F5FC 801611FC 58EDA58C */  lw         $a1, %lo(D_8019ED58)($a1)
    /* 6F600 80161200 00004394 */  lhu        $v1, 0x0($v0)
    /* 6F604 80161204 20000424 */  addiu      $a0, $zero, 0x20
    /* 6F608 80161208 91E5030C */  jal        func_800F9644
    /* 6F60C 8016120C 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 6F610 80161210 1A80033C */  lui        $v1, %hi(D_8019ED44)
    /* 6F614 80161214 44ED638C */  lw         $v1, %lo(D_8019ED44)($v1)
    /* 6F618 80161218 00000000 */  nop
    /* 6F61C 8016121C 00006294 */  lhu        $v0, 0x0($v1)
    /* 6F620 80161220 00000000 */  nop
    /* 6F624 80161224 80100200 */  sll        $v0, $v0, 2
    /* 6F628 80161228 000062A4 */  sh         $v0, 0x0($v1)
    /* 6F62C 8016122C 1A80043C */  lui        $a0, %hi(D_8019ED44)
    /* 6F630 80161230 44ED848C */  lw         $a0, %lo(D_8019ED44)($a0)
    /* 6F634 80161234 1A80033C */  lui        $v1, %hi(D_8019ED54)
    /* 6F638 80161238 54ED638C */  lw         $v1, %lo(D_8019ED54)($v1)
    /* 6F63C 8016123C 00008294 */  lhu        $v0, 0x0($a0)
    /* 6F640 80161240 C7E5030C */  jal        func_800F971C
    /* 6F644 80161244 000062A4 */   sh        $v0, 0x0($v1)
    /* 6F648 80161248 98E5030C */  jal        func_800F9660
    /* 6F64C 8016124C 20000424 */   addiu     $a0, $zero, 0x20
    /* 6F650 80161250 8CD9030C */  jal        func_800F6630
    /* 6F654 80161254 AA000424 */   addiu     $a0, $zero, 0xAA
    /* 6F658 80161258 DAE1030C */  jal        func_800F8768
    /* 6F65C 8016125C 1C320424 */   addiu     $a0, $zero, 0x321C
    /* 6F660 80161260 8CD9030C */  jal        func_800F6630
    /* 6F664 80161264 A9000424 */   addiu     $a0, $zero, 0xA9
    /* 6F668 80161268 DAE1030C */  jal        func_800F8768
    /* 6F66C 8016126C 1B320424 */   addiu     $a0, $zero, 0x321B
    /* 6F670 80161270 5BE3030C */  jal        func_800F8D6C
    /* 6F674 80161274 AB000424 */   addiu     $a0, $zero, 0xAB
    /* 6F678 80161278 E7E4030C */  jal        func_800F939C
    /* 6F67C 8016127C 00000000 */   nop
    /* 6F680 80161280 548E050C */  jal        func_80163950
    /* 6F684 80161284 00000000 */   nop
    /* 6F688 80161288 83E5030C */  jal        func_800F960C
    /* 6F68C 8016128C 00000000 */   nop
    /* 6F690 80161290 CC840508 */  j          .L80161330
    /* 6F694 80161294 00000000 */   nop
  .L80161298:
    /* 6F698 80161298 04D5030C */  jal        func_800F5410
    /* 6F69C 8016129C 00000000 */   nop
    /* 6F6A0 801612A0 DADA030C */  jal        func_800F6B68
    /* 6F6A4 801612A4 1C320424 */   addiu     $a0, $zero, 0x321C
    /* 6F6A8 801612A8 0FCF030C */  jal        func_800F3C3C
    /* 6F6AC 801612AC AA000424 */   addiu     $a0, $zero, 0xAA
    /* 6F6B0 801612B0 CECF030C */  jal        func_800F3F38
    /* 6F6B4 801612B4 21204000 */   addu      $a0, $v0, $zero
    /* 6F6B8 801612B8 5DD5030C */  jal        func_800F5574
    /* 6F6BC 801612BC 64000424 */   addiu     $a0, $zero, 0x64
    /* 6F6C0 801612C0 F0D4030C */  jal        func_800F53C0
    /* 6F6C4 801612C4 00000000 */   nop
    /* 6F6C8 801612C8 17004010 */  beqz       $v0, .L80161328
    /* 6F6CC 801612CC 00000000 */   nop
    /* 6F6D0 801612D0 80E4030C */  jal        func_800F9200
    /* 6F6D4 801612D4 00000000 */   nop
    /* 6F6D8 801612D8 53D9030C */  jal        func_800F654C
    /* 6F6DC 801612DC 63000424 */   addiu     $a0, $zero, 0x63
    /* 6F6E0 801612E0 DAE1030C */  jal        func_800F8768
    /* 6F6E4 801612E4 1C320424 */   addiu     $a0, $zero, 0x321C
    /* 6F6E8 801612E8 DA84050C */  jal        func_80161368
    /* 6F6EC 801612EC 00000000 */   nop
    /* 6F6F0 801612F0 F7E4030C */  jal        func_800F93DC
    /* 6F6F4 801612F4 00000000 */   nop
    /* 6F6F8 801612F8 20D5030C */  jal        func_800F5480
    /* 6F6FC 801612FC 00000000 */   nop
    /* 6F700 80161300 16E0030C */  jal        func_800F8058
    /* 6F704 80161304 63000424 */   addiu     $a0, $zero, 0x63
    /* 6F708 80161308 F5D4030C */  jal        func_800F53D4
    /* 6F70C 8016130C 00000000 */   nop
    /* 6F710 80161310 07004014 */  bnez       $v0, .L80161330
    /* 6F714 80161314 00000000 */   nop
    /* 6F718 80161318 93E0030C */  jal        func_800F824C
    /* 6F71C 8016131C AA000424 */   addiu     $a0, $zero, 0xAA
    /* 6F720 80161320 64840508 */  j          .L80161190
    /* 6F724 80161324 00000000 */   nop
  .L80161328:
    /* 6F728 80161328 DAE1030C */  jal        func_800F8768
    /* 6F72C 8016132C 1C320424 */   addiu     $a0, $zero, 0x321C
  .L80161330:
    /* 6F730 80161330 DA84050C */  jal        func_80161368
    /* 6F734 80161334 00000000 */   nop
    /* 6F738 80161338 8CD9030C */  jal        func_800F6630
    /* 6F73C 8016133C A9000424 */   addiu     $a0, $zero, 0xA9
    /* 6F740 80161340 62E0030C */  jal        func_800F8188
    /* 6F744 80161344 9A350424 */   addiu     $a0, $zero, 0x359A
    /* 6F748 80161348 53D9030C */  jal        func_800F654C
    /* 6F74C 8016134C 1D000424 */   addiu     $a0, $zero, 0x1D
    /* 6F750 80161350 62E0030C */  jal        func_800F8188
    /* 6F754 80161354 CA340424 */   addiu     $a0, $zero, 0x34CA
  .L80161358:
    /* 6F758 80161358 1000BF8F */  lw         $ra, 0x10($sp)
    /* 6F75C 8016135C 00000000 */  nop
    /* 6F760 80161360 0800E003 */  jr         $ra
    /* 6F764 80161364 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80160E88
