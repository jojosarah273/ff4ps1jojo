nonmatching func_8018A6B4, 0xA8

glabel func_8018A6B4
    /* 98AB4 8018A6B4 1A80023C */  lui        $v0, %hi(D_8019B114)
    /* 98AB8 8018A6B8 14B1428C */  lw         $v0, %lo(D_8019B114)($v0)
    /* 98ABC 8018A6BC E0FFBD27 */  addiu      $sp, $sp, -0x20
    /* 98AC0 8018A6C0 1400B1AF */  sw         $s1, 0x14($sp)
    /* 98AC4 8018A6C4 21888000 */  addu       $s1, $a0, $zero
    /* 98AC8 8018A6C8 1000B0AF */  sw         $s0, 0x10($sp)
    /* 98ACC 8018A6CC 1800BFAF */  sw         $ra, 0x18($sp)
    /* 98AD0 8018A6D0 A60145A4 */  sh         $a1, 0x1A6($v0)
    /* 98AD4 8018A6D4 242B060C */  jal        func_8018AC90
    /* 98AD8 8018A6D8 2180C000 */   addu      $s0, $a2, $zero
    /* 98ADC 8018A6DC 1A80033C */  lui        $v1, %hi(D_8019B114)
    /* 98AE0 8018A6E0 14B1638C */  lw         $v1, %lo(D_8019B114)($v1)
    /* 98AE4 8018A6E4 00000000 */  nop
    /* 98AE8 8018A6E8 AA016294 */  lhu        $v0, 0x1AA($v1)
    /* 98AEC 8018A6EC 00000000 */  nop
    /* 98AF0 8018A6F0 30004234 */  ori        $v0, $v0, 0x30
    /* 98AF4 8018A6F4 AA0162A4 */  sh         $v0, 0x1AA($v1)
    /* 98AF8 8018A6F8 242B060C */  jal        func_8018AC90
    /* 98AFC 8018A6FC 00841000 */   sll       $s0, $s0, 16
    /* 98B00 8018A700 1A2B060C */  jal        func_8018AC68
    /* 98B04 8018A704 00000000 */   nop
    /* 98B08 8018A708 0001043C */  lui        $a0, (0x1000200 >> 16)
    /* 98B0C 8018A70C 00028434 */  ori        $a0, $a0, (0x1000200 & 0xFFFF)
    /* 98B10 8018A710 1A80023C */  lui        $v0, %hi(D_8019B118)
    /* 98B14 8018A714 18B1428C */  lw         $v0, %lo(D_8019B118)($v0)
    /* 98B18 8018A718 00000000 */  nop
    /* 98B1C 8018A71C 000051AC */  sw         $s1, 0x0($v0)
    /* 98B20 8018A720 1A80023C */  lui        $v0, %hi(D_8019B11C)
    /* 98B24 8018A724 1CB1428C */  lw         $v0, %lo(D_8019B11C)($v0)
    /* 98B28 8018A728 10001036 */  ori        $s0, $s0, 0x10
    /* 98B2C 8018A72C 000050AC */  sw         $s0, 0x0($v0)
    /* 98B30 8018A730 1A80033C */  lui        $v1, %hi(D_8019B120)
    /* 98B34 8018A734 20B1638C */  lw         $v1, %lo(D_8019B120)($v1)
    /* 98B38 8018A738 01000224 */  addiu      $v0, $zero, 0x1
    /* 98B3C 8018A73C 1A80013C */  lui        $at, %hi(D_8019B164)
    /* 98B40 8018A740 64B122AC */  sw         $v0, %lo(D_8019B164)($at)
    /* 98B44 8018A744 000064AC */  sw         $a0, 0x0($v1)
    /* 98B48 8018A748 1800BF8F */  lw         $ra, 0x18($sp)
    /* 98B4C 8018A74C 1400B18F */  lw         $s1, 0x14($sp)
    /* 98B50 8018A750 1000B08F */  lw         $s0, 0x10($sp)
    /* 98B54 8018A754 0800E003 */  jr         $ra
    /* 98B58 8018A758 2000BD27 */   addiu     $sp, $sp, 0x20
endlabel func_8018A6B4
