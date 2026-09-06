nonmatching func_80196A10, 0xA0

glabel func_80196A10
    /* A4E10 80196A10 0010033C */  lui        $v1, (0x10000007 >> 16)
    /* A4E14 80196A14 1A80023C */  lui        $v0, %hi(D_8019DC5C)
    /* A4E18 80196A18 5CDC428C */  lw         $v0, %lo(D_8019DC5C)($v0)
    /* A4E1C 80196A1C 07006334 */  ori        $v1, $v1, (0x10000007 & 0xFFFF)
    /* A4E20 80196A20 000043AC */  sw         $v1, 0x0($v0)
    /* A4E24 80196A24 1A80053C */  lui        $a1, %hi(D_8019DC58)
    /* A4E28 80196A28 58DCA58C */  lw         $a1, %lo(D_8019DC58)($a1)
    /* A4E2C 80196A2C FF00033C */  lui        $v1, (0xFFFFFF >> 16)
    /* A4E30 80196A30 0000A28C */  lw         $v0, 0x0($a1)
    /* A4E34 80196A34 FFFF6334 */  ori        $v1, $v1, (0xFFFFFF & 0xFFFF)
    /* A4E38 80196A38 24104300 */  and        $v0, $v0, $v1
    /* A4E3C 80196A3C 02000324 */  addiu      $v1, $zero, 0x2
    /* A4E40 80196A40 0F004310 */  beq        $v0, $v1, .L80196A80
    /* A4E44 80196A44 00E1033C */   lui       $v1, (0xE1001000 >> 16)
    /* A4E48 80196A48 1A80023C */  lui        $v0, %hi(D_8019DC5C)
    /* A4E4C 80196A4C 5CDC428C */  lw         $v0, %lo(D_8019DC5C)($v0)
    /* A4E50 80196A50 00000000 */  nop
    /* A4E54 80196A54 0000428C */  lw         $v0, 0x0($v0)
    /* A4E58 80196A58 00106334 */  ori        $v1, $v1, (0xE1001000 & 0xFFFF)
    /* A4E5C 80196A5C FF3F4230 */  andi       $v0, $v0, 0x3FFF
    /* A4E60 80196A60 25104300 */  or         $v0, $v0, $v1
    /* A4E64 80196A64 0000A2AC */  sw         $v0, 0x0($a1)
    /* A4E68 80196A68 1A80033C */  lui        $v1, %hi(D_8019DC58)
    /* A4E6C 80196A6C 58DC638C */  lw         $v1, %lo(D_8019DC58)($v1)
    /* A4E70 80196A70 21100000 */  addu       $v0, $zero, $zero
    /* A4E74 80196A74 0000638C */  lw         $v1, 0x0($v1)
    /* A4E78 80196A78 AA5A0608 */  j          .L80196AA8
    /* A4E7C 80196A7C 00000000 */   nop
  .L80196A80:
    /* A4E80 80196A80 08008230 */  andi       $v0, $a0, 0x8
    /* A4E84 80196A84 07004010 */  beqz       $v0, .L80196AA4
    /* A4E88 80196A88 0009043C */   lui       $a0, (0x9000001 >> 16)
    /* A4E8C 80196A8C 01008434 */  ori        $a0, $a0, (0x9000001 & 0xFFFF)
    /* A4E90 80196A90 1A80033C */  lui        $v1, %hi(D_8019DC5C)
    /* A4E94 80196A94 5CDC638C */  lw         $v1, %lo(D_8019DC5C)($v1)
    /* A4E98 80196A98 02000224 */  addiu      $v0, $zero, 0x2
    /* A4E9C 80196A9C AA5A0608 */  j          .L80196AA8
    /* A4EA0 80196AA0 000064AC */   sw        $a0, 0x0($v1)
  .L80196AA4:
    /* A4EA4 80196AA4 01000224 */  addiu      $v0, $zero, 0x1
  .L80196AA8:
    /* A4EA8 80196AA8 0800E003 */  jr         $ra
    /* A4EAC 80196AAC 00000000 */   nop
endlabel func_80196A10
