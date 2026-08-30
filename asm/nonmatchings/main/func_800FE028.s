nonmatching func_800FE028, 0xE8

glabel func_800FE028
    /* C428 800FE028 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* C42C 800FE02C 80000424 */  addiu      $a0, $zero, 0x80
    /* C430 800FE030 1400BFAF */  sw         $ra, 0x14($sp)
    /* C434 800FE034 53D9030C */  jal        func_800F654C
    /* C438 800FE038 1000B0AF */   sw        $s0, 0x10($sp)
    /* C43C 800FE03C 62E0030C */  jal        func_800F8188
    /* C440 800FE040 15210424 */   addiu     $a0, $zero, 0x2115
    /* C444 800FE044 77DC030C */  jal        func_800F71DC
    /* C448 800FE048 21200000 */   addu      $a0, $zero, $zero
    /* C44C 800FE04C 1D80103C */  lui        $s0, %hi(D_801CFD68)
  .L800FE050:
    /* C450 800FE050 7F00043C */  lui        $a0, (0x7F5800 >> 16)
    /* C454 800FE054 5800838F */  lw         $v1, %gp_rel(D_8019ED54)($gp)
    /* C458 800FE058 00588434 */  ori        $a0, $a0, (0x7F5800 & 0xFFFF)
    /* C45C 800FE05C 00006294 */  lhu        $v0, 0x0($v1)
    /* C460 800FE060 68FD0526 */  addiu      $a1, $s0, %lo(D_801CFD68)
    /* C464 800FE064 00204224 */  addiu      $v0, $v0, 0x2000
    /* C468 800FE068 40100200 */  sll        $v0, $v0, 1
    /* C46C 800FE06C 21104500 */  addu       $v0, $v0, $a1
    /* C470 800FE070 00004394 */  lhu        $v1, 0x0($v0)
    /* C474 800FE074 4400858F */  lw         $a1, %gp_rel(D_8019ED40)($gp)
    /* C478 800FE078 021A0300 */  srl        $v1, $v1, 8
    /* C47C 800FE07C 17E2030C */  jal        func_800F885C
    /* C480 800FE080 0000A3A0 */   sb        $v1, 0x0($a1)
    /* C484 800FE084 D9D8030C */  jal        func_800F6364
    /* C488 800FE088 00000000 */   nop
    /* C48C 800FE08C 56D6030C */  jal        func_800F5958
    /* C490 800FE090 00010424 */   addiu     $a0, $zero, 0x100
    /* C494 800FE094 F5D4030C */  jal        func_800F53D4
    /* C498 800FE098 00000000 */   nop
    /* C49C 800FE09C ECFF4010 */  beqz       $v0, .L800FE050
    /* C4A0 800FE0A0 00000000 */   nop
    /* C4A4 800FE0A4 77DC030C */  jal        func_800F71DC
    /* C4A8 800FE0A8 21200000 */   addu      $a0, $zero, $zero
    /* C4AC 800FE0AC 7F00043C */  lui        $a0, (0x7F5900 >> 16)
  .L800FE0B0:
    /* C4B0 800FE0B0 5800838F */  lw         $v1, %gp_rel(D_8019ED54)($gp)
    /* C4B4 800FE0B4 00598434 */  ori        $a0, $a0, (0x7F5900 & 0xFFFF)
    /* C4B8 800FE0B8 00006294 */  lhu        $v0, 0x0($v1)
    /* C4BC 800FE0BC 68FD0526 */  addiu      $a1, $s0, %lo(D_801CFD68)
    /* C4C0 800FE0C0 801E4224 */  addiu      $v0, $v0, 0x1E80
    /* C4C4 800FE0C4 40100200 */  sll        $v0, $v0, 1
    /* C4C8 800FE0C8 21104500 */  addu       $v0, $v0, $a1
    /* C4CC 800FE0CC 00004394 */  lhu        $v1, 0x0($v0)
    /* C4D0 800FE0D0 4400858F */  lw         $a1, %gp_rel(D_8019ED40)($gp)
    /* C4D4 800FE0D4 021A0300 */  srl        $v1, $v1, 8
    /* C4D8 800FE0D8 17E2030C */  jal        func_800F885C
    /* C4DC 800FE0DC 0000A3A0 */   sb        $v1, 0x0($a1)
    /* C4E0 800FE0E0 D9D8030C */  jal        func_800F6364
    /* C4E4 800FE0E4 00000000 */   nop
    /* C4E8 800FE0E8 56D6030C */  jal        func_800F5958
    /* C4EC 800FE0EC 00010424 */   addiu     $a0, $zero, 0x100
    /* C4F0 800FE0F0 F5D4030C */  jal        func_800F53D4
    /* C4F4 800FE0F4 00000000 */   nop
    /* C4F8 800FE0F8 EDFF4010 */  beqz       $v0, .L800FE0B0
    /* C4FC 800FE0FC 7F00043C */   lui       $a0, (0x7F5900 >> 16)
    /* C500 800FE100 1400BF8F */  lw         $ra, 0x14($sp)
    /* C504 800FE104 1000B08F */  lw         $s0, 0x10($sp)
    /* C508 800FE108 0800E003 */  jr         $ra
    /* C50C 800FE10C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800FE028
