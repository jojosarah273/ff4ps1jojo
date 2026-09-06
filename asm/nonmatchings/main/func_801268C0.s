nonmatching func_801268C0, 0x60

glabel func_801268C0
    /* 34CC0 801268C0 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 34CC4 801268C4 1000BFAF */  sw         $ra, 0x10($sp)
    /* 34CC8 801268C8 33D7030C */  jal        func_800F5CCC
    /* 34CCC 801268CC 00000000 */   nop
    /* 34CD0 801268D0 3489040C */  jal        func_801224D0
    /* 34CD4 801268D4 00000000 */   nop
    /* 34CD8 801268D8 1A80023C */  lui        $v0, %hi(D_80199BFC)
    /* 34CDC 801268DC 1A80043C */  lui        $a0, %hi(D_8019ED54)
    /* 34CE0 801268E0 54ED848C */  lw         $a0, %lo(D_8019ED54)($a0)
    /* 34CE4 801268E4 FC9B4224 */  addiu      $v0, $v0, %lo(D_80199BFC)
    /* 34CE8 801268E8 00008394 */  lhu        $v1, 0x0($a0)
    /* 34CEC 801268EC 1A80053C */  lui        $a1, %hi(D_8019ED40)
    /* 34CF0 801268F0 40EDA58C */  lw         $a1, %lo(D_8019ED40)($a1)
    /* 34CF4 801268F4 21186200 */  addu       $v1, $v1, $v0
    /* 34CF8 801268F8 00006290 */  lbu        $v0, 0x0($v1)
    /* 34CFC 801268FC 43000424 */  addiu      $a0, $zero, 0x43
    /* 34D00 80126900 93E0030C */  jal        func_800F824C
    /* 34D04 80126904 0000A2A0 */   sb        $v0, 0x0($a1)
    /* 34D08 80126908 9CDC030C */  jal        func_800F7270
    /* 34D0C 8012690C 43000424 */   addiu     $a0, $zero, 0x43
    /* 34D10 80126910 1000BF8F */  lw         $ra, 0x10($sp)
    /* 34D14 80126914 00000000 */  nop
    /* 34D18 80126918 0800E003 */  jr         $ra
    /* 34D1C 8012691C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_801268C0
