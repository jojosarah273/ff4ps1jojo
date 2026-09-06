nonmatching func_80121C4C, 0x98

glabel func_80121C4C
    /* 3004C 80121C4C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 30050 80121C50 1000BFAF */  sw         $ra, 0x10($sp)
    /* 30054 80121C54 52CF030C */  jal        func_800F3D48
    /* 30058 80121C58 00000000 */   nop
    /* 3005C 80121C5C 53D9030C */  jal        func_800F654C
    /* 30060 80121C60 21200000 */   addu      $a0, $zero, $zero
    /* 30064 80121C64 91E5030C */  jal        func_800F9644
    /* 30068 80121C68 20000424 */   addiu     $a0, $zero, 0x20
    /* 3006C 80121C6C 1A80033C */  lui        $v1, %hi(D_8019ED44)
    /* 30070 80121C70 44ED638C */  lw         $v1, %lo(D_8019ED44)($v1)
    /* 30074 80121C74 00000000 */  nop
    /* 30078 80121C78 00006294 */  lhu        $v0, 0x0($v1)
    /* 3007C 80121C7C 00000000 */  nop
    /* 30080 80121C80 82100200 */  srl        $v0, $v0, 2
    /* 30084 80121C84 04D5030C */  jal        func_800F5410
    /* 30088 80121C88 000062A4 */   sh        $v0, 0x0($v1)
    /* 3008C 80121C8C 0FCF030C */  jal        func_800F3C3C
    /* 30090 80121C90 43000424 */   addiu     $a0, $zero, 0x43
    /* 30094 80121C94 E5CF030C */  jal        func_800F3F94
    /* 30098 80121C98 21204000 */   addu      $a0, $v0, $zero
    /* 3009C 80121C9C 04D5030C */  jal        func_800F5410
    /* 300A0 80121CA0 00000000 */   nop
    /* 300A4 80121CA4 0FCF030C */  jal        func_800F3C3C
    /* 300A8 80121CA8 29000424 */   addiu     $a0, $zero, 0x29
    /* 300AC 80121CAC E5CF030C */  jal        func_800F3F94
    /* 300B0 80121CB0 21204000 */   addu      $a0, $v0, $zero
    /* 300B4 80121CB4 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 300B8 80121CB8 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 300BC 80121CBC 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 300C0 80121CC0 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 300C4 80121CC4 00004394 */  lhu        $v1, 0x0($v0)
    /* 300C8 80121CC8 20000424 */  addiu      $a0, $zero, 0x20
    /* 300CC 80121CCC 98E5030C */  jal        func_800F9660
    /* 300D0 80121CD0 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 300D4 80121CD4 1000BF8F */  lw         $ra, 0x10($sp)
    /* 300D8 80121CD8 00000000 */  nop
    /* 300DC 80121CDC 0800E003 */  jr         $ra
    /* 300E0 80121CE0 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80121C4C
