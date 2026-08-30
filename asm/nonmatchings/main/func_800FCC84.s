nonmatching func_800FCC84, 0x38

glabel func_800FCC84
    /* B084 800FCC84 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* B088 800FCC88 1000BFAF */  sw         $ra, 0x10($sp)
    /* B08C 800FCC8C DDE3030C */  jal        func_800F8F74
    /* B090 800FCC90 0B420424 */   addiu     $a0, $zero, 0x420B
    /* B094 800FCC94 53D9030C */  jal        func_800F654C
    /* B098 800FCC98 18000424 */   addiu     $a0, $zero, 0x18
    /* B09C 800FCC9C 62E0030C */  jal        func_800F8188
    /* B0A0 800FCCA0 01430424 */   addiu     $a0, $zero, 0x4301
    /* B0A4 800FCCA4 DDE3030C */  jal        func_800F8F74
    /* B0A8 800FCCA8 04430424 */   addiu     $a0, $zero, 0x4304
    /* B0AC 800FCCAC 1000BF8F */  lw         $ra, 0x10($sp)
    /* B0B0 800FCCB0 00000000 */  nop
    /* B0B4 800FCCB4 0800E003 */  jr         $ra
    /* B0B8 800FCCB8 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800FCC84
