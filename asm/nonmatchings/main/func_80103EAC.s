nonmatching func_80103EAC, 0x54

glabel func_80103EAC
    /* 122AC 80103EAC E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 122B0 80103EB0 1000BFAF */  sw         $ra, 0x10($sp)
    /* 122B4 80103EB4 53D9030C */  jal        func_800F654C
    /* 122B8 80103EB8 28000424 */   addiu     $a0, $zero, 0x28
    /* 122BC 80103EBC 20D5030C */  jal        func_800F5480
    /* 122C0 80103EC0 00000000 */   nop
    /* 122C4 80103EC4 0FCF030C */  jal        func_800F3C3C
    /* 122C8 80103EC8 79000424 */   addiu     $a0, $zero, 0x79
    /* 122CC 80103ECC D2DF030C */  jal        func_800F7F48
    /* 122D0 80103ED0 21204000 */   addu      $a0, $v0, $zero
    /* 122D4 80103ED4 A4E5030C */  jal        func_800F9690
    /* 122D8 80103ED8 00000000 */   nop
    /* 122DC 80103EDC 1400043C */  lui        $a0, (0x14FAF6 >> 16)
    /* 122E0 80103EE0 1ADB030C */  jal        func_800F6C68
    /* 122E4 80103EE4 F6FA8434 */   ori       $a0, $a0, (0x14FAF6 & 0xFFFF)
    /* 122E8 80103EE8 93E0030C */  jal        func_800F824C
    /* 122EC 80103EEC B9000424 */   addiu     $a0, $zero, 0xB9
    /* 122F0 80103EF0 1000BF8F */  lw         $ra, 0x10($sp)
    /* 122F4 80103EF4 00000000 */  nop
    /* 122F8 80103EF8 0800E003 */  jr         $ra
    /* 122FC 80103EFC 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80103EAC
