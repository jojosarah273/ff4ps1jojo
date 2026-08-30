nonmatching func_8015F9A0, 0x80

glabel func_8015F9A0
    /* 6DDA0 8015F9A0 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 6DDA4 8015F9A4 1000BFAF */  sw         $ra, 0x10($sp)
    /* 6DDA8 8015F9A8 53D9030C */  jal        func_800F654C
    /* 6DDAC 8015F9AC 05000424 */   addiu     $a0, $zero, 0x5
    /* 6DDB0 8015F9B0 62E0030C */  jal        func_800F8188
    /* 6DDB4 8015F9B4 E6380424 */   addiu     $a0, $zero, 0x38E6
    /* 6DDB8 8015F9B8 53D9030C */  jal        func_800F654C
    /* 6DDBC 8015F9BC 80000424 */   addiu     $a0, $zero, 0x80
    /* 6DDC0 8015F9C0 62E0030C */  jal        func_800F8188
    /* 6DDC4 8015F9C4 83260424 */   addiu     $a0, $zero, 0x2683
    /* 6DDC8 8015F9C8 62E0030C */  jal        func_800F8188
    /* 6DDCC 8015F9CC 03270424 */   addiu     $a0, $zero, 0x2703
    /* 6DDD0 8015F9D0 77DC030C */  jal        func_800F71DC
    /* 6DDD4 8015F9D4 80020424 */   addiu     $a0, $zero, 0x280
    /* 6DDD8 8015F9D8 40DD030C */  jal        func_800F7500
    /* 6DDDC 8015F9DC 08000424 */   addiu     $a0, $zero, 0x8
  .L8015F9E0:
    /* 6DDE0 8015F9E0 53D9030C */  jal        func_800F654C
    /* 6DDE4 8015F9E4 80000424 */   addiu     $a0, $zero, 0x80
    /* 6DDE8 8015F9E8 DAE1030C */  jal        func_800F8768
    /* 6DDEC 8015F9EC 03200424 */   addiu     $a0, $zero, 0x2003
    /* 6DDF0 8015F9F0 C34C050C */  jal        func_8015330C
    /* 6DDF4 8015F9F4 00000000 */   nop
    /* 6DDF8 8015F9F8 A8D7030C */  jal        func_800F5EA0
    /* 6DDFC 8015F9FC 00000000 */   nop
    /* 6DE00 8015FA00 19D7030C */  jal        func_800F5C64
    /* 6DE04 8015FA04 02020424 */   addiu     $a0, $zero, 0x202
    /* 6DE08 8015FA08 F5FF4014 */  bnez       $v0, .L8015F9E0
    /* 6DE0C 8015FA0C 00000000 */   nop
    /* 6DE10 8015FA10 1000BF8F */  lw         $ra, 0x10($sp)
    /* 6DE14 8015FA14 00000000 */  nop
    /* 6DE18 8015FA18 0800E003 */  jr         $ra
    /* 6DE1C 8015FA1C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8015F9A0
