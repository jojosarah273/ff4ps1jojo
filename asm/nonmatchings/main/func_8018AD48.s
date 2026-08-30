nonmatching func_8018AD48, 0x74

glabel func_8018AD48
    /* 99148 8018AD48 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 9914C 8018AD4C 1A80033C */  lui        $v1, %hi(D_8019B104)
    /* 99150 8018AD50 04B1638C */  lw         $v1, %lo(D_8019B104)($v1)
    /* 99154 8018AD54 01000224 */  addiu      $v0, $zero, 0x1
    /* 99158 8018AD58 14006214 */  bne        $v1, $v0, .L8018ADAC
    /* 9915C 8018AD5C 1000BFAF */   sw        $ra, 0x10($sp)
    /* 99160 8018AD60 1A80013C */  lui        $at, %hi(D_8019B104)
    /* 99164 8018AD64 BA5D060C */  jal        func_801976E8
    /* 99168 8018AD68 04B120AC */   sw        $zero, %lo(D_8019B104)($at)
    /* 9916C 8018AD6C 21200000 */  addu       $a0, $zero, $zero
    /* 99170 8018AD70 1A80013C */  lui        $at, %hi(D_8019B14C)
    /* 99174 8018AD74 4CB120AC */  sw         $zero, %lo(D_8019B14C)($at)
    /* 99178 8018AD78 1A80013C */  lui        $at, %hi(D_8019B150)
    /* 9917C 8018AD7C 3E2B060C */  jal        func_8018ACF8
    /* 99180 8018AD80 50B120AC */   sw        $zero, %lo(D_8019B150)($at)
    /* 99184 8018AD84 1A80043C */  lui        $a0, %hi(D_8019B09C)
    /* 99188 8018AD88 9CB0848C */  lw         $a0, %lo(D_8019B09C)($a0)
    /* 9918C 8018AD8C 9A5D060C */  jal        func_80197668
    /* 99190 8018AD90 00000000 */   nop
    /* 99194 8018AD94 1A80043C */  lui        $a0, %hi(D_8019B09C)
    /* 99198 8018AD98 9CB0848C */  lw         $a0, %lo(D_8019B09C)($a0)
    /* 9919C 8018AD9C AA5D060C */  jal        func_801976A8
    /* 991A0 8018ADA0 00000000 */   nop
    /* 991A4 8018ADA4 BE5D060C */  jal        func_801976F8
    /* 991A8 8018ADA8 00000000 */   nop
  .L8018ADAC:
    /* 991AC 8018ADAC 1000BF8F */  lw         $ra, 0x10($sp)
    /* 991B0 8018ADB0 1800BD27 */  addiu      $sp, $sp, 0x18
    /* 991B4 8018ADB4 0800E003 */  jr         $ra
    /* 991B8 8018ADB8 00000000 */   nop
endlabel func_8018AD48
    /* 991BC 8018ADBC 00000000 */  nop
    /* 991C0 8018ADC0 00000000 */  nop
    /* 991C4 8018ADC4 00000000 */  nop
