nonmatching func_80187A10, 0x90

glabel func_80187A10
    /* 95E10 80187A10 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 95E14 80187A14 1000B0AF */  sw         $s0, 0x10($sp)
    /* 95E18 80187A18 21808000 */  addu       $s0, $a0, $zero
    /* 95E1C 80187A1C 0E028387 */  lh         $v1, %gp_rel(D_8019EF0A)($gp)
    /* 95E20 80187A20 10000224 */  addiu      $v0, $zero, 0x10
    /* 95E24 80187A24 1A006214 */  bne        $v1, $v0, .L80187A90
    /* 95E28 80187A28 1400BFAF */   sw        $ra, 0x14($sp)
    /* 95E2C 80187A2C 10028287 */  lh         $v0, %gp_rel(D_8019EF0C)($gp)
    /* 95E30 80187A30 02000324 */  addiu      $v1, $zero, 0x2
    /* 95E34 80187A34 0E0283A7 */  sh         $v1, %gp_rel(D_8019EF0A)($gp)
    /* 95E38 80187A38 33004228 */  slti       $v0, $v0, 0x33
    /* 95E3C 80187A3C 06004010 */  beqz       $v0, .L80187A58
    /* 95E40 80187A40 9F000224 */   addiu     $v0, $zero, 0x9F
    /* 95E44 80187A44 34028287 */  lh         $v0, %gp_rel(D_8019EF30)($gp)
    /* 95E48 80187A48 00000000 */  nop
    /* 95E4C 80187A4C 02004014 */  bnez       $v0, .L80187A58
    /* 95E50 80187A50 4F000224 */   addiu     $v0, $zero, 0x4F
    /* 95E54 80187A54 BF000224 */  addiu      $v0, $zero, 0xBF
  .L80187A58:
    /* 95E58 80187A58 1A0282A7 */  sh         $v0, %gp_rel(D_8019EF16)($gp)
    /* 95E5C 80187A5C 1A028587 */  lh         $a1, %gp_rel(D_8019EF16)($gp)
    /* 95E60 80187A60 01000424 */  addiu      $a0, $zero, 0x1
    /* 95E64 80187A64 21380000 */  addu       $a3, $zero, $zero
    /* 95E68 80187A68 E326060C */  jal        func_80189B8C
    /* 95E6C 80187A6C 2130A000 */   addu      $a2, $a1, $zero
    /* 95E70 80187A70 06000424 */  addiu      $a0, $zero, 0x6
    /* 95E74 80187A74 40101000 */  sll        $v0, $s0, 1
    /* 95E78 80187A78 21105000 */  addu       $v0, $v0, $s0
    /* 95E7C 80187A7C C0100200 */  sll        $v0, $v0, 3
    /* 95E80 80187A80 1F80053C */  lui        $a1, %hi(D_801F6230)
    /* 95E84 80187A84 3062A524 */  addiu      $a1, $a1, %lo(D_801F6230)
    /* 95E88 80187A88 6D46060C */  jal        func_801919B4
    /* 95E8C 80187A8C 21284500 */   addu      $a1, $v0, $a1
  .L80187A90:
    /* 95E90 80187A90 1400BF8F */  lw         $ra, 0x14($sp)
    /* 95E94 80187A94 1000B08F */  lw         $s0, 0x10($sp)
    /* 95E98 80187A98 0800E003 */  jr         $ra
    /* 95E9C 80187A9C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80187A10
