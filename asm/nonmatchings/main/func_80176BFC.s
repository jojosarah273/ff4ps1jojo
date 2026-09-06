nonmatching func_80176BFC, 0x70

glabel func_80176BFC
    /* 84FFC 80176BFC E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 85000 80176C00 1000BFAF */  sw         $ra, 0x10($sp)
    /* 85004 80176C04 8CD9030C */  jal        func_800F6630
    /* 85008 80176C08 E2000424 */   addiu     $a0, $zero, 0xE2
    /* 8500C 80176C0C 5DD5030C */  jal        func_800F5574
    /* 85010 80176C10 11000424 */   addiu     $a0, $zero, 0x11
    /* 85014 80176C14 F5D4030C */  jal        func_800F53D4
    /* 85018 80176C18 00000000 */   nop
    /* 8501C 80176C1C 0F004014 */  bnez       $v0, .L80176C5C
    /* 85020 80176C20 00000000 */   nop
    /* 85024 80176C24 59D9030C */  jal        func_800F6564
    /* 85028 80176C28 B21B0424 */   addiu     $a0, $zero, 0x1BB2
    /* 8502C 80176C2C 33D7030C */  jal        func_800F5CCC
    /* 85030 80176C30 00000000 */   nop
    /* 85034 80176C34 1BDB050C */  jal        func_80176C6C
    /* 85038 80176C38 00000000 */   nop
    /* 8503C 80176C3C 59D9030C */  jal        func_800F6564
    /* 85040 80176C40 B21B0424 */   addiu     $a0, $zero, 0x1BB2
    /* 85044 80176C44 04D5030C */  jal        func_800F5410
    /* 85048 80176C48 00000000 */   nop
    /* 8504C 80176C4C 02D0030C */  jal        func_800F4008
    /* 85050 80176C50 08000424 */   addiu     $a0, $zero, 0x8
    /* 85054 80176C54 1BDB050C */  jal        func_80176C6C
    /* 85058 80176C58 00000000 */   nop
  .L80176C5C:
    /* 8505C 80176C5C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 85060 80176C60 00000000 */  nop
    /* 85064 80176C64 0800E003 */  jr         $ra
    /* 85068 80176C68 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80176BFC
