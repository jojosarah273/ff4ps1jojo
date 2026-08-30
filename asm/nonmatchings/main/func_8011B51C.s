nonmatching func_8011B51C, 0x78

glabel func_8011B51C
    /* 2991C 8011B51C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 29920 8011B520 1000BFAF */  sw         $ra, 0x10($sp)
    /* 29924 8011B524 ED6D040C */  jal        func_8011B7B4
    /* 29928 8011B528 00000000 */   nop
    /* 2992C 8011B52C 53D9030C */  jal        func_800F654C
    /* 29930 8011B530 FE000424 */   addiu     $a0, $zero, 0xFE
  .L8011B534:
    /* 29934 8011B534 A4D6030C */  jal        func_800F5A90
    /* 29938 8011B538 21200000 */   addu      $a0, $zero, $zero
    /* 2993C 8011B53C F5D4030C */  jal        func_800F53D4
    /* 29940 8011B540 00000000 */   nop
    /* 29944 8011B544 09004014 */  bnez       $v0, .L8011B56C
    /* 29948 8011B548 00000000 */   nop
    /* 2994C 8011B54C 20D5030C */  jal        func_800F5480
    /* 29950 8011B550 00000000 */   nop
    /* 29954 8011B554 1BDF030C */  jal        func_800F7C6C
    /* 29958 8011B558 00000000 */   nop
    /* 2995C 8011B55C A8D7030C */  jal        func_800F5EA0
    /* 29960 8011B560 00000000 */   nop
    /* 29964 8011B564 4D6D0408 */  j          .L8011B534
    /* 29968 8011B568 00000000 */   nop
  .L8011B56C:
    /* 2996C 8011B56C 9CDC030C */  jal        func_800F7270
    /* 29970 8011B570 3D000424 */   addiu     $a0, $zero, 0x3D
    /* 29974 8011B574 9FD2030C */  jal        func_800F4A7C
    /* 29978 8011B578 E0120424 */   addiu     $a0, $zero, 0x12E0
    /* 2997C 8011B57C 17E2030C */  jal        func_800F885C
    /* 29980 8011B580 E0120424 */   addiu     $a0, $zero, 0x12E0
    /* 29984 8011B584 1000BF8F */  lw         $ra, 0x10($sp)
    /* 29988 8011B588 00000000 */  nop
    /* 2998C 8011B58C 0800E003 */  jr         $ra
    /* 29990 8011B590 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8011B51C
