nonmatching func_80188BA8, 0xB0

glabel func_80188BA8
    /* 96FA8 80188BA8 E0FFBD27 */  addiu      $sp, $sp, -0x20
    /* 96FAC 80188BAC 1800B2AF */  sw         $s2, 0x18($sp)
    /* 96FB0 80188BB0 21908000 */  addu       $s2, $a0, $zero
    /* 96FB4 80188BB4 1000B0AF */  sw         $s0, 0x10($sp)
    /* 96FB8 80188BB8 2180A000 */  addu       $s0, $a1, $zero
    /* 96FBC 80188BBC 1400B1AF */  sw         $s1, 0x14($sp)
    /* 96FC0 80188BC0 2188C000 */  addu       $s1, $a2, $zero
    /* 96FC4 80188BC4 1C00BFAF */  sw         $ra, 0x1C($sp)
    /* 96FC8 80188BC8 BA22060C */  jal        func_80188AE8
    /* 96FCC 80188BCC 02000424 */   addiu     $a0, $zero, 0x2
    /* 96FD0 80188BD0 1B004014 */  bnez       $v0, .L80188C40
    /* 96FD4 80188BD4 FFFF0224 */   addiu     $v0, $zero, -0x1
    /* 96FD8 80188BD8 21380000 */  addu       $a3, $zero, $zero
    /* 96FDC 80188BDC 01010324 */  addiu      $v1, $zero, 0x101
    /* 96FE0 80188BE0 9002848F */  lw         $a0, %gp_rel(D_8019EF8C)($gp)
    /* 96FE4 80188BE4 2C00858F */  lw         $a1, %gp_rel(D_8019ED28)($gp)
    /* 96FE8 80188BE8 4402888F */  lw         $t0, %gp_rel(D_8019EF40)($gp)
    /* 96FEC 80188BEC 00110400 */  sll        $v0, $a0, 4
    /* 96FF0 80188BF0 21104500 */  addu       $v0, $v0, $a1
    /* 96FF4 80188BF4 000043A4 */  sh         $v1, 0x0($v0)
    /* 96FF8 80188BF8 02008810 */  beq        $a0, $t0, .L80188C04
    /* 96FFC 80188BFC 0C0050AC */   sw        $s0, 0xC($v0)
    /* 97000 80188C00 01008724 */  addiu      $a3, $a0, 0x1
  .L80188C04:
    /* 97004 80188C04 21300000 */  addu       $a2, $zero, $zero
    /* 97008 80188C08 00110700 */  sll        $v0, $a3, 4
    /* 9700C 80188C0C 21104500 */  addu       $v0, $v0, $a1
    /* 97010 80188C10 8C02838F */  lw         $v1, %gp_rel(D_8019EF88)($gp)
    /* 97014 80188C14 02010424 */  addiu      $a0, $zero, 0x102
    /* 97018 80188C18 900287AF */  sw         $a3, %gp_rel(D_8019EF8C)($gp)
    /* 9701C 80188C1C 000044A4 */  sh         $a0, 0x0($v0)
    /* 97020 80188C20 00190300 */  sll        $v1, $v1, 4
    /* 97024 80188C24 21186500 */  addu       $v1, $v1, $a1
    /* 97028 80188C28 040071AC */  sw         $s1, 0x4($v1)
    /* 9702C 80188C2C 0200E810 */  beq        $a3, $t0, .L80188C38
    /* 97030 80188C30 0C0052AC */   sw        $s2, 0xC($v0)
    /* 97034 80188C34 0100E624 */  addiu      $a2, $a3, 0x1
  .L80188C38:
    /* 97038 80188C38 900286AF */  sw         $a2, %gp_rel(D_8019EF8C)($gp)
    /* 9703C 80188C3C 2110C000 */  addu       $v0, $a2, $zero
  .L80188C40:
    /* 97040 80188C40 1C00BF8F */  lw         $ra, 0x1C($sp)
    /* 97044 80188C44 1800B28F */  lw         $s2, 0x18($sp)
    /* 97048 80188C48 1400B18F */  lw         $s1, 0x14($sp)
    /* 9704C 80188C4C 1000B08F */  lw         $s0, 0x10($sp)
    /* 97050 80188C50 0800E003 */  jr         $ra
    /* 97054 80188C54 2000BD27 */   addiu     $sp, $sp, 0x20
endlabel func_80188BA8
