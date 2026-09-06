nonmatching func_80196EC8, 0x28

glabel func_80196EC8
    /* A52C8 80196EC8 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* A52CC 80196ECC 1000BFAF */  sw         $ra, 0x10($sp)
    /* A52D0 80196ED0 1980053C */  lui        $a1, %hi(func_801963C0)
    /* A52D4 80196ED4 C063A524 */  addiu      $a1, $a1, %lo(func_801963C0)
    /* A52D8 80196ED8 D64A060C */  jal        func_80192B58
    /* A52DC 80196EDC 02000424 */   addiu     $a0, $zero, 0x2
    /* A52E0 80196EE0 1000BF8F */  lw         $ra, 0x10($sp)
    /* A52E4 80196EE4 1800BD27 */  addiu      $sp, $sp, 0x18
    /* A52E8 80196EE8 0800E003 */  jr         $ra
    /* A52EC 80196EEC 00000000 */   nop
endlabel func_80196EC8
