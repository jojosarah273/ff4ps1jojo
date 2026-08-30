nonmatching func_8011F360, 0x98

glabel func_8011F360
    /* 2D760 8011F360 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 2D764 8011F364 1000BFAF */  sw         $ra, 0x10($sp)
    /* 2D768 8011F368 EEE3030C */  jal        func_800F8FB8
    /* 2D76C 8011F36C 45000424 */   addiu     $a0, $zero, 0x45
  .L8011F370:
    /* 2D770 8011F370 20D5030C */  jal        func_800F5480
    /* 2D774 8011F374 00000000 */   nop
    /* 2D778 8011F378 16E0030C */  jal        func_800F8058
    /* 2D77C 8011F37C 0A000424 */   addiu     $a0, $zero, 0xA
    /* 2D780 8011F380 F0D4030C */  jal        func_800F53C0
    /* 2D784 8011F384 00000000 */   nop
    /* 2D788 8011F388 05004010 */  beqz       $v0, .L8011F3A0
    /* 2D78C 8011F38C 00000000 */   nop
    /* 2D790 8011F390 AFD8030C */  jal        func_800F62BC
    /* 2D794 8011F394 45000424 */   addiu     $a0, $zero, 0x45
    /* 2D798 8011F398 DC7C0408 */  j          .L8011F370
    /* 2D79C 8011F39C 00000000 */   nop
  .L8011F3A0:
    /* 2D7A0 8011F3A0 02D0030C */  jal        func_800F4008
    /* 2D7A4 8011F3A4 8A000424 */   addiu     $a0, $zero, 0x8A
    /* 2D7A8 8011F3A8 52CF030C */  jal        func_800F3D48
    /* 2D7AC 8011F3AC 00000000 */   nop
    /* 2D7B0 8011F3B0 8CD9030C */  jal        func_800F6630
    /* 2D7B4 8011F3B4 45000424 */   addiu     $a0, $zero, 0x45
    /* 2D7B8 8011F3B8 0DD9030C */  jal        func_800F6434
    /* 2D7BC 8011F3BC 02020424 */   addiu     $a0, $zero, 0x202
    /* 2D7C0 8011F3C0 05004014 */  bnez       $v0, .L8011F3D8
    /* 2D7C4 8011F3C4 00000000 */   nop
    /* 2D7C8 8011F3C8 53D9030C */  jal        func_800F654C
    /* 2D7CC 8011F3CC FF000424 */   addiu     $a0, $zero, 0xFF
    /* 2D7D0 8011F3D0 FA7C0408 */  j          .L8011F3E8
    /* 2D7D4 8011F3D4 00000000 */   nop
  .L8011F3D8:
    /* 2D7D8 8011F3D8 04D5030C */  jal        func_800F5410
    /* 2D7DC 8011F3DC 00000000 */   nop
    /* 2D7E0 8011F3E0 02D0030C */  jal        func_800F4008
    /* 2D7E4 8011F3E4 80000424 */   addiu     $a0, $zero, 0x80
  .L8011F3E8:
    /* 2D7E8 8011F3E8 1000BF8F */  lw         $ra, 0x10($sp)
    /* 2D7EC 8011F3EC 00000000 */  nop
    /* 2D7F0 8011F3F0 0800E003 */  jr         $ra
    /* 2D7F4 8011F3F4 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8011F360
