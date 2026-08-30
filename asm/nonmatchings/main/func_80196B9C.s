nonmatching func_80196B9C, 0xEC

glabel func_80196B9C
    /* A4F9C 80196B9C E0FFBD27 */  addiu      $sp, $sp, -0x20
    /* A4FA0 80196BA0 1000B0AF */  sw         $s0, 0x10($sp)
    /* A4FA4 80196BA4 21808000 */  addu       $s0, $a0, $zero
    /* A4FA8 80196BA8 1400B1AF */  sw         $s1, 0x14($sp)
    /* A4FAC 80196BAC 2188A000 */  addu       $s1, $a1, $zero
    /* A4FB0 80196BB0 0F80043C */  lui        $a0, %hi(D_800F3958)
    /* A4FB4 80196BB4 58398424 */  addiu      $a0, $a0, %lo(D_800F3958)
    /* A4FB8 80196BB8 1800BFAF */  sw         $ra, 0x18($sp)
    /* A4FBC 80196BBC FF50060C */  jal        func_801943FC
    /* A4FC0 80196BC0 21280002 */   addu      $a1, $s0, $zero
    /* A4FC4 80196BC4 3A4A060C */  jal        func_801928E8
    /* A4FC8 80196BC8 FFFF0424 */   addiu     $a0, $zero, -0x1
    /* A4FCC 80196BCC 1A80033C */  lui        $v1, %hi(D_8019DC68)
    /* A4FD0 80196BD0 68DC638C */  lw         $v1, %lo(D_8019DC68)($v1)
    /* A4FD4 80196BD4 F0004224 */  addiu      $v0, $v0, 0xF0
    /* A4FD8 80196BD8 1A80013C */  lui        $at, %hi(D_8019DC90)
    /* A4FDC 80196BDC 90DC22AC */  sw         $v0, %lo(D_8019DC90)($at)
    /* A4FE0 80196BE0 1A80013C */  lui        $at, %hi(D_8019DC94)
    /* A4FE4 80196BE4 94DC20AC */  sw         $zero, %lo(D_8019DC94)($at)
    /* A4FE8 80196BE8 0000628C */  lw         $v0, 0x0($v1)
    /* A4FEC 80196BEC 065B0608 */  j          .L80196C18
    /* A4FF0 80196BF0 0001033C */   lui       $v1, (0x1000000 >> 16)
  .L80196BF4:
    /* A4FF4 80196BF4 335A060C */  jal        func_801968CC
    /* A4FF8 80196BF8 00000000 */   nop
    /* A4FFC 80196BFC 1D004014 */  bnez       $v0, .L80196C74
    /* A5000 80196C00 FFFF0224 */   addiu     $v0, $zero, -0x1
    /* A5004 80196C04 1A80023C */  lui        $v0, %hi(D_8019DC68)
    /* A5008 80196C08 68DC428C */  lw         $v0, %lo(D_8019DC68)($v0)
    /* A500C 80196C0C 00000000 */  nop
    /* A5010 80196C10 0000428C */  lw         $v0, 0x0($v0)
    /* A5014 80196C14 0001033C */  lui        $v1, (0x1000000 >> 16)
  .L80196C18:
    /* A5018 80196C18 24104300 */  and        $v0, $v0, $v1
    /* A501C 80196C1C F5FF4014 */  bnez       $v0, .L80196BF4
    /* A5020 80196C20 00000000 */   nop
    /* A5024 80196C24 1A80023C */  lui        $v0, %hi(D_8019DC5C)
    /* A5028 80196C28 5CDC428C */  lw         $v0, %lo(D_8019DC5C)($v0)
    /* A502C 80196C2C 00000000 */  nop
    /* A5030 80196C30 0000428C */  lw         $v0, 0x0($v0)
    /* A5034 80196C34 0004033C */  lui        $v1, (0x4000000 >> 16)
    /* A5038 80196C38 24104300 */  and        $v0, $v0, $v1
    /* A503C 80196C3C EDFF4010 */  beqz       $v0, .L80196BF4
    /* A5040 80196C40 00000000 */   nop
    /* A5044 80196C44 1980053C */  lui        $a1, %hi(func_80196EC8)
    /* A5048 80196C48 C86EA524 */  addiu      $a1, $a1, %lo(func_80196EC8)
    /* A504C 80196C4C D64A060C */  jal        func_80192B58
    /* A5050 80196C50 02000424 */   addiu     $a0, $zero, 0x2
    /* A5054 80196C54 1A80023C */  lui        $v0, %hi(D_8019DB4C)
    /* A5058 80196C58 4CDB428C */  lw         $v0, %lo(D_8019DB4C)($v0)
    /* A505C 80196C5C 21200002 */  addu       $a0, $s0, $zero
    /* A5060 80196C60 1C00428C */  lw         $v0, 0x1C($v0)
    /* A5064 80196C64 00000000 */  nop
    /* A5068 80196C68 09F84000 */  jalr       $v0
    /* A506C 80196C6C 21282002 */   addu      $a1, $s1, $zero
    /* A5070 80196C70 21100000 */  addu       $v0, $zero, $zero
  .L80196C74:
    /* A5074 80196C74 1800BF8F */  lw         $ra, 0x18($sp)
    /* A5078 80196C78 1400B18F */  lw         $s1, 0x14($sp)
    /* A507C 80196C7C 1000B08F */  lw         $s0, 0x10($sp)
    /* A5080 80196C80 0800E003 */  jr         $ra
    /* A5084 80196C84 2000BD27 */   addiu     $sp, $sp, 0x20
endlabel func_80196B9C
