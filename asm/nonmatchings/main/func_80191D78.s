nonmatching func_80191D78, 0x34

glabel func_80191D78
    /* A0178 80191D78 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* A017C 80191D7C 1000B0AF */  sw         $s0, 0x10($sp)
    /* A0180 80191D80 1A80103C */  lui        $s0, %hi(D_8019BDBC)
    /* A0184 80191D84 BCBD1026 */  addiu      $s0, $s0, %lo(D_8019BDBC)
    /* A0188 80191D88 1400BFAF */  sw         $ra, 0x14($sp)
    /* A018C 80191D8C 0000048E */  lw         $a0, 0x0($s0)
    /* A0190 80191D90 0E46060C */  jal        func_80191838
    /* A0194 80191D94 D8FF1026 */   addiu     $s0, $s0, -0x28
    /* A0198 80191D98 240000AE */  sw         $zero, 0x24($s0)
    /* A019C 80191D9C 1400BF8F */  lw         $ra, 0x14($sp)
    /* A01A0 80191DA0 1000B08F */  lw         $s0, 0x10($sp)
    /* A01A4 80191DA4 0800E003 */  jr         $ra
    /* A01A8 80191DA8 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80191D78
