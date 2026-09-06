nonmatching func_8013C44C, 0x68

glabel func_8013C44C
    /* 4A84C 8013C44C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 4A850 8013C450 1000BFAF */  sw         $ra, 0x10($sp)
    /* 4A854 8013C454 8CD9030C */  jal        func_800F6630
    /* 4A858 8013C458 60000424 */   addiu     $a0, $zero, 0x60
    /* 4A85C 8013C45C 0DD9030C */  jal        func_800F6434
    /* 4A860 8013C460 02020424 */   addiu     $a0, $zero, 0x202
    /* 4A864 8013C464 05004014 */  bnez       $v0, .L8013C47C
    /* 4A868 8013C468 00000000 */   nop
    /* 4A86C 8013C46C 53D9030C */  jal        func_800F654C
    /* 4A870 8013C470 48000424 */   addiu     $a0, $zero, 0x48
    /* 4A874 8013C474 21F10408 */  j          .L8013C484
    /* 4A878 8013C478 00000000 */   nop
  .L8013C47C:
    /* 4A87C 8013C47C 53D9030C */  jal        func_800F654C
    /* 4A880 8013C480 B8000424 */   addiu     $a0, $zero, 0xB8
  .L8013C484:
    /* 4A884 8013C484 93E0030C */  jal        func_800F824C
    /* 4A888 8013C488 45000424 */   addiu     $a0, $zero, 0x45
    /* 4A88C 8013C48C 53D9030C */  jal        func_800F654C
    /* 4A890 8013C490 0E000424 */   addiu     $a0, $zero, 0xE
    /* 4A894 8013C494 93E0030C */  jal        func_800F824C
    /* 4A898 8013C498 46000424 */   addiu     $a0, $zero, 0x46
    /* 4A89C 8013C49C B57D040C */  jal        func_8011F6D4
    /* 4A8A0 8013C4A0 00000000 */   nop
    /* 4A8A4 8013C4A4 1000BF8F */  lw         $ra, 0x10($sp)
    /* 4A8A8 8013C4A8 00000000 */  nop
    /* 4A8AC 8013C4AC 0800E003 */  jr         $ra
    /* 4A8B0 8013C4B0 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8013C44C
