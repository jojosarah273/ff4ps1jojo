nonmatching func_80196DCC, 0xFC

glabel func_80196DCC
    /* A51CC 80196DCC 1A80023C */  lui        $v0, %hi(D_8019DB56)
    /* A51D0 80196DD0 56DB4290 */  lbu        $v0, %lo(D_8019DB56)($v0)
    /* A51D4 80196DD4 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* A51D8 80196DD8 1000B0AF */  sw         $s0, 0x10($sp)
    /* A51DC 80196DDC 21808000 */  addu       $s0, $a0, $zero
    /* A51E0 80196DE0 0200422C */  sltiu      $v0, $v0, 0x2
    /* A51E4 80196DE4 08004014 */  bnez       $v0, .L80196E08
    /* A51E8 80196DE8 1400BFAF */   sw        $ra, 0x14($sp)
    /* A51EC 80196DEC 0F80043C */  lui        $a0, %hi(D_800F39A0)
    /* A51F0 80196DF0 A0398424 */  addiu      $a0, $a0, %lo(D_800F39A0)
    /* A51F4 80196DF4 1A80023C */  lui        $v0, %hi(D_8019DB50)
    /* A51F8 80196DF8 50DB428C */  lw         $v0, %lo(D_8019DB50)($v0)
    /* A51FC 80196DFC 00000000 */  nop
    /* A5200 80196E00 09F84000 */  jalr       $v0
    /* A5204 80196E04 21280002 */   addu      $a1, $s0, $zero
  .L80196E08:
    /* A5208 80196E08 3A4A060C */  jal        func_801928E8
    /* A520C 80196E0C FFFF0424 */   addiu     $a0, $zero, -0x1
    /* A5210 80196E10 1A80033C */  lui        $v1, %hi(D_8019DC68)
    /* A5214 80196E14 68DC638C */  lw         $v1, %lo(D_8019DC68)($v1)
    /* A5218 80196E18 F0004224 */  addiu      $v0, $v0, 0xF0
    /* A521C 80196E1C 1A80013C */  lui        $at, %hi(D_8019DC90)
    /* A5220 80196E20 90DC22AC */  sw         $v0, %lo(D_8019DC90)($at)
    /* A5224 80196E24 1A80013C */  lui        $at, %hi(D_8019DC94)
    /* A5228 80196E28 94DC20AC */  sw         $zero, %lo(D_8019DC94)($at)
    /* A522C 80196E2C 0000628C */  lw         $v0, 0x0($v1)
    /* A5230 80196E30 975B0608 */  j          .L80196E5C
    /* A5234 80196E34 0001033C */   lui       $v1, (0x1000000 >> 16)
  .L80196E38:
    /* A5238 80196E38 335A060C */  jal        func_801968CC
    /* A523C 80196E3C 00000000 */   nop
    /* A5240 80196E40 1D004014 */  bnez       $v0, .L80196EB8
    /* A5244 80196E44 FFFF0224 */   addiu     $v0, $zero, -0x1
    /* A5248 80196E48 1A80023C */  lui        $v0, %hi(D_8019DC68)
    /* A524C 80196E4C 68DC428C */  lw         $v0, %lo(D_8019DC68)($v0)
    /* A5250 80196E50 00000000 */  nop
    /* A5254 80196E54 0000428C */  lw         $v0, 0x0($v0)
    /* A5258 80196E58 0001033C */  lui        $v1, (0x1000000 >> 16)
  .L80196E5C:
    /* A525C 80196E5C 24104300 */  and        $v0, $v0, $v1
    /* A5260 80196E60 F5FF4014 */  bnez       $v0, .L80196E38
    /* A5264 80196E64 00000000 */   nop
    /* A5268 80196E68 1A80023C */  lui        $v0, %hi(D_8019DC5C)
    /* A526C 80196E6C 5CDC428C */  lw         $v0, %lo(D_8019DC5C)($v0)
    /* A5270 80196E70 00000000 */  nop
    /* A5274 80196E74 0000428C */  lw         $v0, 0x0($v0)
    /* A5278 80196E78 0004033C */  lui        $v1, (0x4000000 >> 16)
    /* A527C 80196E7C 24104300 */  and        $v0, $v0, $v1
    /* A5280 80196E80 EDFF4010 */  beqz       $v0, .L80196E38
    /* A5284 80196E84 00000000 */   nop
    /* A5288 80196E88 1980053C */  lui        $a1, %hi(func_80196EC8)
    /* A528C 80196E8C C86EA524 */  addiu      $a1, $a1, %lo(func_80196EC8)
    /* A5290 80196E90 D64A060C */  jal        func_80192B58
    /* A5294 80196E94 02000424 */   addiu     $a0, $zero, 0x2
    /* A5298 80196E98 1A80023C */  lui        $v0, %hi(D_8019DB4C)
    /* A529C 80196E9C 4CDB428C */  lw         $v0, %lo(D_8019DB4C)($v0)
    /* A52A0 80196EA0 00000000 */  nop
    /* A52A4 80196EA4 1800428C */  lw         $v0, 0x18($v0)
    /* A52A8 80196EA8 00000000 */  nop
    /* A52AC 80196EAC 09F84000 */  jalr       $v0
    /* A52B0 80196EB0 21200002 */   addu      $a0, $s0, $zero
    /* A52B4 80196EB4 21100000 */  addu       $v0, $zero, $zero
  .L80196EB8:
    /* A52B8 80196EB8 1400BF8F */  lw         $ra, 0x14($sp)
    /* A52BC 80196EBC 1000B08F */  lw         $s0, 0x10($sp)
    /* A52C0 80196EC0 0800E003 */  jr         $ra
    /* A52C4 80196EC4 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80196DCC
