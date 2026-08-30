nonmatching func_800FC5A8, 0x30

glabel func_800FC5A8
    /* A9A8 800FC5A8 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* A9AC 800FC5AC 1000BFAF */  sw         $ra, 0x10($sp)
    /* A9B0 800FC5B0 53D9030C */  jal        func_800F654C
    /* A9B4 800FC5B4 21200000 */   addu      $a0, $zero, $zero
    /* A9B8 800FC5B8 45F6030C */  jal        func_800FD914
    /* A9BC 800FC5BC 00000000 */   nop
    /* A9C0 800FC5C0 FEEC030C */  jal        func_800FB3F8
    /* A9C4 800FC5C4 00000000 */   nop
    /* A9C8 800FC5C8 1000BF8F */  lw         $ra, 0x10($sp)
    /* A9CC 800FC5CC 00000000 */  nop
    /* A9D0 800FC5D0 0800E003 */  jr         $ra
    /* A9D4 800FC5D4 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800FC5A8
