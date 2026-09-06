nonmatching func_8018F168, 0x90

glabel func_8018F168
    /* 9D568 8018F168 E0FFBD27 */  addiu      $sp, $sp, -0x20
    /* 9D56C 8018F16C 1000B0AF */  sw         $s0, 0x10($sp)
    /* 9D570 8018F170 21808000 */  addu       $s0, $a0, $zero
    /* 9D574 8018F174 21200000 */  addu       $a0, $zero, $zero
    /* 9D578 8018F178 1800BFAF */  sw         $ra, 0x18($sp)
    /* 9D57C 8018F17C E65D060C */  jal        func_80197798
    /* 9D580 8018F180 1400B1AF */   sw        $s1, 0x14($sp)
    /* 9D584 8018F184 3A4A060C */  jal        func_801928E8
    /* 9D588 8018F188 21200000 */   addu      $a0, $zero, $zero
    /* 9D58C 8018F18C BA5D060C */  jal        func_801976E8
    /* 9D590 8018F190 00000000 */   nop
    /* 9D594 8018F194 A15E060C */  jal        func_80197A84
    /* 9D598 8018F198 21884000 */   addu      $s1, $v0, $zero
    /* 9D59C 8018F19C 02004014 */  bnez       $v0, .L8018F1A8
    /* 9D5A0 8018F1A0 00000000 */   nop
    /* 9D5A4 8018F1A4 21800000 */  addu       $s0, $zero, $zero
  .L8018F1A8:
    /* 9D5A8 8018F1A8 9A3C060C */  jal        func_8018F268
    /* 9D5AC 8018F1AC 21200002 */   addu      $a0, $s0, $zero
    /* 9D5B0 8018F1B0 1E3D060C */  jal        func_8018F478
    /* 9D5B4 8018F1B4 00000000 */   nop
    /* 9D5B8 8018F1B8 DD3C060C */  jal        func_8018F374
    /* 9D5BC 8018F1BC 00000000 */   nop
    /* 9D5C0 8018F1C0 023D060C */  jal        func_8018F408
    /* 9D5C4 8018F1C4 00000000 */   nop
    /* 9D5C8 8018F1C8 A63C060C */  jal        func_8018F298
    /* 9D5CC 8018F1CC 00000000 */   nop
    /* 9D5D0 8018F1D0 01000224 */  addiu      $v0, $zero, 0x1
    /* 9D5D4 8018F1D4 03002216 */  bne        $s1, $v0, .L8018F1E4
    /* 9D5D8 8018F1D8 00000000 */   nop
    /* 9D5DC 8018F1DC BE5D060C */  jal        func_801976F8
    /* 9D5E0 8018F1E0 00000000 */   nop
  .L8018F1E4:
    /* 9D5E4 8018F1E4 1800BF8F */  lw         $ra, 0x18($sp)
    /* 9D5E8 8018F1E8 1400B18F */  lw         $s1, 0x14($sp)
    /* 9D5EC 8018F1EC 1000B08F */  lw         $s0, 0x10($sp)
    /* 9D5F0 8018F1F0 0800E003 */  jr         $ra
    /* 9D5F4 8018F1F4 2000BD27 */   addiu     $sp, $sp, 0x20
endlabel func_8018F168
