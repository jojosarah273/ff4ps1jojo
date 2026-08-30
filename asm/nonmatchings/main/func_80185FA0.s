nonmatching func_80185FA0, 0x6C

glabel func_80185FA0
    /* 943A0 80185FA0 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 943A4 80185FA4 1F80053C */  lui        $a1, %hi(D_801F6260)
    /* 943A8 80185FA8 40000424 */  addiu      $a0, $zero, 0x40
    /* 943AC 80185FAC 1000BFAF */  sw         $ra, 0x10($sp)
    /* 943B0 80185FB0 5022060C */  jal        func_80188940
    /* 943B4 80185FB4 6062A524 */   addiu     $a1, $a1, %lo(D_801F6260)
    /* 943B8 80185FB8 E425060C */  jal        func_80189790
    /* 943BC 80185FBC 00000000 */   nop
    /* 943C0 80185FC0 CB17060C */  jal        func_80185F2C
    /* 943C4 80185FC4 00000000 */   nop
    /* 943C8 80185FC8 FF2F0224 */  addiu      $v0, $zero, 0x2FFF
    /* 943CC 80185FCC 3A0280A7 */  sh         $zero, %gp_rel(D_8019EF36)($gp)
    /* 943D0 80185FD0 340280A7 */  sh         $zero, %gp_rel(D_8019EF30)($gp)
    /* 943D4 80185FD4 BC0182A7 */  sh         $v0, %gp_rel(D_8019EEB8)($gp)
    /* 943D8 80185FD8 821D060C */  jal        func_80187608
    /* 943DC 80185FDC 00000000 */   nop
    /* 943E0 80185FE0 A81E060C */  jal        func_80187AA0
    /* 943E4 80185FE4 00000000 */   nop
    /* 943E8 80185FE8 0E0280A7 */  sh         $zero, %gp_rel(D_8019EF0A)($gp)
    /* 943EC 80185FEC 240280A7 */  sh         $zero, %gp_rel(D_8019EF20)($gp)
    /* 943F0 80185FF0 D00180A7 */  sh         $zero, %gp_rel(D_8019EECC)($gp)
    /* 943F4 80185FF4 471F060C */  jal        func_80187D1C
    /* 943F8 80185FF8 00000000 */   nop
    /* 943FC 80185FFC 1000BF8F */  lw         $ra, 0x10($sp)
    /* 94400 80186000 00000000 */  nop
    /* 94404 80186004 0800E003 */  jr         $ra
    /* 94408 80186008 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80185FA0
