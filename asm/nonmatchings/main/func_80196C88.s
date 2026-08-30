nonmatching func_80196C88, 0x144

glabel func_80196C88
    /* A5088 80196C88 E0FFBD27 */  addiu      $sp, $sp, -0x20
    /* A508C 80196C8C 1000B0AF */  sw         $s0, 0x10($sp)
    /* A5090 80196C90 21808000 */  addu       $s0, $a0, $zero
    /* A5094 80196C94 1800B2AF */  sw         $s2, 0x18($sp)
    /* A5098 80196C98 2190A000 */  addu       $s2, $a1, $zero
    /* A509C 80196C9C 1400B1AF */  sw         $s1, 0x14($sp)
    /* A50A0 80196CA0 2188C000 */  addu       $s1, $a2, $zero
    /* A50A4 80196CA4 0F80043C */  lui        $a0, %hi(D_800F3964)
    /* A50A8 80196CA8 64398424 */  addiu      $a0, $a0, %lo(D_800F3964)
    /* A50AC 80196CAC 1C00BFAF */  sw         $ra, 0x1C($sp)
    /* A50B0 80196CB0 FF50060C */  jal        func_801943FC
    /* A50B4 80196CB4 21280002 */   addu      $a1, $s0, $zero
    /* A50B8 80196CB8 3A4A060C */  jal        func_801928E8
    /* A50BC 80196CBC FFFF0424 */   addiu     $a0, $zero, -0x1
    /* A50C0 80196CC0 1A80033C */  lui        $v1, %hi(D_8019DC68)
    /* A50C4 80196CC4 68DC638C */  lw         $v1, %lo(D_8019DC68)($v1)
    /* A50C8 80196CC8 F0004224 */  addiu      $v0, $v0, 0xF0
    /* A50CC 80196CCC 1A80013C */  lui        $at, %hi(D_8019DC90)
    /* A50D0 80196CD0 90DC22AC */  sw         $v0, %lo(D_8019DC90)($at)
    /* A50D4 80196CD4 1A80013C */  lui        $at, %hi(D_8019DC94)
    /* A50D8 80196CD8 94DC20AC */  sw         $zero, %lo(D_8019DC94)($at)
    /* A50DC 80196CDC 0000628C */  lw         $v0, 0x0($v1)
    /* A50E0 80196CE0 435B0608 */  j          .L80196D0C
    /* A50E4 80196CE4 0001033C */   lui       $v1, (0x1000000 >> 16)
  .L80196CE8:
    /* A50E8 80196CE8 335A060C */  jal        func_801968CC
    /* A50EC 80196CEC 00000000 */   nop
    /* A50F0 80196CF0 30004014 */  bnez       $v0, .L80196DB4
    /* A50F4 80196CF4 FFFF0224 */   addiu     $v0, $zero, -0x1
    /* A50F8 80196CF8 1A80023C */  lui        $v0, %hi(D_8019DC68)
    /* A50FC 80196CFC 68DC428C */  lw         $v0, %lo(D_8019DC68)($v0)
    /* A5100 80196D00 00000000 */  nop
    /* A5104 80196D04 0000428C */  lw         $v0, 0x0($v0)
    /* A5108 80196D08 0001033C */  lui        $v1, (0x1000000 >> 16)
  .L80196D0C:
    /* A510C 80196D0C 24104300 */  and        $v0, $v0, $v1
    /* A5110 80196D10 F5FF4014 */  bnez       $v0, .L80196CE8
    /* A5114 80196D14 00000000 */   nop
    /* A5118 80196D18 1A80023C */  lui        $v0, %hi(D_8019DC5C)
    /* A511C 80196D1C 5CDC428C */  lw         $v0, %lo(D_8019DC5C)($v0)
    /* A5120 80196D20 00000000 */  nop
    /* A5124 80196D24 0000428C */  lw         $v0, 0x0($v0)
    /* A5128 80196D28 0004033C */  lui        $v1, (0x4000000 >> 16)
    /* A512C 80196D2C 24104300 */  and        $v0, $v0, $v1
    /* A5130 80196D30 EDFF4010 */  beqz       $v0, .L80196CE8
    /* A5134 80196D34 00000000 */   nop
    /* A5138 80196D38 1980053C */  lui        $a1, %hi(func_80196EC8)
    /* A513C 80196D3C C86EA524 */  addiu      $a1, $a1, %lo(func_80196EC8)
    /* A5140 80196D40 D64A060C */  jal        func_80192B58
    /* A5144 80196D44 02000424 */   addiu     $a0, $zero, 0x2
    /* A5148 80196D48 04000286 */  lh         $v0, 0x4($s0)
    /* A514C 80196D4C 00000000 */  nop
    /* A5150 80196D50 18004010 */  beqz       $v0, .L80196DB4
    /* A5154 80196D54 FFFF0224 */   addiu     $v0, $zero, -0x1
    /* A5158 80196D58 06000286 */  lh         $v0, 0x6($s0)
    /* A515C 80196D5C 00000000 */  nop
    /* A5160 80196D60 03004014 */  bnez       $v0, .L80196D70
    /* A5164 80196D64 00141100 */   sll       $v0, $s1, 16
    /* A5168 80196D68 6D5B0608 */  j          .L80196DB4
    /* A516C 80196D6C FFFF0224 */   addiu     $v0, $zero, -0x1
  .L80196D70:
    /* A5170 80196D70 FFFF4332 */  andi       $v1, $s2, 0xFFFF
    /* A5174 80196D74 25104300 */  or         $v0, $v0, $v1
    /* A5178 80196D78 0000058E */  lw         $a1, 0x0($s0)
    /* A517C 80196D7C 1A80033C */  lui        $v1, %hi(D_8019DB4C)
    /* A5180 80196D80 4CDB638C */  lw         $v1, %lo(D_8019DB4C)($v1)
    /* A5184 80196D84 1A80043C */  lui        $a0, %hi(D_8019DBF4)
    /* A5188 80196D88 F4DB8424 */  addiu      $a0, $a0, %lo(D_8019DBF4)
    /* A518C 80196D8C 040082AC */  sw         $v0, 0x4($a0)
    /* A5190 80196D90 000085AC */  sw         $a1, 0x0($a0)
    /* A5194 80196D94 0400028E */  lw         $v0, 0x4($s0)
    /* A5198 80196D98 00000000 */  nop
    /* A519C 80196D9C 080082AC */  sw         $v0, 0x8($a0)
    /* A51A0 80196DA0 1800628C */  lw         $v0, 0x18($v1)
    /* A51A4 80196DA4 00000000 */  nop
    /* A51A8 80196DA8 09F84000 */  jalr       $v0
    /* A51AC 80196DAC F8FF8424 */   addiu     $a0, $a0, -0x8
    /* A51B0 80196DB0 21100000 */  addu       $v0, $zero, $zero
  .L80196DB4:
    /* A51B4 80196DB4 1C00BF8F */  lw         $ra, 0x1C($sp)
    /* A51B8 80196DB8 1800B28F */  lw         $s2, 0x18($sp)
    /* A51BC 80196DBC 1400B18F */  lw         $s1, 0x14($sp)
    /* A51C0 80196DC0 1000B08F */  lw         $s0, 0x10($sp)
    /* A51C4 80196DC4 0800E003 */  jr         $ra
    /* A51C8 80196DC8 2000BD27 */   addiu     $sp, $sp, 0x20
endlabel func_80196C88
