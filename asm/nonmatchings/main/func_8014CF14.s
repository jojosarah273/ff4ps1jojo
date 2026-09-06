nonmatching func_8014CF14, 0xB0

glabel func_8014CF14
    /* 5B314 8014CF14 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 5B318 8014CF18 1000BFAF */  sw         $ra, 0x10($sp)
    /* 5B31C 8014CF1C 80E4030C */  jal        func_800F9200
    /* 5B320 8014CF20 00000000 */   nop
    /* 5B324 8014CF24 59D9030C */  jal        func_800F6564
    /* 5B328 8014CF28 02180424 */   addiu     $a0, $zero, 0x1802
    /* 5B32C 8014CF2C 5DD5030C */  jal        func_800F5574
    /* 5B330 8014CF30 10000424 */   addiu     $a0, $zero, 0x10
    /* 5B334 8014CF34 F5D4030C */  jal        func_800F53D4
    /* 5B338 8014CF38 00000000 */   nop
    /* 5B33C 8014CF3C 05004010 */  beqz       $v0, .L8014CF54
    /* 5B340 8014CF40 00000000 */   nop
    /* 5B344 8014CF44 F7E4030C */  jal        func_800F93DC
    /* 5B348 8014CF48 00000000 */   nop
    /* 5B34C 8014CF4C ED330508 */  j          .L8014CFB4
    /* 5B350 8014CF50 00000000 */   nop
  .L8014CF54:
    /* 5B354 8014CF54 F7E4030C */  jal        func_800F93DC
    /* 5B358 8014CF58 00000000 */   nop
    /* 5B35C 8014CF5C 77DC030C */  jal        func_800F71DC
    /* 5B360 8014CF60 21200000 */   addu      $a0, $zero, $zero
  .L8014CF64:
    /* 5B364 8014CF64 DAE1030C */  jal        func_800F8768
    /* 5B368 8014CF68 92790424 */   addiu     $a0, $zero, 0x7992
    /* 5B36C 8014CF6C DAE1030C */  jal        func_800F8768
    /* 5B370 8014CF70 1E7A0424 */   addiu     $a0, $zero, 0x7A1E
    /* 5B374 8014CF74 DAE1030C */  jal        func_800F8768
    /* 5B378 8014CF78 AA7A0424 */   addiu     $a0, $zero, 0x7AAA
    /* 5B37C 8014CF7C DAE1030C */  jal        func_800F8768
    /* 5B380 8014CF80 367B0424 */   addiu     $a0, $zero, 0x7B36
    /* 5B384 8014CF84 1A80033C */  lui        $v1, %hi(D_8019ED54)
    /* 5B388 8014CF88 54ED638C */  lw         $v1, %lo(D_8019ED54)($v1)
    /* 5B38C 8014CF8C 00000000 */  nop
    /* 5B390 8014CF90 00006294 */  lhu        $v0, 0x0($v1)
    /* 5B394 8014CF94 8C000424 */  addiu      $a0, $zero, 0x8C
    /* 5B398 8014CF98 04004224 */  addiu      $v0, $v0, 0x4
    /* 5B39C 8014CF9C 56D6030C */  jal        func_800F5958
    /* 5B3A0 8014CFA0 000062A4 */   sh        $v0, 0x0($v1)
    /* 5B3A4 8014CFA4 F5D4030C */  jal        func_800F53D4
    /* 5B3A8 8014CFA8 00000000 */   nop
    /* 5B3AC 8014CFAC EDFF4010 */  beqz       $v0, .L8014CF64
    /* 5B3B0 8014CFB0 00000000 */   nop
  .L8014CFB4:
    /* 5B3B4 8014CFB4 1000BF8F */  lw         $ra, 0x10($sp)
    /* 5B3B8 8014CFB8 00000000 */  nop
    /* 5B3BC 8014CFBC 0800E003 */  jr         $ra
    /* 5B3C0 8014CFC0 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8014CF14
