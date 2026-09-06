nonmatching func_8015ABEC, 0x90

glabel func_8015ABEC
    /* 68FEC 8015ABEC E0FFBD27 */  addiu      $sp, $sp, -0x20
    /* 68FF0 8015ABF0 21200000 */  addu       $a0, $zero, $zero
    /* 68FF4 8015ABF4 1800BFAF */  sw         $ra, 0x18($sp)
    /* 68FF8 8015ABF8 1400B1AF */  sw         $s1, 0x14($sp)
    /* 68FFC 8015ABFC 0FCF030C */  jal        func_800F3C3C
    /* 69000 8015AC00 1000B0AF */   sw        $s0, 0x10($sp)
    /* 69004 8015AC04 00200424 */  addiu      $a0, $zero, 0x2000
    /* 69008 8015AC08 C1CE030C */  jal        func_800F3B04
    /* 6900C 8015AC0C 21884000 */   addu      $s1, $v0, $zero
    /* 69010 8015AC10 21804000 */  addu       $s0, $v0, $zero
    /* 69014 8015AC14 A9002392 */  lbu        $v1, 0xA9($s1)
    /* 69018 8015AC18 79190492 */  lbu        $a0, 0x1979($s0)
    /* 6901C 8015AC1C 7A190292 */  lbu        $v0, 0x197A($s0)
    /* 69020 8015AC20 3D1903A2 */  sb         $v1, 0x193D($s0)
    /* 69024 8015AC24 AA002392 */  lbu        $v1, 0xAA($s1)
    /* 69028 8015AC28 3F1904A2 */  sb         $a0, 0x193F($s0)
    /* 6902C 8015AC2C 401902A2 */  sb         $v0, 0x1940($s0)
    /* 69030 8015AC30 DB48050C */  jal        func_8015236C
    /* 69034 8015AC34 3E1903A2 */   sb        $v1, 0x193E($s0)
    /* 69038 8015AC38 41190392 */  lbu        $v1, 0x1941($s0)
    /* 6903C 8015AC3C 42190492 */  lbu        $a0, 0x1942($s0)
    /* 69040 8015AC40 10000224 */  addiu      $v0, $zero, 0x10
    /* 69044 8015AC44 471902A2 */  sb         $v0, 0x1947($s0)
    /* 69048 8015AC48 481900A2 */  sb         $zero, 0x1948($s0)
    /* 6904C 8015AC4C 451903A2 */  sb         $v1, 0x1945($s0)
    /* 69050 8015AC50 5349050C */  jal        func_8015254C
    /* 69054 8015AC54 461904A2 */   sb        $a0, 0x1946($s0)
    /* 69058 8015AC58 49190292 */  lbu        $v0, 0x1949($s0)
    /* 6905C 8015AC5C 1800BF8F */  lw         $ra, 0x18($sp)
    /* 69060 8015AC60 AB0022A2 */  sb         $v0, 0xAB($s1)
    /* 69064 8015AC64 4A190392 */  lbu        $v1, 0x194A($s0)
    /* 69068 8015AC68 1000B08F */  lw         $s0, 0x10($sp)
    /* 6906C 8015AC6C AC0023A2 */  sb         $v1, 0xAC($s1)
    /* 69070 8015AC70 1400B18F */  lw         $s1, 0x14($sp)
    /* 69074 8015AC74 0800E003 */  jr         $ra
    /* 69078 8015AC78 2000BD27 */   addiu     $sp, $sp, 0x20
endlabel func_8015ABEC
