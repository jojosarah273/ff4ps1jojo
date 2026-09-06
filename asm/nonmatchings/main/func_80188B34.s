nonmatching func_80188B34, 0x74

glabel func_80188B34
    /* 96F34 80188B34 E0FFBD27 */  addiu      $sp, $sp, -0x20
    /* 96F38 80188B38 1000B0AF */  sw         $s0, 0x10($sp)
    /* 96F3C 80188B3C 21808000 */  addu       $s0, $a0, $zero
    /* 96F40 80188B40 1400B1AF */  sw         $s1, 0x14($sp)
    /* 96F44 80188B44 2188A000 */  addu       $s1, $a1, $zero
    /* 96F48 80188B48 1800BFAF */  sw         $ra, 0x18($sp)
    /* 96F4C 80188B4C BA22060C */  jal        func_80188AE8
    /* 96F50 80188B50 01000424 */   addiu     $a0, $zero, 0x1
    /* 96F54 80188B54 0F004014 */  bnez       $v0, .L80188B94
    /* 96F58 80188B58 FFFF0224 */   addiu     $v0, $zero, -0x1
    /* 96F5C 80188B5C 21300000 */  addu       $a2, $zero, $zero
    /* 96F60 80188B60 9002858F */  lw         $a1, %gp_rel(D_8019EF8C)($gp)
    /* 96F64 80188B64 2C00838F */  lw         $v1, %gp_rel(D_8019ED28)($gp)
    /* 96F68 80188B68 4402848F */  lw         $a0, %gp_rel(D_8019EF40)($gp)
    /* 96F6C 80188B6C 00110500 */  sll        $v0, $a1, 4
    /* 96F70 80188B70 21104300 */  addu       $v0, $v0, $v1
    /* 96F74 80188B74 00010324 */  addiu      $v1, $zero, 0x100
    /* 96F78 80188B78 000043A4 */  sh         $v1, 0x0($v0)
    /* 96F7C 80188B7C 0C0050AC */  sw         $s0, 0xC($v0)
    /* 96F80 80188B80 0200A410 */  beq        $a1, $a0, .L80188B8C
    /* 96F84 80188B84 040051AC */   sw        $s1, 0x4($v0)
    /* 96F88 80188B88 0100A624 */  addiu      $a2, $a1, 0x1
  .L80188B8C:
    /* 96F8C 80188B8C 900286AF */  sw         $a2, %gp_rel(D_8019EF8C)($gp)
    /* 96F90 80188B90 2110C000 */  addu       $v0, $a2, $zero
  .L80188B94:
    /* 96F94 80188B94 1800BF8F */  lw         $ra, 0x18($sp)
    /* 96F98 80188B98 1400B18F */  lw         $s1, 0x14($sp)
    /* 96F9C 80188B9C 1000B08F */  lw         $s0, 0x10($sp)
    /* 96FA0 80188BA0 0800E003 */  jr         $ra
    /* 96FA4 80188BA4 2000BD27 */   addiu     $sp, $sp, 0x20
endlabel func_80188B34
