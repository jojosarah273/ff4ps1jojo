nonmatching func_8012C42C, 0xCC

glabel func_8012C42C
    /* 3A82C 8012C42C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 3A830 8012C430 1000BFAF */  sw         $ra, 0x10($sp)
    /* 3A834 8012C434 2AB0040C */  jal        func_8012C0A8
    /* 3A838 8012C438 00000000 */   nop
    /* 3A83C 8012C43C 02000324 */  addiu      $v1, $zero, 0x2
    /* 3A840 8012C440 29004310 */  beq        $v0, $v1, .L8012C4E8
    /* 3A844 8012C444 00000000 */   nop
    /* 3A848 8012C448 40DD030C */  jal        func_800F7500
    /* 3A84C 8012C44C 0B000424 */   addiu     $a0, $zero, 0xB
    /* 3A850 8012C450 91E5030C */  jal        func_800F9644
    /* 3A854 8012C454 20000424 */   addiu     $a0, $zero, 0x20
    /* 3A858 8012C458 D9D9030C */  jal        func_800F6764
    /* 3A85C 8012C45C 60000424 */   addiu     $a0, $zero, 0x60
    /* 3A860 8012C460 04D5030C */  jal        func_800F5410
    /* 3A864 8012C464 00000000 */   nop
    /* 3A868 8012C468 0FCF030C */  jal        func_800F3C3C
    /* 3A86C 8012C46C 45000424 */   addiu     $a0, $zero, 0x45
    /* 3A870 8012C470 E5CF030C */  jal        func_800F3F94
    /* 3A874 8012C474 21204000 */   addu      $a0, $v0, $zero
    /* 3A878 8012C478 EFD8030C */  jal        func_800F63BC
    /* 3A87C 8012C47C 00000000 */   nop
    /* 3A880 8012C480 EFD8030C */  jal        func_800F63BC
    /* 3A884 8012C484 00000000 */   nop
    /* 3A888 8012C488 9CCE030C */  jal        func_800F3A70
    /* 3A88C 8012C48C 60000424 */   addiu     $a0, $zero, 0x60
    /* 3A890 8012C490 C1CE030C */  jal        func_800F3B04
    /* 3A894 8012C494 21204000 */   addu      $a0, $v0, $zero
    /* 3A898 8012C498 1A80033C */  lui        $v1, %hi(D_8019ED58)
    /* 3A89C 8012C49C 58ED638C */  lw         $v1, %lo(D_8019ED58)($v1)
    /* 3A8A0 8012C4A0 00000000 */  nop
    /* 3A8A4 8012C4A4 00006494 */  lhu        $a0, 0x0($v1)
    /* 3A8A8 8012C4A8 48D5030C */  jal        func_800F5520
    /* 3A8AC 8012C4AC 21204400 */   addu      $a0, $v0, $a0
    /* 3A8B0 8012C4B0 F0D4030C */  jal        func_800F53C0
    /* 3A8B4 8012C4B4 00000000 */   nop
    /* 3A8B8 8012C4B8 03004010 */  beqz       $v0, .L8012C4C8
    /* 3A8BC 8012C4BC 00000000 */   nop
    /* 3A8C0 8012C4C0 D9D9030C */  jal        func_800F6764
    /* 3A8C4 8012C4C4 60000424 */   addiu     $a0, $zero, 0x60
  .L8012C4C8:
    /* 3A8C8 8012C4C8 A8D7030C */  jal        func_800F5EA0
    /* 3A8CC 8012C4CC 00000000 */   nop
    /* 3A8D0 8012C4D0 A8D7030C */  jal        func_800F5EA0
    /* 3A8D4 8012C4D4 00000000 */   nop
    /* 3A8D8 8012C4D8 DEE0030C */  jal        func_800F8378
    /* 3A8DC 8012C4DC 60000424 */   addiu     $a0, $zero, 0x60
    /* 3A8E0 8012C4E0 98E5030C */  jal        func_800F9660
    /* 3A8E4 8012C4E4 20000424 */   addiu     $a0, $zero, 0x20
  .L8012C4E8:
    /* 3A8E8 8012C4E8 1000BF8F */  lw         $ra, 0x10($sp)
    /* 3A8EC 8012C4EC 00000000 */  nop
    /* 3A8F0 8012C4F0 0800E003 */  jr         $ra
    /* 3A8F4 8012C4F4 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8012C42C
