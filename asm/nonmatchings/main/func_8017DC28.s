nonmatching func_8017DC28, 0xE0

glabel func_8017DC28
    /* 8C028 8017DC28 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 8C02C 8017DC2C 1000BFAF */  sw         $ra, 0x10($sp)
    /* 8C030 8017DC30 1A80023C */  lui        $v0, %hi(D_8019F4A8)
    /* 8C034 8017DC34 A8F44224 */  addiu      $v0, $v0, %lo(D_8019F4A8)
    /* 8C038 8017DC38 08004224 */  addiu      $v0, $v0, 0x8
    /* 8C03C 8017DC3C 1A80033C */  lui        $v1, %hi(D_8019F628)
    /* 8C040 8017DC40 28F66324 */  addiu      $v1, $v1, %lo(D_8019F628)
    /* 8C044 8017DC44 08006324 */  addiu      $v1, $v1, 0x8
    /* 8C048 8017DC48 1F000824 */  addiu      $t0, $zero, 0x1F
  .L8017DC4C:
    /* 8C04C 8017DC4C 000040AC */  sw         $zero, 0x0($v0)
    /* 8C050 8017DC50 0C004224 */  addiu      $v0, $v0, 0xC
    /* 8C054 8017DC54 000060AC */  sw         $zero, 0x0($v1)
    /* 8C058 8017DC58 FFFF0825 */  addiu      $t0, $t0, -0x1
    /* 8C05C 8017DC5C FBFF0105 */  bgez       $t0, .L8017DC4C
    /* 8C060 8017DC60 0C006324 */   addiu     $v1, $v1, 0xC
    /* 8C064 8017DC64 03008430 */  andi       $a0, $a0, 0x3
    /* 8C068 8017DC68 01000224 */  addiu      $v0, $zero, 0x1
    /* 8C06C 8017DC6C 13008210 */  beq        $a0, $v0, .L8017DCBC
    /* 8C070 8017DC70 02008228 */   slti      $v0, $a0, 0x2
    /* 8C074 8017DC74 05004010 */  beqz       $v0, .L8017DC8C
    /* 8C078 8017DC78 00000000 */   nop
    /* 8C07C 8017DC7C 0A008010 */  beqz       $a0, .L8017DCA8
    /* 8C080 8017DC80 2120A000 */   addu      $a0, $a1, $zero
    /* 8C084 8017DC84 3EF70508 */  j          .L8017DCF8
    /* 8C088 8017DC88 00000000 */   nop
  .L8017DC8C:
    /* 8C08C 8017DC8C 02000224 */  addiu      $v0, $zero, 0x2
    /* 8C090 8017DC90 10008210 */  beq        $a0, $v0, .L8017DCD4
    /* 8C094 8017DC94 03000224 */   addiu     $v0, $zero, 0x3
    /* 8C098 8017DC98 14008210 */  beq        $a0, $v0, .L8017DCEC
    /* 8C09C 8017DC9C 2120A000 */   addu      $a0, $a1, $zero
    /* 8C0A0 8017DCA0 3EF70508 */  j          .L8017DCF8
    /* 8C0A4 8017DCA4 00000000 */   nop
  .L8017DCA8:
    /* 8C0A8 8017DCA8 2128C000 */  addu       $a1, $a2, $zero
    /* 8C0AC 8017DCAC F6F5050C */  jal        func_8017D7D8
    /* 8C0B0 8017DCB0 2130E000 */   addu      $a2, $a3, $zero
    /* 8C0B4 8017DCB4 3EF70508 */  j          .L8017DCF8
    /* 8C0B8 8017DCB8 00000000 */   nop
  .L8017DCBC:
    /* 8C0BC 8017DCBC 2120A000 */  addu       $a0, $a1, $zero
    /* 8C0C0 8017DCC0 2128C000 */  addu       $a1, $a2, $zero
    /* 8C0C4 8017DCC4 42F7050C */  jal        func_8017DD08
    /* 8C0C8 8017DCC8 2130E000 */   addu      $a2, $a3, $zero
    /* 8C0CC 8017DCCC 3EF70508 */  j          .L8017DCF8
    /* 8C0D0 8017DCD0 00000000 */   nop
  .L8017DCD4:
    /* 8C0D4 8017DCD4 2120A000 */  addu       $a0, $a1, $zero
    /* 8C0D8 8017DCD8 2128C000 */  addu       $a1, $a2, $zero
    /* 8C0DC 8017DCDC 60F6050C */  jal        func_8017D980
    /* 8C0E0 8017DCE0 2130E000 */   addu      $a2, $a3, $zero
    /* 8C0E4 8017DCE4 3EF70508 */  j          .L8017DCF8
    /* 8C0E8 8017DCE8 00000000 */   nop
  .L8017DCEC:
    /* 8C0EC 8017DCEC 2128C000 */  addu       $a1, $a2, $zero
    /* 8C0F0 8017DCF0 C8F7050C */  jal        func_8017DF20
    /* 8C0F4 8017DCF4 2130E000 */   addu      $a2, $a3, $zero
  .L8017DCF8:
    /* 8C0F8 8017DCF8 1000BF8F */  lw         $ra, 0x10($sp)
    /* 8C0FC 8017DCFC 00000000 */  nop
    /* 8C100 8017DD00 0800E003 */  jr         $ra
    /* 8C104 8017DD04 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8017DC28
