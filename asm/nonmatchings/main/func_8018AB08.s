nonmatching func_8018AB08, 0xA4

glabel func_8018AB08
    /* 98F08 8018AB08 1A80023C */  lui        $v0, %hi(D_8019B138)
    /* 98F0C 8018AB0C 38B1428C */  lw         $v0, %lo(D_8019B138)($v0)
    /* 98F10 8018AB10 00000000 */  nop
    /* 98F14 8018AB14 10004010 */  beqz       $v0, .L8018AB58
    /* 98F18 8018AB18 21308000 */   addu      $a2, $a0, $zero
    /* 98F1C 8018AB1C 1A80043C */  lui        $a0, %hi(D_8019B140)
    /* 98F20 8018AB20 40B1848C */  lw         $a0, %lo(D_8019B140)($a0)
    /* 98F24 8018AB24 00000000 */  nop
    /* 98F28 8018AB28 1B00A400 */  divu       $zero, $a1, $a0
    /* 98F2C 8018AB2C 02008014 */  bnez       $a0, .L8018AB38
    /* 98F30 8018AB30 00000000 */   nop
    /* 98F34 8018AB34 0D000700 */  break      7
  .L8018AB38:
    /* 98F38 8018AB38 10100000 */  mfhi       $v0
    /* 98F3C 8018AB3C 06004010 */  beqz       $v0, .L8018AB58
    /* 98F40 8018AB40 00000000 */   nop
    /* 98F44 8018AB44 1A80023C */  lui        $v0, %hi(D_8019B144)
    /* 98F48 8018AB48 44B1428C */  lw         $v0, %lo(D_8019B144)($v0)
    /* 98F4C 8018AB4C 2128A400 */  addu       $a1, $a1, $a0
    /* 98F50 8018AB50 27100200 */  nor        $v0, $zero, $v0
    /* 98F54 8018AB54 2428A200 */  and        $a1, $a1, $v0
  .L8018AB58:
    /* 98F58 8018AB58 1A80023C */  lui        $v0, %hi(D_8019B13C)
    /* 98F5C 8018AB5C 3CB1428C */  lw         $v0, %lo(D_8019B13C)($v0)
    /* 98F60 8018AB60 00000000 */  nop
    /* 98F64 8018AB64 06384500 */  srlv       $a3, $a1, $v0
    /* 98F68 8018AB68 FEFF0224 */  addiu      $v0, $zero, -0x2
    /* 98F6C 8018AB6C 0600C210 */  beq        $a2, $v0, .L8018AB88
    /* 98F70 8018AB70 2118E000 */   addu      $v1, $a3, $zero
    /* 98F74 8018AB74 FFFF0224 */  addiu      $v0, $zero, -0x1
    /* 98F78 8018AB78 0500C214 */  bne        $a2, $v0, .L8018AB90
    /* 98F7C 8018AB7C 2110A000 */   addu      $v0, $a1, $zero
    /* 98F80 8018AB80 E92A0608 */  j          .L8018ABA4
    /* 98F84 8018AB84 FFFF6230 */   andi      $v0, $v1, 0xFFFF
  .L8018AB88:
    /* 98F88 8018AB88 E92A0608 */  j          .L8018ABA4
    /* 98F8C 8018AB8C 2110A000 */   addu      $v0, $a1, $zero
  .L8018AB90:
    /* 98F90 8018AB90 1A80043C */  lui        $a0, %hi(D_8019B114)
    /* 98F94 8018AB94 14B1848C */  lw         $a0, %lo(D_8019B114)($a0)
    /* 98F98 8018AB98 40180600 */  sll        $v1, $a2, 1
    /* 98F9C 8018AB9C 21186400 */  addu       $v1, $v1, $a0
    /* 98FA0 8018ABA0 000067A4 */  sh         $a3, 0x0($v1)
  .L8018ABA4:
    /* 98FA4 8018ABA4 0800E003 */  jr         $ra
    /* 98FA8 8018ABA8 00000000 */   nop
endlabel func_8018AB08
