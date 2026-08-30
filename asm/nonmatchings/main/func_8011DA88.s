nonmatching func_8011DA88, 0x168

glabel func_8011DA88
    /* 2BE88 8011DA88 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 2BE8C 8011DA8C 1000BFAF */  sw         $ra, 0x10($sp)
    /* 2BE90 8011DA90 8CD9030C */  jal        func_800F6630
    /* 2BE94 8011DA94 AB000424 */   addiu     $a0, $zero, 0xAB
    /* 2BE98 8011DA98 92D0030C */  jal        func_800F4248
    /* 2BE9C 8011DA9C 01000424 */   addiu     $a0, $zero, 0x1
    /* 2BEA0 8011DAA0 48D0030C */  jal        func_800F4120
    /* 2BEA4 8011DAA4 02020424 */   addiu     $a0, $zero, 0x202
    /* 2BEA8 8011DAA8 05004010 */  beqz       $v0, .L8011DAC0
    /* 2BEAC 8011DAAC 00000000 */   nop
    /* 2BEB0 8011DAB0 53D9030C */  jal        func_800F654C
    /* 2BEB4 8011DAB4 80000424 */   addiu     $a0, $zero, 0x80
    /* 2BEB8 8011DAB8 B8760408 */  j          .L8011DAE0
    /* 2BEBC 8011DABC 00000000 */   nop
  .L8011DAC0:
    /* 2BEC0 8011DAC0 8CD9030C */  jal        func_800F6630
    /* 2BEC4 8011DAC4 AB000424 */   addiu     $a0, $zero, 0xAB
    /* 2BEC8 8011DAC8 0DD9030C */  jal        func_800F6434
    /* 2BECC 8011DACC 02020424 */   addiu     $a0, $zero, 0x202
    /* 2BED0 8011DAD0 43004010 */  beqz       $v0, .L8011DBE0
    /* 2BED4 8011DAD4 00000000 */   nop
    /* 2BED8 8011DAD8 53D9030C */  jal        func_800F654C
    /* 2BEDC 8011DADC 81000424 */   addiu     $a0, $zero, 0x81
  .L8011DAE0:
    /* 2BEE0 8011DAE0 62E0030C */  jal        func_800F8188
    /* 2BEE4 8011DAE4 15210424 */   addiu     $a0, $zero, 0x2115
    /* 2BEE8 8011DAE8 21F3030C */  jal        func_800FCC84
    /* 2BEEC 8011DAEC 00000000 */   nop
    /* 2BEF0 8011DAF0 53D9030C */  jal        func_800F654C
    /* 2BEF4 8011DAF4 01000424 */   addiu     $a0, $zero, 0x1
    /* 2BEF8 8011DAF8 62E0030C */  jal        func_800F8188
    /* 2BEFC 8011DAFC 00430424 */   addiu     $a0, $zero, 0x4300
    /* 2BF00 8011DB00 9CDC030C */  jal        func_800F7270
    /* 2BF04 8011DB04 99000424 */   addiu     $a0, $zero, 0x99
    /* 2BF08 8011DB08 40E3030C */  jal        func_800F8D00
    /* 2BF0C 8011DB0C 16210424 */   addiu     $a0, $zero, 0x2116
    /* 2BF10 8011DB10 77DC030C */  jal        func_800F71DC
    /* 2BF14 8011DB14 DB0A0424 */   addiu     $a0, $zero, 0xADB
    /* 2BF18 8011DB18 40E3030C */  jal        func_800F8D00
    /* 2BF1C 8011DB1C 02430424 */   addiu     $a0, $zero, 0x4302
    /* 2BF20 8011DB20 9CDC030C */  jal        func_800F7270
    /* 2BF24 8011DB24 95000424 */   addiu     $a0, $zero, 0x95
    /* 2BF28 8011DB28 40E3030C */  jal        func_800F8D00
    /* 2BF2C 8011DB2C 05430424 */   addiu     $a0, $zero, 0x4305
    /* 2BF30 8011DB30 2FF3030C */  jal        func_800FCCBC
    /* 2BF34 8011DB34 00000000 */   nop
    /* 2BF38 8011DB38 9CDC030C */  jal        func_800F7270
    /* 2BF3C 8011DB3C 9B000424 */   addiu     $a0, $zero, 0x9B
    /* 2BF40 8011DB40 40E3030C */  jal        func_800F8D00
    /* 2BF44 8011DB44 16210424 */   addiu     $a0, $zero, 0x2116
    /* 2BF48 8011DB48 9CDC030C */  jal        func_800F7270
    /* 2BF4C 8011DB4C 97000424 */   addiu     $a0, $zero, 0x97
    /* 2BF50 8011DB50 5CDC030C */  jal        func_800F7170
    /* 2BF54 8011DB54 02000424 */   addiu     $a0, $zero, 0x2
    /* 2BF58 8011DB58 05004014 */  bnez       $v0, .L8011DB70
    /* 2BF5C 8011DB5C 00000000 */   nop
    /* 2BF60 8011DB60 40E3030C */  jal        func_800F8D00
    /* 2BF64 8011DB64 05430424 */   addiu     $a0, $zero, 0x4305
    /* 2BF68 8011DB68 2FF3030C */  jal        func_800FCCBC
    /* 2BF6C 8011DB6C 00000000 */   nop
  .L8011DB70:
    /* 2BF70 8011DB70 9CDC030C */  jal        func_800F7270
    /* 2BF74 8011DB74 9D000424 */   addiu     $a0, $zero, 0x9D
    /* 2BF78 8011DB78 40E3030C */  jal        func_800F8D00
    /* 2BF7C 8011DB7C 16210424 */   addiu     $a0, $zero, 0x2116
    /* 2BF80 8011DB80 77DC030C */  jal        func_800F71DC
    /* 2BF84 8011DB84 1B0B0424 */   addiu     $a0, $zero, 0xB1B
    /* 2BF88 8011DB88 40E3030C */  jal        func_800F8D00
    /* 2BF8C 8011DB8C 02430424 */   addiu     $a0, $zero, 0x4302
    /* 2BF90 8011DB90 9CDC030C */  jal        func_800F7270
    /* 2BF94 8011DB94 95000424 */   addiu     $a0, $zero, 0x95
    /* 2BF98 8011DB98 40E3030C */  jal        func_800F8D00
    /* 2BF9C 8011DB9C 05430424 */   addiu     $a0, $zero, 0x4305
    /* 2BFA0 8011DBA0 2FF3030C */  jal        func_800FCCBC
    /* 2BFA4 8011DBA4 00000000 */   nop
    /* 2BFA8 8011DBA8 9CDC030C */  jal        func_800F7270
    /* 2BFAC 8011DBAC 9F000424 */   addiu     $a0, $zero, 0x9F
    /* 2BFB0 8011DBB0 40E3030C */  jal        func_800F8D00
    /* 2BFB4 8011DBB4 16210424 */   addiu     $a0, $zero, 0x2116
    /* 2BFB8 8011DBB8 9CDC030C */  jal        func_800F7270
    /* 2BFBC 8011DBBC 97000424 */   addiu     $a0, $zero, 0x97
    /* 2BFC0 8011DBC0 5CDC030C */  jal        func_800F7170
    /* 2BFC4 8011DBC4 02000424 */   addiu     $a0, $zero, 0x2
    /* 2BFC8 8011DBC8 05004014 */  bnez       $v0, .L8011DBE0
    /* 2BFCC 8011DBCC 00000000 */   nop
    /* 2BFD0 8011DBD0 40E3030C */  jal        func_800F8D00
    /* 2BFD4 8011DBD4 05430424 */   addiu     $a0, $zero, 0x4305
    /* 2BFD8 8011DBD8 2FF3030C */  jal        func_800FCCBC
    /* 2BFDC 8011DBDC 00000000 */   nop
  .L8011DBE0:
    /* 2BFE0 8011DBE0 1000BF8F */  lw         $ra, 0x10($sp)
    /* 2BFE4 8011DBE4 00000000 */  nop
    /* 2BFE8 8011DBE8 0800E003 */  jr         $ra
    /* 2BFEC 8011DBEC 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8011DA88
