nonmatching func_80197468, 0x64

glabel func_80197468
    /* A5868 80197468 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* A586C 8019746C 1000B0AF */  sw         $s0, 0x10($sp)
    /* A5870 80197470 21808000 */  addu       $s0, $a0, $zero
    /* A5874 80197474 2080043C */  lui        $a0, %hi(D_801FEBA8)
    /* A5878 80197478 A8EB848C */  lw         $a0, %lo(D_801FEBA8)($a0)
    /* A587C 8019747C 1400BFAF */  sw         $ra, 0x14($sp)
    /* A5880 80197480 335D060C */  jal        func_801974CC
    /* A5884 80197484 21280002 */   addu      $a1, $s0, $zero
    /* A5888 80197488 21204000 */  addu       $a0, $v0, $zero
    /* A588C 8019748C FFFF0224 */  addiu      $v0, $zero, -0x1
    /* A5890 80197490 09008210 */  beq        $a0, $v0, .L801974B8
    /* A5894 80197494 80200400 */   sll       $a0, $a0, 2
    /* A5898 80197498 2080033C */  lui        $v1, %hi(D_801FEBA8)
    /* A589C 8019749C A8EB638C */  lw         $v1, %lo(D_801FEBA8)($v1)
    /* A58A0 801974A0 00000000 */  nop
    /* A58A4 801974A4 21186400 */  addu       $v1, $v1, $a0
    /* A58A8 801974A8 2080013C */  lui        $at, %hi(D_801FEBA8)
    /* A58AC 801974AC A8EB23AC */  sw         $v1, %lo(D_801FEBA8)($at)
    /* A58B0 801974B0 2F5D0608 */  j          .L801974BC
    /* A58B4 801974B4 21100002 */   addu      $v0, $s0, $zero
  .L801974B8:
    /* A58B8 801974B8 21100000 */  addu       $v0, $zero, $zero
  .L801974BC:
    /* A58BC 801974BC 1400BF8F */  lw         $ra, 0x14($sp)
    /* A58C0 801974C0 1000B08F */  lw         $s0, 0x10($sp)
    /* A58C4 801974C4 0800E003 */  jr         $ra
    /* A58C8 801974C8 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80197468
