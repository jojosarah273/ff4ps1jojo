nonmatching func_801082C8, 0x68

glabel func_801082C8
    /* 166C8 801082C8 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 166CC 801082CC 1000BFAF */  sw         $ra, 0x10($sp)
    /* 166D0 801082D0 0021040C */  jal        func_80108400
    /* 166D4 801082D4 00000000 */   nop
    /* 166D8 801082D8 1000043C */  lui        $a0, (0x108000 >> 16)
    /* 166DC 801082DC 1ADB030C */  jal        func_800F6C68
    /* 166E0 801082E0 00808434 */   ori       $a0, $a0, (0x108000 & 0xFFFF)
    /* 166E4 801082E4 93E0030C */  jal        func_800F824C
    /* 166E8 801082E8 3D000424 */   addiu     $a0, $zero, 0x3D
    /* 166EC 801082EC 1000043C */  lui        $a0, (0x108001 >> 16)
    /* 166F0 801082F0 1ADB030C */  jal        func_800F6C68
    /* 166F4 801082F4 01808434 */   ori       $a0, $a0, (0x108001 & 0xFFFF)
    /* 166F8 801082F8 93E0030C */  jal        func_800F824C
    /* 166FC 801082FC 3E000424 */   addiu     $a0, $zero, 0x3E
    /* 16700 80108300 9CDC030C */  jal        func_800F7270
    /* 16704 80108304 3D000424 */   addiu     $a0, $zero, 0x3D
    /* 16708 80108308 40E3030C */  jal        func_800F8D00
    /* 1670C 8010830C 72070424 */   addiu     $a0, $zero, 0x772
    /* 16710 80108310 53D9030C */  jal        func_800F654C
    /* 16714 80108314 01000424 */   addiu     $a0, $zero, 0x1
    /* 16718 80108318 93E0030C */  jal        func_800F824C
    /* 1671C 8010831C DD000424 */   addiu     $a0, $zero, 0xDD
    /* 16720 80108320 1000BF8F */  lw         $ra, 0x10($sp)
    /* 16724 80108324 00000000 */  nop
    /* 16728 80108328 0800E003 */  jr         $ra
    /* 1672C 8010832C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_801082C8
