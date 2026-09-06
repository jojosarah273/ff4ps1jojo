nonmatching func_8010A964, 0x5C8

glabel func_8010A964
    /* 18D64 8010A964 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 18D68 8010A968 1000BFAF */  sw         $ra, 0x10($sp)
    /* 18D6C 8010A96C 59D9030C */  jal        func_800F6564
    /* 18D70 8010A970 05170424 */   addiu     $a0, $zero, 0x1705
    /* 18D74 8010A974 93E0030C */  jal        func_800F824C
    /* 18D78 8010A978 08000424 */   addiu     $a0, $zero, 0x8
    /* 18D7C 8010A97C 50D4030C */  jal        func_800F5140
    /* 18D80 8010A980 00000000 */   nop
    /* 18D84 8010A984 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 18D88 8010A988 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 18D8C 8010A98C 1A80053C */  lui        $a1, %hi(D_8019ED58)
    /* 18D90 8010A990 58EDA58C */  lw         $a1, %lo(D_8019ED58)($a1)
    /* 18D94 8010A994 00004394 */  lhu        $v1, 0x0($v0)
    /* 18D98 8010A998 02020424 */  addiu      $a0, $zero, 0x202
    /* 18D9C 8010A99C F8DC030C */  jal        func_800F73E0
    /* 18DA0 8010A9A0 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 18DA4 8010A9A4 0F004014 */  bnez       $v0, .L8010A9E4
    /* 18DA8 8010A9A8 00000000 */   nop
    /* 18DAC 8010A9AC 5CDB030C */  jal        func_800F6D70
    /* 18DB0 8010A9B0 A4060424 */   addiu     $a0, $zero, 0x6A4
    /* 18DB4 8010A9B4 92D0030C */  jal        func_800F4248
    /* 18DB8 8010A9B8 20000424 */   addiu     $a0, $zero, 0x20
    /* 18DBC 8010A9BC 48D0030C */  jal        func_800F4120
    /* 18DC0 8010A9C0 02000424 */   addiu     $a0, $zero, 0x2
    /* 18DC4 8010A9C4 07004014 */  bnez       $v0, .L8010A9E4
    /* 18DC8 8010A9C8 00000000 */   nop
    /* 18DCC 8010A9CC 53D9030C */  jal        func_800F654C
    /* 18DD0 8010A9D0 04000424 */   addiu     $a0, $zero, 0x4
    /* 18DD4 8010A9D4 93E0030C */  jal        func_800F824C
    /* 18DD8 8010A9D8 08000424 */   addiu     $a0, $zero, 0x8
    /* 18DDC 8010A9DC 872A0408 */  j          .L8010AA1C
    /* 18DE0 8010A9E0 00000000 */   nop
  .L8010A9E4:
    /* 18DE4 8010A9E4 5CDB030C */  jal        func_800F6D70
    /* 18DE8 8010A9E8 A3060424 */   addiu     $a0, $zero, 0x6A3
    /* 18DEC 8010A9EC 92D0030C */  jal        func_800F4248
    /* 18DF0 8010A9F0 03000424 */   addiu     $a0, $zero, 0x3
    /* 18DF4 8010A9F4 48D0030C */  jal        func_800F4120
    /* 18DF8 8010A9F8 02000424 */   addiu     $a0, $zero, 0x2
    /* 18DFC 8010A9FC 07004014 */  bnez       $v0, .L8010AA1C
    /* 18E00 8010AA00 00000000 */   nop
    /* 18E04 8010AA04 DCD0030C */  jal        func_800F4370
    /* 18E08 8010AA08 D2000424 */   addiu     $a0, $zero, 0xD2
    /* 18E0C 8010AA0C 48D0030C */  jal        func_800F4120
    /* 18E10 8010AA10 02020424 */   addiu     $a0, $zero, 0x202
    /* 18E14 8010AA14 41014010 */  beqz       $v0, .L8010AF1C
    /* 18E18 8010AA18 21100000 */   addu      $v0, $zero, $zero
  .L8010AA1C:
    /* 18E1C 8010AA1C 8CD9030C */  jal        func_800F6630
    /* 18E20 8010AA20 08000424 */   addiu     $a0, $zero, 0x8
    /* 18E24 8010AA24 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 18E28 8010AA28 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 18E2C 8010AA2C 1A80053C */  lui        $a1, %hi(D_8019ED58)
    /* 18E30 8010AA30 58EDA58C */  lw         $a1, %lo(D_8019ED58)($a1)
    /* 18E34 8010AA34 00004394 */  lhu        $v1, 0x0($v0)
    /* 18E38 8010AA38 06170424 */  addiu      $a0, $zero, 0x1706
    /* 18E3C 8010AA3C 59D9030C */  jal        func_800F6564
    /* 18E40 8010AA40 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 18E44 8010AA44 04D5030C */  jal        func_800F5410
    /* 18E48 8010AA48 00000000 */   nop
    /* 18E4C 8010AA4C 1A80043C */  lui        $a0, %hi(D_8019ED58)
    /* 18E50 8010AA50 58ED848C */  lw         $a0, %lo(D_8019ED58)($a0)
    /* 18E54 8010AA54 1A80023C */  lui        $v0, %hi(D_80198B50)
    /* 18E58 8010AA58 00008394 */  lhu        $v1, 0x0($a0)
    /* 18E5C 8010AA5C 508B4224 */  addiu      $v0, $v0, %lo(D_80198B50)
    /* 18E60 8010AA60 21186200 */  addu       $v1, $v1, $v0
    /* 18E64 8010AA64 00006490 */  lbu        $a0, 0x0($v1)
    /* 18E68 8010AA68 02D0030C */  jal        func_800F4008
    /* 18E6C 8010AA6C 00000000 */   nop
    /* 18E70 8010AA70 93E0030C */  jal        func_800F824C
    /* 18E74 8010AA74 0C000424 */   addiu     $a0, $zero, 0xC
    /* 18E78 8010AA78 59D9030C */  jal        func_800F6564
    /* 18E7C 8010AA7C 07170424 */   addiu     $a0, $zero, 0x1707
    /* 18E80 8010AA80 04D5030C */  jal        func_800F5410
    /* 18E84 8010AA84 00000000 */   nop
    /* 18E88 8010AA88 1A80043C */  lui        $a0, %hi(D_8019ED58)
    /* 18E8C 8010AA8C 58ED848C */  lw         $a0, %lo(D_8019ED58)($a0)
    /* 18E90 8010AA90 1A80023C */  lui        $v0, %hi(D_80198B58)
    /* 18E94 8010AA94 00008394 */  lhu        $v1, 0x0($a0)
    /* 18E98 8010AA98 588B4224 */  addiu      $v0, $v0, %lo(D_80198B58)
    /* 18E9C 8010AA9C 21186200 */  addu       $v1, $v1, $v0
    /* 18EA0 8010AAA0 00006490 */  lbu        $a0, 0x0($v1)
    /* 18EA4 8010AAA4 02D0030C */  jal        func_800F4008
    /* 18EA8 8010AAA8 00000000 */   nop
    /* 18EAC 8010AAAC 93E0030C */  jal        func_800F824C
    /* 18EB0 8010AAB0 0E000424 */   addiu     $a0, $zero, 0xE
    /* 18EB4 8010AAB4 1635040C */  jal        func_8010D458
    /* 18EB8 8010AAB8 00000000 */   nop
    /* 18EBC 8010AABC 5DD5030C */  jal        func_800F5574
    /* 18EC0 8010AAC0 21200000 */   addu      $a0, $zero, $zero
    /* 18EC4 8010AAC4 F5D4030C */  jal        func_800F53D4
    /* 18EC8 8010AAC8 00000000 */   nop
    /* 18ECC 8010AACC 0B004014 */  bnez       $v0, .L8010AAFC
    /* 18ED0 8010AAD0 00000000 */   nop
    /* 18ED4 8010AAD4 5DD5030C */  jal        func_800F5574
    /* 18ED8 8010AAD8 FF000424 */   addiu     $a0, $zero, 0xFF
    /* 18EDC 8010AADC F5D4030C */  jal        func_800F53D4
    /* 18EE0 8010AAE0 00000000 */   nop
    /* 18EE4 8010AAE4 05004014 */  bnez       $v0, .L8010AAFC
    /* 18EE8 8010AAE8 00000000 */   nop
    /* 18EEC 8010AAEC CB2B040C */  jal        func_8010AF2C
    /* 18EF0 8010AAF0 00000000 */   nop
    /* 18EF4 8010AAF4 9A2B0408 */  j          .L8010AE68
    /* 18EF8 8010AAF8 00000000 */   nop
  .L8010AAFC:
    /* 18EFC 8010AAFC 8CD9030C */  jal        func_800F6630
    /* 18F00 8010AB00 08000424 */   addiu     $a0, $zero, 0x8
    /* 18F04 8010AB04 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 18F08 8010AB08 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 18F0C 8010AB0C 1A80053C */  lui        $a1, %hi(D_8019ED58)
    /* 18F10 8010AB10 58EDA58C */  lw         $a1, %lo(D_8019ED58)($a1)
    /* 18F14 8010AB14 00004394 */  lhu        $v1, 0x0($v0)
    /* 18F18 8010AB18 06170424 */  addiu      $a0, $zero, 0x1706
    /* 18F1C 8010AB1C 59D9030C */  jal        func_800F6564
    /* 18F20 8010AB20 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 18F24 8010AB24 04D5030C */  jal        func_800F5410
    /* 18F28 8010AB28 00000000 */   nop
    /* 18F2C 8010AB2C 1A80043C */  lui        $a0, %hi(D_8019ED58)
    /* 18F30 8010AB30 58ED848C */  lw         $a0, %lo(D_8019ED58)($a0)
    /* 18F34 8010AB34 1A80023C */  lui        $v0, %hi(D_80198B60)
    /* 18F38 8010AB38 00008394 */  lhu        $v1, 0x0($a0)
    /* 18F3C 8010AB3C 608B4224 */  addiu      $v0, $v0, %lo(D_80198B60)
    /* 18F40 8010AB40 21186200 */  addu       $v1, $v1, $v0
    /* 18F44 8010AB44 00006490 */  lbu        $a0, 0x0($v1)
    /* 18F48 8010AB48 02D0030C */  jal        func_800F4008
    /* 18F4C 8010AB4C 00000000 */   nop
    /* 18F50 8010AB50 93E0030C */  jal        func_800F824C
    /* 18F54 8010AB54 0C000424 */   addiu     $a0, $zero, 0xC
    /* 18F58 8010AB58 59D9030C */  jal        func_800F6564
    /* 18F5C 8010AB5C 07170424 */   addiu     $a0, $zero, 0x1707
    /* 18F60 8010AB60 04D5030C */  jal        func_800F5410
    /* 18F64 8010AB64 00000000 */   nop
    /* 18F68 8010AB68 1A80043C */  lui        $a0, %hi(D_8019ED58)
    /* 18F6C 8010AB6C 58ED848C */  lw         $a0, %lo(D_8019ED58)($a0)
    /* 18F70 8010AB70 1A80023C */  lui        $v0, %hi(D_80198B68)
    /* 18F74 8010AB74 00008394 */  lhu        $v1, 0x0($a0)
    /* 18F78 8010AB78 688B4224 */  addiu      $v0, $v0, %lo(D_80198B68)
    /* 18F7C 8010AB7C 21186200 */  addu       $v1, $v1, $v0
    /* 18F80 8010AB80 00006490 */  lbu        $a0, 0x0($v1)
    /* 18F84 8010AB84 02D0030C */  jal        func_800F4008
    /* 18F88 8010AB88 00000000 */   nop
    /* 18F8C 8010AB8C 93E0030C */  jal        func_800F824C
    /* 18F90 8010AB90 0E000424 */   addiu     $a0, $zero, 0xE
    /* 18F94 8010AB94 1635040C */  jal        func_8010D458
    /* 18F98 8010AB98 00000000 */   nop
    /* 18F9C 8010AB9C 5DD5030C */  jal        func_800F5574
    /* 18FA0 8010ABA0 21200000 */   addu      $a0, $zero, $zero
    /* 18FA4 8010ABA4 F5D4030C */  jal        func_800F53D4
    /* 18FA8 8010ABA8 00000000 */   nop
    /* 18FAC 8010ABAC 1C004014 */  bnez       $v0, .L8010AC20
    /* 18FB0 8010ABB0 00000000 */   nop
    /* 18FB4 8010ABB4 5DD5030C */  jal        func_800F5574
    /* 18FB8 8010ABB8 FF000424 */   addiu     $a0, $zero, 0xFF
    /* 18FBC 8010ABBC F5D4030C */  jal        func_800F53D4
    /* 18FC0 8010ABC0 00000000 */   nop
    /* 18FC4 8010ABC4 16004014 */  bnez       $v0, .L8010AC20
    /* 18FC8 8010ABC8 00000000 */   nop
    /* 18FCC 8010ABCC CB2B040C */  jal        func_8010AF2C
    /* 18FD0 8010ABD0 00000000 */   nop
    /* 18FD4 8010ABD4 5DD5030C */  jal        func_800F5574
    /* 18FD8 8010ABD8 FF000424 */   addiu     $a0, $zero, 0xFF
    /* 18FDC 8010ABDC F5D4030C */  jal        func_800F53D4
    /* 18FE0 8010ABE0 00000000 */   nop
    /* 18FE4 8010ABE4 0E004014 */  bnez       $v0, .L8010AC20
    /* 18FE8 8010ABE8 1A80033C */   lui       $v1, %hi(D_80198B90)
    /* 18FEC 8010ABEC 1A80023C */  lui        $v0, %hi(D_8019ED58)
    /* 18FF0 8010ABF0 58ED428C */  lw         $v0, %lo(D_8019ED58)($v0)
    /* 18FF4 8010ABF4 00000000 */  nop
    /* 18FF8 8010ABF8 00004594 */  lhu        $a1, 0x0($v0)
    /* 18FFC 8010ABFC 908B6324 */  addiu      $v1, $v1, %lo(D_80198B90)
    /* 19000 8010AC00 2128A300 */  addu       $a1, $a1, $v1
    /* 19004 8010AC04 0000A490 */  lbu        $a0, 0x0($a1)
    /* 19008 8010AC08 5DD5030C */  jal        func_800F5574
    /* 1900C 8010AC0C 00000000 */   nop
    /* 19010 8010AC10 F5D4030C */  jal        func_800F53D4
    /* 19014 8010AC14 00000000 */   nop
    /* 19018 8010AC18 93004014 */  bnez       $v0, .L8010AE68
    /* 1901C 8010AC1C 00000000 */   nop
  .L8010AC20:
    /* 19020 8010AC20 8CD9030C */  jal        func_800F6630
    /* 19024 8010AC24 08000424 */   addiu     $a0, $zero, 0x8
    /* 19028 8010AC28 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 1902C 8010AC2C 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 19030 8010AC30 1A80053C */  lui        $a1, %hi(D_8019ED58)
    /* 19034 8010AC34 58EDA58C */  lw         $a1, %lo(D_8019ED58)($a1)
    /* 19038 8010AC38 00004394 */  lhu        $v1, 0x0($v0)
    /* 1903C 8010AC3C 06170424 */  addiu      $a0, $zero, 0x1706
    /* 19040 8010AC40 59D9030C */  jal        func_800F6564
    /* 19044 8010AC44 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 19048 8010AC48 04D5030C */  jal        func_800F5410
    /* 1904C 8010AC4C 00000000 */   nop
    /* 19050 8010AC50 1A80043C */  lui        $a0, %hi(D_8019ED58)
    /* 19054 8010AC54 58ED848C */  lw         $a0, %lo(D_8019ED58)($a0)
    /* 19058 8010AC58 1A80023C */  lui        $v0, %hi(D_80198B70)
    /* 1905C 8010AC5C 00008394 */  lhu        $v1, 0x0($a0)
    /* 19060 8010AC60 708B4224 */  addiu      $v0, $v0, %lo(D_80198B70)
    /* 19064 8010AC64 21186200 */  addu       $v1, $v1, $v0
    /* 19068 8010AC68 00006490 */  lbu        $a0, 0x0($v1)
    /* 1906C 8010AC6C 02D0030C */  jal        func_800F4008
    /* 19070 8010AC70 00000000 */   nop
    /* 19074 8010AC74 93E0030C */  jal        func_800F824C
    /* 19078 8010AC78 0C000424 */   addiu     $a0, $zero, 0xC
    /* 1907C 8010AC7C 59D9030C */  jal        func_800F6564
    /* 19080 8010AC80 07170424 */   addiu     $a0, $zero, 0x1707
    /* 19084 8010AC84 04D5030C */  jal        func_800F5410
    /* 19088 8010AC88 00000000 */   nop
    /* 1908C 8010AC8C 1A80043C */  lui        $a0, %hi(D_8019ED58)
    /* 19090 8010AC90 58ED848C */  lw         $a0, %lo(D_8019ED58)($a0)
    /* 19094 8010AC94 1A80023C */  lui        $v0, %hi(D_80198B78)
    /* 19098 8010AC98 00008394 */  lhu        $v1, 0x0($a0)
    /* 1909C 8010AC9C 788B4224 */  addiu      $v0, $v0, %lo(D_80198B78)
    /* 190A0 8010ACA0 21186200 */  addu       $v1, $v1, $v0
    /* 190A4 8010ACA4 00006490 */  lbu        $a0, 0x0($v1)
    /* 190A8 8010ACA8 02D0030C */  jal        func_800F4008
    /* 190AC 8010ACAC 00000000 */   nop
    /* 190B0 8010ACB0 93E0030C */  jal        func_800F824C
    /* 190B4 8010ACB4 0E000424 */   addiu     $a0, $zero, 0xE
    /* 190B8 8010ACB8 1635040C */  jal        func_8010D458
    /* 190BC 8010ACBC 00000000 */   nop
    /* 190C0 8010ACC0 5DD5030C */  jal        func_800F5574
    /* 190C4 8010ACC4 21200000 */   addu      $a0, $zero, $zero
    /* 190C8 8010ACC8 F5D4030C */  jal        func_800F53D4
    /* 190CC 8010ACCC 00000000 */   nop
    /* 190D0 8010ACD0 1C004014 */  bnez       $v0, .L8010AD44
    /* 190D4 8010ACD4 00000000 */   nop
    /* 190D8 8010ACD8 5DD5030C */  jal        func_800F5574
    /* 190DC 8010ACDC FF000424 */   addiu     $a0, $zero, 0xFF
    /* 190E0 8010ACE0 F5D4030C */  jal        func_800F53D4
    /* 190E4 8010ACE4 00000000 */   nop
    /* 190E8 8010ACE8 16004014 */  bnez       $v0, .L8010AD44
    /* 190EC 8010ACEC 00000000 */   nop
    /* 190F0 8010ACF0 CB2B040C */  jal        func_8010AF2C
    /* 190F4 8010ACF4 00000000 */   nop
    /* 190F8 8010ACF8 5DD5030C */  jal        func_800F5574
    /* 190FC 8010ACFC FF000424 */   addiu     $a0, $zero, 0xFF
    /* 19100 8010AD00 F5D4030C */  jal        func_800F53D4
    /* 19104 8010AD04 00000000 */   nop
    /* 19108 8010AD08 0E004014 */  bnez       $v0, .L8010AD44
    /* 1910C 8010AD0C 1A80033C */   lui       $v1, %hi(D_80198B98)
    /* 19110 8010AD10 1A80023C */  lui        $v0, %hi(D_8019ED58)
    /* 19114 8010AD14 58ED428C */  lw         $v0, %lo(D_8019ED58)($v0)
    /* 19118 8010AD18 00000000 */  nop
    /* 1911C 8010AD1C 00004594 */  lhu        $a1, 0x0($v0)
    /* 19120 8010AD20 988B6324 */  addiu      $v1, $v1, %lo(D_80198B98)
    /* 19124 8010AD24 2128A300 */  addu       $a1, $a1, $v1
    /* 19128 8010AD28 0000A490 */  lbu        $a0, 0x0($a1)
    /* 1912C 8010AD2C 5DD5030C */  jal        func_800F5574
    /* 19130 8010AD30 00000000 */   nop
    /* 19134 8010AD34 F5D4030C */  jal        func_800F53D4
    /* 19138 8010AD38 00000000 */   nop
    /* 1913C 8010AD3C 4A004014 */  bnez       $v0, .L8010AE68
    /* 19140 8010AD40 00000000 */   nop
  .L8010AD44:
    /* 19144 8010AD44 8CD9030C */  jal        func_800F6630
    /* 19148 8010AD48 08000424 */   addiu     $a0, $zero, 0x8
    /* 1914C 8010AD4C 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 19150 8010AD50 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 19154 8010AD54 1A80053C */  lui        $a1, %hi(D_8019ED58)
    /* 19158 8010AD58 58EDA58C */  lw         $a1, %lo(D_8019ED58)($a1)
    /* 1915C 8010AD5C 00004394 */  lhu        $v1, 0x0($v0)
    /* 19160 8010AD60 06170424 */  addiu      $a0, $zero, 0x1706
    /* 19164 8010AD64 59D9030C */  jal        func_800F6564
    /* 19168 8010AD68 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 1916C 8010AD6C 04D5030C */  jal        func_800F5410
    /* 19170 8010AD70 00000000 */   nop
    /* 19174 8010AD74 1A80043C */  lui        $a0, %hi(D_8019ED58)
    /* 19178 8010AD78 58ED848C */  lw         $a0, %lo(D_8019ED58)($a0)
    /* 1917C 8010AD7C 1A80023C */  lui        $v0, %hi(D_80198B80)
    /* 19180 8010AD80 00008394 */  lhu        $v1, 0x0($a0)
    /* 19184 8010AD84 808B4224 */  addiu      $v0, $v0, %lo(D_80198B80)
    /* 19188 8010AD88 21186200 */  addu       $v1, $v1, $v0
    /* 1918C 8010AD8C 00006490 */  lbu        $a0, 0x0($v1)
    /* 19190 8010AD90 02D0030C */  jal        func_800F4008
    /* 19194 8010AD94 00000000 */   nop
    /* 19198 8010AD98 93E0030C */  jal        func_800F824C
    /* 1919C 8010AD9C 0C000424 */   addiu     $a0, $zero, 0xC
    /* 191A0 8010ADA0 59D9030C */  jal        func_800F6564
    /* 191A4 8010ADA4 07170424 */   addiu     $a0, $zero, 0x1707
    /* 191A8 8010ADA8 04D5030C */  jal        func_800F5410
    /* 191AC 8010ADAC 00000000 */   nop
    /* 191B0 8010ADB0 1A80043C */  lui        $a0, %hi(D_8019ED58)
    /* 191B4 8010ADB4 58ED848C */  lw         $a0, %lo(D_8019ED58)($a0)
    /* 191B8 8010ADB8 1A80023C */  lui        $v0, %hi(D_80198B88)
    /* 191BC 8010ADBC 00008394 */  lhu        $v1, 0x0($a0)
    /* 191C0 8010ADC0 888B4224 */  addiu      $v0, $v0, %lo(D_80198B88)
    /* 191C4 8010ADC4 21186200 */  addu       $v1, $v1, $v0
    /* 191C8 8010ADC8 00006490 */  lbu        $a0, 0x0($v1)
    /* 191CC 8010ADCC 02D0030C */  jal        func_800F4008
    /* 191D0 8010ADD0 00000000 */   nop
    /* 191D4 8010ADD4 93E0030C */  jal        func_800F824C
    /* 191D8 8010ADD8 0E000424 */   addiu     $a0, $zero, 0xE
    /* 191DC 8010ADDC 1635040C */  jal        func_8010D458
    /* 191E0 8010ADE0 00000000 */   nop
    /* 191E4 8010ADE4 5DD5030C */  jal        func_800F5574
    /* 191E8 8010ADE8 21200000 */   addu      $a0, $zero, $zero
    /* 191EC 8010ADEC F5D4030C */  jal        func_800F53D4
    /* 191F0 8010ADF0 00000000 */   nop
    /* 191F4 8010ADF4 49004014 */  bnez       $v0, .L8010AF1C
    /* 191F8 8010ADF8 21100000 */   addu      $v0, $zero, $zero
    /* 191FC 8010ADFC 5DD5030C */  jal        func_800F5574
    /* 19200 8010AE00 FF000424 */   addiu     $a0, $zero, 0xFF
    /* 19204 8010AE04 F5D4030C */  jal        func_800F53D4
    /* 19208 8010AE08 00000000 */   nop
    /* 1920C 8010AE0C 43004014 */  bnez       $v0, .L8010AF1C
    /* 19210 8010AE10 21100000 */   addu      $v0, $zero, $zero
    /* 19214 8010AE14 CB2B040C */  jal        func_8010AF2C
    /* 19218 8010AE18 00000000 */   nop
    /* 1921C 8010AE1C 5DD5030C */  jal        func_800F5574
    /* 19220 8010AE20 FF000424 */   addiu     $a0, $zero, 0xFF
    /* 19224 8010AE24 F5D4030C */  jal        func_800F53D4
    /* 19228 8010AE28 00000000 */   nop
    /* 1922C 8010AE2C 3B004014 */  bnez       $v0, .L8010AF1C
    /* 19230 8010AE30 21100000 */   addu      $v0, $zero, $zero
    /* 19234 8010AE34 1A80023C */  lui        $v0, %hi(D_8019ED58)
    /* 19238 8010AE38 58ED428C */  lw         $v0, %lo(D_8019ED58)($v0)
    /* 1923C 8010AE3C 1A80033C */  lui        $v1, %hi(D_80198BA0)
    /* 19240 8010AE40 00004594 */  lhu        $a1, 0x0($v0)
    /* 19244 8010AE44 A08B6324 */  addiu      $v1, $v1, %lo(D_80198BA0)
    /* 19248 8010AE48 2128A300 */  addu       $a1, $a1, $v1
    /* 1924C 8010AE4C 0000A490 */  lbu        $a0, 0x0($a1)
    /* 19250 8010AE50 5DD5030C */  jal        func_800F5574
    /* 19254 8010AE54 00000000 */   nop
    /* 19258 8010AE58 F5D4030C */  jal        func_800F53D4
    /* 1925C 8010AE5C 00000000 */   nop
    /* 19260 8010AE60 2E004010 */  beqz       $v0, .L8010AF1C
    /* 19264 8010AE64 21100000 */   addu      $v0, $zero, $zero
  .L8010AE68:
    /* 19268 8010AE68 DADA030C */  jal        func_800F6B68
    /* 1926C 8010AE6C 09090424 */   addiu     $a0, $zero, 0x909
    /* 19270 8010AE70 80E4030C */  jal        func_800F9200
    /* 19274 8010AE74 00000000 */   nop
    /* 19278 8010AE78 DADA030C */  jal        func_800F6B68
    /* 1927C 8010AE7C 01090424 */   addiu     $a0, $zero, 0x901
    /* 19280 8010AE80 92D0030C */  jal        func_800F4248
    /* 19284 8010AE84 10000424 */   addiu     $a0, $zero, 0x10
    /* 19288 8010AE88 48D0030C */  jal        func_800F4120
    /* 1928C 8010AE8C 02000424 */   addiu     $a0, $zero, 0x2
    /* 19290 8010AE90 0B004014 */  bnez       $v0, .L8010AEC0
    /* 19294 8010AE94 00000000 */   nop
    /* 19298 8010AE98 59D9030C */  jal        func_800F6564
    /* 1929C 8010AE9C 05170424 */   addiu     $a0, $zero, 0x1705
    /* 192A0 8010AEA0 04D5030C */  jal        func_800F5410
    /* 192A4 8010AEA4 00000000 */   nop
    /* 192A8 8010AEA8 02D0030C */  jal        func_800F4008
    /* 192AC 8010AEAC 02000424 */   addiu     $a0, $zero, 0x2
    /* 192B0 8010AEB0 92D0030C */  jal        func_800F4248
    /* 192B4 8010AEB4 03000424 */   addiu     $a0, $zero, 0x3
    /* 192B8 8010AEB8 DAE1030C */  jal        func_800F8768
    /* 192BC 8010AEBC 09090424 */   addiu     $a0, $zero, 0x909
  .L8010AEC0:
    /* 192C0 8010AEC0 CCE4030C */  jal        func_800F9330
    /* 192C4 8010AEC4 00000000 */   nop
    /* 192C8 8010AEC8 042C040C */  jal        func_8010B010
    /* 192CC 8010AECC 00000000 */   nop
    /* 192D0 8010AED0 68E5030C */  jal        func_800F95A0
    /* 192D4 8010AED4 00000000 */   nop
    /* 192D8 8010AED8 DADA030C */  jal        func_800F6B68
    /* 192DC 8010AEDC 07090424 */   addiu     $a0, $zero, 0x907
    /* 192E0 8010AEE0 CCE4030C */  jal        func_800F9330
    /* 192E4 8010AEE4 00000000 */   nop
    /* 192E8 8010AEE8 566C040C */  jal        func_8011B158
    /* 192EC 8010AEEC 00000000 */   nop
    /* 192F0 8010AEF0 0A004014 */  bnez       $v0, .L8010AF1C
    /* 192F4 8010AEF4 01000224 */   addiu     $v0, $zero, 0x1
    /* 192F8 8010AEF8 68E5030C */  jal        func_800F95A0
    /* 192FC 8010AEFC 00000000 */   nop
    /* 19300 8010AF00 F7E4030C */  jal        func_800F93DC
    /* 19304 8010AF04 00000000 */   nop
    /* 19308 8010AF08 DAE1030C */  jal        func_800F8768
    /* 1930C 8010AF0C 09090424 */   addiu     $a0, $zero, 0x909
    /* 19310 8010AF10 EEE3030C */  jal        func_800F8FB8
    /* 19314 8010AF14 EE000424 */   addiu     $a0, $zero, 0xEE
    /* 19318 8010AF18 21100000 */  addu       $v0, $zero, $zero
  .L8010AF1C:
    /* 1931C 8010AF1C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 19320 8010AF20 00000000 */  nop
    /* 19324 8010AF24 0800E003 */  jr         $ra
    /* 19328 8010AF28 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8010A964
