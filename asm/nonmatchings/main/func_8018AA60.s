nonmatching func_8018AA60, 0x64

glabel func_8018AA60
    /* 98E60 8018AA60 E0FFBD27 */  addiu      $sp, $sp, -0x20
    /* 98E64 8018AA64 1400B1AF */  sw         $s1, 0x14($sp)
    /* 98E68 8018AA68 21888000 */  addu       $s1, $a0, $zero
    /* 98E6C 8018AA6C 1000B0AF */  sw         $s0, 0x10($sp)
    /* 98E70 8018AA70 2180A000 */  addu       $s0, $a1, $zero
    /* 98E74 8018AA74 1A80023C */  lui        $v0, %hi(D_8019B12C)
    /* 98E78 8018AA78 2CB14294 */  lhu        $v0, %lo(D_8019B12C)($v0)
    /* 98E7C 8018AA7C 1A80053C */  lui        $a1, %hi(D_8019B13C)
    /* 98E80 8018AA80 3CB1A58C */  lw         $a1, %lo(D_8019B13C)($a1)
    /* 98E84 8018AA84 02000424 */  addiu      $a0, $zero, 0x2
    /* 98E88 8018AA88 1800BFAF */  sw         $ra, 0x18($sp)
    /* 98E8C 8018AA8C D729060C */  jal        func_8018A75C
    /* 98E90 8018AA90 0428A200 */   sllv      $a1, $v0, $a1
    /* 98E94 8018AA94 D729060C */  jal        func_8018A75C
    /* 98E98 8018AA98 21200000 */   addu      $a0, $zero, $zero
    /* 98E9C 8018AA9C 03000424 */  addiu      $a0, $zero, 0x3
    /* 98EA0 8018AAA0 21282002 */  addu       $a1, $s1, $zero
    /* 98EA4 8018AAA4 D729060C */  jal        func_8018A75C
    /* 98EA8 8018AAA8 21300002 */   addu      $a2, $s0, $zero
    /* 98EAC 8018AAAC 21100002 */  addu       $v0, $s0, $zero
    /* 98EB0 8018AAB0 1800BF8F */  lw         $ra, 0x18($sp)
    /* 98EB4 8018AAB4 1400B18F */  lw         $s1, 0x14($sp)
    /* 98EB8 8018AAB8 1000B08F */  lw         $s0, 0x10($sp)
    /* 98EBC 8018AABC 0800E003 */  jr         $ra
    /* 98EC0 8018AAC0 2000BD27 */   addiu     $sp, $sp, 0x20
endlabel func_8018AA60
