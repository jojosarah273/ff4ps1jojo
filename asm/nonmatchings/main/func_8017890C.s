nonmatching func_8017890C, 0x7C

glabel func_8017890C
    /* 86D0C 8017890C E0FFBD27 */  addiu      $sp, $sp, -0x20
    /* 86D10 80178910 1000B0AF */  sw         $s0, 0x10($sp)
    /* 86D14 80178914 2180A000 */  addu       $s0, $a1, $zero
    /* 86D18 80178918 21280000 */  addu       $a1, $zero, $zero
    /* 86D1C 8017891C 21300000 */  addu       $a2, $zero, $zero
    /* 86D20 80178920 1C00BFAF */  sw         $ra, 0x1C($sp)
    /* 86D24 80178924 1800B2AF */  sw         $s2, 0x18($sp)
    /* 86D28 80178928 7660060C */  jal        func_801981D8
    /* 86D2C 8017892C 1400B1AF */   sw        $s1, 0x14($sp)
    /* 86D30 80178930 21884000 */  addu       $s1, $v0, $zero
    /* 86D34 80178934 21202002 */  addu       $a0, $s1, $zero
    /* 86D38 80178938 21280000 */  addu       $a1, $zero, $zero
    /* 86D3C 8017893C 8260060C */  jal        func_80198208
    /* 86D40 80178940 02000624 */   addiu     $a2, $zero, 0x2
    /* 86D44 80178944 21202002 */  addu       $a0, $s1, $zero
    /* 86D48 80178948 21280000 */  addu       $a1, $zero, $zero
    /* 86D4C 8017894C 21300000 */  addu       $a2, $zero, $zero
    /* 86D50 80178950 8260060C */  jal        func_80198208
    /* 86D54 80178954 21904000 */   addu      $s2, $v0, $zero
    /* 86D58 80178958 21202002 */  addu       $a0, $s1, $zero
    /* 86D5C 8017895C 21280002 */  addu       $a1, $s0, $zero
    /* 86D60 80178960 8B60060C */  jal        func_8019822C
    /* 86D64 80178964 21304002 */   addu      $a2, $s2, $zero
    /* 86D68 80178968 7E60060C */  jal        func_801981F8
    /* 86D6C 8017896C 21202002 */   addu      $a0, $s1, $zero
    /* 86D70 80178970 1C00BF8F */  lw         $ra, 0x1C($sp)
    /* 86D74 80178974 1800B28F */  lw         $s2, 0x18($sp)
    /* 86D78 80178978 1400B18F */  lw         $s1, 0x14($sp)
    /* 86D7C 8017897C 1000B08F */  lw         $s0, 0x10($sp)
    /* 86D80 80178980 0800E003 */  jr         $ra
    /* 86D84 80178984 2000BD27 */   addiu     $sp, $sp, 0x20
endlabel func_8017890C
