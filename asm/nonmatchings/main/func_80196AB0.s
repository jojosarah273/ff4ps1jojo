nonmatching func_80196AB0, 0xEC

glabel func_80196AB0
    /* A4EB0 80196AB0 E0FFBD27 */  addiu      $sp, $sp, -0x20
    /* A4EB4 80196AB4 1000B0AF */  sw         $s0, 0x10($sp)
    /* A4EB8 80196AB8 21808000 */  addu       $s0, $a0, $zero
    /* A4EBC 80196ABC 1400B1AF */  sw         $s1, 0x14($sp)
    /* A4EC0 80196AC0 2188A000 */  addu       $s1, $a1, $zero
    /* A4EC4 80196AC4 0F80043C */  lui        $a0, %hi(D_800F3A34)
    /* A4EC8 80196AC8 343A8424 */  addiu      $a0, $a0, %lo(D_800F3A34)
    /* A4ECC 80196ACC 1800BFAF */  sw         $ra, 0x18($sp)
    /* A4ED0 80196AD0 FF50060C */  jal        func_801943FC
    /* A4ED4 80196AD4 21280002 */   addu      $a1, $s0, $zero
    /* A4ED8 80196AD8 3A4A060C */  jal        func_801928E8
    /* A4EDC 80196ADC FFFF0424 */   addiu     $a0, $zero, -0x1
    /* A4EE0 80196AE0 1A80033C */  lui        $v1, %hi(D_8019DC68)
    /* A4EE4 80196AE4 68DC638C */  lw         $v1, %lo(D_8019DC68)($v1)
    /* A4EE8 80196AE8 F0004224 */  addiu      $v0, $v0, 0xF0
    /* A4EEC 80196AEC 1A80013C */  lui        $at, %hi(D_8019DC90)
    /* A4EF0 80196AF0 90DC22AC */  sw         $v0, %lo(D_8019DC90)($at)
    /* A4EF4 80196AF4 1A80013C */  lui        $at, %hi(D_8019DC94)
    /* A4EF8 80196AF8 94DC20AC */  sw         $zero, %lo(D_8019DC94)($at)
    /* A4EFC 80196AFC 0000628C */  lw         $v0, 0x0($v1)
    /* A4F00 80196B00 CB5A0608 */  j          .L80196B2C
    /* A4F04 80196B04 0001033C */   lui       $v1, (0x1000000 >> 16)
  .L80196B08:
    /* A4F08 80196B08 335A060C */  jal        func_801968CC
    /* A4F0C 80196B0C 00000000 */   nop
    /* A4F10 80196B10 1D004014 */  bnez       $v0, .L80196B88
    /* A4F14 80196B14 FFFF0224 */   addiu     $v0, $zero, -0x1
    /* A4F18 80196B18 1A80023C */  lui        $v0, %hi(D_8019DC68)
    /* A4F1C 80196B1C 68DC428C */  lw         $v0, %lo(D_8019DC68)($v0)
    /* A4F20 80196B20 00000000 */  nop
    /* A4F24 80196B24 0000428C */  lw         $v0, 0x0($v0)
    /* A4F28 80196B28 0001033C */  lui        $v1, (0x1000000 >> 16)
  .L80196B2C:
    /* A4F2C 80196B2C 24104300 */  and        $v0, $v0, $v1
    /* A4F30 80196B30 F5FF4014 */  bnez       $v0, .L80196B08
    /* A4F34 80196B34 00000000 */   nop
    /* A4F38 80196B38 1A80023C */  lui        $v0, %hi(D_8019DC5C)
    /* A4F3C 80196B3C 5CDC428C */  lw         $v0, %lo(D_8019DC5C)($v0)
    /* A4F40 80196B40 00000000 */  nop
    /* A4F44 80196B44 0000428C */  lw         $v0, 0x0($v0)
    /* A4F48 80196B48 0004033C */  lui        $v1, (0x4000000 >> 16)
    /* A4F4C 80196B4C 24104300 */  and        $v0, $v0, $v1
    /* A4F50 80196B50 EDFF4010 */  beqz       $v0, .L80196B08
    /* A4F54 80196B54 00000000 */   nop
    /* A4F58 80196B58 1980053C */  lui        $a1, %hi(func_80196EC8)
    /* A4F5C 80196B5C C86EA524 */  addiu      $a1, $a1, %lo(func_80196EC8)
    /* A4F60 80196B60 D64A060C */  jal        func_80192B58
    /* A4F64 80196B64 02000424 */   addiu     $a0, $zero, 0x2
    /* A4F68 80196B68 1A80023C */  lui        $v0, %hi(D_8019DB4C)
    /* A4F6C 80196B6C 4CDB428C */  lw         $v0, %lo(D_8019DB4C)($v0)
    /* A4F70 80196B70 21200002 */  addu       $a0, $s0, $zero
    /* A4F74 80196B74 2000428C */  lw         $v0, 0x20($v0)
    /* A4F78 80196B78 00000000 */  nop
    /* A4F7C 80196B7C 09F84000 */  jalr       $v0
    /* A4F80 80196B80 21282002 */   addu      $a1, $s1, $zero
    /* A4F84 80196B84 21100000 */  addu       $v0, $zero, $zero
  .L80196B88:
    /* A4F88 80196B88 1800BF8F */  lw         $ra, 0x18($sp)
    /* A4F8C 80196B8C 1400B18F */  lw         $s1, 0x14($sp)
    /* A4F90 80196B90 1000B08F */  lw         $s0, 0x10($sp)
    /* A4F94 80196B94 0800E003 */  jr         $ra
    /* A4F98 80196B98 2000BD27 */   addiu     $sp, $sp, 0x20
endlabel func_80196AB0
