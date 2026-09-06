nonmatching func_80178D00, 0xD0

glabel func_80178D00
    /* 87100 80178D00 E0FFBD27 */  addiu      $sp, $sp, -0x20
    /* 87104 80178D04 1400B1AF */  sw         $s1, 0x14($sp)
    /* 87108 80178D08 21888000 */  addu       $s1, $a0, $zero
    /* 8710C 80178D0C 1000B0AF */  sw         $s0, 0x10($sp)
    /* 87110 80178D10 1A80103C */  lui        $s0, %hi(D_8019FFE8)
    /* 87114 80178D14 E8FF1026 */  addiu      $s0, $s0, %lo(D_8019FFE8)
    /* 87118 80178D18 21280002 */  addu       $a1, $s0, $zero
    /* 8711C 80178D1C 21300000 */  addu       $a2, $zero, $zero
    /* 87120 80178D20 1F000224 */  addiu      $v0, $zero, 0x1F
    /* 87124 80178D24 1800BFAF */  sw         $ra, 0x18($sp)
    /* 87128 80178D28 E5F9050C */  jal        func_8017E794
    /* 8712C 80178D2C 0C0002A2 */   sb        $v0, 0xC($s0)
    /* 87130 80178D30 21202002 */  addu       $a0, $s1, $zero
    /* 87134 80178D34 21280002 */  addu       $a1, $s0, $zero
    /* 87138 80178D38 21300000 */  addu       $a2, $zero, $zero
    /* 8713C 80178D3C 16000224 */  addiu      $v0, $zero, 0x16
    /* 87140 80178D40 E5F9050C */  jal        func_8017E794
    /* 87144 80178D44 0C0002A2 */   sb        $v0, 0xC($s0)
    /* 87148 80178D48 21202002 */  addu       $a0, $s1, $zero
    /* 8714C 80178D4C 21280002 */  addu       $a1, $s0, $zero
    /* 87150 80178D50 21300000 */  addu       $a2, $zero, $zero
    /* 87154 80178D54 23000224 */  addiu      $v0, $zero, 0x23
    /* 87158 80178D58 E5F9050C */  jal        func_8017E794
    /* 8715C 80178D5C 0C0002A2 */   sb        $v0, 0xC($s0)
    /* 87160 80178D60 21202002 */  addu       $a0, $s1, $zero
    /* 87164 80178D64 21280002 */  addu       $a1, $s0, $zero
    /* 87168 80178D68 21300000 */  addu       $a2, $zero, $zero
    /* 8716C 80178D6C 1A000224 */  addiu      $v0, $zero, 0x1A
    /* 87170 80178D70 E5F9050C */  jal        func_8017E794
    /* 87174 80178D74 0C0002A2 */   sb        $v0, 0xC($s0)
    /* 87178 80178D78 21202002 */  addu       $a0, $s1, $zero
    /* 8717C 80178D7C 21280002 */  addu       $a1, $s0, $zero
    /* 87180 80178D80 21300000 */  addu       $a2, $zero, $zero
    /* 87184 80178D84 11000224 */  addiu      $v0, $zero, 0x11
    /* 87188 80178D88 E5F9050C */  jal        func_8017E794
    /* 8718C 80178D8C 0C0002A2 */   sb        $v0, 0xC($s0)
    /* 87190 80178D90 21202002 */  addu       $a0, $s1, $zero
    /* 87194 80178D94 21280002 */  addu       $a1, $s0, $zero
    /* 87198 80178D98 21300000 */  addu       $a2, $zero, $zero
    /* 8719C 80178D9C 08000224 */  addiu      $v0, $zero, 0x8
    /* 871A0 80178DA0 E5F9050C */  jal        func_8017E794
    /* 871A4 80178DA4 0C0002A2 */   sb        $v0, 0xC($s0)
    /* 871A8 80178DA8 21202002 */  addu       $a0, $s1, $zero
    /* 871AC 80178DAC 21280002 */  addu       $a1, $s0, $zero
    /* 871B0 80178DB0 21300000 */  addu       $a2, $zero, $zero
    /* 871B4 80178DB4 E5F9050C */  jal        func_8017E794
    /* 871B8 80178DB8 0C0000A2 */   sb        $zero, 0xC($s0)
    /* 871BC 80178DBC 1800BF8F */  lw         $ra, 0x18($sp)
    /* 871C0 80178DC0 1400B18F */  lw         $s1, 0x14($sp)
    /* 871C4 80178DC4 1000B08F */  lw         $s0, 0x10($sp)
    /* 871C8 80178DC8 0800E003 */  jr         $ra
    /* 871CC 80178DCC 2000BD27 */   addiu     $sp, $sp, 0x20
endlabel func_80178D00
