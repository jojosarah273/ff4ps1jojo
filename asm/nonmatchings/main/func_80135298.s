nonmatching func_80135298, 0x58

glabel func_80135298
    /* 43698 80135298 1A80023C */  lui        $v0, %hi(D_80199208)
    /* 4369C 8013529C 08924494 */  lhu        $a0, %lo(D_80199208)($v0)
    /* 436A0 801352A0 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 436A4 801352A4 1000BFAF */  sw         $ra, 0x10($sp)
    /* 436A8 801352A8 40DD030C */  jal        func_800F7500
    /* 436AC 801352AC 00000000 */   nop
    /* 436B0 801352B0 E97E040C */  jal        func_8011FBA4
    /* 436B4 801352B4 00000000 */   nop
    /* 436B8 801352B8 C783040C */  jal        func_80120F1C
    /* 436BC 801352BC 00000000 */   nop
    /* 436C0 801352C0 40DD030C */  jal        func_800F7500
    /* 436C4 801352C4 A4010424 */   addiu     $a0, $zero, 0x1A4
    /* 436C8 801352C8 59D9030C */  jal        func_800F6564
    /* 436CC 801352CC A2160424 */   addiu     $a0, $zero, 0x16A2
    /* 436D0 801352D0 84DC030C */  jal        func_800F7210
    /* 436D4 801352D4 A0160424 */   addiu     $a0, $zero, 0x16A0
    /* 436D8 801352D8 4293040C */  jal        func_80124D08
    /* 436DC 801352DC 00000000 */   nop
    /* 436E0 801352E0 1000BF8F */  lw         $ra, 0x10($sp)
    /* 436E4 801352E4 00000000 */  nop
    /* 436E8 801352E8 0800E003 */  jr         $ra
    /* 436EC 801352EC 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80135298
