nonmatching func_8016B68C, 0x44

glabel func_8016B68C
    /* 79A8C 8016B68C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 79A90 8016B690 1000BFAF */  sw         $ra, 0x10($sp)
    /* 79A94 8016B694 C1CE030C */  jal        func_800F3B04
    /* 79A98 8016B698 00030424 */   addiu     $a0, $zero, 0x300
    /* 79A9C 8016B69C 21204000 */  addu       $a0, $v0, $zero
    /* 79AA0 8016B6A0 21180000 */  addu       $v1, $zero, $zero
    /* 79AA4 8016B6A4 F0000624 */  addiu      $a2, $zero, 0xF0
    /* 79AA8 8016B6A8 18010524 */  addiu      $a1, $zero, 0x118
  .L8016B6AC:
    /* 79AAC 8016B6AC 21108300 */  addu       $v0, $a0, $v1
    /* 79AB0 8016B6B0 01006324 */  addiu      $v1, $v1, 0x1
    /* 79AB4 8016B6B4 FFFF6330 */  andi       $v1, $v1, 0xFFFF
    /* 79AB8 8016B6B8 FCFF6514 */  bne        $v1, $a1, .L8016B6AC
    /* 79ABC 8016B6BC 000046A0 */   sb        $a2, 0x0($v0)
    /* 79AC0 8016B6C0 1000BF8F */  lw         $ra, 0x10($sp)
    /* 79AC4 8016B6C4 00000000 */  nop
    /* 79AC8 8016B6C8 0800E003 */  jr         $ra
    /* 79ACC 8016B6CC 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8016B68C
