nonmatching func_8018F5C8, 0x3C

glabel func_8018F5C8
    /* 9D9C8 8018F5C8 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 9D9CC 8018F5CC 1000BFAF */  sw         $ra, 0x10($sp)
    /* 9D9D0 8018F5D0 7A44060C */  jal        func_801911E8
    /* 9D9D4 8018F5D4 00000000 */   nop
    /* 9D9D8 8018F5D8 05004014 */  bnez       $v0, .L8018F5F0
    /* 9D9DC 8018F5DC 00000000 */   nop
    /* 9D9E0 8018F5E0 2B44060C */  jal        func_801910AC
    /* 9D9E4 8018F5E4 00000000 */   nop
    /* 9D9E8 8018F5E8 7D3D0608 */  j          .L8018F5F4
    /* 9D9EC 8018F5EC 0100422C */   sltiu     $v0, $v0, 0x1
  .L8018F5F0:
    /* 9D9F0 8018F5F0 21100000 */  addu       $v0, $zero, $zero
  .L8018F5F4:
    /* 9D9F4 8018F5F4 1000BF8F */  lw         $ra, 0x10($sp)
    /* 9D9F8 8018F5F8 1800BD27 */  addiu      $sp, $sp, 0x18
    /* 9D9FC 8018F5FC 0800E003 */  jr         $ra
    /* 9DA00 8018F600 00000000 */   nop
endlabel func_8018F5C8
