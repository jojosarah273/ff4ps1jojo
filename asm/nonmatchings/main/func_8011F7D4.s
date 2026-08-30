nonmatching func_8011F7D4, 0x70

glabel func_8011F7D4
    /* 2DBD4 8011F7D4 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 2DBD8 8011F7D8 1000BFAF */  sw         $ra, 0x10($sp)
    /* 2DBDC 8011F7DC 8CD9030C */  jal        func_800F6630
    /* 2DBE0 8011F7E0 01000424 */   addiu     $a0, $zero, 0x1
    /* 2DBE4 8011F7E4 92D0030C */  jal        func_800F4248
    /* 2DBE8 8011F7E8 03000424 */   addiu     $a0, $zero, 0x3
    /* 2DBEC 8011F7EC 48D0030C */  jal        func_800F4120
    /* 2DBF0 8011F7F0 02020424 */   addiu     $a0, $zero, 0x202
    /* 2DBF4 8011F7F4 0D004014 */  bnez       $v0, .L8011F82C
    /* 2DBF8 8011F7F8 00000000 */   nop
    /* 2DBFC 8011F7FC 217E040C */  jal        func_8011F884
    /* 2DC00 8011F800 00000000 */   nop
    /* 2DC04 8011F804 8CD9030C */  jal        func_800F6630
    /* 2DC08 8011F808 03000424 */   addiu     $a0, $zero, 0x3
    /* 2DC0C 8011F80C FED8030C */  jal        func_800F63F8
    /* 2DC10 8011F810 00000000 */   nop
    /* 2DC14 8011F814 93E0030C */  jal        func_800F824C
    /* 2DC18 8011F818 01000424 */   addiu     $a0, $zero, 0x1
    /* 2DC1C 8011F81C 04D5030C */  jal        func_800F5410
    /* 2DC20 8011F820 00000000 */   nop
    /* 2DC24 8011F824 0D7E0408 */  j          .L8011F834
    /* 2DC28 8011F828 00000000 */   nop
  .L8011F82C:
    /* 2DC2C 8011F82C 20D5030C */  jal        func_800F5480
    /* 2DC30 8011F830 00000000 */   nop
  .L8011F834:
    /* 2DC34 8011F834 1000BF8F */  lw         $ra, 0x10($sp)
    /* 2DC38 8011F838 00000000 */  nop
    /* 2DC3C 8011F83C 0800E003 */  jr         $ra
    /* 2DC40 8011F840 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8011F7D4
