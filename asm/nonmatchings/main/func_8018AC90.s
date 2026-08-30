nonmatching func_8018AC90, 0x5C

glabel func_8018AC90
    /* 99090 8018AC90 F8FFBD27 */  addiu      $sp, $sp, -0x8
    /* 99094 8018AC94 0D000224 */  addiu      $v0, $zero, 0xD
    /* 99098 8018AC98 0400A2AF */  sw         $v0, 0x4($sp)
    /* 9909C 8018AC9C 342B0608 */  j          .L8018ACD0
    /* 990A0 8018ACA0 0000A0AF */   sw        $zero, 0x0($sp)
  .L8018ACA4:
    /* 990A4 8018ACA4 0400A38F */  lw         $v1, 0x4($sp)
    /* 990A8 8018ACA8 00000000 */  nop
    /* 990AC 8018ACAC 40100300 */  sll        $v0, $v1, 1
    /* 990B0 8018ACB0 21104300 */  addu       $v0, $v0, $v1
    /* 990B4 8018ACB4 80100200 */  sll        $v0, $v0, 2
    /* 990B8 8018ACB8 21104300 */  addu       $v0, $v0, $v1
    /* 990BC 8018ACBC 0400A2AF */  sw         $v0, 0x4($sp)
    /* 990C0 8018ACC0 0000A28F */  lw         $v0, 0x0($sp)
    /* 990C4 8018ACC4 00000000 */  nop
    /* 990C8 8018ACC8 01004224 */  addiu      $v0, $v0, 0x1
    /* 990CC 8018ACCC 0000A2AF */  sw         $v0, 0x0($sp)
  .L8018ACD0:
    /* 990D0 8018ACD0 0000A28F */  lw         $v0, 0x0($sp)
    /* 990D4 8018ACD4 00000000 */  nop
    /* 990D8 8018ACD8 3C004228 */  slti       $v0, $v0, 0x3C
    /* 990DC 8018ACDC F1FF4014 */  bnez       $v0, .L8018ACA4
    /* 990E0 8018ACE0 00000000 */   nop
    /* 990E4 8018ACE4 0800E003 */  jr         $ra
    /* 990E8 8018ACE8 0800BD27 */   addiu     $sp, $sp, 0x8
endlabel func_8018AC90
    /* 990EC 8018ACEC 00000000 */  nop
    /* 990F0 8018ACF0 00000000 */  nop
    /* 990F4 8018ACF4 00000000 */  nop
