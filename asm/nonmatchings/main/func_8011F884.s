nonmatching func_8011F884, 0x50

glabel func_8011F884
    /* 2DC84 8011F884 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 2DC88 8011F888 1000BFAF */  sw         $ra, 0x10($sp)
    /* 2DC8C 8011F88C 117E040C */  jal        func_8011F844
    /* 2DC90 8011F890 00000000 */   nop
    /* 2DC94 8011F894 8CD9030C */  jal        func_800F6630
    /* 2DC98 8011F898 21200000 */   addu      $a0, $zero, $zero
    /* 2DC9C 8011F89C 0FCF030C */  jal        func_800F3C3C
    /* 2DCA0 8011F8A0 01000424 */   addiu     $a0, $zero, 0x1
    /* 2DCA4 8011F8A4 31DE030C */  jal        func_800F78C4
    /* 2DCA8 8011F8A8 21204000 */   addu      $a0, $v0, $zero
    /* 2DCAC 8011F8AC 46DE030C */  jal        func_800F7918
    /* 2DCB0 8011F8B0 02000424 */   addiu     $a0, $zero, 0x2
    /* 2DCB4 8011F8B4 03004014 */  bnez       $v0, .L8011F8C4
    /* 2DCB8 8011F8B8 00000000 */   nop
    /* 2DCBC 8011F8BC 5B88040C */  jal        func_8012216C
    /* 2DCC0 8011F8C0 00000000 */   nop
  .L8011F8C4:
    /* 2DCC4 8011F8C4 1000BF8F */  lw         $ra, 0x10($sp)
    /* 2DCC8 8011F8C8 00000000 */  nop
    /* 2DCCC 8011F8CC 0800E003 */  jr         $ra
    /* 2DCD0 8011F8D0 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8011F884
