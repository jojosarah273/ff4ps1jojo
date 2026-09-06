nonmatching func_8013B0C4, 0x54

glabel func_8013B0C4
    /* 494C4 8013B0C4 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 494C8 8013B0C8 1000BFAF */  sw         $ra, 0x10($sp)
    /* 494CC 8013B0CC 3489040C */  jal        func_801224D0
    /* 494D0 8013B0D0 00000000 */   nop
    /* 494D4 8013B0D4 1A80023C */  lui        $v0, %hi(D_8019A098)
    /* 494D8 8013B0D8 1A80043C */  lui        $a0, %hi(D_8019ED54)
    /* 494DC 8013B0DC 54ED848C */  lw         $a0, %lo(D_8019ED54)($a0)
    /* 494E0 8013B0E0 98A04224 */  addiu      $v0, $v0, %lo(D_8019A098)
    /* 494E4 8013B0E4 00008394 */  lhu        $v1, 0x0($a0)
    /* 494E8 8013B0E8 1A80043C */  lui        $a0, %hi(D_8019ED40)
    /* 494EC 8013B0EC 40ED848C */  lw         $a0, %lo(D_8019ED40)($a0)
    /* 494F0 8013B0F0 21186200 */  addu       $v1, $v1, $v0
    /* 494F4 8013B0F4 00006290 */  lbu        $v0, 0x0($v1)
    /* 494F8 8013B0F8 00000000 */  nop
    /* 494FC 8013B0FC 000082A0 */  sb         $v0, 0x0($a0)
    /* 49500 8013B100 93E0030C */  jal        func_800F824C
    /* 49504 8013B104 45000424 */   addiu     $a0, $zero, 0x45
    /* 49508 8013B108 1000BF8F */  lw         $ra, 0x10($sp)
    /* 4950C 8013B10C 00000000 */  nop
    /* 49510 8013B110 0800E003 */  jr         $ra
    /* 49514 8013B114 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8013B0C4
