nonmatching func_801240A8, 0x28

glabel func_801240A8
    /* 324A8 801240A8 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 324AC 801240AC 1000BFAF */  sw         $ra, 0x10($sp)
    /* 324B0 801240B0 77DC030C */  jal        func_800F71DC
    /* 324B4 801240B4 00A60434 */   ori       $a0, $zero, 0xA600
    /* 324B8 801240B8 6090040C */  jal        func_80124180
    /* 324BC 801240BC 00000000 */   nop
    /* 324C0 801240C0 1000BF8F */  lw         $ra, 0x10($sp)
    /* 324C4 801240C4 00000000 */  nop
    /* 324C8 801240C8 0800E003 */  jr         $ra
    /* 324CC 801240CC 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_801240A8
