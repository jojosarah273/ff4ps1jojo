nonmatching func_801378B0, 0x30

glabel func_801378B0
    /* 45CB0 801378B0 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 45CB4 801378B4 1000BFAF */  sw         $ra, 0x10($sp)
    /* 45CB8 801378B8 DDE3030C */  jal        func_800F8F74
    /* 45CBC 801378BC 7B1B0424 */   addiu     $a0, $zero, 0x1B7B
    /* 45CC0 801378C0 DDE3030C */  jal        func_800F8F74
    /* 45CC4 801378C4 941B0424 */   addiu     $a0, $zero, 0x1B94
    /* 45CC8 801378C8 DDE3030C */  jal        func_800F8F74
    /* 45CCC 801378CC 961B0424 */   addiu     $a0, $zero, 0x1B96
    /* 45CD0 801378D0 1000BF8F */  lw         $ra, 0x10($sp)
    /* 45CD4 801378D4 00000000 */  nop
    /* 45CD8 801378D8 0800E003 */  jr         $ra
    /* 45CDC 801378DC 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_801378B0
