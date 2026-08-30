nonmatching func_8015C220, 0x32C

glabel func_8015C220
    /* 6A620 8015C220 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 6A624 8015C224 1000BFAF */  sw         $ra, 0x10($sp)
  .L8015C228:
    /* 6A628 8015C228 59D9030C */  jal        func_800F6564
    /* 6A62C 8015C22C E8380424 */   addiu     $a0, $zero, 0x38E8
    /* 6A630 8015C230 0DD9030C */  jal        func_800F6434
    /* 6A634 8015C234 02020424 */   addiu     $a0, $zero, 0x202
    /* 6A638 8015C238 FBFF4014 */  bnez       $v0, .L8015C228
    /* 6A63C 8015C23C 00000000 */   nop
    /* 6A640 8015C240 EEE3030C */  jal        func_800F8FB8
    /* 6A644 8015C244 DB000424 */   addiu     $a0, $zero, 0xDB
    /* 6A648 8015C248 EEE3030C */  jal        func_800F8FB8
    /* 6A64C 8015C24C D9000424 */   addiu     $a0, $zero, 0xD9
    /* 6A650 8015C250 8CD9030C */  jal        func_800F6630
    /* 6A654 8015C254 D0000424 */   addiu     $a0, $zero, 0xD0
    /* 6A658 8015C258 62E0030C */  jal        func_800F8188
    /* 6A65C 8015C25C E9380424 */   addiu     $a0, $zero, 0x38E9
    /* 6A660 8015C260 374B050C */  jal        func_80152CDC
    /* 6A664 8015C264 00000000 */   nop
    /* 6A668 8015C268 9CDC030C */  jal        func_800F7270
    /* 6A66C 8015C26C A6000424 */   addiu     $a0, $zero, 0xA6
    /* 6A670 8015C270 DADA030C */  jal        func_800F6B68
    /* 6A674 8015C274 00200424 */   addiu     $a0, $zero, 0x2000
    /* 6A678 8015C278 92D0030C */  jal        func_800F4248
    /* 6A67C 8015C27C 1F000424 */   addiu     $a0, $zero, 0x1F
    /* 6A680 8015C280 5DD5030C */  jal        func_800F5574
    /* 6A684 8015C284 15000424 */   addiu     $a0, $zero, 0x15
    /* 6A688 8015C288 F5D4030C */  jal        func_800F53D4
    /* 6A68C 8015C28C 00000000 */   nop
    /* 6A690 8015C290 21004010 */  beqz       $v0, .L8015C318
    /* 6A694 8015C294 00000000 */   nop
  .L8015C298:
    /* 6A698 8015C298 59D9030C */  jal        func_800F6564
    /* 6A69C 8015C29C A9380424 */   addiu     $a0, $zero, 0x38A9
    /* 6A6A0 8015C2A0 50D4030C */  jal        func_800F5140
    /* 6A6A4 8015C2A4 00000000 */   nop
    /* 6A6A8 8015C2A8 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 6A6AC 8015C2AC 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 6A6B0 8015C2B0 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 6A6B4 8015C2B4 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 6A6B8 8015C2B8 00004394 */  lhu        $v1, 0x0($v0)
    /* 6A6BC 8015C2BC 9A380424 */  addiu      $a0, $zero, 0x389A
    /* 6A6C0 8015C2C0 DADA030C */  jal        func_800F6B68
    /* 6A6C4 8015C2C4 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 6A6C8 8015C2C8 5DD5030C */  jal        func_800F5574
    /* 6A6CC 8015C2CC FF000424 */   addiu     $a0, $zero, 0xFF
    /* 6A6D0 8015C2D0 F5D4030C */  jal        func_800F53D4
    /* 6A6D4 8015C2D4 00000000 */   nop
    /* 6A6D8 8015C2D8 0B004014 */  bnez       $v0, .L8015C308
    /* 6A6DC 8015C2DC 00000000 */   nop
    /* 6A6E0 8015C2E0 93E0030C */  jal        func_800F824C
    /* 6A6E4 8015C2E4 A9000424 */   addiu     $a0, $zero, 0xA9
    /* 6A6E8 8015C2E8 DADA030C */  jal        func_800F6B68
    /* 6A6EC 8015C2EC 9B380424 */   addiu     $a0, $zero, 0x389B
    /* 6A6F0 8015C2F0 93E0030C */  jal        func_800F824C
    /* 6A6F4 8015C2F4 AA000424 */   addiu     $a0, $zero, 0xAA
    /* 6A6F8 8015C2F8 90D8030C */  jal        func_800F6240
    /* 6A6FC 8015C2FC A9380424 */   addiu     $a0, $zero, 0x38A9
    /* 6A700 8015C300 E4700508 */  j          .L8015C390
    /* 6A704 8015C304 00000000 */   nop
  .L8015C308:
    /* 6A708 8015C308 DDE3030C */  jal        func_800F8F74
    /* 6A70C 8015C30C A9380424 */   addiu     $a0, $zero, 0x38A9
    /* 6A710 8015C310 A6700508 */  j          .L8015C298
    /* 6A714 8015C314 00000000 */   nop
  .L8015C318:
    /* 6A718 8015C318 59D9030C */  jal        func_800F6564
    /* 6A71C 8015C31C A8380424 */   addiu     $a0, $zero, 0x38A8
    /* 6A720 8015C320 50D4030C */  jal        func_800F5140
    /* 6A724 8015C324 00000000 */   nop
    /* 6A728 8015C328 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 6A72C 8015C32C 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 6A730 8015C330 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 6A734 8015C334 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 6A738 8015C338 00004394 */  lhu        $v1, 0x0($v0)
    /* 6A73C 8015C33C 8C380424 */  addiu      $a0, $zero, 0x388C
    /* 6A740 8015C340 DADA030C */  jal        func_800F6B68
    /* 6A744 8015C344 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 6A748 8015C348 5DD5030C */  jal        func_800F5574
    /* 6A74C 8015C34C FF000424 */   addiu     $a0, $zero, 0xFF
    /* 6A750 8015C350 F5D4030C */  jal        func_800F53D4
    /* 6A754 8015C354 00000000 */   nop
    /* 6A758 8015C358 05004010 */  beqz       $v0, .L8015C370
    /* 6A75C 8015C35C 00000000 */   nop
    /* 6A760 8015C360 DDE3030C */  jal        func_800F8F74
    /* 6A764 8015C364 A8380424 */   addiu     $a0, $zero, 0x38A8
    /* 6A768 8015C368 C6700508 */  j          .L8015C318
    /* 6A76C 8015C36C 00000000 */   nop
  .L8015C370:
    /* 6A770 8015C370 93E0030C */  jal        func_800F824C
    /* 6A774 8015C374 A9000424 */   addiu     $a0, $zero, 0xA9
    /* 6A778 8015C378 DADA030C */  jal        func_800F6B68
    /* 6A77C 8015C37C 8D380424 */   addiu     $a0, $zero, 0x388D
    /* 6A780 8015C380 93E0030C */  jal        func_800F824C
    /* 6A784 8015C384 AA000424 */   addiu     $a0, $zero, 0xAA
    /* 6A788 8015C388 90D8030C */  jal        func_800F6240
    /* 6A78C 8015C38C A8380424 */   addiu     $a0, $zero, 0x38A8
  .L8015C390:
    /* 6A790 8015C390 8CD9030C */  jal        func_800F6630
    /* 6A794 8015C394 A9000424 */   addiu     $a0, $zero, 0xA9
    /* 6A798 8015C398 5DD5030C */  jal        func_800F5574
    /* 6A79C 8015C39C C0000424 */   addiu     $a0, $zero, 0xC0
    /* 6A7A0 8015C3A0 F0D4030C */  jal        func_800F53C0
    /* 6A7A4 8015C3A4 00000000 */   nop
    /* 6A7A8 8015C3A8 3E004010 */  beqz       $v0, .L8015C4A4
    /* 6A7AC 8015C3AC 00000000 */   nop
    /* 6A7B0 8015C3B0 20D5030C */  jal        func_800F5480
    /* 6A7B4 8015C3B4 00000000 */   nop
    /* 6A7B8 8015C3B8 16E0030C */  jal        func_800F8058
    /* 6A7BC 8015C3BC C0000424 */   addiu     $a0, $zero, 0xC0
    /* 6A7C0 8015C3C0 93E0030C */  jal        func_800F824C
    /* 6A7C4 8015C3C4 DC000424 */   addiu     $a0, $zero, 0xDC
    /* 6A7C8 8015C3C8 62E0030C */  jal        func_800F8188
    /* 6A7CC 8015C3CC EA380424 */   addiu     $a0, $zero, 0x38EA
    /* 6A7D0 8015C3D0 8CD9030C */  jal        func_800F6630
    /* 6A7D4 8015C3D4 A9000424 */   addiu     $a0, $zero, 0xA9
    /* 6A7D8 8015C3D8 5DD5030C */  jal        func_800F5574
    /* 6A7DC 8015C3DC CE000424 */   addiu     $a0, $zero, 0xCE
    /* 6A7E0 8015C3E0 F5D4030C */  jal        func_800F53D4
    /* 6A7E4 8015C3E4 00000000 */   nop
    /* 6A7E8 8015C3E8 07004010 */  beqz       $v0, .L8015C408
    /* 6A7EC 8015C3EC 00000000 */   nop
    /* 6A7F0 8015C3F0 53D9030C */  jal        func_800F654C
    /* 6A7F4 8015C3F4 FF000424 */   addiu     $a0, $zero, 0xFF
    /* 6A7F8 8015C3F8 93E0030C */  jal        func_800F824C
    /* 6A7FC 8015C3FC DA000424 */   addiu     $a0, $zero, 0xDA
    /* 6A800 8015C400 23710508 */  j          .L8015C48C
    /* 6A804 8015C404 00000000 */   nop
  .L8015C408:
    /* 6A808 8015C408 5B4C050C */  jal        func_8015316C
    /* 6A80C 8015C40C 00000000 */   nop
    /* 6A810 8015C410 93E0030C */  jal        func_800F824C
    /* 6A814 8015C414 A9000424 */   addiu     $a0, $zero, 0xA9
    /* 6A818 8015C418 04D5030C */  jal        func_800F5410
    /* 6A81C 8015C41C 00000000 */   nop
    /* 6A820 8015C420 02D0030C */  jal        func_800F4008
    /* 6A824 8015C424 05000424 */   addiu     $a0, $zero, 0x5
    /* 6A828 8015C428 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 6A82C 8015C42C 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 6A830 8015C430 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 6A834 8015C434 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 6A838 8015C438 00004394 */  lhu        $v1, 0x0($v0)
    /* 6A83C 8015C43C 40350424 */  addiu      $a0, $zero, 0x3540
    /* 6A840 8015C440 DADA030C */  jal        func_800F6B68
    /* 6A844 8015C444 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 6A848 8015C448 0DD9030C */  jal        func_800F6434
    /* 6A84C 8015C44C 02020424 */   addiu     $a0, $zero, 0x202
    /* 6A850 8015C450 EDFF4014 */  bnez       $v0, .L8015C408
    /* 6A854 8015C454 00000000 */   nop
    /* 6A858 8015C458 8CD9030C */  jal        func_800F6630
    /* 6A85C 8015C45C A9000424 */   addiu     $a0, $zero, 0xA9
    /* 6A860 8015C460 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 6A864 8015C464 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 6A868 8015C468 1A80043C */  lui        $a0, %hi(D_8019ED54)
    /* 6A86C 8015C46C 54ED848C */  lw         $a0, %lo(D_8019ED54)($a0)
    /* 6A870 8015C470 00004394 */  lhu        $v1, 0x0($v0)
    /* 6A874 8015C474 C7E5030C */  jal        func_800F971C
    /* 6A878 8015C478 000083A4 */   sh        $v1, 0x0($a0)
    /* 6A87C 8015C47C 264C050C */  jal        func_80153098
    /* 6A880 8015C480 00000000 */   nop
    /* 6A884 8015C484 93E0030C */  jal        func_800F824C
    /* 6A888 8015C488 DA000424 */   addiu     $a0, $zero, 0xDA
  .L8015C48C:
    /* 6A88C 8015C48C 53D9030C */  jal        func_800F654C
    /* 6A890 8015C490 80000424 */   addiu     $a0, $zero, 0x80
    /* 6A894 8015C494 93E0030C */  jal        func_800F824C
    /* 6A898 8015C498 D8000424 */   addiu     $a0, $zero, 0xD8
    /* 6A89C 8015C49C 4D710508 */  j          .L8015C534
    /* 6A8A0 8015C4A0 00000000 */   nop
  .L8015C4A4:
    /* 6A8A4 8015C4A4 5DD5030C */  jal        func_800F5574
    /* 6A8A8 8015C4A8 01000424 */   addiu     $a0, $zero, 0x1
    /* 6A8AC 8015C4AC F5D4030C */  jal        func_800F53D4
    /* 6A8B0 8015C4B0 00000000 */   nop
    /* 6A8B4 8015C4B4 13004014 */  bnez       $v0, .L8015C504
    /* 6A8B8 8015C4B8 00000000 */   nop
    /* 6A8BC 8015C4BC 53D9030C */  jal        func_800F654C
    /* 6A8C0 8015C4C0 02000424 */   addiu     $a0, $zero, 0x2
    /* 6A8C4 8015C4C4 62E0030C */  jal        func_800F8188
    /* 6A8C8 8015C4C8 EA380424 */   addiu     $a0, $zero, 0x38EA
    /* 6A8CC 8015C4CC 8CD9030C */  jal        func_800F6630
    /* 6A8D0 8015C4D0 AA000424 */   addiu     $a0, $zero, 0xAA
    /* 6A8D4 8015C4D4 93E0030C */  jal        func_800F824C
    /* 6A8D8 8015C4D8 DC000424 */   addiu     $a0, $zero, 0xDC
    /* 6A8DC 8015C4DC 53D9030C */  jal        func_800F654C
    /* 6A8E0 8015C4E0 20000424 */   addiu     $a0, $zero, 0x20
    /* 6A8E4 8015C4E4 93E0030C */  jal        func_800F824C
    /* 6A8E8 8015C4E8 D8000424 */   addiu     $a0, $zero, 0xD8
    /* 6A8EC 8015C4EC 53D9030C */  jal        func_800F654C
    /* 6A8F0 8015C4F0 FF000424 */   addiu     $a0, $zero, 0xFF
    /* 6A8F4 8015C4F4 93E0030C */  jal        func_800F824C
    /* 6A8F8 8015C4F8 DA000424 */   addiu     $a0, $zero, 0xDA
    /* 6A8FC 8015C4FC 4D710508 */  j          .L8015C534
    /* 6A900 8015C500 00000000 */   nop
  .L8015C504:
    /* 6A904 8015C504 8CD9030C */  jal        func_800F6630
    /* 6A908 8015C508 AA000424 */   addiu     $a0, $zero, 0xAA
    /* 6A90C 8015C50C 93E0030C */  jal        func_800F824C
    /* 6A910 8015C510 DC000424 */   addiu     $a0, $zero, 0xDC
    /* 6A914 8015C514 53D9030C */  jal        func_800F654C
    /* 6A918 8015C518 40000424 */   addiu     $a0, $zero, 0x40
    /* 6A91C 8015C51C 93E0030C */  jal        func_800F824C
    /* 6A920 8015C520 D8000424 */   addiu     $a0, $zero, 0xD8
    /* 6A924 8015C524 53D9030C */  jal        func_800F654C
    /* 6A928 8015C528 FF000424 */   addiu     $a0, $zero, 0xFF
    /* 6A92C 8015C52C 93E0030C */  jal        func_800F824C
    /* 6A930 8015C530 DA000424 */   addiu     $a0, $zero, 0xDA
  .L8015C534:
    /* 6A934 8015C534 90D8030C */  jal        func_800F6240
    /* 6A938 8015C538 E8380424 */   addiu     $a0, $zero, 0x38E8
    /* 6A93C 8015C53C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 6A940 8015C540 00000000 */  nop
    /* 6A944 8015C544 0800E003 */  jr         $ra
    /* 6A948 8015C548 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8015C220
