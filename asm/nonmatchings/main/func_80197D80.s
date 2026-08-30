/* Handwritten function */
nonmatching func_80197D80, 0x70

glabel func_80197D80
    /* A6180 80197D80 2080013C */  lui        $at, %hi(D_801FEBF8)
    /* A6184 80197D84 F8EB3FAC */  sw         $ra, %lo(D_801FEBF8)($at)
    /* A6188 80197D88 BA5D060C */  jal        func_801976E8
    /* A618C 80197D8C 00000000 */   nop
    /* A6190 80197D90 57000924 */  addiu      $t1, $zero, 0x57
    /* A6194 80197D94 B0000A24 */  addiu      $t2, $zero, 0xB0
    /* A6198 80197D98 09F84001 */  jalr       $t2
    /* A619C 80197D9C 00000000 */   nop
    /* A61A0 80197DA0 6C01428C */  lw         $v0, 0x16C($v0)
    /* A61A4 80197DA4 0B000924 */  addiu      $t1, $zero, 0xB
    /* A61A8 80197DA8 84084320 */  addi       $v1, $v0, 0x884 /* handwritten instruction */
    /* A61AC 80197DAC 2080013C */  lui        $at, %hi(jtbl_801FEC00)
    /* A61B0 80197DB0 00EC23AC */  sw         $v1, %lo(jtbl_801FEC00)($at)
    /* A61B4 80197DB4 94084320 */  addi       $v1, $v0, 0x894 /* handwritten instruction */
    /* A61B8 80197DB8 2080013C */  lui        $at, %hi(jtbl_801FEC04)
    /* A61BC 80197DBC 04EC23AC */  sw         $v1, %lo(jtbl_801FEC04)($at)
  .L80197DC0:
    /* A61C0 80197DC0 940540AC */  sw         $zero, 0x594($v0)
    /* A61C4 80197DC4 04004224 */  addiu      $v0, $v0, 0x4
    /* A61C8 80197DC8 FFFF2925 */  addiu      $t1, $t1, -0x1
    /* A61CC 80197DCC FCFF2015 */  bnez       $t1, .L80197DC0
    /* A61D0 80197DD0 00000000 */   nop
    /* A61D4 80197DD4 825D060C */  jal        func_80197608
    /* A61D8 80197DD8 00000000 */   nop
    /* A61DC 80197DDC 20801F3C */  lui        $ra, %hi(D_801FEBF8)
    /* A61E0 80197DE0 F8EBFF8F */  lw         $ra, %lo(D_801FEBF8)($ra)
    /* A61E4 80197DE4 00000000 */  nop
    /* A61E8 80197DE8 0800E003 */  jr         $ra
    /* A61EC 80197DEC 00000000 */   nop
endlabel func_80197D80
    /* A61F0 80197DF0 00000000 */  nop
    /* A61F4 80197DF4 00000000 */  nop
