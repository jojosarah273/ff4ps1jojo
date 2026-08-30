nonmatching func_80194AB8, 0xD8

glabel func_80194AB8
    /* A2EB8 80194AB8 D8FFBD27 */  addiu      $sp, $sp, -0x28
    /* A2EBC 80194ABC 1800B2AF */  sw         $s2, 0x18($sp)
    /* A2EC0 80194AC0 21908000 */  addu       $s2, $a0, $zero
    /* A2EC4 80194AC4 1C00B3AF */  sw         $s3, 0x1C($sp)
    /* A2EC8 80194AC8 1A80133C */  lui        $s3, %hi(D_8019DB56)
    /* A2ECC 80194ACC 56DB7326 */  addiu      $s3, $s3, %lo(D_8019DB56)
    /* A2ED0 80194AD0 2000BFAF */  sw         $ra, 0x20($sp)
    /* A2ED4 80194AD4 1400B1AF */  sw         $s1, 0x14($sp)
    /* A2ED8 80194AD8 1000B0AF */  sw         $s0, 0x10($sp)
    /* A2EDC 80194ADC 00006292 */  lbu        $v0, 0x0($s3)
    /* A2EE0 80194AE0 00000000 */  nop
    /* A2EE4 80194AE4 0200422C */  sltiu      $v0, $v0, 0x2
    /* A2EE8 80194AE8 09004014 */  bnez       $v0, .L80194B10
    /* A2EEC 80194AEC 2188A000 */   addu      $s1, $a1, $zero
    /* A2EF0 80194AF0 0F80043C */  lui        $a0, %hi(D_800F39CC)
    /* A2EF4 80194AF4 CC398424 */  addiu      $a0, $a0, %lo(D_800F39CC)
    /* A2EF8 80194AF8 21284002 */  addu       $a1, $s2, $zero
    /* A2EFC 80194AFC 1A80023C */  lui        $v0, %hi(D_8019DB50)
    /* A2F00 80194B00 50DB428C */  lw         $v0, %lo(D_8019DB50)($v0)
    /* A2F04 80194B04 00000000 */  nop
    /* A2F08 80194B08 09F84000 */  jalr       $v0
    /* A2F0C 80194B0C 21302002 */   addu      $a2, $s1, $zero
  .L80194B10:
    /* A2F10 80194B10 1C003026 */  addiu      $s0, $s1, 0x1C
    /* A2F14 80194B14 21200002 */  addu       $a0, $s0, $zero
    /* A2F18 80194B18 F654060C */  jal        func_801953D8
    /* A2F1C 80194B1C 21282002 */   addu      $a1, $s1, $zero
    /* A2F20 80194B20 FF00043C */  lui        $a0, (0xFFFFFF >> 16)
    /* A2F24 80194B24 FFFF8434 */  ori        $a0, $a0, (0xFFFFFF & 0xFFFF)
    /* A2F28 80194B28 21280002 */  addu       $a1, $s0, $zero
    /* A2F2C 80194B2C 40000624 */  addiu      $a2, $zero, 0x40
    /* A2F30 80194B30 00FF033C */  lui        $v1, (0xFF000000 >> 16)
    /* A2F34 80194B34 1C00228E */  lw         $v0, 0x1C($s1)
    /* A2F38 80194B38 24204402 */  and        $a0, $s2, $a0
    /* A2F3C 80194B3C 24104300 */  and        $v0, $v0, $v1
    /* A2F40 80194B40 1A80033C */  lui        $v1, %hi(D_8019DB4C)
    /* A2F44 80194B44 4CDB638C */  lw         $v1, %lo(D_8019DB4C)($v1)
    /* A2F48 80194B48 25104400 */  or         $v0, $v0, $a0
    /* A2F4C 80194B4C 1C0022AE */  sw         $v0, 0x1C($s1)
    /* A2F50 80194B50 1800648C */  lw         $a0, 0x18($v1)
    /* A2F54 80194B54 0800628C */  lw         $v0, 0x8($v1)
    /* A2F58 80194B58 00000000 */  nop
    /* A2F5C 80194B5C 09F84000 */  jalr       $v0
    /* A2F60 80194B60 21380000 */   addu      $a3, $zero, $zero
    /* A2F64 80194B64 0E006426 */  addiu      $a0, $s3, 0xE
    /* A2F68 80194B68 21282002 */  addu       $a1, $s1, $zero
    /* A2F6C 80194B6C 2240060C */  jal        func_80190088
    /* A2F70 80194B70 5C000624 */   addiu     $a2, $zero, 0x5C
    /* A2F74 80194B74 2000BF8F */  lw         $ra, 0x20($sp)
    /* A2F78 80194B78 1C00B38F */  lw         $s3, 0x1C($sp)
    /* A2F7C 80194B7C 1800B28F */  lw         $s2, 0x18($sp)
    /* A2F80 80194B80 1400B18F */  lw         $s1, 0x14($sp)
    /* A2F84 80194B84 1000B08F */  lw         $s0, 0x10($sp)
    /* A2F88 80194B88 0800E003 */  jr         $ra
    /* A2F8C 80194B8C 2800BD27 */   addiu     $sp, $sp, 0x28
endlabel func_80194AB8
