nonmatching func_8012BA14, 0xE4

glabel func_8012BA14
    /* 39E14 8012BA14 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 39E18 8012BA18 30000424 */  addiu      $a0, $zero, 0x30
    /* 39E1C 8012BA1C 1400BFAF */  sw         $ra, 0x14($sp)
    /* 39E20 8012BA20 53D9030C */  jal        func_800F654C
    /* 39E24 8012BA24 1000B0AF */   sw        $s0, 0x10($sp)
    /* 39E28 8012BA28 93E0030C */  jal        func_800F824C
    /* 39E2C 8012BA2C 3F000424 */   addiu     $a0, $zero, 0x3F
    /* 39E30 8012BA30 FA99040C */  jal        func_801267E8
    /* 39E34 8012BA34 00000000 */   nop
    /* 39E38 8012BA38 C87C040C */  jal        func_8011F320
    /* 39E3C 8012BA3C 00000000 */   nop
    /* 39E40 8012BA40 C37B040C */  jal        func_8011EF0C
    /* 39E44 8012BA44 00000000 */   nop
    /* 39E48 8012BA48 2B84040C */  jal        func_801210AC
    /* 39E4C 8012BA4C 00000000 */   nop
    /* 39E50 8012BA50 1A80023C */  lui        $v0, %hi(D_80199190)
    /* 39E54 8012BA54 90915024 */  addiu      $s0, $v0, %lo(D_80199190)
    /* 39E58 8012BA58 1A000496 */  lhu        $a0, 0x1A($s0)
    /* 39E5C 8012BA5C 40DD030C */  jal        func_800F7500
    /* 39E60 8012BA60 00000000 */   nop
    /* 39E64 8012BA64 CC7B040C */  jal        func_8011EF30
    /* 39E68 8012BA68 00000000 */   nop
    /* 39E6C 8012BA6C 26000496 */  lhu        $a0, 0x26($s0)
    /* 39E70 8012BA70 40DD030C */  jal        func_800F7500
    /* 39E74 8012BA74 00000000 */   nop
    /* 39E78 8012BA78 E97E040C */  jal        func_8011FBA4
    /* 39E7C 8012BA7C 00000000 */   nop
    /* 39E80 8012BA80 59D9030C */  jal        func_800F6564
    /* 39E84 8012BA84 221B0424 */   addiu     $a0, $zero, 0x1B22
    /* 39E88 8012BA88 0DD9030C */  jal        func_800F6434
    /* 39E8C 8012BA8C 02000424 */   addiu     $a0, $zero, 0x2
    /* 39E90 8012BA90 08004014 */  bnez       $v0, .L8012BAB4
    /* 39E94 8012BA94 00000000 */   nop
    /* 39E98 8012BA98 53D9030C */  jal        func_800F654C
    /* 39E9C 8012BA9C 05000424 */   addiu     $a0, $zero, 0x5
    /* 39EA0 8012BAA0 2C000496 */  lhu        $a0, 0x2C($s0)
    /* 39EA4 8012BAA4 40DD030C */  jal        func_800F7500
    /* 39EA8 8012BAA8 00000000 */   nop
    /* 39EAC 8012BAAC B2AE0408 */  j          .L8012BAC8
    /* 39EB0 8012BAB0 00000000 */   nop
  .L8012BAB4:
    /* 39EB4 8012BAB4 53D9030C */  jal        func_800F654C
    /* 39EB8 8012BAB8 21200000 */   addu      $a0, $zero, $zero
    /* 39EBC 8012BABC 2E000496 */  lhu        $a0, 0x2E($s0)
    /* 39EC0 8012BAC0 40DD030C */  jal        func_800F7500
    /* 39EC4 8012BAC4 00000000 */   nop
  .L8012BAC8:
    /* 39EC8 8012BAC8 62E0030C */  jal        func_800F8188
    /* 39ECC 8012BACC C11B0424 */   addiu     $a0, $zero, 0x1BC1
    /* 39ED0 8012BAD0 CC7B040C */  jal        func_8011EF30
    /* 39ED4 8012BAD4 00000000 */   nop
    /* 39ED8 8012BAD8 DDE3030C */  jal        func_800F8F74
    /* 39EDC 8012BADC C31B0424 */   addiu     $a0, $zero, 0x1BC3
    /* 39EE0 8012BAE0 54AE040C */  jal        func_8012B950
    /* 39EE4 8012BAE4 00000000 */   nop
    /* 39EE8 8012BAE8 1400BF8F */  lw         $ra, 0x14($sp)
    /* 39EEC 8012BAEC 1000B08F */  lw         $s0, 0x10($sp)
    /* 39EF0 8012BAF0 0800E003 */  jr         $ra
    /* 39EF4 8012BAF4 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8012BA14
