nonmatching func_801473A4, 0x70

glabel func_801473A4
    /* 557A4 801473A4 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 557A8 801473A8 1000BFAF */  sw         $ra, 0x10($sp)
    /* 557AC 801473AC 20D5030C */  jal        func_800F5480
    /* 557B0 801473B0 00000000 */   nop
    /* 557B4 801473B4 16E0030C */  jal        func_800F8058
    /* 557B8 801473B8 0F000424 */   addiu     $a0, $zero, 0xF
    /* 557BC 801473BC 50D4030C */  jal        func_800F5140
    /* 557C0 801473C0 00000000 */   nop
    /* 557C4 801473C4 1600043C */  lui        $a0, (0x16FC86 >> 16)
    /* 557C8 801473C8 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 557CC 801473CC 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 557D0 801473D0 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 557D4 801473D4 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 557D8 801473D8 00004394 */  lhu        $v1, 0x0($v0)
    /* 557DC 801473DC 86FC8434 */  ori        $a0, $a0, (0x16FC86 & 0xFFFF)
    /* 557E0 801473E0 1ADB030C */  jal        func_800F6C68
    /* 557E4 801473E4 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 557E8 801473E8 93E0030C */  jal        func_800F824C
    /* 557EC 801473EC 2A000424 */   addiu     $a0, $zero, 0x2A
    /* 557F0 801473F0 1600043C */  lui        $a0, (0x16FC87 >> 16)
    /* 557F4 801473F4 1ADB030C */  jal        func_800F6C68
    /* 557F8 801473F8 87FC8434 */   ori       $a0, $a0, (0x16FC87 & 0xFFFF)
    /* 557FC 801473FC 93E0030C */  jal        func_800F824C
    /* 55800 80147400 2B000424 */   addiu     $a0, $zero, 0x2B
    /* 55804 80147404 1000BF8F */  lw         $ra, 0x10($sp)
    /* 55808 80147408 00000000 */  nop
    /* 5580C 8014740C 0800E003 */  jr         $ra
    /* 55810 80147410 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_801473A4
