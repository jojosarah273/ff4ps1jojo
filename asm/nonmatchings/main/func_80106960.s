nonmatching func_80106960, 0x80

glabel func_80106960
    /* 14D60 80106960 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 14D64 80106964 8F000424 */  addiu      $a0, $zero, 0x8F
    /* 14D68 80106968 1400BFAF */  sw         $ra, 0x14($sp)
    /* 14D6C 8010696C 77DC030C */  jal        func_800F71DC
    /* 14D70 80106970 1000B0AF */   sw        $s0, 0x10($sp)
    /* 14D74 80106974 40E3030C */  jal        func_800F8D00
    /* 14D78 80106978 09420424 */   addiu     $a0, $zero, 0x4209
    /* 14D7C 8010697C A1000424 */  addiu      $a0, $zero, 0xA1
    /* 14D80 80106980 5800838F */  lw         $v1, %gp_rel(D_8019ED54)($gp)
    /* 14D84 80106984 1A80103C */  lui        $s0, %hi(D_8019FFE8)
    /* 14D88 80106988 00006294 */  lhu        $v0, 0x0($v1)
    /* 14D8C 8010698C E8FF1026 */  addiu      $s0, $s0, %lo(D_8019FFE8)
    /* 14D90 80106990 01004224 */  addiu      $v0, $v0, 0x1
    /* 14D94 80106994 53D9030C */  jal        func_800F654C
    /* 14D98 80106998 340002A6 */   sh        $v0, 0x34($s0)
    /* 14D9C 8010699C 62E0030C */  jal        func_800F8188
    /* 14DA0 801069A0 00420424 */   addiu     $a0, $zero, 0x4200
    /* 14DA4 801069A4 7F000424 */  addiu      $a0, $zero, 0x7F
    /* 14DA8 801069A8 88000224 */  addiu      $v0, $zero, 0x88
    /* 14DAC 801069AC 2A0000A6 */  sh         $zero, 0x2A($s0)
    /* 14DB0 801069B0 EEE3030C */  jal        func_800F8FB8
    /* 14DB4 801069B4 2C0002A6 */   sh        $v0, 0x2C($s0)
    /* 14DB8 801069B8 84DC030C */  jal        func_800F7210
    /* 14DBC 801069BC F6080424 */   addiu     $a0, $zero, 0x8F6
    /* 14DC0 801069C0 D9D8030C */  jal        func_800F6364
    /* 14DC4 801069C4 00000000 */   nop
    /* 14DC8 801069C8 40E3030C */  jal        func_800F8D00
    /* 14DCC 801069CC F6080424 */   addiu     $a0, $zero, 0x8F6
    /* 14DD0 801069D0 1400BF8F */  lw         $ra, 0x14($sp)
    /* 14DD4 801069D4 1000B08F */  lw         $s0, 0x10($sp)
    /* 14DD8 801069D8 0800E003 */  jr         $ra
    /* 14DDC 801069DC 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80106960
