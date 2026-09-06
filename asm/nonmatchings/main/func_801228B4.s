nonmatching func_801228B4, 0x50

glabel func_801228B4
    /* 30CB4 801228B4 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 30CB8 801228B8 1000BFAF */  sw         $ra, 0x10($sp)
    /* 30CBC 801228BC 8B83040C */  jal        func_80120E2C
    /* 30CC0 801228C0 00000000 */   nop
    /* 30CC4 801228C4 1A80023C */  lui        $v0, %hi(D_80199198)
    /* 30CC8 801228C8 98914494 */  lhu        $a0, %lo(D_80199198)($v0)
    /* 30CCC 801228CC 40DD030C */  jal        func_800F7500
    /* 30CD0 801228D0 00000000 */   nop
    /* 30CD4 801228D4 CC7B040C */  jal        func_8011EF30
    /* 30CD8 801228D8 00000000 */   nop
    /* 30CDC 801228DC 8CD9030C */  jal        func_800F6630
    /* 30CE0 801228E0 E8000424 */   addiu     $a0, $zero, 0xE8
    /* 30CE4 801228E4 77DC030C */  jal        func_800F71DC
    /* 30CE8 801228E8 B5880434 */   ori       $a0, $zero, 0x88B5
    /* 30CEC 801228EC 1C80040C */  jal        func_80120070
    /* 30CF0 801228F0 00000000 */   nop
    /* 30CF4 801228F4 1000BF8F */  lw         $ra, 0x10($sp)
    /* 30CF8 801228F8 00000000 */  nop
    /* 30CFC 801228FC 0800E003 */  jr         $ra
    /* 30D00 80122900 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_801228B4
