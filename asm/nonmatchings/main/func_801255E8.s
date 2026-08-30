nonmatching func_801255E8, 0x88

glabel func_801255E8
    /* 339E8 801255E8 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 339EC 801255EC 1000BFAF */  sw         $ra, 0x10($sp)
    /* 339F0 801255F0 77DC030C */  jal        func_800F71DC
    /* 339F4 801255F4 0A000424 */   addiu     $a0, $zero, 0xA
    /* 339F8 801255F8 91E5030C */  jal        func_800F9644
    /* 339FC 801255FC 20000424 */   addiu     $a0, $zero, 0x20
  .L80125600:
    /* 33A00 80125600 56D9030C */  jal        func_800F6558
    /* 33A04 80125604 FFF00434 */   ori       $a0, $zero, 0xF0FF
    /* 33A08 80125608 75E2030C */  jal        func_800F89D4
    /* 33A0C 8012560C 21200000 */   addu      $a0, $zero, $zero
    /* 33A10 80125610 56D9030C */  jal        func_800F6558
    /* 33A14 80125614 00300424 */   addiu     $a0, $zero, 0x3000
    /* 33A18 80125618 75E2030C */  jal        func_800F89D4
    /* 33A1C 8012561C 02000424 */   addiu     $a0, $zero, 0x2
    /* 33A20 80125620 EFD8030C */  jal        func_800F63BC
    /* 33A24 80125624 00000000 */   nop
    /* 33A28 80125628 EFD8030C */  jal        func_800F63BC
    /* 33A2C 8012562C 00000000 */   nop
    /* 33A30 80125630 EFD8030C */  jal        func_800F63BC
    /* 33A34 80125634 00000000 */   nop
    /* 33A38 80125638 EFD8030C */  jal        func_800F63BC
    /* 33A3C 8012563C 00000000 */   nop
    /* 33A40 80125640 92D7030C */  jal        func_800F5E48
    /* 33A44 80125644 00000000 */   nop
    /* 33A48 80125648 19D7030C */  jal        func_800F5C64
    /* 33A4C 8012564C 02020424 */   addiu     $a0, $zero, 0x202
    /* 33A50 80125650 EBFF4014 */  bnez       $v0, .L80125600
    /* 33A54 80125654 00000000 */   nop
    /* 33A58 80125658 98E5030C */  jal        func_800F9660
    /* 33A5C 8012565C 20000424 */   addiu     $a0, $zero, 0x20
    /* 33A60 80125660 1000BF8F */  lw         $ra, 0x10($sp)
    /* 33A64 80125664 00000000 */  nop
    /* 33A68 80125668 0800E003 */  jr         $ra
    /* 33A6C 8012566C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_801255E8
