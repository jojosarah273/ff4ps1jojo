nonmatching func_8010F2F4, 0x190

glabel func_8010F2F4
    /* 1D6F4 8010F2F4 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 1D6F8 8010F2F8 1000BFAF */  sw         $ra, 0x10($sp)
    /* 1D6FC 8010F2FC DDE3030C */  jal        func_800F8F74
    /* 1D700 8010F300 04170424 */   addiu     $a0, $zero, 0x1704
    /* 1D704 8010F304 EEE3030C */  jal        func_800F8FB8
    /* 1D708 8010F308 20000424 */   addiu     $a0, $zero, 0x20
    /* 1D70C 8010F30C EEE3030C */  jal        func_800F8FB8
    /* 1D710 8010F310 24000424 */   addiu     $a0, $zero, 0x24
    /* 1D714 8010F314 213D040C */  jal        func_8010F484
    /* 1D718 8010F318 00000000 */   nop
  .L8010F31C:
    /* 1D71C 8010F31C DEF9030C */  jal        func_800FE778
    /* 1D720 8010F320 00000000 */   nop
    /* 1D724 8010F324 1CFA030C */  jal        func_800FE870
    /* 1D728 8010F328 00000000 */   nop
    /* 1D72C 8010F32C 5B50040C */  jal        func_8011416C
    /* 1D730 8010F330 00000000 */   nop
    /* 1D734 8010F334 AFD8030C */  jal        func_800F62BC
    /* 1D738 8010F338 20000424 */   addiu     $a0, $zero, 0x20
    /* 1D73C 8010F33C 8CD9030C */  jal        func_800F6630
    /* 1D740 8010F340 24000424 */   addiu     $a0, $zero, 0x24
    /* 1D744 8010F344 04D5030C */  jal        func_800F5410
    /* 1D748 8010F348 00000000 */   nop
    /* 1D74C 8010F34C 0FCF030C */  jal        func_800F3C3C
    /* 1D750 8010F350 20000424 */   addiu     $a0, $zero, 0x20
    /* 1D754 8010F354 CECF030C */  jal        func_800F3F38
    /* 1D758 8010F358 21204000 */   addu      $a0, $v0, $zero
    /* 1D75C 8010F35C 93E0030C */  jal        func_800F824C
    /* 1D760 8010F360 24000424 */   addiu     $a0, $zero, 0x24
    /* 1D764 8010F364 1A80033C */  lui        $v1, %hi(D_8019ED68)
    /* 1D768 8010F368 68ED638C */  lw         $v1, %lo(D_8019ED68)($v1)
    /* 1D76C 8010F36C 00000000 */  nop
    /* 1D770 8010F370 00006290 */  lbu        $v0, 0x0($v1)
    /* 1D774 8010F374 00000000 */  nop
    /* 1D778 8010F378 FD004230 */  andi       $v0, $v0, 0xFD
    /* 1D77C 8010F37C 000062A0 */  sb         $v0, 0x0($v1)
    /* 1D780 8010F380 1A80043C */  lui        $a0, %hi(D_8019ED50)
    /* 1D784 8010F384 50ED848C */  lw         $a0, %lo(D_8019ED50)($a0)
    /* 1D788 8010F388 1A80053C */  lui        $a1, %hi(D_8019ED68)
    /* 1D78C 8010F38C 68EDA58C */  lw         $a1, %lo(D_8019ED68)($a1)
    /* 1D790 8010F390 00008290 */  lbu        $v0, 0x0($a0)
    /* 1D794 8010F394 0000A390 */  lbu        $v1, 0x0($a1)
    /* 1D798 8010F398 02004014 */  bnez       $v0, .L8010F3A4
    /* 1D79C 8010F39C 00000000 */   nop
    /* 1D7A0 8010F3A0 02006334 */  ori        $v1, $v1, 0x2
  .L8010F3A4:
    /* 1D7A4 8010F3A4 F0D4030C */  jal        func_800F53C0
    /* 1D7A8 8010F3A8 0000A3A0 */   sb        $v1, 0x0($a1)
    /* 1D7AC 8010F3AC 0D004010 */  beqz       $v0, .L8010F3E4
    /* 1D7B0 8010F3B0 00000000 */   nop
    /* 1D7B4 8010F3B4 77DC030C */  jal        func_800F71DC
    /* 1D7B8 8010F3B8 21200000 */   addu      $a0, $zero, $zero
    /* 1D7BC 8010F3BC 53D9030C */  jal        func_800F654C
    /* 1D7C0 8010F3C0 60000424 */   addiu     $a0, $zero, 0x60
    /* 1D7C4 8010F3C4 93E0030C */  jal        func_800F824C
    /* 1D7C8 8010F3C8 0C000424 */   addiu     $a0, $zero, 0xC
    /* 1D7CC 8010F3CC 53D9030C */  jal        func_800F654C
    /* 1D7D0 8010F3D0 50000424 */   addiu     $a0, $zero, 0x50
    /* 1D7D4 8010F3D4 93E0030C */  jal        func_800F824C
    /* 1D7D8 8010F3D8 0E000424 */   addiu     $a0, $zero, 0xE
    /* 1D7DC 8010F3DC 6941040C */  jal        func_801105A4
    /* 1D7E0 8010F3E0 00000000 */   nop
  .L8010F3E4:
    /* 1D7E4 8010F3E4 8CD9030C */  jal        func_800F6630
    /* 1D7E8 8010F3E8 20000424 */   addiu     $a0, $zero, 0x20
    /* 1D7EC 8010F3EC 5DD5030C */  jal        func_800F5574
    /* 1D7F0 8010F3F0 FF000424 */   addiu     $a0, $zero, 0xFF
    /* 1D7F4 8010F3F4 F5D4030C */  jal        func_800F53D4
    /* 1D7F8 8010F3F8 00000000 */   nop
    /* 1D7FC 8010F3FC C7FF4010 */  beqz       $v0, .L8010F31C
    /* 1D800 8010F400 00000000 */   nop
    /* 1D804 8010F404 4F41040C */  jal        func_8011053C
    /* 1D808 8010F408 00000000 */   nop
    /* 1D80C 8010F40C 59D9030C */  jal        func_800F6564
    /* 1D810 8010F410 88120424 */   addiu     $a0, $zero, 0x1288
    /* 1D814 8010F414 92D0030C */  jal        func_800F4248
    /* 1D818 8010F418 FB000424 */   addiu     $a0, $zero, 0xFB
    /* 1D81C 8010F41C 62E0030C */  jal        func_800F8188
    /* 1D820 8010F420 88120424 */   addiu     $a0, $zero, 0x1288
    /* 1D824 8010F424 77DC030C */  jal        func_800F71DC
    /* 1D828 8010F428 03000424 */   addiu     $a0, $zero, 0x3
  .L8010F42C:
    /* 1D82C 8010F42C CCE4030C */  jal        func_800F9330
    /* 1D830 8010F430 00000000 */   nop
    /* 1D834 8010F434 A33D040C */  jal        func_8010F68C
    /* 1D838 8010F438 00000000 */   nop
    /* 1D83C 8010F43C 373D040C */  jal        func_8010F4DC
    /* 1D840 8010F440 00000000 */   nop
    /* 1D844 8010F444 4E62040C */  jal        func_80118938
    /* 1D848 8010F448 00000000 */   nop
    /* 1D84C 8010F44C 68E5030C */  jal        func_800F95A0
    /* 1D850 8010F450 00000000 */   nop
    /* 1D854 8010F454 92D7030C */  jal        func_800F5E48
    /* 1D858 8010F458 00000000 */   nop
    /* 1D85C 8010F45C 19D7030C */  jal        func_800F5C64
    /* 1D860 8010F460 02020424 */   addiu     $a0, $zero, 0x202
    /* 1D864 8010F464 F1FF4014 */  bnez       $v0, .L8010F42C
    /* 1D868 8010F468 00000000 */   nop
    /* 1D86C 8010F46C 977A040C */  jal        func_8011EA5C
    /* 1D870 8010F470 00000000 */   nop
    /* 1D874 8010F474 1000BF8F */  lw         $ra, 0x10($sp)
    /* 1D878 8010F478 00000000 */  nop
    /* 1D87C 8010F47C 0800E003 */  jr         $ra
    /* 1D880 8010F480 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8010F2F4
