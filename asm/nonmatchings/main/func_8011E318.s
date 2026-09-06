nonmatching func_8011E318, 0x21C

glabel func_8011E318
    /* 2C718 8011E318 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 2C71C 8011E31C 1000BFAF */  sw         $ra, 0x10($sp)
    /* 2C720 8011E320 9CDC030C */  jal        func_800F7270
    /* 2C724 8011E324 3D000424 */   addiu     $a0, $zero, 0x3D
    /* 2C728 8011E328 1600043C */  lui        $a0, (0x168400 >> 16)
    /* 2C72C 8011E32C 1ADB030C */  jal        func_800F6C68
    /* 2C730 8011E330 00848434 */   ori       $a0, $a0, (0x168400 & 0xFFFF)
    /* 2C734 8011E334 93E0030C */  jal        func_800F824C
    /* 2C738 8011E338 3D000424 */   addiu     $a0, $zero, 0x3D
    /* 2C73C 8011E33C 1600043C */  lui        $a0, (0x168401 >> 16)
    /* 2C740 8011E340 1ADB030C */  jal        func_800F6C68
    /* 2C744 8011E344 01848434 */   ori       $a0, $a0, (0x168401 & 0xFFFF)
    /* 2C748 8011E348 93E0030C */  jal        func_800F824C
    /* 2C74C 8011E34C 3E000424 */   addiu     $a0, $zero, 0x3E
    /* 2C750 8011E350 9CDC030C */  jal        func_800F7270
    /* 2C754 8011E354 3D000424 */   addiu     $a0, $zero, 0x3D
    /* 2C758 8011E358 1600043C */  lui        $a0, (0x16E180 >> 16)
  .L8011E35C:
    /* 2C75C 8011E35C 1ADB030C */  jal        func_800F6C68
    /* 2C760 8011E360 80E18434 */   ori       $a0, $a0, (0x16E180 & 0xFFFF)
    /* 2C764 8011E364 0DD9030C */  jal        func_800F6434
    /* 2C768 8011E368 80800434 */   ori       $a0, $zero, 0x8080
    /* 2C76C 8011E36C 38004014 */  bnez       $v0, .L8011E450
    /* 2C770 8011E370 00000000 */   nop
    /* 2C774 8011E374 92D0030C */  jal        func_800F4248
    /* 2C778 8011E378 7F000424 */   addiu     $a0, $zero, 0x7F
    /* 2C77C 8011E37C 80E4030C */  jal        func_800F9200
    /* 2C780 8011E380 00000000 */   nop
    /* 2C784 8011E384 1600043C */  lui        $a0, (0x16E181 >> 16)
    /* 2C788 8011E388 1ADB030C */  jal        func_800F6C68
    /* 2C78C 8011E38C 81E18434 */   ori       $a0, $a0, (0x16E181 & 0xFFFF)
    /* 2C790 8011E390 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 2C794 8011E394 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 2C798 8011E398 1A80043C */  lui        $a0, %hi(D_8019ED58)
    /* 2C79C 8011E39C 58ED848C */  lw         $a0, %lo(D_8019ED58)($a0)
    /* 2C7A0 8011E3A0 00004394 */  lhu        $v1, 0x0($v0)
    /* 2C7A4 8011E3A4 EFD8030C */  jal        func_800F63BC
    /* 2C7A8 8011E3A8 000083A4 */   sh        $v1, 0x0($a0)
    /* 2C7AC 8011E3AC F7E4030C */  jal        func_800F93DC
    /* 2C7B0 8011E3B0 00000000 */   nop
    /* 2C7B4 8011E3B4 9CDC030C */  jal        func_800F7270
    /* 2C7B8 8011E3B8 40000424 */   addiu     $a0, $zero, 0x40
    /* 2C7BC 8011E3BC 7F00043C */  lui        $a0, (0x7F5C71 >> 16)
  .L8011E3C0:
    /* 2C7C0 8011E3C0 17E2030C */  jal        func_800F885C
    /* 2C7C4 8011E3C4 715C8434 */   ori       $a0, $a0, (0x7F5C71 & 0xFFFF)
    /* 2C7C8 8011E3C8 D9D8030C */  jal        func_800F6364
    /* 2C7CC 8011E3CC 00000000 */   nop
    /* 2C7D0 8011E3D0 A8D7030C */  jal        func_800F5EA0
    /* 2C7D4 8011E3D4 00000000 */   nop
    /* 2C7D8 8011E3D8 19D7030C */  jal        func_800F5C64
    /* 2C7DC 8011E3DC 02020424 */   addiu     $a0, $zero, 0x202
    /* 2C7E0 8011E3E0 F7FF4014 */  bnez       $v0, .L8011E3C0
    /* 2C7E4 8011E3E4 7F00043C */   lui       $a0, (0x7F5C71 >> 16)
    /* 2C7E8 8011E3E8 5BE3030C */  jal        func_800F8D6C
    /* 2C7EC 8011E3EC 40000424 */   addiu     $a0, $zero, 0x40
    /* 2C7F0 8011E3F0 1A80023C */  lui        $v0, %hi(D_8019ED5C)
    /* 2C7F4 8011E3F4 5CED428C */  lw         $v0, %lo(D_8019ED5C)($v0)
    /* 2C7F8 8011E3F8 1A80053C */  lui        $a1, %hi(D_8019ED40)
    /* 2C7FC 8011E3FC 40EDA58C */  lw         $a1, %lo(D_8019ED40)($a1)
    /* 2C800 8011E400 00004390 */  lbu        $v1, 0x0($v0)
    /* 2C804 8011E404 40000424 */  addiu      $a0, $zero, 0x40
    /* 2C808 8011E408 5DD5030C */  jal        func_800F5574
    /* 2C80C 8011E40C 0000A3A0 */   sb        $v1, 0x0($a1)
    /* 2C810 8011E410 F5D4030C */  jal        func_800F53D4
    /* 2C814 8011E414 00000000 */   nop
    /* 2C818 8011E418 2A004014 */  bnez       $v0, .L8011E4C4
    /* 2C81C 8011E41C 00000000 */   nop
    /* 2C820 8011E420 9CDC030C */  jal        func_800F7270
    /* 2C824 8011E424 3D000424 */   addiu     $a0, $zero, 0x3D
    /* 2C828 8011E428 1A80033C */  lui        $v1, %hi(D_8019ED54)
    /* 2C82C 8011E42C 54ED638C */  lw         $v1, %lo(D_8019ED54)($v1)
    /* 2C830 8011E430 00000000 */  nop
    /* 2C834 8011E434 00006294 */  lhu        $v0, 0x0($v1)
    /* 2C838 8011E438 3D000424 */  addiu      $a0, $zero, 0x3D
    /* 2C83C 8011E43C 02004224 */  addiu      $v0, $v0, 0x2
    /* 2C840 8011E440 5BE3030C */  jal        func_800F8D6C
    /* 2C844 8011E444 000062A4 */   sh        $v0, 0x0($v1)
    /* 2C848 8011E448 D7780408 */  j          .L8011E35C
    /* 2C84C 8011E44C 1600043C */   lui       $a0, (0x16E180 >> 16)
  .L8011E450:
    /* 2C850 8011E450 9CDC030C */  jal        func_800F7270
    /* 2C854 8011E454 40000424 */   addiu     $a0, $zero, 0x40
    /* 2C858 8011E458 7F00043C */  lui        $a0, (0x7F5C71 >> 16)
    /* 2C85C 8011E45C 17E2030C */  jal        func_800F885C
    /* 2C860 8011E460 715C8434 */   ori       $a0, $a0, (0x7F5C71 & 0xFFFF)
    /* 2C864 8011E464 D9D8030C */  jal        func_800F6364
    /* 2C868 8011E468 00000000 */   nop
    /* 2C86C 8011E46C 5BE3030C */  jal        func_800F8D6C
    /* 2C870 8011E470 40000424 */   addiu     $a0, $zero, 0x40
    /* 2C874 8011E474 1A80023C */  lui        $v0, %hi(D_8019ED5C)
    /* 2C878 8011E478 5CED428C */  lw         $v0, %lo(D_8019ED5C)($v0)
    /* 2C87C 8011E47C 1A80053C */  lui        $a1, %hi(D_8019ED40)
    /* 2C880 8011E480 40EDA58C */  lw         $a1, %lo(D_8019ED40)($a1)
    /* 2C884 8011E484 00004390 */  lbu        $v1, 0x0($v0)
    /* 2C888 8011E488 40000424 */  addiu      $a0, $zero, 0x40
    /* 2C88C 8011E48C 5DD5030C */  jal        func_800F5574
    /* 2C890 8011E490 0000A3A0 */   sb        $v1, 0x0($a1)
    /* 2C894 8011E494 F5D4030C */  jal        func_800F53D4
    /* 2C898 8011E498 00000000 */   nop
    /* 2C89C 8011E49C 09004014 */  bnez       $v0, .L8011E4C4
    /* 2C8A0 8011E4A0 00000000 */   nop
    /* 2C8A4 8011E4A4 9CDC030C */  jal        func_800F7270
    /* 2C8A8 8011E4A8 3D000424 */   addiu     $a0, $zero, 0x3D
    /* 2C8AC 8011E4AC D9D8030C */  jal        func_800F6364
    /* 2C8B0 8011E4B0 00000000 */   nop
    /* 2C8B4 8011E4B4 5BE3030C */  jal        func_800F8D6C
    /* 2C8B8 8011E4B8 3D000424 */   addiu     $a0, $zero, 0x3D
    /* 2C8BC 8011E4BC D7780408 */  j          .L8011E35C
    /* 2C8C0 8011E4C0 1600043C */   lui       $a0, (0x16E180 >> 16)
  .L8011E4C4:
    /* 2C8C4 8011E4C4 40DD030C */  jal        func_800F7500
    /* 2C8C8 8011E4C8 40000424 */   addiu     $a0, $zero, 0x40
    /* 2C8CC 8011E4CC 9CDC030C */  jal        func_800F7270
    /* 2C8D0 8011E4D0 40000424 */   addiu     $a0, $zero, 0x40
  .L8011E4D4:
    /* 2C8D4 8011E4D4 7F00043C */  lui        $a0, (0x7F5C31 >> 16)
    /* 2C8D8 8011E4D8 1ADB030C */  jal        func_800F6C68
    /* 2C8DC 8011E4DC 315C8434 */   ori       $a0, $a0, (0x7F5C31 & 0xFFFF)
    /* 2C8E0 8011E4E0 7F00043C */  lui        $a0, (0x7F5C71 >> 16)
    /* 2C8E4 8011E4E4 17E2030C */  jal        func_800F885C
    /* 2C8E8 8011E4E8 715C8434 */   ori       $a0, $a0, (0x7F5C71 & 0xFFFF)
    /* 2C8EC 8011E4EC 7F00043C */  lui        $a0, (0x7F5CB1 >> 16)
    /* 2C8F0 8011E4F0 17E2030C */  jal        func_800F885C
    /* 2C8F4 8011E4F4 B15C8434 */   ori       $a0, $a0, (0x7F5CB1 & 0xFFFF)
    /* 2C8F8 8011E4F8 7F00043C */  lui        $a0, (0x7F5CF1 >> 16)
    /* 2C8FC 8011E4FC 17E2030C */  jal        func_800F885C
    /* 2C900 8011E500 F15C8434 */   ori       $a0, $a0, (0x7F5CF1 & 0xFFFF)
    /* 2C904 8011E504 D9D8030C */  jal        func_800F6364
    /* 2C908 8011E508 00000000 */   nop
    /* 2C90C 8011E50C A8D7030C */  jal        func_800F5EA0
    /* 2C910 8011E510 00000000 */   nop
    /* 2C914 8011E514 19D7030C */  jal        func_800F5C64
    /* 2C918 8011E518 02020424 */   addiu     $a0, $zero, 0x202
    /* 2C91C 8011E51C EDFF4014 */  bnez       $v0, .L8011E4D4
    /* 2C920 8011E520 00000000 */   nop
    /* 2C924 8011E524 1000BF8F */  lw         $ra, 0x10($sp)
    /* 2C928 8011E528 00000000 */  nop
    /* 2C92C 8011E52C 0800E003 */  jr         $ra
    /* 2C930 8011E530 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8011E318
