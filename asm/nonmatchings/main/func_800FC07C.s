nonmatching func_800FC07C, 0x60

glabel func_800FC07C
    /* A47C 800FC07C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* A480 800FC080 1000BFAF */  sw         $ra, 0x10($sp)
    /* A484 800FC084 93E0030C */  jal        func_800F824C
    /* A488 800FC088 76000424 */   addiu     $a0, $zero, 0x76
    /* A48C 800FC08C 77DC030C */  jal        func_800F71DC
    /* A490 800FC090 00180424 */   addiu     $a0, $zero, 0x1800
    /* A494 800FC094 5BE3030C */  jal        func_800F8D6C
    /* A498 800FC098 47000424 */   addiu     $a0, $zero, 0x47
    /* A49C 800FC09C 77DC030C */  jal        func_800F71DC
    /* A4A0 800FC0A0 00100424 */   addiu     $a0, $zero, 0x1000
    /* A4A4 800FC0A4 5BE3030C */  jal        func_800F8D6C
    /* A4A8 800FC0A8 45000424 */   addiu     $a0, $zero, 0x45
    /* A4AC 800FC0AC D2D9050C */  jal        func_80176748
    /* A4B0 800FC0B0 00000000 */   nop
    /* A4B4 800FC0B4 77DC030C */  jal        func_800F71DC
    /* A4B8 800FC0B8 00300424 */   addiu     $a0, $zero, 0x3000
    /* A4BC 800FC0BC 5BE3030C */  jal        func_800F8D6C
    /* A4C0 800FC0C0 47000424 */   addiu     $a0, $zero, 0x47
    /* A4C4 800FC0C4 D2D9050C */  jal        func_80176748
    /* A4C8 800FC0C8 00000000 */   nop
    /* A4CC 800FC0CC 1000BF8F */  lw         $ra, 0x10($sp)
    /* A4D0 800FC0D0 00000000 */  nop
    /* A4D4 800FC0D4 0800E003 */  jr         $ra
    /* A4D8 800FC0D8 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800FC07C
