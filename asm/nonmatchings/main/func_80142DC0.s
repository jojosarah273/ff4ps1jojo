nonmatching func_80142DC0, 0x74

glabel func_80142DC0
    /* 511C0 80142DC0 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 511C4 80142DC4 1000BFAF */  sw         $ra, 0x10($sp)
    /* 511C8 80142DC8 8D0B050C */  jal        func_80142E34
    /* 511CC 80142DCC 00000000 */   nop
    /* 511D0 80142DD0 C7E5030C */  jal        func_800F971C
    /* 511D4 80142DD4 00000000 */   nop
    /* 511D8 80142DD8 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 511DC 80142DDC 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 511E0 80142DE0 1A80043C */  lui        $a0, %hi(D_8019ED54)
    /* 511E4 80142DE4 54ED848C */  lw         $a0, %lo(D_8019ED54)($a0)
    /* 511E8 80142DE8 00004394 */  lhu        $v1, 0x0($v0)
    /* 511EC 80142DEC 00000000 */  nop
    /* 511F0 80142DF0 000083A4 */  sh         $v1, 0x0($a0)
  .L80142DF4:
    /* 511F4 80142DF4 53D9030C */  jal        func_800F654C
    /* 511F8 80142DF8 08000424 */   addiu     $a0, $zero, 0x8
    /* 511FC 80142DFC 910F050C */  jal        func_80143E44
    /* 51200 80142E00 00000000 */   nop
    /* 51204 80142E04 D9D8030C */  jal        func_800F6364
    /* 51208 80142E08 00000000 */   nop
    /* 5120C 80142E0C 56D6030C */  jal        func_800F5958
    /* 51210 80142E10 10000424 */   addiu     $a0, $zero, 0x10
    /* 51214 80142E14 F5D4030C */  jal        func_800F53D4
    /* 51218 80142E18 00000000 */   nop
    /* 5121C 80142E1C F5FF4010 */  beqz       $v0, .L80142DF4
    /* 51220 80142E20 00000000 */   nop
    /* 51224 80142E24 1000BF8F */  lw         $ra, 0x10($sp)
    /* 51228 80142E28 00000000 */  nop
    /* 5122C 80142E2C 0800E003 */  jr         $ra
    /* 51230 80142E30 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80142DC0
