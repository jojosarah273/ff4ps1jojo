nonmatching func_801946A0, 0x60

glabel func_801946A0
    /* A2AA0 801946A0 E0FFBD27 */  addiu      $sp, $sp, -0x20
    /* A2AA4 801946A4 1000B0AF */  sw         $s0, 0x10($sp)
    /* A2AA8 801946A8 21808000 */  addu       $s0, $a0, $zero
    /* A2AAC 801946AC 1400B1AF */  sw         $s1, 0x14($sp)
    /* A2AB0 801946B0 2188A000 */  addu       $s1, $a1, $zero
    /* A2AB4 801946B4 0F80043C */  lui        $a0, %hi(D_800F3958)
    /* A2AB8 801946B8 58398424 */  addiu      $a0, $a0, %lo(D_800F3958)
    /* A2ABC 801946BC 1800BFAF */  sw         $ra, 0x18($sp)
    /* A2AC0 801946C0 FF50060C */  jal        func_801943FC
    /* A2AC4 801946C4 21280002 */   addu      $a1, $s0, $zero
    /* A2AC8 801946C8 21280002 */  addu       $a1, $s0, $zero
    /* A2ACC 801946CC 1A80023C */  lui        $v0, %hi(D_8019DB4C)
    /* A2AD0 801946D0 4CDB428C */  lw         $v0, %lo(D_8019DB4C)($v0)
    /* A2AD4 801946D4 08000624 */  addiu      $a2, $zero, 0x8
    /* A2AD8 801946D8 1C00448C */  lw         $a0, 0x1C($v0)
    /* A2ADC 801946DC 0800428C */  lw         $v0, 0x8($v0)
    /* A2AE0 801946E0 00000000 */  nop
    /* A2AE4 801946E4 09F84000 */  jalr       $v0
    /* A2AE8 801946E8 21382002 */   addu      $a3, $s1, $zero
    /* A2AEC 801946EC 1800BF8F */  lw         $ra, 0x18($sp)
    /* A2AF0 801946F0 1400B18F */  lw         $s1, 0x14($sp)
    /* A2AF4 801946F4 1000B08F */  lw         $s0, 0x10($sp)
    /* A2AF8 801946F8 0800E003 */  jr         $ra
    /* A2AFC 801946FC 2000BD27 */   addiu     $sp, $sp, 0x20
endlabel func_801946A0
