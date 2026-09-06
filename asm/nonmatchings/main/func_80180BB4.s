nonmatching func_80180BB4, 0xDC

glabel func_80180BB4
    /* 8EFB4 80180BB4 C8FFBD27 */  addiu      $sp, $sp, -0x38
    /* 8EFB8 80180BB8 21300000 */  addu       $a2, $zero, $zero
    /* 8EFBC 80180BBC 00240400 */  sll        $a0, $a0, 16
    /* 8EFC0 80180BC0 2000B2AF */  sw         $s2, 0x20($sp)
    /* 8EFC4 80180BC4 C3920400 */  sra        $s2, $a0, 11
    /* 8EFC8 80180BC8 002C0500 */  sll        $a1, $a1, 16
    /* 8EFCC 80180BCC 2800B4AF */  sw         $s4, 0x28($sp)
    /* 8EFD0 80180BD0 03A40500 */  sra        $s4, $a1, 16
    /* 8EFD4 80180BD4 2400B3AF */  sw         $s3, 0x24($sp)
    /* 8EFD8 80180BD8 40991400 */  sll        $s3, $s4, 5
    /* 8EFDC 80180BDC 1C00B1AF */  sw         $s1, 0x1C($sp)
    /* 8EFE0 80180BE0 21886002 */  addu       $s1, $s3, $zero
    /* 8EFE4 80180BE4 1800B0AF */  sw         $s0, 0x18($sp)
    /* 8EFE8 80180BE8 0100103C */  lui        $s0, (0x10000 >> 16)
    /* 8EFEC 80180BEC 2C00B5AF */  sw         $s5, 0x2C($sp)
    /* 8EFF0 80180BF0 0100153C */  lui        $s5, (0x10000 >> 16)
    /* 8EFF4 80180BF4 3000BFAF */  sw         $ra, 0x30($sp)
  .L80180BF8:
    /* 8EFF8 80180BF8 40100600 */  sll        $v0, $a2, 1
    /* 8EFFC 80180BFC A801838F */  lw         $v1, %gp_rel(D_8019EEA4)($gp)
    /* 8F000 80180C00 AC01888F */  lw         $t0, %gp_rel(D_8019EEA8)($gp)
    /* 8F004 80180C04 21187200 */  addu       $v1, $v1, $s2
    /* 8F008 80180C08 21186200 */  addu       $v1, $v1, $v0
    /* 8F00C 80180C0C 80100600 */  sll        $v0, $a2, 2
    /* 8F010 80180C10 21400201 */  addu       $t0, $t0, $v0
    /* 8F014 80180C14 00006490 */  lbu        $a0, 0x0($v1)
    /* 8F018 80180C18 01006590 */  lbu        $a1, 0x1($v1)
    /* 8F01C 80180C1C 10006690 */  lbu        $a2, 0x10($v1)
    /* 8F020 80180C20 11006790 */  lbu        $a3, 0x11($v1)
    /* 8F024 80180C24 21401101 */  addu       $t0, $t0, $s1
    /* 8F028 80180C28 3609060C */  jal        func_801824D8
    /* 8F02C 80180C2C 1000A8AF */   sw        $t0, 0x10($sp)
    /* 8F030 80180C30 21180002 */  addu       $v1, $s0, $zero
    /* 8F034 80180C34 03340300 */  sra        $a2, $v1, 16
    /* 8F038 80180C38 0800C228 */  slti       $v0, $a2, 0x8
    /* 8F03C 80180C3C EEFF4014 */  bnez       $v0, .L80180BF8
    /* 8F040 80180C40 21801502 */   addu      $s0, $s0, $s5
    /* 8F044 80180C44 94018427 */  addiu      $a0, $gp, %gp_rel(D_8019EE90)
    /* 8F048 80180C48 40181400 */  sll        $v1, $s4, 1
    /* 8F04C 80180C4C AC01858F */  lw         $a1, %gp_rel(D_8019EEA8)($gp)
    /* 8F050 80180C50 A2018297 */  lhu        $v0, %gp_rel(D_8019EE9E)($gp)
    /* 8F054 80180C54 A4018697 */  lhu        $a2, %gp_rel(D_8019EEA0)($gp)
    /* 8F058 80180C58 21104300 */  addu       $v0, $v0, $v1
    /* 8F05C 80180C5C 940182A7 */  sh         $v0, %gp_rel(D_8019EE90)($gp)
    /* 8F060 80180C60 960186A7 */  sh         $a2, %gp_rel(D_8019EE92)($gp)
    /* 8F064 80180C64 9051060C */  jal        func_80194640
    /* 8F068 80180C68 2128B300 */   addu      $a1, $a1, $s3
    /* 8F06C 80180C6C 3000BF8F */  lw         $ra, 0x30($sp)
    /* 8F070 80180C70 2C00B58F */  lw         $s5, 0x2C($sp)
    /* 8F074 80180C74 2800B48F */  lw         $s4, 0x28($sp)
    /* 8F078 80180C78 2400B38F */  lw         $s3, 0x24($sp)
    /* 8F07C 80180C7C 2000B28F */  lw         $s2, 0x20($sp)
    /* 8F080 80180C80 1C00B18F */  lw         $s1, 0x1C($sp)
    /* 8F084 80180C84 1800B08F */  lw         $s0, 0x18($sp)
    /* 8F088 80180C88 0800E003 */  jr         $ra
    /* 8F08C 80180C8C 3800BD27 */   addiu     $sp, $sp, 0x38
endlabel func_80180BB4
