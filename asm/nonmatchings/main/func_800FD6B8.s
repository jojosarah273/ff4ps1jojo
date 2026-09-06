nonmatching func_800FD6B8, 0x30

glabel func_800FD6B8
    /* BAB8 800FD6B8 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* BABC 800FD6BC 1000BFAF */  sw         $ra, 0x10($sp)
    /* BAC0 800FD6C0 53D9030C */  jal        func_800F654C
    /* BAC4 800FD6C4 86000424 */   addiu     $a0, $zero, 0x86
    /* BAC8 800FD6C8 62E0030C */  jal        func_800F8188
    /* BACC 800FD6CC 001E0424 */   addiu     $a0, $zero, 0x1E00
    /* BAD0 800FD6D0 4AA4050C */  jal        func_80169128
    /* BAD4 800FD6D4 00000000 */   nop
    /* BAD8 800FD6D8 1000BF8F */  lw         $ra, 0x10($sp)
    /* BADC 800FD6DC 00000000 */  nop
    /* BAE0 800FD6E0 0800E003 */  jr         $ra
    /* BAE4 800FD6E4 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800FD6B8
