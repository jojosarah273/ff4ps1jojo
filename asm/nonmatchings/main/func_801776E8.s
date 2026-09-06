nonmatching func_801776E8, 0xA8

glabel func_801776E8
    /* 85AE8 801776E8 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 85AEC 801776EC 1A80043C */  lui        $a0, %hi(D_801A0B00)
    /* 85AF0 801776F0 000B8424 */  addiu      $a0, $a0, %lo(D_801A0B00)
    /* 85AF4 801776F4 80000224 */  addiu      $v0, $zero, 0x80
    /* 85AF8 801776F8 1000BFAF */  sw         $ra, 0x10($sp)
    /* 85AFC 801776FC 0D80013C */  lui        $at, %hi(D_800D2100)
    /* 85B00 80177700 002122A0 */  sb         $v0, %lo(D_800D2100)($at)
    /* 85B04 80177704 EE51060C */  jal        func_801947B8
    /* 85B08 80177708 29000524 */   addiu     $a1, $zero, 0x29
    /* 85B0C 8017770C 1B80043C */  lui        $a0, %hi(D_801B5810)
    /* 85B10 80177710 10588424 */  addiu      $a0, $a0, %lo(D_801B5810)
    /* 85B14 80177714 EE51060C */  jal        func_801947B8
    /* 85B18 80177718 29000524 */   addiu     $a1, $zero, 0x29
    /* 85B1C 8017771C FFFF0334 */  ori        $v1, $zero, 0xFFFF
    /* 85B20 80177720 1E80023C */  lui        $v0, %hi(D_801E09CC)
    /* 85B24 80177724 0C0183A7 */  sh         $v1, %gp_rel(D_8019EE08)($gp)
    /* 85B28 80177728 1A80013C */  lui        $at, %hi(D_8019ED30)
    /* 85B2C 8017772C 30ED20A0 */  sb         $zero, %lo(D_8019ED30)($at)
    /* 85B30 80177730 580180A7 */  sh         $zero, %gp_rel(D_8019EE54)($gp)
    /* 85B34 80177734 060180A7 */  sh         $zero, %gp_rel(D_8019EE02)($gp)
    /* 85B38 80177738 040180A7 */  sh         $zero, %gp_rel(D_8019EE00)($gp)
    /* 85B3C 8017773C 360180A7 */  sh         $zero, %gp_rel(D_8019EE32)($gp)
    /* 85B40 80177740 1A80013C */  lui        $at, %hi(D_8019ED08)
    /* 85B44 80177744 08ED20A0 */  sb         $zero, %lo(D_8019ED08)($at)
    /* 85B48 80177748 1A80013C */  lui        $at, %hi(D_8019ED00)
    /* 85B4C 8017774C 00ED20A0 */  sb         $zero, %lo(D_8019ED00)($at)
    /* 85B50 80177750 1A80013C */  lui        $at, %hi(D_8019ECFF)
    /* 85B54 80177754 FFEC20A0 */  sb         $zero, %lo(D_8019ECFF)($at)
    /* 85B58 80177758 1A80013C */  lui        $at, %hi(D_8019ED78)
    /* 85B5C 8017775C 78ED20A4 */  sh         $zero, %lo(D_8019ED78)($at)
    /* 85B60 80177760 1A80013C */  lui        $at, %hi(D_8019EE98)
    /* 85B64 80177764 98EE23A4 */  sh         $v1, %lo(D_8019EE98)($at)
    /* 85B68 80177768 F4E6030C */  jal        func_800F9BD0
    /* 85B6C 8017776C CC0943A4 */   sh        $v1, %lo(D_801E09CC)($v0)
    /* 85B70 80177770 324A060C */  jal        func_801928C8
    /* 85B74 80177774 00000000 */   nop
    /* 85B78 80177778 FB4A060C */  jal        func_80192BEC
    /* 85B7C 8017777C 00000000 */   nop
    /* 85B80 80177780 1000BF8F */  lw         $ra, 0x10($sp)
    /* 85B84 80177784 00000000 */  nop
    /* 85B88 80177788 0800E003 */  jr         $ra
    /* 85B8C 8017778C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_801776E8
