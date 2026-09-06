nonmatching func_80176C6C, 0xD4

glabel func_80176C6C
    /* 8506C 80176C6C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 85070 80176C70 1000BFAF */  sw         $ra, 0x10($sp)
    /* 85074 80176C74 93E0030C */  jal        func_800F824C
    /* 85078 80176C78 43000424 */   addiu     $a0, $zero, 0x43
    /* 8507C 80176C7C 91E5030C */  jal        func_800F9644
    /* 85080 80176C80 20000424 */   addiu     $a0, $zero, 0x20
    /* 85084 80176C84 96D9030C */  jal        func_800F6658
    /* 85088 80176C88 43000424 */   addiu     $a0, $zero, 0x43
    /* 8508C 80176C8C 52CF030C */  jal        func_800F3D48
    /* 85090 80176C90 00000000 */   nop
    /* 85094 80176C94 25DE030C */  jal        func_800F7894
    /* 85098 80176C98 00000000 */   nop
    /* 8509C 80176C9C 8BE4030C */  jal        func_800F922C
    /* 850A0 80176CA0 00000000 */   nop
    /* 850A4 80176CA4 04D5030C */  jal        func_800F5410
    /* 850A8 80176CA8 00000000 */   nop
    /* 850AC 80176CAC 99D0030C */  jal        func_800F4264
    /* 850B0 80176CB0 FF1F0424 */   addiu     $a0, $zero, 0x1FFF
    /* 850B4 80176CB4 04D5030C */  jal        func_800F5410
    /* 850B8 80176CB8 00000000 */   nop
    /* 850BC 80176CBC 19D0030C */  jal        func_800F4064
    /* 850C0 80176CC0 00A60434 */   ori       $a0, $zero, 0xA600
    /* 850C4 80176CC4 1A80033C */  lui        $v1, %hi(D_8019ED44)
    /* 850C8 80176CC8 44ED638C */  lw         $v1, %lo(D_8019ED44)($v1)
    /* 850CC 80176CCC 1A80043C */  lui        $a0, %hi(D_8019ED54)
    /* 850D0 80176CD0 54ED848C */  lw         $a0, %lo(D_8019ED54)($a0)
    /* 850D4 80176CD4 00006294 */  lhu        $v0, 0x0($v1)
    /* 850D8 80176CD8 04E5030C */  jal        func_800F9410
    /* 850DC 80176CDC 000082A4 */   sh        $v0, 0x0($a0)
    /* 850E0 80176CE0 04D5030C */  jal        func_800F5410
    /* 850E4 80176CE4 00000000 */   nop
    /* 850E8 80176CE8 99D0030C */  jal        func_800F4264
    /* 850EC 80176CEC FF0F0424 */   addiu     $a0, $zero, 0xFFF
    /* 850F0 80176CF0 04D5030C */  jal        func_800F5410
    /* 850F4 80176CF4 00000000 */   nop
    /* 850F8 80176CF8 19D0030C */  jal        func_800F4064
    /* 850FC 80176CFC 00C60434 */   ori       $a0, $zero, 0xC600
    /* 85100 80176D00 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 85104 80176D04 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 85108 80176D08 1A80053C */  lui        $a1, %hi(D_8019ED58)
    /* 8510C 80176D0C 58EDA58C */  lw         $a1, %lo(D_8019ED58)($a1)
    /* 85110 80176D10 00004394 */  lhu        $v1, 0x0($v0)
    /* 85114 80176D14 7F000424 */  addiu      $a0, $zero, 0x7F
    /* 85118 80176D18 56D9030C */  jal        func_800F6558
    /* 8511C 80176D1C 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 85120 80176D20 59CF030C */  jal        func_800F3D64
    /* 85124 80176D24 7E7E0424 */   addiu     $a0, $zero, 0x7E7E
    /* 85128 80176D28 98E5030C */  jal        func_800F9660
    /* 8512C 80176D2C 20000424 */   addiu     $a0, $zero, 0x20
    /* 85130 80176D30 1000BF8F */  lw         $ra, 0x10($sp)
    /* 85134 80176D34 00000000 */  nop
    /* 85138 80176D38 0800E003 */  jr         $ra
    /* 8513C 80176D3C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80176C6C
