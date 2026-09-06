nonmatching func_8016E490, 0x70

glabel func_8016E490
    /* 7C890 8016E490 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 7C894 8016E494 1000BFAF */  sw         $ra, 0x10($sp)
    /* 7C898 8016E498 DDE3030C */  jal        func_800F8F74
    /* 7C89C 8016E49C 217D0424 */   addiu     $a0, $zero, 0x7D21
    /* 7C8A0 8016E4A0 DDE3030C */  jal        func_800F8F74
    /* 7C8A4 8016E4A4 237D0424 */   addiu     $a0, $zero, 0x7D23
    /* 7C8A8 8016E4A8 53D9030C */  jal        func_800F654C
    /* 7C8AC 8016E4AC 1A000424 */   addiu     $a0, $zero, 0x1A
    /* 7C8B0 8016E4B0 62E0030C */  jal        func_800F8188
    /* 7C8B4 8016E4B4 247D0424 */   addiu     $a0, $zero, 0x7D24
    /* 7C8B8 8016E4B8 59D9030C */  jal        func_800F6564
    /* 7C8BC 8016E4BC 267D0424 */   addiu     $a0, $zero, 0x7D26
    /* 7C8C0 8016E4C0 90D8030C */  jal        func_800F6240
    /* 7C8C4 8016E4C4 267D0424 */   addiu     $a0, $zero, 0x7D26
    /* 7C8C8 8016E4C8 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 7C8CC 8016E4CC 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 7C8D0 8016E4D0 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 7C8D4 8016E4D4 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 7C8D8 8016E4D8 00004394 */  lhu        $v1, 0x0($v0)
    /* 7C8DC 8016E4DC 00EE0434 */  ori        $a0, $zero, 0xEE00
    /* 7C8E0 8016E4E0 DADA030C */  jal        func_800F6B68
    /* 7C8E4 8016E4E4 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 7C8E8 8016E4E8 62E0030C */  jal        func_800F8188
    /* 7C8EC 8016E4EC 227D0424 */   addiu     $a0, $zero, 0x7D22
    /* 7C8F0 8016E4F0 1000BF8F */  lw         $ra, 0x10($sp)
    /* 7C8F4 8016E4F4 00000000 */  nop
    /* 7C8F8 8016E4F8 0800E003 */  jr         $ra
    /* 7C8FC 8016E4FC 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8016E490
