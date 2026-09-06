nonmatching func_8013B804, 0x3C

glabel func_8013B804
    /* 49C04 8013B804 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 49C08 8013B808 1000BFAF */  sw         $ra, 0x10($sp)
    /* 49C0C 8013B80C 3489040C */  jal        func_801224D0
    /* 49C10 8013B810 00000000 */   nop
    /* 49C14 8013B814 1400043C */  lui        $a0, (0x14FF9D >> 16)
    /* 49C18 8013B818 1ADB030C */  jal        func_800F6C68
    /* 49C1C 8013B81C 9DFF8434 */   ori       $a0, $a0, (0x14FF9D & 0xFFFF)
    /* 49C20 8013B820 3489040C */  jal        func_801224D0
    /* 49C24 8013B824 00000000 */   nop
    /* 49C28 8013B828 DADA030C */  jal        func_800F6B68
    /* 49C2C 8013B82C B9160424 */   addiu     $a0, $zero, 0x16B9
    /* 49C30 8013B830 1000BF8F */  lw         $ra, 0x10($sp)
    /* 49C34 8013B834 00000000 */  nop
    /* 49C38 8013B838 0800E003 */  jr         $ra
    /* 49C3C 8013B83C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8013B804
