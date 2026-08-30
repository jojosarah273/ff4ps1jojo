nonmatching func_801951A0, 0x40

glabel func_801951A0
    /* A35A0 801951A0 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* A35A4 801951A4 1000B0AF */  sw         $s0, 0x10($sp)
    /* A35A8 801951A8 21808000 */  addu       $s0, $a0, $zero
    /* A35AC 801951AC 02000224 */  addiu      $v0, $zero, 0x2
    /* A35B0 801951B0 1400BFAF */  sw         $ra, 0x14($sp)
    /* A35B4 801951B4 030002A2 */  sb         $v0, 0x3($s0)
    /* A35B8 801951B8 0000A484 */  lh         $a0, 0x0($a1)
    /* A35BC 801951BC 0200A584 */  lh         $a1, 0x2($a1)
    /* A35C0 801951C0 E655060C */  jal        func_80195798
    /* A35C4 801951C4 00000000 */   nop
    /* A35C8 801951C8 040002AE */  sw         $v0, 0x4($s0)
    /* A35CC 801951CC 080000AE */  sw         $zero, 0x8($s0)
    /* A35D0 801951D0 1400BF8F */  lw         $ra, 0x14($sp)
    /* A35D4 801951D4 1000B08F */  lw         $s0, 0x10($sp)
    /* A35D8 801951D8 0800E003 */  jr         $ra
    /* A35DC 801951DC 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_801951A0
