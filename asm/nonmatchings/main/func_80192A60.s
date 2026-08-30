nonmatching func_80192A60, 0x98

glabel func_80192A60
    /* A0E60 80192A60 E0FFBD27 */  addiu      $sp, $sp, -0x20
    /* A0E64 80192A64 C02B0500 */  sll        $a1, $a1, 15
    /* A0E68 80192A68 1000A5AF */  sw         $a1, 0x10($sp)
    /* A0E6C 80192A6C 1A80023C */  lui        $v0, %hi(D_8019CF34)
    /* A0E70 80192A70 34CF428C */  lw         $v0, %lo(D_8019CF34)($v0)
    /* A0E74 80192A74 00000000 */  nop
    /* A0E78 80192A78 2A104400 */  slt        $v0, $v0, $a0
    /* A0E7C 80192A7C 1A004010 */  beqz       $v0, .L80192AE8
    /* A0E80 80192A80 1800BFAF */   sw        $ra, 0x18($sp)
    /* A0E84 80192A84 FFFF0324 */  addiu      $v1, $zero, -0x1
  .L80192A88:
    /* A0E88 80192A88 1000A28F */  lw         $v0, 0x10($sp)
    /* A0E8C 80192A8C 00000000 */  nop
    /* A0E90 80192A90 FFFF4224 */  addiu      $v0, $v0, -0x1
    /* A0E94 80192A94 1000A2AF */  sw         $v0, 0x10($sp)
    /* A0E98 80192A98 1000A28F */  lw         $v0, 0x10($sp)
    /* A0E9C 80192A9C 00000000 */  nop
    /* A0EA0 80192AA0 0B004314 */  bne        $v0, $v1, .L80192AD0
    /* A0EA4 80192AA4 00000000 */   nop
    /* A0EA8 80192AA8 0F80043C */  lui        $a0, %hi(D_800F36D0)
    /* A0EAC 80192AAC 8845060C */  jal        func_80191620
    /* A0EB0 80192AB0 D0368424 */   addiu     $a0, $a0, %lo(D_800F36D0)
    /* A0EB4 80192AB4 E65D060C */  jal        func_80197798
    /* A0EB8 80192AB8 21200000 */   addu      $a0, $zero, $zero
    /* A0EBC 80192ABC 03000424 */  addiu      $a0, $zero, 0x3
    /* A0EC0 80192AC0 EE5D060C */  jal        func_801977B8
    /* A0EC4 80192AC4 21280000 */   addu      $a1, $zero, $zero
    /* A0EC8 80192AC8 BA4A0608 */  j          .L80192AE8
    /* A0ECC 80192ACC 00000000 */   nop
  .L80192AD0:
    /* A0ED0 80192AD0 1A80023C */  lui        $v0, %hi(D_8019CF34)
    /* A0ED4 80192AD4 34CF428C */  lw         $v0, %lo(D_8019CF34)($v0)
    /* A0ED8 80192AD8 00000000 */  nop
    /* A0EDC 80192ADC 2A104400 */  slt        $v0, $v0, $a0
    /* A0EE0 80192AE0 E9FF4014 */  bnez       $v0, .L80192A88
    /* A0EE4 80192AE4 00000000 */   nop
  .L80192AE8:
    /* A0EE8 80192AE8 1800BF8F */  lw         $ra, 0x18($sp)
    /* A0EEC 80192AEC 2000BD27 */  addiu      $sp, $sp, 0x20
    /* A0EF0 80192AF0 0800E003 */  jr         $ra
    /* A0EF4 80192AF4 00000000 */   nop
endlabel func_80192A60
