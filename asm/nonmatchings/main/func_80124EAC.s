nonmatching func_80124EAC, 0x7C

glabel func_80124EAC
    /* 332AC 80124EAC E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 332B0 80124EB0 1000BFAF */  sw         $ra, 0x10($sp)
    /* 332B4 80124EB4 80E4030C */  jal        func_800F9200
    /* 332B8 80124EB8 00000000 */   nop
    /* 332BC 80124EBC 92D0030C */  jal        func_800F4248
    /* 332C0 80124EC0 0F000424 */   addiu     $a0, $zero, 0xF
    /* 332C4 80124EC4 50D4030C */  jal        func_800F5140
    /* 332C8 80124EC8 00000000 */   nop
    /* 332CC 80124ECC D3D3030C */  jal        func_800F4F4C
    /* 332D0 80124ED0 00000000 */   nop
    /* 332D4 80124ED4 3489040C */  jal        func_801224D0
    /* 332D8 80124ED8 00000000 */   nop
    /* 332DC 80124EDC 91E5030C */  jal        func_800F9644
    /* 332E0 80124EE0 20000424 */   addiu     $a0, $zero, 0x20
    /* 332E4 80124EE4 0F00043C */  lui        $a0, (0xFC625 >> 16)
    /* 332E8 80124EE8 3DDB030C */  jal        func_800F6CF4
    /* 332EC 80124EEC 25C68434 */   ori       $a0, $a0, (0xFC625 & 0xFFFF)
    /* 332F0 80124EF0 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 332F4 80124EF4 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 332F8 80124EF8 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 332FC 80124EFC 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 33300 80124F00 00004394 */  lhu        $v1, 0x0($v0)
    /* 33304 80124F04 20000424 */  addiu      $a0, $zero, 0x20
    /* 33308 80124F08 98E5030C */  jal        func_800F9660
    /* 3330C 80124F0C 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 33310 80124F10 F7E4030C */  jal        func_800F93DC
    /* 33314 80124F14 00000000 */   nop
    /* 33318 80124F18 1000BF8F */  lw         $ra, 0x10($sp)
    /* 3331C 80124F1C 00000000 */  nop
    /* 33320 80124F20 0800E003 */  jr         $ra
    /* 33324 80124F24 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80124EAC
