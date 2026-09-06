nonmatching func_8015CC80, 0x118

glabel func_8015CC80
    /* 6B080 8015CC80 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 6B084 8015CC84 1000BFAF */  sw         $ra, 0x10($sp)
    /* 6B088 8015CC88 EEE3030C */  jal        func_800F8FB8
    /* 6B08C 8015CC8C AA000424 */   addiu     $a0, $zero, 0xAA
  .L8015CC90:
    /* 6B090 8015CC90 0FCF030C */  jal        func_800F3C3C
    /* 6B094 8015CC94 A9000424 */   addiu     $a0, $zero, 0xA9
    /* 6B098 8015CC98 CAD3030C */  jal        func_800F4F28
    /* 6B09C 8015CC9C 21204000 */   addu      $a0, $v0, $zero
    /* 6B0A0 8015CCA0 EBD3030C */  jal        func_800F4FAC
    /* 6B0A4 8015CCA4 01010424 */   addiu     $a0, $zero, 0x101
    /* 6B0A8 8015CCA8 17004014 */  bnez       $v0, .L8015CD08
    /* 6B0AC 8015CCAC 00000000 */   nop
    /* 6B0B0 8015CCB0 5CDB030C */  jal        func_800F6D70
    /* 6B0B4 8015CCB4 03200424 */   addiu     $a0, $zero, 0x2003
    /* 6B0B8 8015CCB8 92D0030C */  jal        func_800F4248
    /* 6B0BC 8015CCBC C0000424 */   addiu     $a0, $zero, 0xC0
    /* 6B0C0 8015CCC0 48D0030C */  jal        func_800F4120
    /* 6B0C4 8015CCC4 02000424 */   addiu     $a0, $zero, 0x2
    /* 6B0C8 8015CCC8 0F004014 */  bnez       $v0, .L8015CD08
    /* 6B0CC 8015CCCC 00000000 */   nop
    /* 6B0D0 8015CCD0 8CD9030C */  jal        func_800F6630
    /* 6B0D4 8015CCD4 AA000424 */   addiu     $a0, $zero, 0xAA
    /* 6B0D8 8015CCD8 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 6B0DC 8015CCDC 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 6B0E0 8015CCE0 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 6B0E4 8015CCE4 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 6B0E8 8015CCE8 00004394 */  lhu        $v1, 0x0($v0)
    /* 6B0EC 8015CCEC AD000424 */  addiu      $a0, $zero, 0xAD
    /* 6B0F0 8015CCF0 8CD9030C */  jal        func_800F6630
    /* 6B0F4 8015CCF4 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 6B0F8 8015CCF8 1D4C050C */  jal        func_80153074
    /* 6B0FC 8015CCFC 00000000 */   nop
    /* 6B100 8015CD00 93E0030C */  jal        func_800F824C
    /* 6B104 8015CD04 AD000424 */   addiu     $a0, $zero, 0xAD
  .L8015CD08:
    /* 6B108 8015CD08 91E5030C */  jal        func_800F9644
    /* 6B10C 8015CD0C 20000424 */   addiu     $a0, $zero, 0x20
    /* 6B110 8015CD10 1A80033C */  lui        $v1, %hi(D_8019ED58)
    /* 6B114 8015CD14 58ED638C */  lw         $v1, %lo(D_8019ED58)($v1)
    /* 6B118 8015CD18 1A80043C */  lui        $a0, %hi(D_8019ED44)
    /* 6B11C 8015CD1C 44ED848C */  lw         $a0, %lo(D_8019ED44)($a0)
    /* 6B120 8015CD20 00006294 */  lhu        $v0, 0x0($v1)
    /* 6B124 8015CD24 04D5030C */  jal        func_800F5410
    /* 6B128 8015CD28 000082A4 */   sh        $v0, 0x0($a0)
    /* 6B12C 8015CD2C 19D0030C */  jal        func_800F4064
    /* 6B130 8015CD30 80000424 */   addiu     $a0, $zero, 0x80
    /* 6B134 8015CD34 1A80033C */  lui        $v1, %hi(D_8019ED44)
    /* 6B138 8015CD38 44ED638C */  lw         $v1, %lo(D_8019ED44)($v1)
    /* 6B13C 8015CD3C 1A80043C */  lui        $a0, %hi(D_8019ED58)
    /* 6B140 8015CD40 58ED848C */  lw         $a0, %lo(D_8019ED58)($a0)
    /* 6B144 8015CD44 00006294 */  lhu        $v0, 0x0($v1)
    /* 6B148 8015CD48 C7E5030C */  jal        func_800F971C
    /* 6B14C 8015CD4C 000082A4 */   sh        $v0, 0x0($a0)
    /* 6B150 8015CD50 98E5030C */  jal        func_800F9660
    /* 6B154 8015CD54 20000424 */   addiu     $a0, $zero, 0x20
    /* 6B158 8015CD58 AFD8030C */  jal        func_800F62BC
    /* 6B15C 8015CD5C AA000424 */   addiu     $a0, $zero, 0xAA
    /* 6B160 8015CD60 8CD9030C */  jal        func_800F6630
    /* 6B164 8015CD64 AA000424 */   addiu     $a0, $zero, 0xAA
    /* 6B168 8015CD68 0FCF030C */  jal        func_800F3C3C
    /* 6B16C 8015CD6C AB000424 */   addiu     $a0, $zero, 0xAB
    /* 6B170 8015CD70 35D5030C */  jal        func_800F54D4
    /* 6B174 8015CD74 21204000 */   addu      $a0, $v0, $zero
    /* 6B178 8015CD78 F5D4030C */  jal        func_800F53D4
    /* 6B17C 8015CD7C 00000000 */   nop
    /* 6B180 8015CD80 C3FF4010 */  beqz       $v0, .L8015CC90
    /* 6B184 8015CD84 00000000 */   nop
    /* 6B188 8015CD88 1000BF8F */  lw         $ra, 0x10($sp)
    /* 6B18C 8015CD8C 00000000 */  nop
    /* 6B190 8015CD90 0800E003 */  jr         $ra
    /* 6B194 8015CD94 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8015CC80
