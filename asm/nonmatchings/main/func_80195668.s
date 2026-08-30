nonmatching func_80195668, 0x98

glabel func_80195668
    /* A3A68 80195668 00140400 */  sll        $v0, $a0, 16
    /* A3A6C 8019566C 03340200 */  sra        $a2, $v0, 16
    /* A3A70 80195670 0B00C004 */  bltz       $a2, .L801956A0
    /* A3A74 80195674 21100000 */   addu      $v0, $zero, $zero
    /* A3A78 80195678 1A80023C */  lui        $v0, %hi(D_8019DB58)
    /* A3A7C 8019567C 58DB4284 */  lh         $v0, %lo(D_8019DB58)($v0)
    /* A3A80 80195680 00000000 */  nop
    /* A3A84 80195684 FFFF4224 */  addiu      $v0, $v0, -0x1
    /* A3A88 80195688 2A104600 */  slt        $v0, $v0, $a2
    /* A3A8C 8019568C 1A80063C */  lui        $a2, %hi(D_8019DB58)
    /* A3A90 80195690 58DBC694 */  lhu        $a2, %lo(D_8019DB58)($a2)
    /* A3A94 80195694 02004014 */  bnez       $v0, .L801956A0
    /* A3A98 80195698 FFFFC224 */   addiu     $v0, $a2, -0x1
    /* A3A9C 8019569C 21108000 */  addu       $v0, $a0, $zero
  .L801956A0:
    /* A3AA0 801956A0 21204000 */  addu       $a0, $v0, $zero
    /* A3AA4 801956A4 00140500 */  sll        $v0, $a1, 16
    /* A3AA8 801956A8 03340200 */  sra        $a2, $v0, 16
    /* A3AAC 801956AC 0C00C004 */  bltz       $a2, .L801956E0
    /* A3AB0 801956B0 00000000 */   nop
    /* A3AB4 801956B4 1A80023C */  lui        $v0, %hi(D_8019DB5A)
    /* A3AB8 801956B8 5ADB4284 */  lh         $v0, %lo(D_8019DB5A)($v0)
    /* A3ABC 801956BC 00000000 */  nop
    /* A3AC0 801956C0 FFFF4224 */  addiu      $v0, $v0, -0x1
    /* A3AC4 801956C4 2A104600 */  slt        $v0, $v0, $a2
    /* A3AC8 801956C8 1A80063C */  lui        $a2, %hi(D_8019DB5A)
    /* A3ACC 801956CC 5ADBC694 */  lhu        $a2, %lo(D_8019DB5A)($a2)
    /* A3AD0 801956D0 05004010 */  beqz       $v0, .L801956E8
    /* A3AD4 801956D4 FF03A330 */   andi      $v1, $a1, 0x3FF
    /* A3AD8 801956D8 B9550608 */  j          .L801956E4
    /* A3ADC 801956DC FFFFC524 */   addiu     $a1, $a2, -0x1
  .L801956E0:
    /* A3AE0 801956E0 21280000 */  addu       $a1, $zero, $zero
  .L801956E4:
    /* A3AE4 801956E4 FF03A330 */  andi       $v1, $a1, 0x3FF
  .L801956E8:
    /* A3AE8 801956E8 801A0300 */  sll        $v1, $v1, 10
    /* A3AEC 801956EC FF038230 */  andi       $v0, $a0, 0x3FF
    /* A3AF0 801956F0 00E3043C */  lui        $a0, (0xE3000000 >> 16)
    /* A3AF4 801956F4 25104400 */  or         $v0, $v0, $a0
    /* A3AF8 801956F8 0800E003 */  jr         $ra
    /* A3AFC 801956FC 25106200 */   or        $v0, $v1, $v0
endlabel func_80195668
