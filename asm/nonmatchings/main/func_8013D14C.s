nonmatching func_8013D14C, 0x264

glabel func_8013D14C
    /* 4B54C 8013D14C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 4B550 8013D150 1000BFAF */  sw         $ra, 0x10($sp)
    /* 4B554 8013D154 59D9030C */  jal        func_800F6564
    /* 4B558 8013D158 C4340424 */   addiu     $a0, $zero, 0x34C4
    /* 4B55C 8013D15C 62E0030C */  jal        func_800F8188
    /* 4B560 8013D160 85F40434 */   ori       $a0, $zero, 0xF485
    /* 4B564 8013D164 53D9030C */  jal        func_800F654C
    /* 4B568 8013D168 65000424 */   addiu     $a0, $zero, 0x65
    /* 4B56C 8013D16C 4A35050C */  jal        func_8014D528
    /* 4B570 8013D170 00000000 */   nop
    /* 4B574 8013D174 6F02050C */  jal        func_801409BC
    /* 4B578 8013D178 00000000 */   nop
    /* 4B57C 8013D17C 53D9030C */  jal        func_800F654C
    /* 4B580 8013D180 02000424 */   addiu     $a0, $zero, 0x2
    /* 4B584 8013D184 62E0030C */  jal        func_800F8188
    /* 4B588 8013D188 87EF0434 */   ori       $a0, $zero, 0xEF87
    /* 4B58C 8013D18C 4BF4040C */  jal        func_8013D12C
    /* 4B590 8013D190 00000000 */   nop
    /* 4B594 8013D194 C7E5030C */  jal        func_800F971C
    /* 4B598 8013D198 00000000 */   nop
    /* 4B59C 8013D19C 62E0030C */  jal        func_800F8188
    /* 4B5A0 8013D1A0 33F10434 */   ori       $a0, $zero, 0xF133
    /* 4B5A4 8013D1A4 53D9030C */  jal        func_800F654C
    /* 4B5A8 8013D1A8 80000424 */   addiu     $a0, $zero, 0x80
    /* 4B5AC 8013D1AC 62E0030C */  jal        func_800F8188
    /* 4B5B0 8013D1B0 34F10434 */   ori       $a0, $zero, 0xF134
    /* 4B5B4 8013D1B4 53D9030C */  jal        func_800F654C
    /* 4B5B8 8013D1B8 28000424 */   addiu     $a0, $zero, 0x28
    /* 4B5BC 8013D1BC 62E0030C */  jal        func_800F8188
    /* 4B5C0 8013D1C0 B3F10434 */   ori       $a0, $zero, 0xF1B3
    /* 4B5C4 8013D1C4 62E0030C */  jal        func_800F8188
    /* 4B5C8 8013D1C8 B4F10434 */   ori       $a0, $zero, 0xF1B4
    /* 4B5CC 8013D1CC 59D9030C */  jal        func_800F6564
    /* 4B5D0 8013D1D0 48000424 */   addiu     $a0, $zero, 0x48
    /* 4B5D4 8013D1D4 50D4030C */  jal        func_800F5140
    /* 4B5D8 8013D1D8 00000000 */   nop
    /* 4B5DC 8013D1DC 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 4B5E0 8013D1E0 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 4B5E4 8013D1E4 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 4B5E8 8013D1E8 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 4B5EC 8013D1EC 00004394 */  lhu        $v1, 0x0($v0)
    /* 4B5F0 8013D1F0 48000424 */  addiu      $a0, $zero, 0x48
    /* 4B5F4 8013D1F4 53D9030C */  jal        func_800F654C
    /* 4B5F8 8013D1F8 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 4B5FC 8013D1FC 62E0030C */  jal        func_800F8188
    /* 4B600 8013D200 14F10434 */   ori       $a0, $zero, 0xF114
    /* 4B604 8013D204 59D9030C */  jal        func_800F6564
    /* 4B608 8013D208 C2340424 */   addiu     $a0, $zero, 0x34C2
    /* 4B60C 8013D20C 0DD9030C */  jal        func_800F6434
    /* 4B610 8013D210 80000424 */   addiu     $a0, $zero, 0x80
    /* 4B614 8013D214 13004014 */  bnez       $v0, .L8013D264
    /* 4B618 8013D218 00000000 */   nop
    /* 4B61C 8013D21C DDE3030C */  jal        func_800F8F74
    /* 4B620 8013D220 84F40434 */   ori       $a0, $zero, 0xF484
    /* 4B624 8013D224 DADA030C */  jal        func_800F6B68
    /* 4B628 8013D228 53F00434 */   ori       $a0, $zero, 0xF053
    /* 4B62C 8013D22C 62E0030C */  jal        func_800F8188
    /* 4B630 8013D230 11F10434 */   ori       $a0, $zero, 0xF111
    /* 4B634 8013D234 DADA030C */  jal        func_800F6B68
    /* 4B638 8013D238 54F00434 */   ori       $a0, $zero, 0xF054
    /* 4B63C 8013D23C 20D5030C */  jal        func_800F5480
    /* 4B640 8013D240 00000000 */   nop
    /* 4B644 8013D244 16E0030C */  jal        func_800F8058
    /* 4B648 8013D248 08000424 */   addiu     $a0, $zero, 0x8
    /* 4B64C 8013D24C 62E0030C */  jal        func_800F8188
    /* 4B650 8013D250 12F10434 */   ori       $a0, $zero, 0xF112
    /* 4B654 8013D254 DDE3030C */  jal        func_800F8F74
    /* 4B658 8013D258 13F10434 */   ori       $a0, $zero, 0xF113
    /* 4B65C 8013D25C ADF40408 */  j          .L8013D2B4
    /* 4B660 8013D260 00000000 */   nop
  .L8013D264:
    /* 4B664 8013D264 53D9030C */  jal        func_800F654C
    /* 4B668 8013D268 40000424 */   addiu     $a0, $zero, 0x40
    /* 4B66C 8013D26C 62E0030C */  jal        func_800F8188
    /* 4B670 8013D270 84F40434 */   ori       $a0, $zero, 0xF484
    /* 4B674 8013D274 DADA030C */  jal        func_800F6B68
    /* 4B678 8013D278 43F00434 */   ori       $a0, $zero, 0xF043
    /* 4B67C 8013D27C 62E0030C */  jal        func_800F8188
    /* 4B680 8013D280 11F10434 */   ori       $a0, $zero, 0xF111
    /* 4B684 8013D284 DADA030C */  jal        func_800F6B68
    /* 4B688 8013D288 44F00434 */   ori       $a0, $zero, 0xF044
    /* 4B68C 8013D28C 20D5030C */  jal        func_800F5480
    /* 4B690 8013D290 00000000 */   nop
    /* 4B694 8013D294 16E0030C */  jal        func_800F8058
    /* 4B698 8013D298 0C000424 */   addiu     $a0, $zero, 0xC
    /* 4B69C 8013D29C 62E0030C */  jal        func_800F8188
    /* 4B6A0 8013D2A0 12F10434 */   ori       $a0, $zero, 0xF112
    /* 4B6A4 8013D2A4 53D9030C */  jal        func_800F654C
    /* 4B6A8 8013D2A8 F8000424 */   addiu     $a0, $zero, 0xF8
    /* 4B6AC 8013D2AC 62E0030C */  jal        func_800F8188
    /* 4B6B0 8013D2B0 13F10434 */   ori       $a0, $zero, 0xF113
  .L8013D2B4:
    /* 4B6B4 8013D2B4 53D9030C */  jal        func_800F654C
    /* 4B6B8 8013D2B8 08000424 */   addiu     $a0, $zero, 0x8
    /* 4B6BC 8013D2BC 62E0030C */  jal        func_800F8188
    /* 4B6C0 8013D2C0 15F10434 */   ori       $a0, $zero, 0xF115
    /* 4B6C4 8013D2C4 2B24050C */  jal        func_801490AC
    /* 4B6C8 8013D2C8 00000000 */   nop
  .L8013D2CC:
    /* 4B6CC 8013D2CC 5601050C */  jal        func_80140558
    /* 4B6D0 8013D2D0 00000000 */   nop
    /* 4B6D4 8013D2D4 0AF5040C */  jal        func_8013D428
    /* 4B6D8 8013D2D8 00000000 */   nop
    /* 4B6DC 8013D2DC DD24050C */  jal        func_80149374
    /* 4B6E0 8013D2E0 00000000 */   nop
    /* 4B6E4 8013D2E4 F0D4030C */  jal        func_800F53C0
    /* 4B6E8 8013D2E8 00000000 */   nop
    /* 4B6EC 8013D2EC 28004014 */  bnez       $v0, .L8013D390
    /* 4B6F0 8013D2F0 00000000 */   nop
    /* 4B6F4 8013D2F4 59D9030C */  jal        func_800F6564
    /* 4B6F8 8013D2F8 18F10434 */   ori       $a0, $zero, 0xF118
    /* 4B6FC 8013D2FC 93E0030C */  jal        func_800F824C
    /* 4B700 8013D300 21200000 */   addu      $a0, $zero, $zero
    /* 4B704 8013D304 59D9030C */  jal        func_800F6564
    /* 4B708 8013D308 19F10434 */   ori       $a0, $zero, 0xF119
    /* 4B70C 8013D30C 93E0030C */  jal        func_800F824C
    /* 4B710 8013D310 02000424 */   addiu     $a0, $zero, 0x2
    /* 4B714 8013D314 C7E5030C */  jal        func_800F971C
    /* 4B718 8013D318 00000000 */   nop
    /* 4B71C 8013D31C 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 4B720 8013D320 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 4B724 8013D324 1A80043C */  lui        $a0, %hi(D_8019ED58)
    /* 4B728 8013D328 58ED848C */  lw         $a0, %lo(D_8019ED58)($a0)
    /* 4B72C 8013D32C 00004394 */  lhu        $v1, 0x0($v0)
    /* 4B730 8013D330 E7E4030C */  jal        func_800F939C
    /* 4B734 8013D334 000083A4 */   sh        $v1, 0x0($a0)
    /* 4B738 8013D338 53D9030C */  jal        func_800F654C
    /* 4B73C 8013D33C 84000424 */   addiu     $a0, $zero, 0x84
    /* 4B740 8013D340 32F5040C */  jal        func_8013D4C8
    /* 4B744 8013D344 00000000 */   nop
    /* 4B748 8013D348 40DD030C */  jal        func_800F7500
    /* 4B74C 8013D34C 0C000424 */   addiu     $a0, $zero, 0xC
    /* 4B750 8013D350 68E5030C */  jal        func_800F95A0
    /* 4B754 8013D354 00000000 */   nop
    /* 4B758 8013D358 53D9030C */  jal        func_800F654C
    /* 4B75C 8013D35C 84000424 */   addiu     $a0, $zero, 0x84
    /* 4B760 8013D360 ECF4040C */  jal        func_8013D3B0
    /* 4B764 8013D364 00000000 */   nop
    /* 4B768 8013D368 40DD030C */  jal        func_800F7500
    /* 4B76C 8013D36C 18000424 */   addiu     $a0, $zero, 0x18
    /* 4B770 8013D370 77DC030C */  jal        func_800F71DC
    /* 4B774 8013D374 01000424 */   addiu     $a0, $zero, 0x1
    /* 4B778 8013D378 53D9030C */  jal        func_800F654C
    /* 4B77C 8013D37C 84000424 */   addiu     $a0, $zero, 0x84
    /* 4B780 8013D380 ECF4040C */  jal        func_8013D3B0
    /* 4B784 8013D384 00000000 */   nop
    /* 4B788 8013D388 B3F40408 */  j          .L8013D2CC
    /* 4B78C 8013D38C 00000000 */   nop
  .L8013D390:
    /* 4B790 8013D390 CA35050C */  jal        func_8014D728
    /* 4B794 8013D394 00000000 */   nop
    /* 4B798 8013D398 DDE3030C */  jal        func_800F8F74
    /* 4B79C 8013D39C 87EF0434 */   ori       $a0, $zero, 0xEF87
    /* 4B7A0 8013D3A0 1000BF8F */  lw         $ra, 0x10($sp)
    /* 4B7A4 8013D3A4 00000000 */  nop
    /* 4B7A8 8013D3A8 0800E003 */  jr         $ra
    /* 4B7AC 8013D3AC 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8013D14C
