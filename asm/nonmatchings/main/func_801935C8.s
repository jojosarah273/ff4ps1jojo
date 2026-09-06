nonmatching func_801935C8, 0xA0

glabel func_801935C8
    /* A19C8 801935C8 D0FFBD27 */  addiu      $sp, $sp, -0x30
    /* A19CC 801935CC 2800B2AF */  sw         $s2, 0x28($sp)
    /* A19D0 801935D0 21908000 */  addu       $s2, $a0, $zero
    /* A19D4 801935D4 2400B1AF */  sw         $s1, 0x24($sp)
    /* A19D8 801935D8 2188A000 */  addu       $s1, $a1, $zero
    /* A19DC 801935DC 2000B0AF */  sw         $s0, 0x20($sp)
    /* A19E0 801935E0 1A80103C */  lui        $s0, %hi(D_8019D0FC)
    /* A19E4 801935E4 FCD01026 */  addiu      $s0, $s0, %lo(D_8019D0FC)
    /* A19E8 801935E8 21200002 */  addu       $a0, $s0, $zero
    /* A19EC 801935EC 21284002 */  addu       $a1, $s2, $zero
    /* A19F0 801935F0 2C00BFAF */  sw         $ra, 0x2C($sp)
    /* A19F4 801935F4 0E5C060C */  jal        func_80197038
    /* A19F8 801935F8 80002626 */   addiu     $a2, $s1, 0x80
    /* A19FC 801935FC 00020426 */  addiu      $a0, $s0, 0x200
    /* A1A00 80193600 21280000 */  addu       $a1, $zero, $zero
    /* A1A04 80193604 21300000 */  addu       $a2, $zero, $zero
    /* A1A08 80193608 2080013C */  lui        $at, %hi(D_801FD352)
    /* A1A0C 8019360C 52D322A4 */  sh         $v0, %lo(D_801FD352)($at)
    /* A1A10 80193610 80000224 */  addiu      $v0, $zero, 0x80
    /* A1A14 80193614 1400A2AF */  sw         $v0, 0x14($sp)
    /* A1A18 80193618 20000224 */  addiu      $v0, $zero, 0x20
    /* A1A1C 8019361C 21384002 */  addu       $a3, $s2, $zero
    /* A1A20 80193620 1000B1AF */  sw         $s1, 0x10($sp)
    /* A1A24 80193624 D25B060C */  jal        func_80196F48
    /* A1A28 80193628 1800A2AF */   sw        $v0, 0x18($sp)
    /* A1A2C 8019362C 1A80043C */  lui        $a0, %hi(D_8019CF74)
    /* A1A30 80193630 74CF8424 */  addiu      $a0, $a0, %lo(D_8019CF74)
    /* A1A34 80193634 21280000 */  addu       $a1, $zero, $zero
    /* A1A38 80193638 2080013C */  lui        $at, %hi(D_801FD350)
    /* A1A3C 8019363C 50D322A4 */  sh         $v0, %lo(D_801FD350)($at)
    /* A1A40 80193640 1A80013C */  lui        $at, %hi(D_8019D0F4)
    /* A1A44 80193644 F4D020AC */  sw         $zero, %lo(D_8019D0F4)($at)
    /* A1A48 80193648 263C060C */  jal        func_8018F098
    /* A1A4C 8019364C 80010624 */   addiu     $a2, $zero, 0x180
    /* A1A50 80193650 2C00BF8F */  lw         $ra, 0x2C($sp)
    /* A1A54 80193654 2800B28F */  lw         $s2, 0x28($sp)
    /* A1A58 80193658 2400B18F */  lw         $s1, 0x24($sp)
    /* A1A5C 8019365C 2000B08F */  lw         $s0, 0x20($sp)
    /* A1A60 80193660 0800E003 */  jr         $ra
    /* A1A64 80193664 3000BD27 */   addiu     $sp, $sp, 0x30
endlabel func_801935C8
