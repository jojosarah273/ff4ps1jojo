nonmatching func_800FCCBC, 0x20

glabel func_800FCCBC
    /* B0BC 800FCCBC E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* B0C0 800FCCC0 1000BFAF */  sw         $ra, 0x10($sp)
    /* B0C4 800FCCC4 1AE6030C */  jal        func_800F9868
    /* B0C8 800FCCC8 21200000 */   addu      $a0, $zero, $zero
    /* B0CC 800FCCCC 1000BF8F */  lw         $ra, 0x10($sp)
    /* B0D0 800FCCD0 00000000 */  nop
    /* B0D4 800FCCD4 0800E003 */  jr         $ra
    /* B0D8 800FCCD8 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800FCCBC
