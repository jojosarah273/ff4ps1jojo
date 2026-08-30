nonmatching func_8011B594, 0x88

glabel func_8011B594
    /* 29994 8011B594 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 29998 8011B598 1000BFAF */  sw         $ra, 0x10($sp)
    /* 2999C 8011B59C D16D040C */  jal        func_8011B744
    /* 299A0 8011B5A0 00000000 */   nop
    /* 299A4 8011B5A4 53D9030C */  jal        func_800F654C
    /* 299A8 8011B5A8 01000424 */   addiu     $a0, $zero, 0x1
  .L8011B5AC:
    /* 299AC 8011B5AC A4D6030C */  jal        func_800F5A90
    /* 299B0 8011B5B0 21200000 */   addu      $a0, $zero, $zero
    /* 299B4 8011B5B4 F5D4030C */  jal        func_800F53D4
    /* 299B8 8011B5B8 00000000 */   nop
    /* 299BC 8011B5BC 07004014 */  bnez       $v0, .L8011B5DC
    /* 299C0 8011B5C0 00000000 */   nop
    /* 299C4 8011B5C4 50D4030C */  jal        func_800F5140
    /* 299C8 8011B5C8 00000000 */   nop
    /* 299CC 8011B5CC A8D7030C */  jal        func_800F5EA0
    /* 299D0 8011B5D0 00000000 */   nop
    /* 299D4 8011B5D4 6B6D0408 */  j          .L8011B5AC
    /* 299D8 8011B5D8 00000000 */   nop
  .L8011B5DC:
    /* 299DC 8011B5DC 9CDC030C */  jal        func_800F7270
    /* 299E0 8011B5E0 3D000424 */   addiu     $a0, $zero, 0x3D
    /* 299E4 8011B5E4 1A80023C */  lui        $v0, %hi(D_8019ED54)
    /* 299E8 8011B5E8 54ED428C */  lw         $v0, %lo(D_8019ED54)($v0)
    /* 299EC 8011B5EC 00000000 */  nop
    /* 299F0 8011B5F0 00004494 */  lhu        $a0, 0x0($v0)
    /* 299F4 8011B5F4 C1CE030C */  jal        func_800F3B04
    /* 299F8 8011B5F8 80128424 */   addiu     $a0, $a0, 0x1280
    /* 299FC 8011B5FC 31DE030C */  jal        func_800F78C4
    /* 29A00 8011B600 21204000 */   addu      $a0, $v0, $zero
    /* 29A04 8011B604 DAE1030C */  jal        func_800F8768
    /* 29A08 8011B608 80120424 */   addiu     $a0, $zero, 0x1280
    /* 29A0C 8011B60C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 29A10 8011B610 00000000 */  nop
    /* 29A14 8011B614 0800E003 */  jr         $ra
    /* 29A18 8011B618 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8011B594
