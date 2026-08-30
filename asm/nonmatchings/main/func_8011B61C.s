nonmatching func_8011B61C, 0x98

glabel func_8011B61C
    /* 29A1C 8011B61C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 29A20 8011B620 1000BFAF */  sw         $ra, 0x10($sp)
    /* 29A24 8011B624 ED6D040C */  jal        func_8011B7B4
    /* 29A28 8011B628 00000000 */   nop
    /* 29A2C 8011B62C 53D9030C */  jal        func_800F654C
    /* 29A30 8011B630 01000424 */   addiu     $a0, $zero, 0x1
  .L8011B634:
    /* 29A34 8011B634 A4D6030C */  jal        func_800F5A90
    /* 29A38 8011B638 21200000 */   addu      $a0, $zero, $zero
    /* 29A3C 8011B63C F5D4030C */  jal        func_800F53D4
    /* 29A40 8011B640 00000000 */   nop
    /* 29A44 8011B644 07004014 */  bnez       $v0, .L8011B664
    /* 29A48 8011B648 00000000 */   nop
    /* 29A4C 8011B64C 50D4030C */  jal        func_800F5140
    /* 29A50 8011B650 00000000 */   nop
    /* 29A54 8011B654 A8D7030C */  jal        func_800F5EA0
    /* 29A58 8011B658 00000000 */   nop
    /* 29A5C 8011B65C 8D6D0408 */  j          .L8011B634
    /* 29A60 8011B660 00000000 */   nop
  .L8011B664:
    /* 29A64 8011B664 9CDC030C */  jal        func_800F7270
    /* 29A68 8011B668 3D000424 */   addiu     $a0, $zero, 0x3D
    /* 29A6C 8011B66C 1A80023C */  lui        $v0, %hi(D_8019ED54)
    /* 29A70 8011B670 54ED428C */  lw         $v0, %lo(D_8019ED54)($v0)
    /* 29A74 8011B674 00000000 */  nop
    /* 29A78 8011B678 00004594 */  lhu        $a1, 0x0($v0)
    /* 29A7C 8011B67C E7CE030C */  jal        func_800F3B9C
    /* 29A80 8011B680 E0120424 */   addiu     $a0, $zero, 0x12E0
    /* 29A84 8011B684 1A80033C */  lui        $v1, %hi(D_8019ED54)
    /* 29A88 8011B688 54ED638C */  lw         $v1, %lo(D_8019ED54)($v1)
    /* 29A8C 8011B68C 00000000 */  nop
    /* 29A90 8011B690 00006494 */  lhu        $a0, 0x0($v1)
    /* 29A94 8011B694 31DE030C */  jal        func_800F78C4
    /* 29A98 8011B698 21204400 */   addu      $a0, $v0, $a0
    /* 29A9C 8011B69C 17E2030C */  jal        func_800F885C
    /* 29AA0 8011B6A0 E0120424 */   addiu     $a0, $zero, 0x12E0
    /* 29AA4 8011B6A4 1000BF8F */  lw         $ra, 0x10($sp)
    /* 29AA8 8011B6A8 00000000 */  nop
    /* 29AAC 8011B6AC 0800E003 */  jr         $ra
    /* 29AB0 8011B6B0 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8011B61C
