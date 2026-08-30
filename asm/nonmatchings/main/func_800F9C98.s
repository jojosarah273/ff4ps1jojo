nonmatching func_800F9C98, 0x50

glabel func_800F9C98
    /* 8098 800F9C98 00210324 */  addiu      $v1, $zero, 0x2100
    /* 809C 800F9C9C 0D80043C */  lui        $a0, %hi(D_800D0000)
    /* 80A0 800F9CA0 21106400 */  addu       $v0, $v1, $a0
  .L800F9CA4:
    /* 80A4 800F9CA4 000040A0 */  sb         $zero, %lo(D_800D0000)($v0)
    /* 80A8 800F9CA8 01006324 */  addiu      $v1, $v1, 0x1
    /* 80AC 800F9CAC FFFF6330 */  andi       $v1, $v1, 0xFFFF
    /* 80B0 800F9CB0 0022622C */  sltiu      $v0, $v1, 0x2200
    /* 80B4 800F9CB4 FBFF4014 */  bnez       $v0, .L800F9CA4
    /* 80B8 800F9CB8 21106400 */   addu      $v0, $v1, $a0
    /* 80BC 800F9CBC 00420324 */  addiu      $v1, $zero, 0x4200
    /* 80C0 800F9CC0 0D80043C */  lui        $a0, %hi(D_800D0000)
    /* 80C4 800F9CC4 21106400 */  addu       $v0, $v1, $a0
  .L800F9CC8:
    /* 80C8 800F9CC8 000040A0 */  sb         $zero, %lo(D_800D0000)($v0)
    /* 80CC 800F9CCC 01006324 */  addiu      $v1, $v1, 0x1
    /* 80D0 800F9CD0 FFFF6330 */  andi       $v1, $v1, 0xFFFF
    /* 80D4 800F9CD4 0044622C */  sltiu      $v0, $v1, 0x4400
    /* 80D8 800F9CD8 FBFF4014 */  bnez       $v0, .L800F9CC8
    /* 80DC 800F9CDC 21106400 */   addu      $v0, $v1, $a0
    /* 80E0 800F9CE0 0800E003 */  jr         $ra
    /* 80E4 800F9CE4 00000000 */   nop
endlabel func_800F9C98
