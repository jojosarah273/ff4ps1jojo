nonmatching func_80110FA4, 0x40

glabel func_80110FA4
    /* 1F3A4 80110FA4 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 1F3A8 80110FA8 1000BFAF */  sw         $ra, 0x10($sp)
    /* 1F3AC 80110FAC F6F9030C */  jal        func_800FE7D8
    /* 1F3B0 80110FB0 00000000 */   nop
    /* 1F3B4 80110FB4 1CFA030C */  jal        func_800FE870
    /* 1F3B8 80110FB8 00000000 */   nop
    /* 1F3BC 80110FBC 5B50040C */  jal        func_8011416C
    /* 1F3C0 80110FC0 00000000 */   nop
    /* 1F3C4 80110FC4 0B47040C */  jal        func_80111C2C
    /* 1F3C8 80110FC8 00000000 */   nop
    /* 1F3CC 80110FCC 7247040C */  jal        func_80111DC8
    /* 1F3D0 80110FD0 00000000 */   nop
    /* 1F3D4 80110FD4 1000BF8F */  lw         $ra, 0x10($sp)
    /* 1F3D8 80110FD8 00000000 */  nop
    /* 1F3DC 80110FDC 0800E003 */  jr         $ra
    /* 1F3E0 80110FE0 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80110FA4
