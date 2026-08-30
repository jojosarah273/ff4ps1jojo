nonmatching func_8018ADC8, 0x54

glabel func_8018ADC8
    /* 991C8 8018ADC8 21108000 */  addu       $v0, $a0, $zero
    /* 991CC 8018ADCC 0300401C */  bgtz       $v0, .L8018ADDC
    /* 991D0 8018ADD0 0040033C */   lui       $v1, (0x40001010 >> 16)
    /* 991D4 8018ADD4 852B0608 */  j          .L8018AE14
    /* 991D8 8018ADD8 21100000 */   addu      $v0, $zero, $zero
  .L8018ADDC:
    /* 991DC 8018ADDC 1A80043C */  lui        $a0, %hi(D_8019B13C)
    /* 991E0 8018ADE0 3CB1848C */  lw         $a0, %lo(D_8019B13C)($a0)
    /* 991E4 8018ADE4 10106334 */  ori        $v1, $v1, (0x40001010 & 0xFFFF)
    /* 991E8 8018ADE8 0000A3AC */  sw         $v1, 0x0($a1)
    /* 991EC 8018ADEC 0100033C */  lui        $v1, (0x10000 >> 16)
    /* 991F0 8018ADF0 1A80013C */  lui        $at, %hi(D_8019B17C)
    /* 991F4 8018ADF4 7CB125AC */  sw         $a1, %lo(D_8019B17C)($at)
    /* 991F8 8018ADF8 1A80013C */  lui        $at, %hi(D_8019B178)
    /* 991FC 8018ADFC 78B120AC */  sw         $zero, %lo(D_8019B178)($at)
    /* 99200 8018AE00 1A80013C */  lui        $at, %hi(D_8019B174)
    /* 99204 8018AE04 74B122AC */  sw         $v0, %lo(D_8019B174)($at)
    /* 99208 8018AE08 04188300 */  sllv       $v1, $v1, $a0
    /* 9920C 8018AE0C F0EF6324 */  addiu      $v1, $v1, -0x1010
    /* 99210 8018AE10 0400A3AC */  sw         $v1, 0x4($a1)
  .L8018AE14:
    /* 99214 8018AE14 0800E003 */  jr         $ra
    /* 99218 8018AE18 00000000 */   nop
endlabel func_8018ADC8
    /* 9921C 8018AE1C 00000000 */  nop
    /* 99220 8018AE20 00000000 */  nop
    /* 99224 8018AE24 00000000 */  nop
