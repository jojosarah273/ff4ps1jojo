nonmatching func_8014A810, 0x50

glabel func_8014A810
    /* 58C10 8014A810 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 58C14 8014A814 1000BFAF */  sw         $ra, 0x10($sp)
    /* 58C18 8014A818 A035050C */  jal        func_8014D680
    /* 58C1C 8014A81C 00000000 */   nop
    /* 58C20 8014A820 5F31050C */  jal        func_8014C57C
    /* 58C24 8014A824 00000000 */   nop
    /* 58C28 8014A828 7902050C */  jal        func_801409E4
    /* 58C2C 8014A82C 00000000 */   nop
    /* 58C30 8014A830 77DC030C */  jal        func_800F71DC
    /* 58C34 8014A834 20000424 */   addiu     $a0, $zero, 0x20
    /* 58C38 8014A838 AA65020C */  jal        func_800996A8
    /* 58C3C 8014A83C 00000000 */   nop
    /* 58C40 8014A840 DDE3030C */  jal        func_800F8F74
    /* 58C44 8014A844 87EF0434 */   ori       $a0, $zero, 0xEF87
    /* 58C48 8014A848 C531050C */  jal        func_8014C714
    /* 58C4C 8014A84C 00000000 */   nop
    /* 58C50 8014A850 1000BF8F */  lw         $ra, 0x10($sp)
    /* 58C54 8014A854 00000000 */  nop
    /* 58C58 8014A858 0800E003 */  jr         $ra
    /* 58C5C 8014A85C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8014A810
