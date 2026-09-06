nonmatching func_8018F408, 0x70

glabel func_8018F408
    /* 9D808 8018F408 1F80013C */  lui        $at, %hi(D_801F6AF0)
    /* 9D80C 8018F40C F06A3FAC */  sw         $ra, %lo(D_801F6AF0)($at)
    /* 9D810 8018F410 BA5D060C */  jal        func_801976E8
    /* 9D814 8018F414 00000000 */   nop
    /* 9D818 8018F418 57000924 */  addiu      $t1, $zero, 0x57
    /* 9D81C 8018F41C B0000A24 */  addiu      $t2, $zero, 0xB0
    /* 9D820 8018F420 09F84001 */  jalr       $t2
    /* 9D824 8018F424 00000000 */   nop
    /* 9D828 8018F428 6C01428C */  lw         $v0, 0x16C($v0)
    /* 9D82C 8018F42C 00000000 */  nop
    /* 9D830 8018F430 C809438C */  lw         $v1, 0x9C8($v0)
    /* 9D834 8018F434 19800A3C */  lui        $t2, %hi(func_8018F34C + 0x14)
    /* 9D838 8018F438 60F34A25 */  addiu      $t2, $t2, %lo(func_8018F34C + 0x14)
    /* 9D83C 8018F43C 1980093C */  lui        $t1, %hi(func_8018F374)
    /* 9D840 8018F440 74F32925 */  addiu      $t1, $t1, %lo(func_8018F374)
  .L8018F444:
    /* 9D844 8018F444 0000488D */  lw         $t0, 0x0($t2)
    /* 9D848 8018F448 00000000 */  nop
    /* 9D84C 8018F44C C80948AC */  sw         $t0, 0x9C8($v0)
    /* 9D850 8018F450 04004A25 */  addiu      $t2, $t2, 0x4
    /* 9D854 8018F454 FBFF4915 */  bne        $t2, $t1, .L8018F444
    /* 9D858 8018F458 04004224 */   addiu     $v0, $v0, 0x4
    /* 9D85C 8018F45C 825D060C */  jal        func_80197608
    /* 9D860 8018F460 00000000 */   nop
    /* 9D864 8018F464 1F801F3C */  lui        $ra, %hi(D_801F6AF0)
    /* 9D868 8018F468 F06AFF8F */  lw         $ra, %lo(D_801F6AF0)($ra)
    /* 9D86C 8018F46C 00000000 */  nop
    /* 9D870 8018F470 0800E003 */  jr         $ra
    /* 9D874 8018F474 00000000 */   nop
endlabel func_8018F408
