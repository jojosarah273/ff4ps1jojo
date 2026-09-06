nonmatching func_8018767C, 0x64

glabel func_8018767C
    /* 95A7C 8018767C 60FFBD27 */  addiu      $sp, $sp, -0xA0
    /* 95A80 80187680 9400B1AF */  sw         $s1, 0x94($sp)
    /* 95A84 80187684 FFFF9130 */  andi       $s1, $a0, 0xFFFF
    /* 95A88 80187688 1000A427 */  addiu      $a0, $sp, 0x10
    /* 95A8C 8018768C 9000B0AF */  sw         $s0, 0x90($sp)
    /* 95A90 80187690 03001024 */  addiu      $s0, $zero, 0x3
    /* 95A94 80187694 8000023C */  lui        $v0, (0x800000 >> 16)
    /* 95A98 80187698 9800BFAF */  sw         $ra, 0x98($sp)
    /* 95A9C 8018769C 1400B0AF */  sw         $s0, 0x14($sp)
    /* 95AA0 801876A0 1000A2AF */  sw         $v0, 0x10($sp)
    /* 95AA4 801876A4 1800B1A7 */  sh         $s1, 0x18($sp)
    /* 95AA8 801876A8 3A39060C */  jal        func_8018E4E8
    /* 95AAC 801876AC 1A00A0A7 */   sh        $zero, 0x1A($sp)
    /* 95AB0 801876B0 5000A427 */  addiu      $a0, $sp, 0x50
    /* 95AB4 801876B4 4000023C */  lui        $v0, (0x400000 >> 16)
    /* 95AB8 801876B8 5400B0AF */  sw         $s0, 0x54($sp)
    /* 95ABC 801876BC 5000A2AF */  sw         $v0, 0x50($sp)
    /* 95AC0 801876C0 5800A0A7 */  sh         $zero, 0x58($sp)
    /* 95AC4 801876C4 3A39060C */  jal        func_8018E4E8
    /* 95AC8 801876C8 5A00B1A7 */   sh        $s1, 0x5A($sp)
    /* 95ACC 801876CC 9800BF8F */  lw         $ra, 0x98($sp)
    /* 95AD0 801876D0 9400B18F */  lw         $s1, 0x94($sp)
    /* 95AD4 801876D4 9000B08F */  lw         $s0, 0x90($sp)
    /* 95AD8 801876D8 0800E003 */  jr         $ra
    /* 95ADC 801876DC A000BD27 */   addiu     $sp, $sp, 0xA0
endlabel func_8018767C
