nonmatching func_8013F49C, 0x10C

glabel func_8013F49C
    /* 4D89C 8013F49C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 4D8A0 8013F4A0 1000BFAF */  sw         $ra, 0x10($sp)
    /* 4D8A4 8013F4A4 CCE4030C */  jal        func_800F9330
    /* 4D8A8 8013F4A8 00000000 */   nop
    /* 4D8AC 8013F4AC 8CD9030C */  jal        func_800F6630
    /* 4D8B0 8013F4B0 47000424 */   addiu     $a0, $zero, 0x47
    /* 4D8B4 8013F4B4 0D00043C */  lui        $a0, (0xDFD17 >> 16)
    /* 4D8B8 8013F4B8 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 4D8BC 8013F4BC 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 4D8C0 8013F4C0 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 4D8C4 8013F4C4 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 4D8C8 8013F4C8 00004394 */  lhu        $v1, 0x0($v0)
    /* 4D8CC 8013F4CC 17FD8434 */  ori        $a0, $a0, (0xDFD17 & 0xFFFF)
    /* 4D8D0 8013F4D0 1ADB030C */  jal        func_800F6C68
    /* 4D8D4 8013F4D4 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 4D8D8 8013F4D8 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 4D8DC 8013F4DC 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 4D8E0 8013F4E0 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 4D8E4 8013F4E4 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 4D8E8 8013F4E8 00004394 */  lhu        $v1, 0x0($v0)
    /* 4D8EC 8013F4EC 162A0424 */  addiu      $a0, $zero, 0x2A16
    /* 4D8F0 8013F4F0 DADA030C */  jal        func_800F6B68
    /* 4D8F4 8013F4F4 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 4D8F8 8013F4F8 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 4D8FC 8013F4FC 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 4D900 8013F500 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 4D904 8013F504 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 4D908 8013F508 00004394 */  lhu        $v1, 0x0($v0)
    /* 4D90C 8013F50C 1C000424 */  addiu      $a0, $zero, 0x1C
    /* 4D910 8013F510 5BE3030C */  jal        func_800F8D6C
    /* 4D914 8013F514 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 4D918 8013F518 77DC030C */  jal        func_800F71DC
    /* 4D91C 8013F51C 0A000424 */   addiu     $a0, $zero, 0xA
    /* 4D920 8013F520 5BE3030C */  jal        func_800F8D6C
    /* 4D924 8013F524 1E000424 */   addiu     $a0, $zero, 0x1E
    /* 4D928 8013F528 D5FC040C */  jal        func_8013F354
    /* 4D92C 8013F52C 00000000 */   nop
    /* 4D930 8013F530 8CD9030C */  jal        func_800F6630
    /* 4D934 8013F534 22000424 */   addiu     $a0, $zero, 0x22
    /* 4D938 8013F538 04D5030C */  jal        func_800F5410
    /* 4D93C 8013F53C 00000000 */   nop
    /* 4D940 8013F540 02D0030C */  jal        func_800F4008
    /* 4D944 8013F544 70000424 */   addiu     $a0, $zero, 0x70
    /* 4D948 8013F548 62E0030C */  jal        func_800F8188
    /* 4D94C 8013F54C 7AF00434 */   ori       $a0, $zero, 0xF07A
    /* 4D950 8013F550 8CD9030C */  jal        func_800F6630
    /* 4D954 8013F554 20000424 */   addiu     $a0, $zero, 0x20
    /* 4D958 8013F558 04D5030C */  jal        func_800F5410
    /* 4D95C 8013F55C 00000000 */   nop
    /* 4D960 8013F560 02D0030C */  jal        func_800F4008
    /* 4D964 8013F564 70000424 */   addiu     $a0, $zero, 0x70
    /* 4D968 8013F568 62E0030C */  jal        func_800F8188
    /* 4D96C 8013F56C 79F00434 */   ori       $a0, $zero, 0xF079
    /* 4D970 8013F570 68E5030C */  jal        func_800F95A0
    /* 4D974 8013F574 00000000 */   nop
    /* 4D978 8013F578 53D9030C */  jal        func_800F654C
    /* 4D97C 8013F57C 04000424 */   addiu     $a0, $zero, 0x4
    /* 4D980 8013F580 DAE1030C */  jal        func_800F8768
    /* 4D984 8013F584 D0EF0434 */   ori       $a0, $zero, 0xEFD0
    /* 4D988 8013F588 53D9030C */  jal        func_800F654C
    /* 4D98C 8013F58C 09000424 */   addiu     $a0, $zero, 0x9
    /* 4D990 8013F590 62E0030C */  jal        func_800F8188
    /* 4D994 8013F594 78F00434 */   ori       $a0, $zero, 0xF078
    /* 4D998 8013F598 1000BF8F */  lw         $ra, 0x10($sp)
    /* 4D99C 8013F59C 00000000 */  nop
    /* 4D9A0 8013F5A0 0800E003 */  jr         $ra
    /* 4D9A4 8013F5A4 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8013F49C
