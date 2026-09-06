nonmatching func_8010E388, 0x204

glabel func_8010E388
    /* 1C788 8010E388 E0FFBD27 */  addiu      $sp, $sp, -0x20
    /* 1C78C 8010E38C 10000424 */  addiu      $a0, $zero, 0x10
    /* 1C790 8010E390 1C00BFAF */  sw         $ra, 0x1C($sp)
    /* 1C794 8010E394 1800B2AF */  sw         $s2, 0x18($sp)
    /* 1C798 8010E398 1400B1AF */  sw         $s1, 0x14($sp)
    /* 1C79C 8010E39C 53D9030C */  jal        func_800F654C
    /* 1C7A0 8010E3A0 1000B0AF */   sw        $s0, 0x10($sp)
    /* 1C7A4 8010E3A4 62E0030C */  jal        func_800F8188
    /* 1C7A8 8010E3A8 CF0A0424 */   addiu     $a0, $zero, 0xACF
    /* 1C7AC 8010E3AC 77DC030C */  jal        func_800F71DC
    /* 1C7B0 8010E3B0 20000424 */   addiu     $a0, $zero, 0x20
    /* 1C7B4 8010E3B4 40E3030C */  jal        func_800F8D00
    /* 1C7B8 8010E3B8 D20A0424 */   addiu     $a0, $zero, 0xAD2
    /* 1C7BC 8010E3BC 53D9030C */  jal        func_800F654C
    /* 1C7C0 8010E3C0 07000424 */   addiu     $a0, $zero, 0x7
    /* 1C7C4 8010E3C4 62E0030C */  jal        func_800F8188
    /* 1C7C8 8010E3C8 CD0A0424 */   addiu     $a0, $zero, 0xACD
    /* 1C7CC 8010E3CC DDE3030C */  jal        func_800F8F74
    /* 1C7D0 8010E3D0 CE0A0424 */   addiu     $a0, $zero, 0xACE
    /* 1C7D4 8010E3D4 53D9030C */  jal        func_800F654C
    /* 1C7D8 8010E3D8 02000424 */   addiu     $a0, $zero, 0x2
    /* 1C7DC 8010E3DC 62E0030C */  jal        func_800F8188
    /* 1C7E0 8010E3E0 D00A0424 */   addiu     $a0, $zero, 0xAD0
    /* 1C7E4 8010E3E4 62E0030C */  jal        func_800F8188
    /* 1C7E8 8010E3E8 D10A0424 */   addiu     $a0, $zero, 0xAD1
    /* 1C7EC 8010E3EC F356040C */  jal        func_80115BCC
    /* 1C7F0 8010E3F0 1A80123C */   lui       $s2, %hi(D_80198BD8)
    /* 1C7F4 8010E3F4 53D9030C */  jal        func_800F654C
    /* 1C7F8 8010E3F8 01000424 */   addiu     $a0, $zero, 0x1
    /* 1C7FC 8010E3FC 93E0030C */  jal        func_800F824C
    /* 1C800 8010E400 E3000424 */   addiu     $a0, $zero, 0xE3
    /* 1C804 8010E404 53D9030C */  jal        func_800F654C
    /* 1C808 8010E408 23000424 */   addiu     $a0, $zero, 0x23
    /* 1C80C 8010E40C 01F6030C */  jal        func_800FD804
    /* 1C810 8010E410 1A80113C */   lui       $s1, %hi(D_80198BE8)
    /* 1C814 8010E414 77DC030C */  jal        func_800F71DC
    /* 1C818 8010E418 C0000424 */   addiu     $a0, $zero, 0xC0
    /* 1C81C 8010E41C 5BE3030C */  jal        func_800F8D6C
    /* 1C820 8010E420 89000424 */   addiu     $a0, $zero, 0x89
    /* 1C824 8010E424 1A80103C */  lui        $s0, %hi(D_80198BE0)
  .L8010E428:
    /* 1C828 8010E428 DEF9030C */  jal        func_800FE778
    /* 1C82C 8010E42C 00000000 */   nop
    /* 1C830 8010E430 1CFA030C */  jal        func_800FE870
    /* 1C834 8010E434 00000000 */   nop
    /* 1C838 8010E438 59D9030C */  jal        func_800F6564
    /* 1C83C 8010E43C 07170424 */   addiu     $a0, $zero, 0x1707
    /* 1C840 8010E440 20D5030C */  jal        func_800F5480
    /* 1C844 8010E444 00000000 */   nop
    /* 1C848 8010E448 16E0030C */  jal        func_800F8058
    /* 1C84C 8010E44C 10000424 */   addiu     $a0, $zero, 0x10
    /* 1C850 8010E450 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 1C854 8010E454 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 1C858 8010E458 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 1C85C 8010E45C 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 1C860 8010E460 00004394 */  lhu        $v1, 0x0($v0)
    /* 1C864 8010E464 7A000424 */  addiu      $a0, $zero, 0x7A
    /* 1C868 8010E468 8CD9030C */  jal        func_800F6630
    /* 1C86C 8010E46C 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 1C870 8010E470 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 1C874 8010E474 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 1C878 8010E478 00000000 */  nop
    /* 1C87C 8010E47C 00006290 */  lbu        $v0, 0x0($v1)
    /* 1C880 8010E480 01000424 */  addiu      $a0, $zero, 0x1
    /* 1C884 8010E484 02110200 */  srl        $v0, $v0, 4
    /* 1C888 8010E488 92D0030C */  jal        func_800F4248
    /* 1C88C 8010E48C 000062A0 */   sb        $v0, 0x0($v1)
    /* 1C890 8010E490 1A80033C */  lui        $v1, %hi(D_8019ED44)
    /* 1C894 8010E494 44ED638C */  lw         $v1, %lo(D_8019ED44)($v1)
    /* 1C898 8010E498 1A80043C */  lui        $a0, %hi(D_8019ED58)
    /* 1C89C 8010E49C 58ED848C */  lw         $a0, %lo(D_8019ED58)($a0)
    /* 1C8A0 8010E4A0 00006294 */  lhu        $v0, 0x0($v1)
    /* 1C8A4 8010E4A4 00000000 */  nop
    /* 1C8A8 8010E4A8 000082A4 */  sh         $v0, 0x0($a0)
    /* 1C8AC 8010E4AC 1A80033C */  lui        $v1, %hi(D_8019ED54)
    /* 1C8B0 8010E4B0 54ED638C */  lw         $v1, %lo(D_8019ED54)($v1)
    /* 1C8B4 8010E4B4 D88B4426 */  addiu      $a0, $s2, %lo(D_80198BD8)
    /* 1C8B8 8010E4B8 00006294 */  lhu        $v0, 0x0($v1)
    /* 1C8BC 8010E4BC 1A80053C */  lui        $a1, %hi(D_8019ED40)
    /* 1C8C0 8010E4C0 40EDA58C */  lw         $a1, %lo(D_8019ED40)($a1)
    /* 1C8C4 8010E4C4 21104400 */  addu       $v0, $v0, $a0
    /* 1C8C8 8010E4C8 00004390 */  lbu        $v1, 0x0($v0)
    /* 1C8CC 8010E4CC D40A0424 */  addiu      $a0, $zero, 0xAD4
    /* 1C8D0 8010E4D0 62E0030C */  jal        func_800F8188
    /* 1C8D4 8010E4D4 0000A3A0 */   sb        $v1, 0x0($a1)
    /* 1C8D8 8010E4D8 1A80023C */  lui        $v0, %hi(D_8019ED58)
    /* 1C8DC 8010E4DC 58ED428C */  lw         $v0, %lo(D_8019ED58)($v0)
    /* 1C8E0 8010E4E0 E88B2426 */  addiu      $a0, $s1, %lo(D_80198BE8)
    /* 1C8E4 8010E4E4 00004394 */  lhu        $v1, 0x0($v0)
    /* 1C8E8 8010E4E8 1A80053C */  lui        $a1, %hi(D_8019ED40)
    /* 1C8EC 8010E4EC 40EDA58C */  lw         $a1, %lo(D_8019ED40)($a1)
    /* 1C8F0 8010E4F0 21186400 */  addu       $v1, $v1, $a0
    /* 1C8F4 8010E4F4 00006290 */  lbu        $v0, 0x0($v1)
    /* 1C8F8 8010E4F8 04D5030C */  jal        func_800F5410
    /* 1C8FC 8010E4FC 0000A2A0 */   sb        $v0, 0x0($a1)
    /* 1C900 8010E500 1A80033C */  lui        $v1, %hi(D_8019ED54)
    /* 1C904 8010E504 54ED638C */  lw         $v1, %lo(D_8019ED54)($v1)
    /* 1C908 8010E508 00000000 */  nop
    /* 1C90C 8010E50C 00006294 */  lhu        $v0, 0x0($v1)
    /* 1C910 8010E510 E08B0426 */  addiu      $a0, $s0, %lo(D_80198BE0)
    /* 1C914 8010E514 21104400 */  addu       $v0, $v0, $a0
    /* 1C918 8010E518 00004490 */  lbu        $a0, 0x0($v0)
    /* 1C91C 8010E51C 02D0030C */  jal        func_800F4008
    /* 1C920 8010E520 00000000 */   nop
    /* 1C924 8010E524 62E0030C */  jal        func_800F8188
    /* 1C928 8010E528 D50A0424 */   addiu     $a0, $zero, 0xAD5
    /* 1C92C 8010E52C 4B57040C */  jal        func_80115D2C
    /* 1C930 8010E530 00000000 */   nop
    /* 1C934 8010E534 09FC030C */  jal        func_800FF024
    /* 1C938 8010E538 00000000 */   nop
    /* 1C93C 8010E53C 9CDC030C */  jal        func_800F7270
    /* 1C940 8010E540 89000424 */   addiu     $a0, $zero, 0x89
    /* 1C944 8010E544 92D7030C */  jal        func_800F5E48
    /* 1C948 8010E548 00000000 */   nop
    /* 1C94C 8010E54C 5BE3030C */  jal        func_800F8D6C
    /* 1C950 8010E550 89000424 */   addiu     $a0, $zero, 0x89
    /* 1C954 8010E554 19D7030C */  jal        func_800F5C64
    /* 1C958 8010E558 02020424 */   addiu     $a0, $zero, 0x202
    /* 1C95C 8010E55C B2FF4014 */  bnez       $v0, .L8010E428
    /* 1C960 8010E560 00000000 */   nop
    /* 1C964 8010E564 EEE3030C */  jal        func_800F8FB8
    /* 1C968 8010E568 E3000424 */   addiu     $a0, $zero, 0xE3
    /* 1C96C 8010E56C 977A040C */  jal        func_8011EA5C
    /* 1C970 8010E570 00000000 */   nop
    /* 1C974 8010E574 1C00BF8F */  lw         $ra, 0x1C($sp)
    /* 1C978 8010E578 1800B28F */  lw         $s2, 0x18($sp)
    /* 1C97C 8010E57C 1400B18F */  lw         $s1, 0x14($sp)
    /* 1C980 8010E580 1000B08F */  lw         $s0, 0x10($sp)
    /* 1C984 8010E584 0800E003 */  jr         $ra
    /* 1C988 8010E588 2000BD27 */   addiu     $sp, $sp, 0x20
endlabel func_8010E388
