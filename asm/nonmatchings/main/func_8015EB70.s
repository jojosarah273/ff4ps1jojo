nonmatching func_8015EB70, 0x70

glabel func_8015EB70
    /* 6CF70 8015EB70 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 6CF74 8015EB74 1000BFAF */  sw         $ra, 0x10($sp)
    /* 6CF78 8015EB78 AB82050C */  jal        func_80160AAC
    /* 6CF7C 8015EB7C 00000000 */   nop
    /* 6CF80 8015EB80 59D9030C */  jal        func_800F6564
    /* 6CF84 8015EB84 FE380424 */   addiu     $a0, $zero, 0x38FE
    /* 6CF88 8015EB88 0DD9030C */  jal        func_800F6434
    /* 6CF8C 8015EB8C 80800434 */   ori       $a0, $zero, 0x8080
    /* 6CF90 8015EB90 09004014 */  bnez       $v0, .L8015EBB8
    /* 6CF94 8015EB94 00000000 */   nop
    /* 6CF98 8015EB98 92D0030C */  jal        func_800F4248
    /* 6CF9C 8015EB9C 7F000424 */   addiu     $a0, $zero, 0x7F
    /* 6CFA0 8015EBA0 62E0030C */  jal        func_800F8188
    /* 6CFA4 8015EBA4 FE380424 */   addiu     $a0, $zero, 0x38FE
    /* 6CFA8 8015EBA8 2394010C */  jal        func_8006508C
    /* 6CFAC 8015EBAC 00000000 */   nop
    /* 6CFB0 8015EBB0 F47A0508 */  j          .L8015EBD0
    /* 6CFB4 8015EBB4 00000000 */   nop
  .L8015EBB8:
    /* 6CFB8 8015EBB8 E382050C */  jal        func_80160B8C
    /* 6CFBC 8015EBBC 00000000 */   nop
    /* 6CFC0 8015EBC0 1886010C */  jal        func_80061860
    /* 6CFC4 8015EBC4 00000000 */   nop
    /* 6CFC8 8015EBC8 3395010C */  jal        func_800654CC
    /* 6CFCC 8015EBCC 00000000 */   nop
  .L8015EBD0:
    /* 6CFD0 8015EBD0 1000BF8F */  lw         $ra, 0x10($sp)
    /* 6CFD4 8015EBD4 00000000 */  nop
    /* 6CFD8 8015EBD8 0800E003 */  jr         $ra
    /* 6CFDC 8015EBDC 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8015EB70
