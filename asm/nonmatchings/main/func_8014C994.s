nonmatching func_8014C994, 0x38

glabel func_8014C994
    /* 5AD94 8014C994 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 5AD98 8014C998 1000BFAF */  sw         $ra, 0x10($sp)
    /* 5AD9C 8014C99C 5B32050C */  jal        func_8014C96C
    /* 5ADA0 8014C9A0 00000000 */   nop
    /* 5ADA4 8014C9A4 90D8030C */  jal        func_800F6240
    /* 5ADA8 8014C9A8 A0F20434 */   ori       $a0, $zero, 0xF2A0
    /* 5ADAC 8014C9AC 53D9030C */  jal        func_800F654C
    /* 5ADB0 8014C9B0 01000424 */   addiu     $a0, $zero, 0x1
    /* 5ADB4 8014C9B4 4F2E050C */  jal        func_8014B93C
    /* 5ADB8 8014C9B8 00000000 */   nop
    /* 5ADBC 8014C9BC 1000BF8F */  lw         $ra, 0x10($sp)
    /* 5ADC0 8014C9C0 00000000 */  nop
    /* 5ADC4 8014C9C4 0800E003 */  jr         $ra
    /* 5ADC8 8014C9C8 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8014C994
