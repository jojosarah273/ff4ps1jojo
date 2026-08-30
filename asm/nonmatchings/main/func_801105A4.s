nonmatching func_801105A4, 0xC0

glabel func_801105A4
    /* 1E9A4 801105A4 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 1E9A8 801105A8 1000BFAF */  sw         $ra, 0x10($sp)
    /* 1E9AC 801105AC 40DD030C */  jal        func_800F7500
    /* 1E9B0 801105B0 21200000 */   addu      $a0, $zero, $zero
    /* 1E9B4 801105B4 1400043C */  lui        $a0, (0x14F58E >> 16)
  .L801105B8:
    /* 1E9B8 801105B8 1ADB030C */  jal        func_800F6C68
    /* 1E9BC 801105BC 8EF58434 */   ori       $a0, $a0, (0x14F58E & 0xFFFF)
    /* 1E9C0 801105C0 04D5030C */  jal        func_800F5410
    /* 1E9C4 801105C4 00000000 */   nop
    /* 1E9C8 801105C8 0FCF030C */  jal        func_800F3C3C
    /* 1E9CC 801105CC 0C000424 */   addiu     $a0, $zero, 0xC
    /* 1E9D0 801105D0 CECF030C */  jal        func_800F3F38
    /* 1E9D4 801105D4 21204000 */   addu      $a0, $v0, $zero
    /* 1E9D8 801105D8 58E2030C */  jal        func_800F8960
    /* 1E9DC 801105DC 40030424 */   addiu     $a0, $zero, 0x340
    /* 1E9E0 801105E0 1400043C */  lui        $a0, (0x14F58F >> 16)
    /* 1E9E4 801105E4 1ADB030C */  jal        func_800F6C68
    /* 1E9E8 801105E8 8FF58434 */   ori       $a0, $a0, (0x14F58F & 0xFFFF)
    /* 1E9EC 801105EC 04D5030C */  jal        func_800F5410
    /* 1E9F0 801105F0 00000000 */   nop
    /* 1E9F4 801105F4 0FCF030C */  jal        func_800F3C3C
    /* 1E9F8 801105F8 0E000424 */   addiu     $a0, $zero, 0xE
    /* 1E9FC 801105FC CECF030C */  jal        func_800F3F38
    /* 1EA00 80110600 21204000 */   addu      $a0, $v0, $zero
    /* 1EA04 80110604 58E2030C */  jal        func_800F8960
    /* 1EA08 80110608 41030424 */   addiu     $a0, $zero, 0x341
    /* 1EA0C 8011060C 1400043C */  lui        $a0, (0x14F590 >> 16)
    /* 1EA10 80110610 1ADB030C */  jal        func_800F6C68
    /* 1EA14 80110614 90F58434 */   ori       $a0, $a0, (0x14F590 & 0xFFFF)
    /* 1EA18 80110618 58E2030C */  jal        func_800F8960
    /* 1EA1C 8011061C 42030424 */   addiu     $a0, $zero, 0x342
    /* 1EA20 80110620 1400043C */  lui        $a0, (0x14F591 >> 16)
    /* 1EA24 80110624 1ADB030C */  jal        func_800F6C68
    /* 1EA28 80110628 91F58434 */   ori       $a0, $a0, (0x14F591 & 0xFFFF)
    /* 1EA2C 8011062C 58E2030C */  jal        func_800F8960
    /* 1EA30 80110630 43030424 */   addiu     $a0, $zero, 0x343
    /* 1EA34 80110634 37F0030C */  jal        func_800FC0DC
    /* 1EA38 80110638 00000000 */   nop
    /* 1EA3C 8011063C A4D6030C */  jal        func_800F5A90
    /* 1EA40 80110640 18000424 */   addiu     $a0, $zero, 0x18
    /* 1EA44 80110644 F5D4030C */  jal        func_800F53D4
    /* 1EA48 80110648 00000000 */   nop
    /* 1EA4C 8011064C DAFF4010 */  beqz       $v0, .L801105B8
    /* 1EA50 80110650 1400043C */   lui       $a0, (0x14F58E >> 16)
    /* 1EA54 80110654 1000BF8F */  lw         $ra, 0x10($sp)
    /* 1EA58 80110658 00000000 */  nop
    /* 1EA5C 8011065C 0800E003 */  jr         $ra
    /* 1EA60 80110660 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_801105A4
