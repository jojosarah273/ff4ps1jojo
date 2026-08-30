nonmatching func_8012EBF8, 0x50

glabel func_8012EBF8
    /* 3CFF8 8012EBF8 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 3CFFC 8012EBFC 1000BFAF */  sw         $ra, 0x10($sp)
    /* 3D000 8012EC00 2B84040C */  jal        func_801210AC
    /* 3D004 8012EC04 00000000 */   nop
    /* 3D008 8012EC08 1A80023C */  lui        $v0, %hi(D_801991C0)
    /* 3D00C 8012EC0C C0914494 */  lhu        $a0, %lo(D_801991C0)($v0)
    /* 3D010 8012EC10 40DD030C */  jal        func_800F7500
    /* 3D014 8012EC14 00000000 */   nop
    /* 3D018 8012EC18 DD7E040C */  jal        func_8011FB74
    /* 3D01C 8012EC1C 00000000 */   nop
    /* 3D020 8012EC20 FC98040C */  jal        func_801263F0
    /* 3D024 8012EC24 00000000 */   nop
    /* 3D028 8012EC28 D07F040C */  jal        func_8011FF40
    /* 3D02C 8012EC2C 00000000 */   nop
    /* 3D030 8012EC30 F298040C */  jal        func_801263C8
    /* 3D034 8012EC34 00000000 */   nop
    /* 3D038 8012EC38 1000BF8F */  lw         $ra, 0x10($sp)
    /* 3D03C 8012EC3C 00000000 */  nop
    /* 3D040 8012EC40 0800E003 */  jr         $ra
    /* 3D044 8012EC44 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8012EBF8
