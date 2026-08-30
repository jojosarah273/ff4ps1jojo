nonmatching func_80140CFC, 0x98

glabel func_80140CFC
    /* 4F0FC 80140CFC E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 4F100 80140D00 1400BFAF */  sw         $ra, 0x14($sp)
    /* 4F104 80140D04 C7E5030C */  jal        func_800F971C
    /* 4F108 80140D08 1000B0AF */   sw        $s0, 0x10($sp)
    /* 4F10C 80140D0C 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 4F110 80140D10 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 4F114 80140D14 1A80043C */  lui        $a0, %hi(D_8019ED54)
    /* 4F118 80140D18 54ED848C */  lw         $a0, %lo(D_8019ED54)($a0)
    /* 4F11C 80140D1C 00004394 */  lhu        $v1, 0x0($v0)
    /* 4F120 80140D20 1A80103C */  lui        $s0, %hi(D_8019A0BC)
    /* 4F124 80140D24 000083A4 */  sh         $v1, 0x0($a0)
  .L80140D28:
    /* 4F128 80140D28 DADA030C */  jal        func_800F6B68
    /* 4F12C 80140D2C C2340424 */   addiu     $a0, $zero, 0x34C2
    /* 4F130 80140D30 DAE1030C */  jal        func_800F8768
    /* 4F134 80140D34 76F40434 */   ori       $a0, $zero, 0xF476
    /* 4F138 80140D38 1A80023C */  lui        $v0, %hi(D_8019ED54)
    /* 4F13C 80140D3C 54ED428C */  lw         $v0, %lo(D_8019ED54)($v0)
    /* 4F140 80140D40 BCA00426 */  addiu      $a0, $s0, %lo(D_8019A0BC)
    /* 4F144 80140D44 00004394 */  lhu        $v1, 0x0($v0)
    /* 4F148 80140D48 1A80053C */  lui        $a1, %hi(D_8019ED40)
    /* 4F14C 80140D4C 40EDA58C */  lw         $a1, %lo(D_8019ED40)($a1)
    /* 4F150 80140D50 21186400 */  addu       $v1, $v1, $a0
    /* 4F154 80140D54 00006290 */  lbu        $v0, 0x0($v1)
    /* 4F158 80140D58 C2340424 */  addiu      $a0, $zero, 0x34C2
    /* 4F15C 80140D5C DAE1030C */  jal        func_800F8768
    /* 4F160 80140D60 0000A2A0 */   sb        $v0, 0x0($a1)
    /* 4F164 80140D64 D9D8030C */  jal        func_800F6364
    /* 4F168 80140D68 00000000 */   nop
    /* 4F16C 80140D6C 56D6030C */  jal        func_800F5958
    /* 4F170 80140D70 08000424 */   addiu     $a0, $zero, 0x8
    /* 4F174 80140D74 F5D4030C */  jal        func_800F53D4
    /* 4F178 80140D78 00000000 */   nop
    /* 4F17C 80140D7C EAFF4010 */  beqz       $v0, .L80140D28
    /* 4F180 80140D80 00000000 */   nop
    /* 4F184 80140D84 1400BF8F */  lw         $ra, 0x14($sp)
    /* 4F188 80140D88 1000B08F */  lw         $s0, 0x10($sp)
    /* 4F18C 80140D8C 0800E003 */  jr         $ra
    /* 4F190 80140D90 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80140CFC
