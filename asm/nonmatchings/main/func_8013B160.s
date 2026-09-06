nonmatching func_8013B160, 0x48

glabel func_8013B160
    /* 49560 8013B160 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 49564 8013B164 1000BFAF */  sw         $ra, 0x10($sp)
    /* 49568 8013B168 59D9030C */  jal        func_800F6564
    /* 4956C 8013B16C B6160424 */   addiu     $a0, $zero, 0x16B6
    /* 49570 8013B170 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 49574 8013B174 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 49578 8013B178 00000000 */  nop
    /* 4957C 8013B17C 00006290 */  lbu        $v0, 0x0($v1)
    /* 49580 8013B180 B6160424 */  addiu      $a0, $zero, 0x16B6
    /* 49584 8013B184 01004238 */  xori       $v0, $v0, 0x1
    /* 49588 8013B188 62E0030C */  jal        func_800F8188
    /* 4958C 8013B18C 000062A0 */   sb        $v0, 0x0($v1)
    /* 49590 8013B190 AAEA040C */  jal        func_8013AAA8
    /* 49594 8013B194 00000000 */   nop
    /* 49598 8013B198 1000BF8F */  lw         $ra, 0x10($sp)
    /* 4959C 8013B19C 00000000 */  nop
    /* 495A0 8013B1A0 0800E003 */  jr         $ra
    /* 495A4 8013B1A4 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8013B160
