nonmatching func_8013E2F8, 0x290

glabel func_8013E2F8
    /* 4C6F8 8013E2F8 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 4C6FC 8013E2FC 3DF10434 */  ori        $a0, $zero, 0xF13D
    /* 4C700 8013E300 1400BFAF */  sw         $ra, 0x14($sp)
    /* 4C704 8013E304 62E0030C */  jal        func_800F8188
    /* 4C708 8013E308 1000B0AF */   sw        $s0, 0x10($sp)
    /* 4C70C 8013E30C 4BF4040C */  jal        func_8013D12C
    /* 4C710 8013E310 1A80103C */   lui       $s0, %hi(D_8019A0B8)
    /* 4C714 8013E314 7A23050C */  jal        func_80148DE8
    /* 4C718 8013E318 00000000 */   nop
    /* 4C71C 8013E31C C7E5030C */  jal        func_800F971C
    /* 4C720 8013E320 00000000 */   nop
    /* 4C724 8013E324 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 4C728 8013E328 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 4C72C 8013E32C 1A80043C */  lui        $a0, %hi(D_8019ED54)
    /* 4C730 8013E330 54ED848C */  lw         $a0, %lo(D_8019ED54)($a0)
    /* 4C734 8013E334 00004394 */  lhu        $v1, 0x0($v0)
    /* 4C738 8013E338 00000000 */  nop
    /* 4C73C 8013E33C 000083A4 */  sh         $v1, 0x0($a0)
  .L8013E340:
    /* 4C740 8013E340 1600043C */  lui        $a0, (0x16FFEE >> 16)
    /* 4C744 8013E344 1ADB030C */  jal        func_800F6C68
    /* 4C748 8013E348 EEFF8434 */   ori       $a0, $a0, (0x16FFEE & 0xFFFF)
    /* 4C74C 8013E34C DAE1030C */  jal        func_800F8768
    /* 4C750 8013E350 B3F10434 */   ori       $a0, $zero, 0xF1B3
    /* 4C754 8013E354 1600043C */  lui        $a0, (0x16FFF2 >> 16)
    /* 4C758 8013E358 1ADB030C */  jal        func_800F6C68
    /* 4C75C 8013E35C F2FF8434 */   ori       $a0, $a0, (0x16FFF2 & 0xFFFF)
    /* 4C760 8013E360 DAE1030C */  jal        func_800F8768
    /* 4C764 8013E364 F3F10434 */   ori       $a0, $zero, 0xF1F3
    /* 4C768 8013E368 53D9030C */  jal        func_800F654C
    /* 4C76C 8013E36C FC000424 */   addiu     $a0, $zero, 0xFC
    /* 4C770 8013E370 910F050C */  jal        func_80143E44
    /* 4C774 8013E374 00000000 */   nop
    /* 4C778 8013E378 D9D8030C */  jal        func_800F6364
    /* 4C77C 8013E37C 00000000 */   nop
    /* 4C780 8013E380 56D6030C */  jal        func_800F5958
    /* 4C784 8013E384 04000424 */   addiu     $a0, $zero, 0x4
    /* 4C788 8013E388 F5D4030C */  jal        func_800F53D4
    /* 4C78C 8013E38C 00000000 */   nop
    /* 4C790 8013E390 EBFF4010 */  beqz       $v0, .L8013E340
    /* 4C794 8013E394 00000000 */   nop
  .L8013E398:
    /* 4C798 8013E398 5601050C */  jal        func_80140558
    /* 4C79C 8013E39C 00000000 */   nop
    /* 4C7A0 8013E3A0 C7E5030C */  jal        func_800F971C
    /* 4C7A4 8013E3A4 00000000 */   nop
    /* 4C7A8 8013E3A8 1A80033C */  lui        $v1, %hi(D_8019ED44)
    /* 4C7AC 8013E3AC 44ED638C */  lw         $v1, %lo(D_8019ED44)($v1)
    /* 4C7B0 8013E3B0 1A80043C */  lui        $a0, %hi(D_8019ED58)
    /* 4C7B4 8013E3B4 58ED848C */  lw         $a0, %lo(D_8019ED58)($a0)
    /* 4C7B8 8013E3B8 00006294 */  lhu        $v0, 0x0($v1)
    /* 4C7BC 8013E3BC 00000000 */  nop
    /* 4C7C0 8013E3C0 000082A4 */  sh         $v0, 0x0($a0)
    /* 4C7C4 8013E3C4 1A80033C */  lui        $v1, %hi(D_8019ED44)
    /* 4C7C8 8013E3C8 44ED638C */  lw         $v1, %lo(D_8019ED44)($v1)
    /* 4C7CC 8013E3CC 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 4C7D0 8013E3D0 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 4C7D4 8013E3D4 00006294 */  lhu        $v0, 0x0($v1)
    /* 4C7D8 8013E3D8 3DF10434 */  ori        $a0, $zero, 0xF13D
    /* 4C7DC 8013E3DC 59D9030C */  jal        func_800F6564
    /* 4C7E0 8013E3E0 0000A2A4 */   sh        $v0, 0x0($a1)
    /* 4C7E4 8013E3E4 93E0030C */  jal        func_800F824C
    /* 4C7E8 8013E3E8 0A000424 */   addiu     $a0, $zero, 0xA
  .L8013E3EC:
    /* 4C7EC 8013E3EC 0FCF030C */  jal        func_800F3C3C
    /* 4C7F0 8013E3F0 0A000424 */   addiu     $a0, $zero, 0xA
    /* 4C7F4 8013E3F4 CAD3030C */  jal        func_800F4F28
    /* 4C7F8 8013E3F8 21204000 */   addu      $a0, $v0, $zero
    /* 4C7FC 8013E3FC EBD3030C */  jal        func_800F4FAC
    /* 4C800 8013E400 01010424 */   addiu     $a0, $zero, 0x101
    /* 4C804 8013E404 2F004014 */  bnez       $v0, .L8013E4C4
    /* 4C808 8013E408 00000000 */   nop
    /* 4C80C 8013E40C 59D9030C */  jal        func_800F6564
    /* 4C810 8013E410 3EF10434 */   ori       $a0, $zero, 0xF13E
    /* 4C814 8013E414 0DD9030C */  jal        func_800F6434
    /* 4C818 8013E418 80000424 */   addiu     $a0, $zero, 0x80
    /* 4C81C 8013E41C 0D004014 */  bnez       $v0, .L8013E454
    /* 4C820 8013E420 00000000 */   nop
    /* 4C824 8013E424 DADA030C */  jal        func_800F6B68
    /* 4C828 8013E428 53F00434 */   ori       $a0, $zero, 0xF053
    /* 4C82C 8013E42C 04D5030C */  jal        func_800F5410
    /* 4C830 8013E430 00000000 */   nop
    /* 4C834 8013E434 02D0030C */  jal        func_800F4008
    /* 4C838 8013E438 10000424 */   addiu     $a0, $zero, 0x10
    /* 4C83C 8013E43C 93E0030C */  jal        func_800F824C
    /* 4C840 8013E440 21200000 */   addu      $a0, $zero, $zero
    /* 4C844 8013E444 DADA030C */  jal        func_800F6B68
    /* 4C848 8013E448 54F00434 */   ori       $a0, $zero, 0xF054
    /* 4C84C 8013E44C 1FF90408 */  j          .L8013E47C
    /* 4C850 8013E450 00000000 */   nop
  .L8013E454:
    /* 4C854 8013E454 DADA030C */  jal        func_800F6B68
    /* 4C858 8013E458 43F00434 */   ori       $a0, $zero, 0xF043
    /* 4C85C 8013E45C 20D5030C */  jal        func_800F5480
    /* 4C860 8013E460 00000000 */   nop
    /* 4C864 8013E464 16E0030C */  jal        func_800F8058
    /* 4C868 8013E468 0C000424 */   addiu     $a0, $zero, 0xC
    /* 4C86C 8013E46C 93E0030C */  jal        func_800F824C
    /* 4C870 8013E470 21200000 */   addu      $a0, $zero, $zero
    /* 4C874 8013E474 DADA030C */  jal        func_800F6B68
    /* 4C878 8013E478 44F00434 */   ori       $a0, $zero, 0xF044
  .L8013E47C:
    /* 4C87C 8013E47C 93E0030C */  jal        func_800F824C
    /* 4C880 8013E480 02000424 */   addiu     $a0, $zero, 0x2
    /* 4C884 8013E484 CCE4030C */  jal        func_800F9330
    /* 4C888 8013E488 00000000 */   nop
    /* 4C88C 8013E48C 77DC030C */  jal        func_800F71DC
    /* 4C890 8013E490 21200000 */   addu      $a0, $zero, $zero
  .L8013E494:
    /* 4C894 8013E494 80F8040C */  jal        func_8013E200
    /* 4C898 8013E498 00000000 */   nop
    /* 4C89C 8013E49C D9D8030C */  jal        func_800F6364
    /* 4C8A0 8013E4A0 00000000 */   nop
    /* 4C8A4 8013E4A4 56D6030C */  jal        func_800F5958
    /* 4C8A8 8013E4A8 04000424 */   addiu     $a0, $zero, 0x4
    /* 4C8AC 8013E4AC F5D4030C */  jal        func_800F53D4
    /* 4C8B0 8013E4B0 00000000 */   nop
    /* 4C8B4 8013E4B4 F7FF4010 */  beqz       $v0, .L8013E494
    /* 4C8B8 8013E4B8 00000000 */   nop
    /* 4C8BC 8013E4BC 68E5030C */  jal        func_800F95A0
    /* 4C8C0 8013E4C0 00000000 */   nop
  .L8013E4C4:
    /* 4C8C4 8013E4C4 D9D8030C */  jal        func_800F6364
    /* 4C8C8 8013E4C8 00000000 */   nop
    /* 4C8CC 8013E4CC D9D8030C */  jal        func_800F6364
    /* 4C8D0 8013E4D0 00000000 */   nop
    /* 4C8D4 8013E4D4 56D6030C */  jal        func_800F5958
    /* 4C8D8 8013E4D8 10000424 */   addiu     $a0, $zero, 0x10
    /* 4C8DC 8013E4DC F5D4030C */  jal        func_800F53D4
    /* 4C8E0 8013E4E0 00000000 */   nop
    /* 4C8E4 8013E4E4 C1FF4010 */  beqz       $v0, .L8013E3EC
    /* 4C8E8 8013E4E8 00000000 */   nop
    /* 4C8EC 8013E4EC C7E5030C */  jal        func_800F971C
    /* 4C8F0 8013E4F0 00000000 */   nop
    /* 4C8F4 8013E4F4 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 4C8F8 8013E4F8 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 4C8FC 8013E4FC 1A80043C */  lui        $a0, %hi(D_8019ED54)
    /* 4C900 8013E500 54ED848C */  lw         $a0, %lo(D_8019ED54)($a0)
    /* 4C904 8013E504 00004394 */  lhu        $v1, 0x0($v0)
    /* 4C908 8013E508 00000000 */  nop
    /* 4C90C 8013E50C 000083A4 */  sh         $v1, 0x0($a0)
  .L8013E510:
    /* 4C910 8013E510 1A80023C */  lui        $v0, %hi(D_8019ED54)
    /* 4C914 8013E514 54ED428C */  lw         $v0, %lo(D_8019ED54)($v0)
    /* 4C918 8013E518 B8A00426 */  addiu      $a0, $s0, %lo(D_8019A0B8)
    /* 4C91C 8013E51C 00004394 */  lhu        $v1, 0x0($v0)
    /* 4C920 8013E520 1A80053C */  lui        $a1, %hi(D_8019ED40)
    /* 4C924 8013E524 40EDA58C */  lw         $a1, %lo(D_8019ED40)($a1)
    /* 4C928 8013E528 21186400 */  addu       $v1, $v1, $a0
    /* 4C92C 8013E52C 00006290 */  lbu        $v0, 0x0($v1)
    /* 4C930 8013E530 910F050C */  jal        func_80143E44
    /* 4C934 8013E534 0000A2A0 */   sb        $v0, 0x0($a1)
    /* 4C938 8013E538 D9D8030C */  jal        func_800F6364
    /* 4C93C 8013E53C 00000000 */   nop
    /* 4C940 8013E540 56D6030C */  jal        func_800F5958
    /* 4C944 8013E544 04000424 */   addiu     $a0, $zero, 0x4
    /* 4C948 8013E548 F5D4030C */  jal        func_800F53D4
    /* 4C94C 8013E54C 00000000 */   nop
    /* 4C950 8013E550 EFFF4010 */  beqz       $v0, .L8013E510
    /* 4C954 8013E554 00000000 */   nop
    /* 4C958 8013E558 59D9030C */  jal        func_800F6564
    /* 4C95C 8013E55C 33F10434 */   ori       $a0, $zero, 0xF133
    /* 4C960 8013E560 5DD5030C */  jal        func_800F5574
    /* 4C964 8013E564 80000424 */   addiu     $a0, $zero, 0x80
    /* 4C968 8013E568 F0D4030C */  jal        func_800F53C0
    /* 4C96C 8013E56C 00000000 */   nop
    /* 4C970 8013E570 89FF4014 */  bnez       $v0, .L8013E398
    /* 4C974 8013E574 00000000 */   nop
    /* 4C978 8013E578 1400BF8F */  lw         $ra, 0x14($sp)
    /* 4C97C 8013E57C 1000B08F */  lw         $s0, 0x10($sp)
    /* 4C980 8013E580 0800E003 */  jr         $ra
    /* 4C984 8013E584 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8013E2F8
