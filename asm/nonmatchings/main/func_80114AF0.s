nonmatching func_80114AF0, 0xD0

glabel func_80114AF0
    /* 22EF0 80114AF0 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 22EF4 80114AF4 1000BFAF */  sw         $ra, 0x10($sp)
    /* 22EF8 80114AF8 77DC030C */  jal        func_800F71DC
    /* 22EFC 80114AFC 70000424 */   addiu     $a0, $zero, 0x70
    /* 22F00 80114B00 5BE3030C */  jal        func_800F8D6C
    /* 22F04 80114B04 2C000424 */   addiu     $a0, $zero, 0x2C
    /* 22F08 80114B08 77DC030C */  jal        func_800F71DC
    /* 22F0C 80114B0C 78000424 */   addiu     $a0, $zero, 0x78
    /* 22F10 80114B10 5BE3030C */  jal        func_800F8D6C
    /* 22F14 80114B14 2E000424 */   addiu     $a0, $zero, 0x2E
  .L80114B18:
    /* 22F18 80114B18 DEF9030C */  jal        func_800FE778
    /* 22F1C 80114B1C 00000000 */   nop
    /* 22F20 80114B20 8CD9030C */  jal        func_800F6630
    /* 22F24 80114B24 2E000424 */   addiu     $a0, $zero, 0x2E
    /* 22F28 80114B28 5DD5030C */  jal        func_800F5574
    /* 22F2C 80114B2C 10000424 */   addiu     $a0, $zero, 0x10
    /* 22F30 80114B30 F0D4030C */  jal        func_800F53C0
    /* 22F34 80114B34 00000000 */   nop
    /* 22F38 80114B38 03004014 */  bnez       $v0, .L80114B48
    /* 22F3C 80114B3C 00000000 */   nop
    /* 22F40 80114B40 62E0030C */  jal        func_800F8188
    /* 22F44 80114B44 00210424 */   addiu     $a0, $zero, 0x2100
  .L80114B48:
    /* 22F48 80114B48 2653040C */  jal        func_80114C98
    /* 22F4C 80114B4C 00000000 */   nop
    /* 22F50 80114B50 40DD030C */  jal        func_800F7500
    /* 22F54 80114B54 78000424 */   addiu     $a0, $zero, 0x78
    /* 22F58 80114B58 AFE3030C */  jal        func_800F8EBC
    /* 22F5C 80114B5C 0E000424 */   addiu     $a0, $zero, 0xE
    /* 22F60 80114B60 40DD030C */  jal        func_800F7500
    /* 22F64 80114B64 50010424 */   addiu     $a0, $zero, 0x150
    /* 22F68 80114B68 8D56040C */  jal        func_80115A34
    /* 22F6C 80114B6C 00000000 */   nop
    /* 22F70 80114B70 9CDC030C */  jal        func_800F7270
    /* 22F74 80114B74 2E000424 */   addiu     $a0, $zero, 0x2E
    /* 22F78 80114B78 92D7030C */  jal        func_800F5E48
    /* 22F7C 80114B7C 00000000 */   nop
    /* 22F80 80114B80 5BE3030C */  jal        func_800F8D6C
    /* 22F84 80114B84 2E000424 */   addiu     $a0, $zero, 0x2E
    /* 22F88 80114B88 56D6030C */  jal        func_800F5958
    /* 22F8C 80114B8C 21200000 */   addu      $a0, $zero, $zero
    /* 22F90 80114B90 F5D4030C */  jal        func_800F53D4
    /* 22F94 80114B94 00000000 */   nop
    /* 22F98 80114B98 DFFF4010 */  beqz       $v0, .L80114B18
    /* 22F9C 80114B9C 00000000 */   nop
    /* 22FA0 80114BA0 EEE3030C */  jal        func_800F8FB8
    /* 22FA4 80114BA4 80000424 */   addiu     $a0, $zero, 0x80
    /* 22FA8 80114BA8 977A040C */  jal        func_8011EA5C
    /* 22FAC 80114BAC 00000000 */   nop
    /* 22FB0 80114BB0 1000BF8F */  lw         $ra, 0x10($sp)
    /* 22FB4 80114BB4 00000000 */  nop
    /* 22FB8 80114BB8 0800E003 */  jr         $ra
    /* 22FBC 80114BBC 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80114AF0
