nonmatching func_8014ABB8, 0x84

glabel func_8014ABB8
    /* 58FB8 8014ABB8 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 58FBC 8014ABBC 1000BFAF */  sw         $ra, 0x10($sp)
    /* 58FC0 8014ABC0 84DC030C */  jal        func_800F7210
    /* 58FC4 8014ABC4 C4340424 */   addiu     $a0, $zero, 0x34C4
    /* 58FC8 8014ABC8 CCE4030C */  jal        func_800F9330
    /* 58FCC 8014ABCC 00000000 */   nop
    /* 58FD0 8014ABD0 59D9030C */  jal        func_800F6564
    /* 58FD4 8014ABD4 C2340424 */   addiu     $a0, $zero, 0x34C2
    /* 58FD8 8014ABD8 62E0030C */  jal        func_800F8188
    /* 58FDC 8014ABDC C4340424 */   addiu     $a0, $zero, 0x34C4
    /* 58FE0 8014ABE0 59D9030C */  jal        func_800F6564
    /* 58FE4 8014ABE4 C3340424 */   addiu     $a0, $zero, 0x34C3
    /* 58FE8 8014ABE8 1600043C */  lui        $a0, (0x16FC7E >> 16)
    /* 58FEC 8014ABEC 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 58FF0 8014ABF0 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 58FF4 8014ABF4 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 58FF8 8014ABF8 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 58FFC 8014ABFC 00004394 */  lhu        $v1, 0x0($v0)
    /* 59000 8014AC00 7EFC8434 */  ori        $a0, $a0, (0x16FC7E & 0xFFFF)
    /* 59004 8014AC04 1ADB030C */  jal        func_800F6C68
    /* 59008 8014AC08 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 5900C 8014AC0C 62E0030C */  jal        func_800F8188
    /* 59010 8014AC10 C5340424 */   addiu     $a0, $zero, 0x34C5
    /* 59014 8014AC14 632E050C */  jal        func_8014B98C
    /* 59018 8014AC18 00000000 */   nop
    /* 5901C 8014AC1C 68E5030C */  jal        func_800F95A0
    /* 59020 8014AC20 00000000 */   nop
    /* 59024 8014AC24 40E3030C */  jal        func_800F8D00
    /* 59028 8014AC28 C4340424 */   addiu     $a0, $zero, 0x34C4
    /* 5902C 8014AC2C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 59030 8014AC30 00000000 */  nop
    /* 59034 8014AC34 0800E003 */  jr         $ra
    /* 59038 8014AC38 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8014ABB8
