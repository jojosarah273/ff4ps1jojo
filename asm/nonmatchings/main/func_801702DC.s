nonmatching func_801702DC, 0x6C

glabel func_801702DC
    /* 7E6DC 801702DC E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 7E6E0 801702E0 1000BFAF */  sw         $ra, 0x10($sp)
    /* 7E6E4 801702E4 CCE4030C */  jal        func_800F9330
    /* 7E6E8 801702E8 00000000 */   nop
    /* 7E6EC 801702EC 93E0030C */  jal        func_800F824C
    /* 7E6F0 801702F0 43000424 */   addiu     $a0, $zero, 0x43
    /* 7E6F4 801702F4 9CDC030C */  jal        func_800F7270
    /* 7E6F8 801702F8 43000424 */   addiu     $a0, $zero, 0x43
    /* 7E6FC 801702FC 1400043C */  lui        $a0, (0x14FE79 >> 16)
    /* 7E700 80170300 1ADB030C */  jal        func_800F6C68
    /* 7E704 80170304 79FE8434 */   ori       $a0, $a0, (0x14FE79 & 0xFFFF)
    /* 7E708 80170308 93E0030C */  jal        func_800F824C
    /* 7E70C 8017030C 43000424 */   addiu     $a0, $zero, 0x43
    /* 7E710 80170310 9CDC030C */  jal        func_800F7270
    /* 7E714 80170314 43000424 */   addiu     $a0, $zero, 0x43
    /* 7E718 80170318 91E5030C */  jal        func_800F9644
    /* 7E71C 8017031C 20000424 */   addiu     $a0, $zero, 0x20
    /* 7E720 80170320 04E5030C */  jal        func_800F9410
    /* 7E724 80170324 00000000 */   nop
    /* 7E728 80170328 F7E1030C */  jal        func_800F87DC
    /* 7E72C 8017032C 051A0424 */   addiu     $a0, $zero, 0x1A05
    /* 7E730 80170330 98E5030C */  jal        func_800F9660
    /* 7E734 80170334 20000424 */   addiu     $a0, $zero, 0x20
    /* 7E738 80170338 1000BF8F */  lw         $ra, 0x10($sp)
    /* 7E73C 8017033C 00000000 */  nop
    /* 7E740 80170340 0800E003 */  jr         $ra
    /* 7E744 80170344 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_801702DC
