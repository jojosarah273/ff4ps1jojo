nonmatching func_80131E50, 0xB8

glabel func_80131E50
    /* 40250 80131E50 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 40254 80131E54 1000BFAF */  sw         $ra, 0x10($sp)
    /* 40258 80131E58 80E4030C */  jal        func_800F9200
    /* 4025C 80131E5C 00000000 */   nop
    /* 40260 80131E60 3489040C */  jal        func_801224D0
    /* 40264 80131E64 00000000 */   nop
    /* 40268 80131E68 DADA030C */  jal        func_800F6B68
    /* 4026C 80131E6C 8B1B0424 */   addiu     $a0, $zero, 0x1B8B
    /* 40270 80131E70 0DD9030C */  jal        func_800F6434
    /* 40274 80131E74 02000424 */   addiu     $a0, $zero, 0x2
    /* 40278 80131E78 1D004014 */  bnez       $v0, .L80131EF0
    /* 4027C 80131E7C 00000000 */   nop
    /* 40280 80131E80 6DC8040C */  jal        func_801321B4
    /* 40284 80131E84 00000000 */   nop
    /* 40288 80131E88 DADA030C */  jal        func_800F6B68
    /* 4028C 80131E8C 03000424 */   addiu     $a0, $zero, 0x3
    /* 40290 80131E90 0DD9030C */  jal        func_800F6434
    /* 40294 80131E94 80800434 */   ori       $a0, $zero, 0x8080
    /* 40298 80131E98 15004014 */  bnez       $v0, .L80131EF0
    /* 4029C 80131E9C 00000000 */   nop
    /* 402A0 80131EA0 53D9030C */  jal        func_800F654C
    /* 402A4 80131EA4 21200000 */   addu      $a0, $zero, $zero
    /* 402A8 80131EA8 DAE1030C */  jal        func_800F8768
    /* 402AC 80131EAC 03000424 */   addiu     $a0, $zero, 0x3
    /* 402B0 80131EB0 DADA030C */  jal        func_800F6B68
    /* 402B4 80131EB4 04000424 */   addiu     $a0, $zero, 0x4
    /* 402B8 80131EB8 92D0030C */  jal        func_800F4248
    /* 402BC 80131EBC 7F000424 */   addiu     $a0, $zero, 0x7F
    /* 402C0 80131EC0 DAE1030C */  jal        func_800F8768
    /* 402C4 80131EC4 04000424 */   addiu     $a0, $zero, 0x4
    /* 402C8 80131EC8 91E5030C */  jal        func_800F9644
    /* 402CC 80131ECC 20000424 */   addiu     $a0, $zero, 0x20
    /* 402D0 80131ED0 F8DA030C */  jal        func_800F6BE0
    /* 402D4 80131ED4 09000424 */   addiu     $a0, $zero, 0x9
    /* 402D8 80131ED8 F7E1030C */  jal        func_800F87DC
    /* 402DC 80131EDC 07000424 */   addiu     $a0, $zero, 0x7
    /* 402E0 80131EE0 98E5030C */  jal        func_800F9660
    /* 402E4 80131EE4 20000424 */   addiu     $a0, $zero, 0x20
    /* 402E8 80131EE8 90D8030C */  jal        func_800F6240
    /* 402EC 80131EEC BD1B0424 */   addiu     $a0, $zero, 0x1BBD
  .L80131EF0:
    /* 402F0 80131EF0 F7E4030C */  jal        func_800F93DC
    /* 402F4 80131EF4 00000000 */   nop
    /* 402F8 80131EF8 1000BF8F */  lw         $ra, 0x10($sp)
    /* 402FC 80131EFC 00000000 */  nop
    /* 40300 80131F00 0800E003 */  jr         $ra
    /* 40304 80131F04 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80131E50
