nonmatching func_801949F8, 0xC0

glabel func_801949F8
    /* A2DF8 801949F8 E0FFBD27 */  addiu      $sp, $sp, -0x20
    /* A2DFC 801949FC 1800B2AF */  sw         $s2, 0x18($sp)
    /* A2E00 80194A00 1A80123C */  lui        $s2, %hi(D_8019DB56)
    /* A2E04 80194A04 56DB5226 */  addiu      $s2, $s2, %lo(D_8019DB56)
    /* A2E08 80194A08 1C00BFAF */  sw         $ra, 0x1C($sp)
    /* A2E0C 80194A0C 1400B1AF */  sw         $s1, 0x14($sp)
    /* A2E10 80194A10 1000B0AF */  sw         $s0, 0x10($sp)
    /* A2E14 80194A14 00004292 */  lbu        $v0, 0x0($s2)
    /* A2E18 80194A18 00000000 */  nop
    /* A2E1C 80194A1C 0200422C */  sltiu      $v0, $v0, 0x2
    /* A2E20 80194A20 08004014 */  bnez       $v0, .L80194A44
    /* A2E24 80194A24 21888000 */   addu      $s1, $a0, $zero
    /* A2E28 80194A28 0F80043C */  lui        $a0, %hi(D_800F39B4)
    /* A2E2C 80194A2C B4398424 */  addiu      $a0, $a0, %lo(D_800F39B4)
    /* A2E30 80194A30 1A80023C */  lui        $v0, %hi(D_8019DB50)
    /* A2E34 80194A34 50DB428C */  lw         $v0, %lo(D_8019DB50)($v0)
    /* A2E38 80194A38 00000000 */  nop
    /* A2E3C 80194A3C 09F84000 */  jalr       $v0
    /* A2E40 80194A40 21282002 */   addu      $a1, $s1, $zero
  .L80194A44:
    /* A2E44 80194A44 1C003026 */  addiu      $s0, $s1, 0x1C
    /* A2E48 80194A48 21200002 */  addu       $a0, $s0, $zero
    /* A2E4C 80194A4C F654060C */  jal        func_801953D8
    /* A2E50 80194A50 21282002 */   addu      $a1, $s1, $zero
    /* A2E54 80194A54 FF00043C */  lui        $a0, (0xFFFFFF >> 16)
    /* A2E58 80194A58 FFFF8434 */  ori        $a0, $a0, (0xFFFFFF & 0xFFFF)
    /* A2E5C 80194A5C 21280002 */  addu       $a1, $s0, $zero
    /* A2E60 80194A60 40000624 */  addiu      $a2, $zero, 0x40
    /* A2E64 80194A64 1C00228E */  lw         $v0, 0x1C($s1)
    /* A2E68 80194A68 1A80033C */  lui        $v1, %hi(D_8019DB4C)
    /* A2E6C 80194A6C 4CDB638C */  lw         $v1, %lo(D_8019DB4C)($v1)
    /* A2E70 80194A70 25104400 */  or         $v0, $v0, $a0
    /* A2E74 80194A74 1C0022AE */  sw         $v0, 0x1C($s1)
    /* A2E78 80194A78 1800648C */  lw         $a0, 0x18($v1)
    /* A2E7C 80194A7C 0800628C */  lw         $v0, 0x8($v1)
    /* A2E80 80194A80 00000000 */  nop
    /* A2E84 80194A84 09F84000 */  jalr       $v0
    /* A2E88 80194A88 21380000 */   addu      $a3, $zero, $zero
    /* A2E8C 80194A8C 0E004426 */  addiu      $a0, $s2, 0xE
    /* A2E90 80194A90 21282002 */  addu       $a1, $s1, $zero
    /* A2E94 80194A94 2240060C */  jal        func_80190088
    /* A2E98 80194A98 5C000624 */   addiu     $a2, $zero, 0x5C
    /* A2E9C 80194A9C 21102002 */  addu       $v0, $s1, $zero
    /* A2EA0 80194AA0 1C00BF8F */  lw         $ra, 0x1C($sp)
    /* A2EA4 80194AA4 1800B28F */  lw         $s2, 0x18($sp)
    /* A2EA8 80194AA8 1400B18F */  lw         $s1, 0x14($sp)
    /* A2EAC 80194AAC 1000B08F */  lw         $s0, 0x10($sp)
    /* A2EB0 80194AB0 0800E003 */  jr         $ra
    /* A2EB4 80194AB4 2000BD27 */   addiu     $sp, $sp, 0x20
endlabel func_801949F8
