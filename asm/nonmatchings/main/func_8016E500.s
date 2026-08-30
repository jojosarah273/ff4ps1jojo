nonmatching func_8016E500, 0x60

glabel func_8016E500
    /* 7C900 8016E500 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 7C904 8016E504 1000BFAF */  sw         $ra, 0x10($sp)
    /* 7C908 8016E508 93E0030C */  jal        func_800F824C
    /* 7C90C 8016E50C A9000424 */   addiu     $a0, $zero, 0xA9
    /* 7C910 8016E510 DDE3030C */  jal        func_800F8F74
    /* 7C914 8016E514 001E0424 */   addiu     $a0, $zero, 0x1E00
    /* 7C918 8016E518 DDE3030C */  jal        func_800F8F74
    /* 7C91C 8016E51C 011E0424 */   addiu     $a0, $zero, 0x1E01
    /* 7C920 8016E520 DDE3030C */  jal        func_800F8F74
    /* 7C924 8016E524 051E0424 */   addiu     $a0, $zero, 0x1E05
    /* 7C928 8016E528 8CD9030C */  jal        func_800F6630
    /* 7C92C 8016E52C A9000424 */   addiu     $a0, $zero, 0xA9
    /* 7C930 8016E530 62E0030C */  jal        func_800F8188
    /* 7C934 8016E534 011E0424 */   addiu     $a0, $zero, 0x1E01
    /* 7C938 8016E538 53D9030C */  jal        func_800F654C
    /* 7C93C 8016E53C 01000424 */   addiu     $a0, $zero, 0x1
    /* 7C940 8016E540 62E0030C */  jal        func_800F8188
    /* 7C944 8016E544 001E0424 */   addiu     $a0, $zero, 0x1E00
    /* 7C948 8016E548 4AA4050C */  jal        func_80169128
    /* 7C94C 8016E54C 00000000 */   nop
    /* 7C950 8016E550 1000BF8F */  lw         $ra, 0x10($sp)
    /* 7C954 8016E554 00000000 */  nop
    /* 7C958 8016E558 0800E003 */  jr         $ra
    /* 7C95C 8016E55C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8016E500
