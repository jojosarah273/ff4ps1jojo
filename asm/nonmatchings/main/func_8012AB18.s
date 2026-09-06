nonmatching func_8012AB18, 0x2E8

glabel func_8012AB18
    /* 38F18 8012AB18 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 38F1C 8012AB1C 1000BFAF */  sw         $ra, 0x10($sp)
    /* 38F20 8012AB20 59D9030C */  jal        func_800F6564
    /* 38F24 8012AB24 CC1B0424 */   addiu     $a0, $zero, 0x1BCC
    /* 38F28 8012AB28 0DD9030C */  jal        func_800F6434
    /* 38F2C 8012AB2C 02020424 */   addiu     $a0, $zero, 0x202
    /* 38F30 8012AB30 14004014 */  bnez       $v0, .L8012AB84
    /* 38F34 8012AB34 00000000 */   nop
    /* 38F38 8012AB38 91E5030C */  jal        func_800F9644
    /* 38F3C 8012AB3C 20000424 */   addiu     $a0, $zero, 0x20
    /* 38F40 8012AB40 1A80033C */  lui        $v1, %hi(D_8019ED58)
    /* 38F44 8012AB44 58ED638C */  lw         $v1, %lo(D_8019ED58)($v1)
    /* 38F48 8012AB48 1A80043C */  lui        $a0, %hi(D_8019ED44)
    /* 38F4C 8012AB4C 44ED848C */  lw         $a0, %lo(D_8019ED44)($a0)
    /* 38F50 8012AB50 00006294 */  lhu        $v0, 0x0($v1)
    /* 38F54 8012AB54 04D5030C */  jal        func_800F5410
    /* 38F58 8012AB58 000082A4 */   sh        $v0, 0x0($a0)
    /* 38F5C 8012AB5C 19D0030C */  jal        func_800F4064
    /* 38F60 8012AB60 40000424 */   addiu     $a0, $zero, 0x40
    /* 38F64 8012AB64 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 38F68 8012AB68 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 38F6C 8012AB6C 1A80053C */  lui        $a1, %hi(D_8019ED58)
    /* 38F70 8012AB70 58EDA58C */  lw         $a1, %lo(D_8019ED58)($a1)
    /* 38F74 8012AB74 00004394 */  lhu        $v1, 0x0($v0)
    /* 38F78 8012AB78 20000424 */  addiu      $a0, $zero, 0x20
    /* 38F7C 8012AB7C 98E5030C */  jal        func_800F9660
    /* 38F80 8012AB80 0000A3A4 */   sh        $v1, 0x0($a1)
  .L8012AB84:
    /* 38F84 8012AB84 8CD9030C */  jal        func_800F6630
    /* 38F88 8012AB88 5D000424 */   addiu     $a0, $zero, 0x5D
    /* 38F8C 8012AB8C 92D0030C */  jal        func_800F4248
    /* 38F90 8012AB90 01000424 */   addiu     $a0, $zero, 0x1
    /* 38F94 8012AB94 48D0030C */  jal        func_800F4120
    /* 38F98 8012AB98 02020424 */   addiu     $a0, $zero, 0x202
    /* 38F9C 8012AB9C 42004014 */  bnez       $v0, .L8012ACA8
    /* 38FA0 8012ABA0 00000000 */   nop
    /* 38FA4 8012ABA4 8CDB030C */  jal        func_800F6E30
    /* 38FA8 8012ABA8 5A000424 */   addiu     $a0, $zero, 0x5A
    /* 38FAC 8012ABAC 4094040C */  jal        func_80125100
    /* 38FB0 8012ABB0 00000000 */   nop
    /* 38FB4 8012ABB4 91E5030C */  jal        func_800F9644
    /* 38FB8 8012ABB8 20000424 */   addiu     $a0, $zero, 0x20
    /* 38FBC 8012ABBC 1A80033C */  lui        $v1, %hi(D_8019ED58)
    /* 38FC0 8012ABC0 58ED638C */  lw         $v1, %lo(D_8019ED58)($v1)
    /* 38FC4 8012ABC4 1A80043C */  lui        $a0, %hi(D_8019ED44)
    /* 38FC8 8012ABC8 44ED848C */  lw         $a0, %lo(D_8019ED44)($a0)
    /* 38FCC 8012ABCC 00006294 */  lhu        $v0, 0x0($v1)
    /* 38FD0 8012ABD0 04D5030C */  jal        func_800F5410
    /* 38FD4 8012ABD4 000082A4 */   sh        $v0, 0x0($a0)
    /* 38FD8 8012ABD8 19D0030C */  jal        func_800F4064
    /* 38FDC 8012ABDC 52000424 */   addiu     $a0, $zero, 0x52
    /* 38FE0 8012ABE0 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 38FE4 8012ABE4 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 38FE8 8012ABE8 1A80053C */  lui        $a1, %hi(D_8019ED58)
    /* 38FEC 8012ABEC 58EDA58C */  lw         $a1, %lo(D_8019ED58)($a1)
    /* 38FF0 8012ABF0 00004394 */  lhu        $v1, 0x0($v0)
    /* 38FF4 8012ABF4 20000424 */  addiu      $a0, $zero, 0x20
    /* 38FF8 8012ABF8 98E5030C */  jal        func_800F9660
    /* 38FFC 8012ABFC 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 39000 8012AC00 8CDB030C */  jal        func_800F6E30
    /* 39004 8012AC04 5A000424 */   addiu     $a0, $zero, 0x5A
    /* 39008 8012AC08 5DD5030C */  jal        func_800F5574
    /* 3900C 8012AC0C FE000424 */   addiu     $a0, $zero, 0xFE
    /* 39010 8012AC10 F5D4030C */  jal        func_800F53D4
    /* 39014 8012AC14 00000000 */   nop
    /* 39018 8012AC18 75004014 */  bnez       $v0, .L8012ADF0
    /* 3901C 8012AC1C 00000000 */   nop
    /* 39020 8012AC20 53D9030C */  jal        func_800F654C
    /* 39024 8012AC24 C8000424 */   addiu     $a0, $zero, 0xC8
    /* 39028 8012AC28 BBE0030C */  jal        func_800F82EC
    /* 3902C 8012AC2C 29000424 */   addiu     $a0, $zero, 0x29
    /* 39030 8012AC30 EFD8030C */  jal        func_800F63BC
    /* 39034 8012AC34 00000000 */   nop
    /* 39038 8012AC38 8CD9030C */  jal        func_800F6630
    /* 3903C 8012AC3C DB000424 */   addiu     $a0, $zero, 0xDB
    /* 39040 8012AC40 BBE0030C */  jal        func_800F82EC
    /* 39044 8012AC44 29000424 */   addiu     $a0, $zero, 0x29
    /* 39048 8012AC48 EFD8030C */  jal        func_800F63BC
    /* 3904C 8012AC4C 00000000 */   nop
    /* 39050 8012AC50 E7E4030C */  jal        func_800F939C
    /* 39054 8012AC54 00000000 */   nop
    /* 39058 8012AC58 8CD9030C */  jal        func_800F6630
    /* 3905C 8012AC5C 5C000424 */   addiu     $a0, $zero, 0x5C
    /* 39060 8012AC60 B781040C */  jal        func_801206DC
    /* 39064 8012AC64 00000000 */   nop
    /* 39068 8012AC68 83E5030C */  jal        func_800F960C
    /* 3906C 8012AC6C 00000000 */   nop
    /* 39070 8012AC70 EFD8030C */  jal        func_800F63BC
    /* 39074 8012AC74 00000000 */   nop
    /* 39078 8012AC78 8CD9030C */  jal        func_800F6630
    /* 3907C 8012AC7C DB000424 */   addiu     $a0, $zero, 0xDB
    /* 39080 8012AC80 BBE0030C */  jal        func_800F82EC
    /* 39084 8012AC84 29000424 */   addiu     $a0, $zero, 0x29
    /* 39088 8012AC88 EFD8030C */  jal        func_800F63BC
    /* 3908C 8012AC8C 00000000 */   nop
    /* 39090 8012AC90 EFD8030C */  jal        func_800F63BC
    /* 39094 8012AC94 00000000 */   nop
    /* 39098 8012AC98 BBE0030C */  jal        func_800F82EC
    /* 3909C 8012AC9C 29000424 */   addiu     $a0, $zero, 0x29
    /* 390A0 8012ACA0 7CAB0408 */  j          .L8012ADF0
    /* 390A4 8012ACA4 00000000 */   nop
  .L8012ACA8:
    /* 390A8 8012ACA8 91E5030C */  jal        func_800F9644
    /* 390AC 8012ACAC 20000424 */   addiu     $a0, $zero, 0x20
    /* 390B0 8012ACB0 1A80033C */  lui        $v1, %hi(D_8019ED58)
    /* 390B4 8012ACB4 58ED638C */  lw         $v1, %lo(D_8019ED58)($v1)
    /* 390B8 8012ACB8 1A80043C */  lui        $a0, %hi(D_8019ED44)
    /* 390BC 8012ACBC 44ED848C */  lw         $a0, %lo(D_8019ED44)($a0)
    /* 390C0 8012ACC0 00006294 */  lhu        $v0, 0x0($v1)
    /* 390C4 8012ACC4 04D5030C */  jal        func_800F5410
    /* 390C8 8012ACC8 000082A4 */   sh        $v0, 0x0($a0)
    /* 390CC 8012ACCC 19D0030C */  jal        func_800F4064
    /* 390D0 8012ACD0 1C000424 */   addiu     $a0, $zero, 0x1C
    /* 390D4 8012ACD4 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 390D8 8012ACD8 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 390DC 8012ACDC 1A80053C */  lui        $a1, %hi(D_8019ED58)
    /* 390E0 8012ACE0 58EDA58C */  lw         $a1, %lo(D_8019ED58)($a1)
    /* 390E4 8012ACE4 00004394 */  lhu        $v1, 0x0($v0)
    /* 390E8 8012ACE8 20000424 */  addiu      $a0, $zero, 0x20
    /* 390EC 8012ACEC 98E5030C */  jal        func_800F9660
    /* 390F0 8012ACF0 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 390F4 8012ACF4 8CDB030C */  jal        func_800F6E30
    /* 390F8 8012ACF8 5A000424 */   addiu     $a0, $zero, 0x5A
    /* 390FC 8012ACFC 4094040C */  jal        func_80125100
    /* 39100 8012AD00 00000000 */   nop
    /* 39104 8012AD04 91E5030C */  jal        func_800F9644
    /* 39108 8012AD08 20000424 */   addiu     $a0, $zero, 0x20
    /* 3910C 8012AD0C 1A80033C */  lui        $v1, %hi(D_8019ED58)
    /* 39110 8012AD10 58ED638C */  lw         $v1, %lo(D_8019ED58)($v1)
    /* 39114 8012AD14 1A80043C */  lui        $a0, %hi(D_8019ED44)
    /* 39118 8012AD18 44ED848C */  lw         $a0, %lo(D_8019ED44)($a0)
    /* 3911C 8012AD1C 00006294 */  lhu        $v0, 0x0($v1)
    /* 39120 8012AD20 04D5030C */  jal        func_800F5410
    /* 39124 8012AD24 000082A4 */   sh        $v0, 0x0($a0)
    /* 39128 8012AD28 19D0030C */  jal        func_800F4064
    /* 3912C 8012AD2C 52000424 */   addiu     $a0, $zero, 0x52
    /* 39130 8012AD30 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 39134 8012AD34 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 39138 8012AD38 1A80053C */  lui        $a1, %hi(D_8019ED58)
    /* 3913C 8012AD3C 58EDA58C */  lw         $a1, %lo(D_8019ED58)($a1)
    /* 39140 8012AD40 00004394 */  lhu        $v1, 0x0($v0)
    /* 39144 8012AD44 20000424 */  addiu      $a0, $zero, 0x20
    /* 39148 8012AD48 98E5030C */  jal        func_800F9660
    /* 3914C 8012AD4C 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 39150 8012AD50 8CDB030C */  jal        func_800F6E30
    /* 39154 8012AD54 5A000424 */   addiu     $a0, $zero, 0x5A
    /* 39158 8012AD58 5DD5030C */  jal        func_800F5574
    /* 3915C 8012AD5C FE000424 */   addiu     $a0, $zero, 0xFE
    /* 39160 8012AD60 F5D4030C */  jal        func_800F53D4
    /* 39164 8012AD64 00000000 */   nop
    /* 39168 8012AD68 21004014 */  bnez       $v0, .L8012ADF0
    /* 3916C 8012AD6C 00000000 */   nop
    /* 39170 8012AD70 53D9030C */  jal        func_800F654C
    /* 39174 8012AD74 C8000424 */   addiu     $a0, $zero, 0xC8
    /* 39178 8012AD78 BBE0030C */  jal        func_800F82EC
    /* 3917C 8012AD7C 29000424 */   addiu     $a0, $zero, 0x29
    /* 39180 8012AD80 EFD8030C */  jal        func_800F63BC
    /* 39184 8012AD84 00000000 */   nop
    /* 39188 8012AD88 8CD9030C */  jal        func_800F6630
    /* 3918C 8012AD8C DB000424 */   addiu     $a0, $zero, 0xDB
    /* 39190 8012AD90 BBE0030C */  jal        func_800F82EC
    /* 39194 8012AD94 29000424 */   addiu     $a0, $zero, 0x29
    /* 39198 8012AD98 EFD8030C */  jal        func_800F63BC
    /* 3919C 8012AD9C 00000000 */   nop
    /* 391A0 8012ADA0 8CD9030C */  jal        func_800F6630
    /* 391A4 8012ADA4 5C000424 */   addiu     $a0, $zero, 0x5C
    /* 391A8 8012ADA8 E7E4030C */  jal        func_800F939C
    /* 391AC 8012ADAC 00000000 */   nop
    /* 391B0 8012ADB0 B781040C */  jal        func_801206DC
    /* 391B4 8012ADB4 00000000 */   nop
    /* 391B8 8012ADB8 83E5030C */  jal        func_800F960C
    /* 391BC 8012ADBC 00000000 */   nop
    /* 391C0 8012ADC0 EFD8030C */  jal        func_800F63BC
    /* 391C4 8012ADC4 00000000 */   nop
    /* 391C8 8012ADC8 8CD9030C */  jal        func_800F6630
    /* 391CC 8012ADCC DB000424 */   addiu     $a0, $zero, 0xDB
    /* 391D0 8012ADD0 BBE0030C */  jal        func_800F82EC
    /* 391D4 8012ADD4 29000424 */   addiu     $a0, $zero, 0x29
    /* 391D8 8012ADD8 EFD8030C */  jal        func_800F63BC
    /* 391DC 8012ADDC 00000000 */   nop
    /* 391E0 8012ADE0 EFD8030C */  jal        func_800F63BC
    /* 391E4 8012ADE4 00000000 */   nop
    /* 391E8 8012ADE8 BBE0030C */  jal        func_800F82EC
    /* 391EC 8012ADEC 29000424 */   addiu     $a0, $zero, 0x29
  .L8012ADF0:
    /* 391F0 8012ADF0 1000BF8F */  lw         $ra, 0x10($sp)
    /* 391F4 8012ADF4 00000000 */  nop
    /* 391F8 8012ADF8 0800E003 */  jr         $ra
    /* 391FC 8012ADFC 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8012AB18
