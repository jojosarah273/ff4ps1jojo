nonmatching func_8018E408, 0x40

glabel func_8018E408
    /* 9C808 8018E408 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 9C80C 8018E40C 21288000 */  addu       $a1, $a0, $zero
    /* 9C810 8018E410 0700023C */  lui        $v0, (0x7FFF8 >> 16)
    /* 9C814 8018E414 F8FF4234 */  ori        $v0, $v0, (0x7FFF8 & 0xFFFF)
    /* 9C818 8018E418 2B104500 */  sltu       $v0, $v0, $a1
    /* 9C81C 8018E41C 05004014 */  bnez       $v0, .L8018E434
    /* 9C820 8018E420 1000BFAF */   sw        $ra, 0x10($sp)
    /* 9C824 8018E424 C22A060C */  jal        func_8018AB08
    /* 9C828 8018E428 D2000424 */   addiu     $a0, $zero, 0xD2
    /* 9C82C 8018E42C 0E390608 */  j          .L8018E438
    /* 9C830 8018E430 00000000 */   nop
  .L8018E434:
    /* 9C834 8018E434 21100000 */  addu       $v0, $zero, $zero
  .L8018E438:
    /* 9C838 8018E438 1000BF8F */  lw         $ra, 0x10($sp)
    /* 9C83C 8018E43C 1800BD27 */  addiu      $sp, $sp, 0x18
    /* 9C840 8018E440 0800E003 */  jr         $ra
    /* 9C844 8018E444 00000000 */   nop
endlabel func_8018E408
