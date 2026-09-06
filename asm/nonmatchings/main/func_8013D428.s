nonmatching func_8013D428, 0xA0

glabel func_8013D428
    /* 4B828 8013D428 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 4B82C 8013D42C 1000BFAF */  sw         $ra, 0x10($sp)
    /* 4B830 8013D430 40DD030C */  jal        func_800F7500
    /* 4B834 8013D434 1C000424 */   addiu     $a0, $zero, 0x1C
    /* 4B838 8013D438 91E5030C */  jal        func_800F9644
    /* 4B83C 8013D43C 20000424 */   addiu     $a0, $zero, 0x20
  .L8013D440:
    /* 4B840 8013D440 7ADB030C */  jal        func_800F6DE8
    /* 4B844 8013D444 40030424 */   addiu     $a0, $zero, 0x340
    /* 4B848 8013D448 75E2030C */  jal        func_800F89D4
    /* 4B84C 8013D44C 44030424 */   addiu     $a0, $zero, 0x344
    /* 4B850 8013D450 7ADB030C */  jal        func_800F6DE8
    /* 4B854 8013D454 42030424 */   addiu     $a0, $zero, 0x342
    /* 4B858 8013D458 04D5030C */  jal        func_800F5410
    /* 4B85C 8013D45C 00000000 */   nop
    /* 4B860 8013D460 19D0030C */  jal        func_800F4064
    /* 4B864 8013D464 02000424 */   addiu     $a0, $zero, 0x2
    /* 4B868 8013D468 75E2030C */  jal        func_800F89D4
    /* 4B86C 8013D46C 46030424 */   addiu     $a0, $zero, 0x346
    /* 4B870 8013D470 A8D7030C */  jal        func_800F5EA0
    /* 4B874 8013D474 00000000 */   nop
    /* 4B878 8013D478 A8D7030C */  jal        func_800F5EA0
    /* 4B87C 8013D47C 00000000 */   nop
    /* 4B880 8013D480 A8D7030C */  jal        func_800F5EA0
    /* 4B884 8013D484 00000000 */   nop
    /* 4B888 8013D488 A8D7030C */  jal        func_800F5EA0
    /* 4B88C 8013D48C 00000000 */   nop
    /* 4B890 8013D490 A4D6030C */  jal        func_800F5A90
    /* 4B894 8013D494 FCFF0434 */   ori       $a0, $zero, 0xFFFC
    /* 4B898 8013D498 F5D4030C */  jal        func_800F53D4
    /* 4B89C 8013D49C 00000000 */   nop
    /* 4B8A0 8013D4A0 E7FF4010 */  beqz       $v0, .L8013D440
    /* 4B8A4 8013D4A4 00000000 */   nop
    /* 4B8A8 8013D4A8 C7E5030C */  jal        func_800F971C
    /* 4B8AC 8013D4AC 00000000 */   nop
    /* 4B8B0 8013D4B0 98E5030C */  jal        func_800F9660
    /* 4B8B4 8013D4B4 20000424 */   addiu     $a0, $zero, 0x20
    /* 4B8B8 8013D4B8 1000BF8F */  lw         $ra, 0x10($sp)
    /* 4B8BC 8013D4BC 00000000 */  nop
    /* 4B8C0 8013D4C0 0800E003 */  jr         $ra
    /* 4B8C4 8013D4C4 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8013D428
