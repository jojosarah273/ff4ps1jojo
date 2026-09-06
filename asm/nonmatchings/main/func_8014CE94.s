nonmatching func_8014CE94, 0x80

glabel func_8014CE94
    /* 5B294 8014CE94 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 5B298 8014CE98 1000BFAF */  sw         $ra, 0x10($sp)
    /* 5B29C 8014CE9C 80E4030C */  jal        func_800F9200
    /* 5B2A0 8014CEA0 00000000 */   nop
    /* 5B2A4 8014CEA4 77DC030C */  jal        func_800F71DC
    /* 5B2A8 8014CEA8 21200000 */   addu      $a0, $zero, $zero
  .L8014CEAC:
    /* 5B2AC 8014CEAC DAE1030C */  jal        func_800F8768
    /* 5B2B0 8014CEB0 12760424 */   addiu     $a0, $zero, 0x7612
    /* 5B2B4 8014CEB4 DAE1030C */  jal        func_800F8768
    /* 5B2B8 8014CEB8 9E760424 */   addiu     $a0, $zero, 0x769E
    /* 5B2BC 8014CEBC DAE1030C */  jal        func_800F8768
    /* 5B2C0 8014CEC0 2A770424 */   addiu     $a0, $zero, 0x772A
    /* 5B2C4 8014CEC4 DAE1030C */  jal        func_800F8768
    /* 5B2C8 8014CEC8 B6770424 */   addiu     $a0, $zero, 0x77B6
    /* 5B2CC 8014CECC 1A80033C */  lui        $v1, %hi(D_8019ED54)
    /* 5B2D0 8014CED0 54ED638C */  lw         $v1, %lo(D_8019ED54)($v1)
    /* 5B2D4 8014CED4 00000000 */  nop
    /* 5B2D8 8014CED8 00006294 */  lhu        $v0, 0x0($v1)
    /* 5B2DC 8014CEDC 8C000424 */  addiu      $a0, $zero, 0x8C
    /* 5B2E0 8014CEE0 04004224 */  addiu      $v0, $v0, 0x4
    /* 5B2E4 8014CEE4 56D6030C */  jal        func_800F5958
    /* 5B2E8 8014CEE8 000062A4 */   sh        $v0, 0x0($v1)
    /* 5B2EC 8014CEEC F5D4030C */  jal        func_800F53D4
    /* 5B2F0 8014CEF0 00000000 */   nop
    /* 5B2F4 8014CEF4 EDFF4010 */  beqz       $v0, .L8014CEAC
    /* 5B2F8 8014CEF8 00000000 */   nop
    /* 5B2FC 8014CEFC F7E4030C */  jal        func_800F93DC
    /* 5B300 8014CF00 00000000 */   nop
    /* 5B304 8014CF04 1000BF8F */  lw         $ra, 0x10($sp)
    /* 5B308 8014CF08 00000000 */  nop
    /* 5B30C 8014CF0C 0800E003 */  jr         $ra
    /* 5B310 8014CF10 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8014CE94
