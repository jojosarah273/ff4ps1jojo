nonmatching func_80187924, 0xC0

glabel func_80187924
    /* 95D24 80187924 E0FFBD27 */  addiu      $sp, $sp, -0x20
    /* 95D28 80187928 1400B1AF */  sw         $s1, 0x14($sp)
    /* 95D2C 8018792C 21888000 */  addu       $s1, $a0, $zero
    /* 95D30 80187930 0E000424 */  addiu      $a0, $zero, 0xE
    /* 95D34 80187934 1800B2AF */  sw         $s2, 0x18($sp)
    /* 95D38 80187938 2190A000 */  addu       $s2, $a1, $zero
    /* 95D3C 8018793C 1000B0AF */  sw         $s0, 0x10($sp)
    /* 95D40 80187940 20029027 */  addiu      $s0, $gp, %gp_rel(D_8019EF1C)
    /* 95D44 80187944 21280002 */  addu       $a1, $s0, $zero
    /* 95D48 80187948 48000224 */  addiu      $v0, $zero, 0x48
    /* 95D4C 8018794C 1C00BFAF */  sw         $ra, 0x1C($sp)
    /* 95D50 80187950 200282A3 */  sb         $v0, %gp_rel(D_8019EF1C)($gp)
    /* 95D54 80187954 BA46060C */  jal        func_80191AE8
    /* 95D58 80187958 21300000 */   addu      $a2, $zero, $zero
    /* 95D5C 8018795C 0D000424 */  addiu      $a0, $zero, 0xD
    /* 95D60 80187960 C4018627 */  addiu      $a2, $gp, %gp_rel(D_8019EEC0)
    /* 95D64 80187964 01000224 */  addiu      $v0, $zero, 0x1
    /* 95D68 80187968 200282A3 */  sb         $v0, %gp_rel(D_8019EF1C)($gp)
    /* 95D6C 8018796C 210292A3 */  sb         $s2, %gp_rel(D_8019EF1D)($gp)
    /* 95D70 80187970 1E46060C */  jal        func_80191878
    /* 95D74 80187974 21280002 */   addu      $a1, $s0, $zero
    /* 95D78 80187978 15000424 */  addiu      $a0, $zero, 0x15
    /* 95D7C 8018797C 40101100 */  sll        $v0, $s1, 1
    /* 95D80 80187980 21105100 */  addu       $v0, $v0, $s1
    /* 95D84 80187984 C0100200 */  sll        $v0, $v0, 3
    /* 95D88 80187988 1F80053C */  lui        $a1, %hi(D_801F6230)
    /* 95D8C 8018798C 3062A524 */  addiu      $a1, $a1, %lo(D_801F6230)
    /* 95D90 80187990 21284500 */  addu       $a1, $v0, $a1
    /* 95D94 80187994 1E46060C */  jal        func_80191878
    /* 95D98 80187998 21300000 */   addu      $a2, $zero, $zero
    /* 95D9C 8018799C 1A80033C */  lui        $v1, %hi(D_8019AFFC)
    /* 95DA0 801879A0 FCAF6324 */  addiu      $v1, $v1, %lo(D_8019AFFC)
    /* 95DA4 801879A4 E4018287 */  lh         $v0, %gp_rel(D_8019EEE0)($gp)
    /* 95DA8 801879A8 D0018497 */  lhu        $a0, %gp_rel(D_8019EECC)($gp)
    /* 95DAC 801879AC 1C00BF8F */  lw         $ra, 0x1C($sp)
    /* 95DB0 801879B0 1800B28F */  lw         $s2, 0x18($sp)
    /* 95DB4 801879B4 1400B18F */  lw         $s1, 0x14($sp)
    /* 95DB8 801879B8 1000B08F */  lw         $s0, 0x10($sp)
    /* 95DBC 801879BC 80100200 */  sll        $v0, $v0, 2
    /* 95DC0 801879C0 21104400 */  addu       $v0, $v0, $a0
    /* 95DC4 801879C4 80100200 */  sll        $v0, $v0, 2
    /* 95DC8 801879C8 21104300 */  addu       $v0, $v0, $v1
    /* 95DCC 801879CC 00004494 */  lhu        $a0, 0x0($v0)
    /* 95DD0 801879D0 01000324 */  addiu      $v1, $zero, 0x1
    /* 95DD4 801879D4 0E0283A7 */  sh         $v1, %gp_rel(D_8019EF0A)($gp)
    /* 95DD8 801879D8 D20184A7 */  sh         $a0, %gp_rel(D_8019EECE)($gp)
    /* 95DDC 801879DC 0800E003 */  jr         $ra
    /* 95DE0 801879E0 2000BD27 */   addiu     $sp, $sp, 0x20
endlabel func_80187924
