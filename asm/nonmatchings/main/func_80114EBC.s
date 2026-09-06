nonmatching func_80114EBC, 0x114

glabel func_80114EBC
    /* 232BC 80114EBC E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 232C0 80114EC0 1000BFAF */  sw         $ra, 0x10($sp)
    /* 232C4 80114EC4 F453040C */  jal        func_80114FD0
    /* 232C8 80114EC8 00000000 */   nop
    /* 232CC 80114ECC 77DC030C */  jal        func_800F71DC
    /* 232D0 80114ED0 B6000424 */   addiu     $a0, $zero, 0xB6
    /* 232D4 80114ED4 5BE3030C */  jal        func_800F8D6C
    /* 232D8 80114ED8 89000424 */   addiu     $a0, $zero, 0x89
  .L80114EDC:
    /* 232DC 80114EDC DEF9030C */  jal        func_800FE778
    /* 232E0 80114EE0 00000000 */   nop
    /* 232E4 80114EE4 9CDC030C */  jal        func_800F7270
    /* 232E8 80114EE8 89000424 */   addiu     $a0, $zero, 0x89
    /* 232EC 80114EEC 56D6030C */  jal        func_800F5958
    /* 232F0 80114EF0 0F000424 */   addiu     $a0, $zero, 0xF
    /* 232F4 80114EF4 F0D4030C */  jal        func_800F53C0
    /* 232F8 80114EF8 00000000 */   nop
    /* 232FC 80114EFC 08004014 */  bnez       $v0, .L80114F20
    /* 23300 80114F00 00210424 */   addiu     $a0, $zero, 0x2100
    /* 23304 80114F04 1A80023C */  lui        $v0, %hi(D_8019ED5C)
    /* 23308 80114F08 5CED428C */  lw         $v0, %lo(D_8019ED5C)($v0)
    /* 2330C 80114F0C 1A80053C */  lui        $a1, %hi(D_8019ED40)
    /* 23310 80114F10 40EDA58C */  lw         $a1, %lo(D_8019ED40)($a1)
    /* 23314 80114F14 00004390 */  lbu        $v1, 0x0($v0)
    /* 23318 80114F18 62E0030C */  jal        func_800F8188
    /* 2331C 80114F1C 0000A3A0 */   sb        $v1, 0x0($a1)
  .L80114F20:
    /* 23320 80114F20 1CFA030C */  jal        func_800FE870
    /* 23324 80114F24 00000000 */   nop
    /* 23328 80114F28 EACA050C */  jal        func_80172BA8
    /* 2332C 80114F2C 00000000 */   nop
    /* 23330 80114F30 2054040C */  jal        func_80115080
    /* 23334 80114F34 00000000 */   nop
    /* 23338 80114F38 9CDC030C */  jal        func_800F7270
    /* 2333C 80114F3C 2C000424 */   addiu     $a0, $zero, 0x2C
    /* 23340 80114F40 65DD030C */  jal        func_800F7594
    /* 23344 80114F44 2E000424 */   addiu     $a0, $zero, 0x2E
    /* 23348 80114F48 5BE3030C */  jal        func_800F8D6C
    /* 2334C 80114F4C 2E000424 */   addiu     $a0, $zero, 0x2E
    /* 23350 80114F50 AFE3030C */  jal        func_800F8EBC
    /* 23354 80114F54 2C000424 */   addiu     $a0, $zero, 0x2C
    /* 23358 80114F58 53D9030C */  jal        func_800F654C
    /* 2335C 80114F5C 20000424 */   addiu     $a0, $zero, 0x20
    /* 23360 80114F60 4754040C */  jal        func_8011511C
    /* 23364 80114F64 00000000 */   nop
    /* 23368 80114F68 53D9030C */  jal        func_800F654C
    /* 2336C 80114F6C 01000424 */   addiu     $a0, $zero, 0x1
    /* 23370 80114F70 93E0030C */  jal        func_800F824C
    /* 23374 80114F74 05000424 */   addiu     $a0, $zero, 0x5
    /* 23378 80114F78 EEE3030C */  jal        func_800F8FB8
    /* 2337C 80114F7C 04000424 */   addiu     $a0, $zero, 0x4
    /* 23380 80114F80 0E54040C */  jal        func_80115038
    /* 23384 80114F84 00000000 */   nop
    /* 23388 80114F88 9CDC030C */  jal        func_800F7270
    /* 2338C 80114F8C 89000424 */   addiu     $a0, $zero, 0x89
    /* 23390 80114F90 92D7030C */  jal        func_800F5E48
    /* 23394 80114F94 00000000 */   nop
    /* 23398 80114F98 5BE3030C */  jal        func_800F8D6C
    /* 2339C 80114F9C 89000424 */   addiu     $a0, $zero, 0x89
    /* 233A0 80114FA0 19D7030C */  jal        func_800F5C64
    /* 233A4 80114FA4 02020424 */   addiu     $a0, $zero, 0x202
    /* 233A8 80114FA8 CCFF4014 */  bnez       $v0, .L80114EDC
    /* 233AC 80114FAC 00000000 */   nop
    /* 233B0 80114FB0 EEE3030C */  jal        func_800F8FB8
    /* 233B4 80114FB4 80000424 */   addiu     $a0, $zero, 0x80
    /* 233B8 80114FB8 977A040C */  jal        func_8011EA5C
    /* 233BC 80114FBC 00000000 */   nop
    /* 233C0 80114FC0 1000BF8F */  lw         $ra, 0x10($sp)
    /* 233C4 80114FC4 00000000 */  nop
    /* 233C8 80114FC8 0800E003 */  jr         $ra
    /* 233CC 80114FCC 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80114EBC
