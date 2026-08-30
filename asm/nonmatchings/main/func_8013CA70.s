nonmatching func_8013CA70, 0x124

glabel func_8013CA70
    /* 4AE70 8013CA70 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 4AE74 8013CA74 41000424 */  addiu      $a0, $zero, 0x41
    /* 4AE78 8013CA78 1400BFAF */  sw         $ra, 0x14($sp)
    /* 4AE7C 8013CA7C 9CDC030C */  jal        func_800F7270
    /* 4AE80 8013CA80 1000B0AF */   sw        $s0, 0x10($sp)
  .L8013CA84:
    /* 4AE84 8013CA84 DADA030C */  jal        func_800F6B68
    /* 4AE88 8013CA88 28FF0434 */   ori       $a0, $zero, 0xFF28
    /* 4AE8C 8013CA8C 5DD5030C */  jal        func_800F5574
    /* 4AE90 8013CA90 19000424 */   addiu     $a0, $zero, 0x19
    /* 4AE94 8013CA94 F5D4030C */  jal        func_800F53D4
    /* 4AE98 8013CA98 00000000 */   nop
    /* 4AE9C 8013CA9C 1B004014 */  bnez       $v0, .L8013CB0C
    /* 4AEA0 8013CAA0 00000000 */   nop
    /* 4AEA4 8013CAA4 5DD5030C */  jal        func_800F5574
    /* 4AEA8 8013CAA8 C8000424 */   addiu     $a0, $zero, 0xC8
    /* 4AEAC 8013CAAC F5D4030C */  jal        func_800F53D4
    /* 4AEB0 8013CAB0 00000000 */   nop
    /* 4AEB4 8013CAB4 15004014 */  bnez       $v0, .L8013CB0C
    /* 4AEB8 8013CAB8 00000000 */   nop
    /* 4AEBC 8013CABC 5DD5030C */  jal        func_800F5574
    /* 4AEC0 8013CAC0 EE000424 */   addiu     $a0, $zero, 0xEE
    /* 4AEC4 8013CAC4 F0D4030C */  jal        func_800F53C0
    /* 4AEC8 8013CAC8 00000000 */   nop
    /* 4AECC 8013CACC 0F004014 */  bnez       $v0, .L8013CB0C
    /* 4AED0 8013CAD0 00000000 */   nop
    /* 4AED4 8013CAD4 D9D8030C */  jal        func_800F6364
    /* 4AED8 8013CAD8 00000000 */   nop
    /* 4AEDC 8013CADC D9D8030C */  jal        func_800F6364
    /* 4AEE0 8013CAE0 00000000 */   nop
    /* 4AEE4 8013CAE4 56D6030C */  jal        func_800F5958
    /* 4AEE8 8013CAE8 10000424 */   addiu     $a0, $zero, 0x10
    /* 4AEEC 8013CAEC F5D4030C */  jal        func_800F53D4
    /* 4AEF0 8013CAF0 00000000 */   nop
    /* 4AEF4 8013CAF4 E3FF4010 */  beqz       $v0, .L8013CA84
    /* 4AEF8 8013CAF8 00000000 */   nop
    /* 4AEFC 8013CAFC 04D5030C */  jal        func_800F5410
    /* 4AF00 8013CB00 00000000 */   nop
    /* 4AF04 8013CB04 E1F20408 */  j          .L8013CB84
    /* 4AF08 8013CB08 00000000 */   nop
  .L8013CB0C:
    /* 4AF0C 8013CB0C 2B84040C */  jal        func_801210AC
    /* 4AF10 8013CB10 1A80103C */   lui       $s0, %hi(D_80199190)
    /* 4AF14 8013CB14 90911026 */  addiu      $s0, $s0, %lo(D_80199190)
    /* 4AF18 8013CB18 DA000496 */  lhu        $a0, 0xDA($s0)
    /* 4AF1C 8013CB1C 40DD030C */  jal        func_800F7500
    /* 4AF20 8013CB20 00000000 */   nop
    /* 4AF24 8013CB24 DD7E040C */  jal        func_8011FB74
    /* 4AF28 8013CB28 00000000 */   nop
    /* 4AF2C 8013CB2C FC98040C */  jal        func_801263F0
    /* 4AF30 8013CB30 00000000 */   nop
    /* 4AF34 8013CB34 6788040C */  jal        func_8012219C
    /* 4AF38 8013CB38 00000000 */   nop
    /* 4AF3C 8013CB3C D07F040C */  jal        func_8011FF40
    /* 4AF40 8013CB40 00000000 */   nop
    /* 4AF44 8013CB44 2A90040C */  jal        func_801240A8
    /* 4AF48 8013CB48 00000000 */   nop
    /* 4AF4C 8013CB4C D0000496 */  lhu        $a0, 0xD0($s0)
    /* 4AF50 8013CB50 40DD030C */  jal        func_800F7500
    /* 4AF54 8013CB54 00000000 */   nop
    /* 4AF58 8013CB58 CC7B040C */  jal        func_8011EF30
    /* 4AF5C 8013CB5C 00000000 */   nop
    /* 4AF60 8013CB60 D4000496 */  lhu        $a0, 0xD4($s0)
    /* 4AF64 8013CB64 40DD030C */  jal        func_800F7500
    /* 4AF68 8013CB68 00000000 */   nop
    /* 4AF6C 8013CB6C DD7E040C */  jal        func_8011FB74
    /* 4AF70 8013CB70 00000000 */   nop
    /* 4AF74 8013CB74 FC98040C */  jal        func_801263F0
    /* 4AF78 8013CB78 00000000 */   nop
    /* 4AF7C 8013CB7C 20D5030C */  jal        func_800F5480
    /* 4AF80 8013CB80 00000000 */   nop
  .L8013CB84:
    /* 4AF84 8013CB84 1400BF8F */  lw         $ra, 0x14($sp)
    /* 4AF88 8013CB88 1000B08F */  lw         $s0, 0x10($sp)
    /* 4AF8C 8013CB8C 0800E003 */  jr         $ra
    /* 4AF90 8013CB90 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8013CA70
