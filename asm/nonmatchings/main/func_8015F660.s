nonmatching func_8015F660, 0x90

glabel func_8015F660
    /* 6DA60 8015F660 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 6DA64 8015F664 1000BFAF */  sw         $ra, 0x10($sp)
    /* 6DA68 8015F668 77DC030C */  jal        func_800F71DC
    /* 6DA6C 8015F66C 21200000 */   addu      $a0, $zero, $zero
    /* 6DA70 8015F670 53D9030C */  jal        func_800F654C
    /* 6DA74 8015F674 01000424 */   addiu     $a0, $zero, 0x1
    /* 6DA78 8015F678 8948050C */  jal        func_80152224
    /* 6DA7C 8015F67C 00000000 */   nop
    /* 6DA80 8015F680 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 6DA84 8015F684 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 6DA88 8015F688 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 6DA8C 8015F68C 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 6DA90 8015F690 00004394 */  lhu        $v1, 0x0($v0)
    /* 6DA94 8015F694 02020424 */  addiu      $a0, $zero, 0x202
    /* 6DA98 8015F698 2FDC030C */  jal        func_800F70BC
    /* 6DA9C 8015F69C 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 6DAA0 8015F6A0 09004014 */  bnez       $v0, .L8015F6C8
    /* 6DAA4 8015F6A4 00000000 */   nop
    /* 6DAA8 8015F6A8 53D9030C */  jal        func_800F654C
    /* 6DAAC 8015F6AC 80000424 */   addiu     $a0, $zero, 0x80
    /* 6DAB0 8015F6B0 62E0030C */  jal        func_800F8188
    /* 6DAB4 8015F6B4 A3280424 */   addiu     $a0, $zero, 0x28A3
    /* 6DAB8 8015F6B8 4D95010C */  jal        func_80065534
    /* 6DABC 8015F6BC 00000000 */   nop
    /* 6DAC0 8015F6C0 B87D0508 */  j          .L8015F6E0
    /* 6DAC4 8015F6C4 00000000 */   nop
  .L8015F6C8:
    /* 6DAC8 8015F6C8 53D9030C */  jal        func_800F654C
    /* 6DACC 8015F6CC 20000424 */   addiu     $a0, $zero, 0x20
    /* 6DAD0 8015F6D0 62E0030C */  jal        func_800F8188
    /* 6DAD4 8015F6D4 A4280424 */   addiu     $a0, $zero, 0x28A4
    /* 6DAD8 8015F6D8 DD95010C */  jal        func_80065774
    /* 6DADC 8015F6DC 00000000 */   nop
  .L8015F6E0:
    /* 6DAE0 8015F6E0 1000BF8F */  lw         $ra, 0x10($sp)
    /* 6DAE4 8015F6E4 00000000 */  nop
    /* 6DAE8 8015F6E8 0800E003 */  jr         $ra
    /* 6DAEC 8015F6EC 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8015F660
