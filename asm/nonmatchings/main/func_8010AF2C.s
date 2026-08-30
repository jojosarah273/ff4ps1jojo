nonmatching func_8010AF2C, 0xE4

glabel func_8010AF2C
    /* 1932C 8010AF2C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 19330 8010AF30 1000BFAF */  sw         $ra, 0x10($sp)
    /* 19334 8010AF34 92D0030C */  jal        func_800F4248
    /* 19338 8010AF38 7F000424 */   addiu     $a0, $zero, 0x7F
    /* 1933C 8010AF3C 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 19340 8010AF40 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 19344 8010AF44 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 19348 8010AF48 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 1934C 8010AF4C 00004394 */  lhu        $v1, 0x0($v0)
    /* 19350 8010AF50 21200000 */  addu       $a0, $zero, $zero
    /* 19354 8010AF54 53D9030C */  jal        func_800F654C
    /* 19358 8010AF58 0000A3A4 */   sh        $v1, 0x0($a1)
  .L8010AF5C:
    /* 1935C 8010AF5C 56D6030C */  jal        func_800F5958
    /* 19360 8010AF60 21200000 */   addu      $a0, $zero, $zero
    /* 19364 8010AF64 F5D4030C */  jal        func_800F53D4
    /* 19368 8010AF68 00000000 */   nop
    /* 1936C 8010AF6C 09004014 */  bnez       $v0, .L8010AF94
    /* 19370 8010AF70 03090424 */   addiu     $a0, $zero, 0x903
    /* 19374 8010AF74 92D7030C */  jal        func_800F5E48
    /* 19378 8010AF78 00000000 */   nop
    /* 1937C 8010AF7C 04D5030C */  jal        func_800F5410
    /* 19380 8010AF80 00000000 */   nop
    /* 19384 8010AF84 02D0030C */  jal        func_800F4008
    /* 19388 8010AF88 0F000424 */   addiu     $a0, $zero, 0xF
    /* 1938C 8010AF8C D72B0408 */  j          .L8010AF5C
    /* 19390 8010AF90 00000000 */   nop
  .L8010AF94:
    /* 19394 8010AF94 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 19398 8010AF98 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 1939C 8010AF9C 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 193A0 8010AFA0 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 193A4 8010AFA4 00004394 */  lhu        $v1, 0x0($v0)
    /* 193A8 8010AFA8 DADA030C */  jal        func_800F6B68
    /* 193AC 8010AFAC 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 193B0 8010AFB0 1A80023C */  lui        $v0, %hi(D_8019ED54)
    /* 193B4 8010AFB4 54ED428C */  lw         $v0, %lo(D_8019ED54)($v0)
    /* 193B8 8010AFB8 00000000 */  nop
    /* 193BC 8010AFBC 00004494 */  lhu        $a0, 0x0($v0)
    /* 193C0 8010AFC0 C1CE030C */  jal        func_800F3B04
    /* 193C4 8010AFC4 05098424 */   addiu     $a0, $a0, 0x905
    /* 193C8 8010AFC8 31DE030C */  jal        func_800F78C4
    /* 193CC 8010AFCC 21204000 */   addu      $a0, $v0, $zero
    /* 193D0 8010AFD0 46DE030C */  jal        func_800F7918
    /* 193D4 8010AFD4 02020424 */   addiu     $a0, $zero, 0x202
    /* 193D8 8010AFD8 05004014 */  bnez       $v0, .L8010AFF0
    /* 193DC 8010AFDC 00000000 */   nop
    /* 193E0 8010AFE0 53D9030C */  jal        func_800F654C
    /* 193E4 8010AFE4 FF000424 */   addiu     $a0, $zero, 0xFF
    /* 193E8 8010AFE8 002C0408 */  j          .L8010B000
    /* 193EC 8010AFEC 00000000 */   nop
  .L8010AFF0:
    /* 193F0 8010AFF0 DADA030C */  jal        func_800F6B68
    /* 193F4 8010AFF4 02090424 */   addiu     $a0, $zero, 0x902
    /* 193F8 8010AFF8 33D7030C */  jal        func_800F5CCC
    /* 193FC 8010AFFC 00000000 */   nop
  .L8010B000:
    /* 19400 8010B000 1000BF8F */  lw         $ra, 0x10($sp)
    /* 19404 8010B004 00000000 */  nop
    /* 19408 8010B008 0800E003 */  jr         $ra
    /* 1940C 8010B00C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8010AF2C
