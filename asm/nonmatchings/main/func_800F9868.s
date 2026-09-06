nonmatching func_800F9868, 0x368

glabel func_800F9868
    /* 7C68 800F9868 FC7F053C */  lui        $a1, (0x7FFC8000 >> 16)
    /* 7C6C 800F986C 0080A534 */  ori        $a1, $a1, (0x7FFC8000 & 0xFFFF)
    /* 7C70 800F9870 21708000 */  addu       $t6, $a0, $zero
    /* 7C74 800F9874 0D80023C */  lui        $v0, %hi(D_800D4304)
    /* 7C78 800F9878 2110C201 */  addu       $v0, $t6, $v0
    /* 7C7C 800F987C 04434490 */  lbu        $a0, %lo(D_800D4304)($v0)
    /* 7C80 800F9880 02434C94 */  lhu        $t4, %lo(D_800D4302)($v0)
    /* 7C84 800F9884 7E000224 */  addiu      $v0, $zero, 0x7E
    /* 7C88 800F9888 0D80083C */  lui        $t0, %hi(D_800D2116)
    /* 7C8C 800F988C 16210895 */  lhu        $t0, %lo(D_800D2116)($t0)
    /* 7C90 800F9890 C01B0400 */  sll        $v1, $a0, 15
    /* 7C94 800F9894 10008210 */  beq        $a0, $v0, .L800F98D8
    /* 7C98 800F9898 21486500 */   addu      $t1, $v1, $a1
    /* 7C9C 800F989C 7F008228 */  slti       $v0, $a0, 0x7F
    /* 7CA0 800F98A0 05004010 */  beqz       $v0, .L800F98B8
    /* 7CA4 800F98A4 70000224 */   addiu     $v0, $zero, 0x70
    /* 7CA8 800F98A8 08008210 */  beq        $a0, $v0, .L800F98CC
    /* 7CAC 800F98AC FF7F0224 */   addiu     $v0, $zero, 0x7FFF
    /* 7CB0 800F98B0 3FE60308 */  j          .L800F98FC
    /* 7CB4 800F98B4 2A104C00 */   slt       $v0, $v0, $t4
  .L800F98B8:
    /* 7CB8 800F98B8 7F000224 */  addiu      $v0, $zero, 0x7F
    /* 7CBC 800F98BC 0C008210 */  beq        $a0, $v0, .L800F98F0
    /* 7CC0 800F98C0 FF7F0224 */   addiu     $v0, $zero, 0x7FFF
    /* 7CC4 800F98C4 3FE60308 */  j          .L800F98FC
    /* 7CC8 800F98C8 2A104C00 */   slt       $v0, $v0, $t4
  .L800F98CC:
    /* 7CCC 800F98CC 0D80093C */  lui        $t1, (0x800D2200 >> 16)
    /* 7CD0 800F98D0 42E60308 */  j          .L800F9908
    /* 7CD4 800F98D4 00222935 */   ori       $t1, $t1, (0x800D2200 & 0xFFFF)
  .L800F98D8:
    /* 7CD8 800F98D8 0D80093C */  lui        $t1, (0x800D2400 >> 16)
    /* 7CDC 800F98DC 00208229 */  slti       $v0, $t4, 0x2000
    /* 7CE0 800F98E0 09004010 */  beqz       $v0, .L800F9908
    /* 7CE4 800F98E4 00242935 */   ori       $t1, $t1, (0x800D2400 & 0xFFFF)
    /* 7CE8 800F98E8 42E60308 */  j          .L800F9908
    /* 7CEC 800F98EC 0D80093C */   lui       $t1, (0x800D0000 >> 16)
  .L800F98F0:
    /* 7CF0 800F98F0 0E80093C */  lui        $t1, (0x800E2400 >> 16)
    /* 7CF4 800F98F4 42E60308 */  j          .L800F9908
    /* 7CF8 800F98F8 00242935 */   ori       $t1, $t1, (0x800E2400 & 0xFFFF)
  .L800F98FC:
    /* 7CFC 800F98FC 03004014 */  bnez       $v0, .L800F990C
    /* 7D00 800F9900 21482C01 */   addu      $t1, $t1, $t4
    /* 7D04 800F9904 0D80093C */  lui        $t1, (0x800D0000 >> 16)
  .L800F9908:
    /* 7D08 800F9908 21482C01 */  addu       $t1, $t1, $t4
  .L800F990C:
    /* 7D0C 800F990C 0D80023C */  lui        $v0, %hi(D_800D4306)
    /* 7D10 800F9910 2110C201 */  addu       $v0, $t6, $v0
    /* 7D14 800F9914 06434390 */  lbu        $v1, %lo(D_800D4306)($v0)
    /* 7D18 800F9918 05434A90 */  lbu        $t2, %lo(D_800D4305)($v0)
    /* 7D1C 800F991C 0D80023C */  lui        $v0, %hi(D_800D2115)
    /* 7D20 800F9920 15214290 */  lbu        $v0, %lo(D_800D2115)($v0)
    /* 7D24 800F9924 001A0300 */  sll        $v1, $v1, 8
    /* 7D28 800F9928 25504301 */  or         $t2, $t2, $v1
    /* 7D2C 800F992C 0F004230 */  andi       $v0, $v0, 0xF
    /* 7D30 800F9930 FFFF4424 */  addiu      $a0, $v0, -0x1
    /* 7D34 800F9934 0C00832C */  sltiu      $v1, $a0, 0xC
    /* 7D38 800F9938 0E006010 */  beqz       $v1, .L800F9974
    /* 7D3C 800F993C 01000B24 */   addiu     $t3, $zero, 0x1
    /* 7D40 800F9940 0F80023C */  lui        $v0, %hi(jtbl_800F2400)
    /* 7D44 800F9944 00244224 */  addiu      $v0, $v0, %lo(jtbl_800F2400)
    /* 7D48 800F9948 80180400 */  sll        $v1, $a0, 2
    /* 7D4C 800F994C 21186200 */  addu       $v1, $v1, $v0
    /* 7D50 800F9950 0000648C */  lw         $a0, 0x0($v1)
    /* 7D54 800F9954 00000000 */  nop
    /* 7D58 800F9958 08008000 */  jr         $a0
    /* 7D5C 800F995C 00000000 */   nop
  jlabel .L800F9960
    /* 7D60 800F9960 5DE60308 */  j          .L800F9974
    /* 7D64 800F9964 40000B24 */   addiu     $t3, $zero, 0x40
  jlabel .L800F9968
    /* 7D68 800F9968 5DE60308 */  j          .L800F9974
    /* 7D6C 800F996C 20000B24 */   addiu     $t3, $zero, 0x20
  jlabel .L800F9970
    /* 7D70 800F9970 80000B24 */  addiu      $t3, $zero, 0x80
  jlabel .L800F9974
    /* 7D74 800F9974 0D80023C */  lui        $v0, %hi(D_800D4300)
    /* 7D78 800F9978 2120C201 */  addu       $a0, $t6, $v0
    /* 7D7C 800F997C 00438390 */  lbu        $v1, %lo(D_800D4300)($a0)
    /* 7D80 800F9980 01000224 */  addiu      $v0, $zero, 0x1
    /* 7D84 800F9984 37006210 */  beq        $v1, $v0, .L800F9A64
    /* 7D88 800F9988 02006228 */   slti      $v0, $v1, 0x2
    /* 7D8C 800F998C 05004010 */  beqz       $v0, .L800F99A4
    /* 7D90 800F9990 08000224 */   addiu     $v0, $zero, 0x8
    /* 7D94 800F9994 09006010 */  beqz       $v1, .L800F99BC
    /* 7D98 800F9998 02120800 */   srl       $v0, $t0, 8
    /* 7D9C 800F999C E5E60308 */  j          .L800F9B94
    /* 7DA0 800F99A0 0D80033C */   lui       $v1, %hi(D_800D4300)
  .L800F99A4:
    /* 7DA4 800F99A4 43006210 */  beq        $v1, $v0, .L800F9AB4
    /* 7DA8 800F99A8 09000224 */   addiu     $v0, $zero, 0x9
    /* 7DAC 800F99AC 67006210 */  beq        $v1, $v0, .L800F9B4C
    /* 7DB0 800F99B0 02120800 */   srl       $v0, $t0, 8
    /* 7DB4 800F99B4 E5E60308 */  j          .L800F9B94
    /* 7DB8 800F99B8 0D80033C */   lui       $v1, %hi(D_800D4300)
  .L800F99BC:
    /* 7DBC 800F99BC 01438390 */  lbu        $v1, %lo(D_800D4301)($a0)
    /* 7DC0 800F99C0 18000224 */  addiu      $v0, $zero, 0x18
    /* 7DC4 800F99C4 14006214 */  bne        $v1, $v0, .L800F9A18
    /* 7DC8 800F99C8 00000000 */   nop
    /* 7DCC 800F99CC 6F004011 */  beqz       $t2, .L800F9B8C
    /* 7DD0 800F99D0 21380000 */   addu      $a3, $zero, $zero
    /* 7DD4 800F99D4 1D80023C */  lui        $v0, %hi(D_801CFD68)
    /* 7DD8 800F99D8 68FD4D24 */  addiu      $t5, $v0, %lo(D_801CFD68)
  .L800F99DC:
    /* 7DDC 800F99DC 21282701 */  addu       $a1, $t1, $a3
    /* 7DE0 800F99E0 0100E724 */  addiu      $a3, $a3, 0x1
    /* 7DE4 800F99E4 40200800 */  sll        $a0, $t0, 1
    /* 7DE8 800F99E8 21100B01 */  addu       $v0, $t0, $t3
    /* 7DEC 800F99EC FFFF4830 */  andi       $t0, $v0, 0xFFFF
    /* 7DF0 800F99F0 21208D00 */  addu       $a0, $a0, $t5
    /* 7DF4 800F99F4 00008394 */  lhu        $v1, 0x0($a0)
    /* 7DF8 800F99F8 0000A290 */  lbu        $v0, 0x0($a1)
    /* 7DFC 800F99FC 00FF6630 */  andi       $a2, $v1, 0xFF00
    /* 7E00 800F9A00 2510C200 */  or         $v0, $a2, $v0
    /* 7E04 800F9A04 2A18EA00 */  slt        $v1, $a3, $t2
    /* 7E08 800F9A08 F4FF6014 */  bnez       $v1, .L800F99DC
    /* 7E0C 800F9A0C 000082A4 */   sh        $v0, 0x0($a0)
    /* 7E10 800F9A10 E4E60308 */  j          .L800F9B90
    /* 7E14 800F9A14 02120800 */   srl       $v0, $t0, 8
  .L800F9A18:
    /* 7E18 800F9A18 5C004011 */  beqz       $t2, .L800F9B8C
    /* 7E1C 800F9A1C 21380000 */   addu      $a3, $zero, $zero
    /* 7E20 800F9A20 1D80023C */  lui        $v0, %hi(D_801CFD68)
    /* 7E24 800F9A24 68FD4524 */  addiu      $a1, $v0, %lo(D_801CFD68)
  .L800F9A28:
    /* 7E28 800F9A28 21182701 */  addu       $v1, $t1, $a3
    /* 7E2C 800F9A2C 0100E724 */  addiu      $a3, $a3, 0x1
    /* 7E30 800F9A30 40200800 */  sll        $a0, $t0, 1
    /* 7E34 800F9A34 21100B01 */  addu       $v0, $t0, $t3
    /* 7E38 800F9A38 FFFF4830 */  andi       $t0, $v0, 0xFFFF
    /* 7E3C 800F9A3C 21208500 */  addu       $a0, $a0, $a1
    /* 7E40 800F9A40 00006290 */  lbu        $v0, 0x0($v1)
    /* 7E44 800F9A44 2A18EA00 */  slt        $v1, $a3, $t2
    /* 7E48 800F9A48 00008690 */  lbu        $a2, 0x0($a0)
    /* 7E4C 800F9A4C 00120200 */  sll        $v0, $v0, 8
    /* 7E50 800F9A50 2510C200 */  or         $v0, $a2, $v0
    /* 7E54 800F9A54 F4FF6014 */  bnez       $v1, .L800F9A28
    /* 7E58 800F9A58 000082A4 */   sh        $v0, 0x0($a0)
    /* 7E5C 800F9A5C E4E60308 */  j          .L800F9B90
    /* 7E60 800F9A60 02120800 */   srl       $v0, $t0, 8
  .L800F9A64:
    /* 7E64 800F9A64 42180A00 */  srl        $v1, $t2, 1
    /* 7E68 800F9A68 48006010 */  beqz       $v1, .L800F9B8C
    /* 7E6C 800F9A6C 1D80023C */   lui       $v0, %hi(D_801CFD68)
    /* 7E70 800F9A70 68FD4D24 */  addiu      $t5, $v0, %lo(D_801CFD68)
    /* 7E74 800F9A74 21282001 */  addu       $a1, $t1, $zero
    /* 7E78 800F9A78 21386000 */  addu       $a3, $v1, $zero
  .L800F9A7C:
    /* 7E7C 800F9A7C 0000A690 */  lbu        $a2, 0x0($a1)
    /* 7E80 800F9A80 0100A290 */  lbu        $v0, 0x1($a1)
    /* 7E84 800F9A84 0200A524 */  addiu      $a1, $a1, 0x2
    /* 7E88 800F9A88 FFFFE724 */  addiu      $a3, $a3, -0x1
    /* 7E8C 800F9A8C 40200800 */  sll        $a0, $t0, 1
    /* 7E90 800F9A90 21180B01 */  addu       $v1, $t0, $t3
    /* 7E94 800F9A94 FFFF6830 */  andi       $t0, $v1, 0xFFFF
    /* 7E98 800F9A98 21208D00 */  addu       $a0, $a0, $t5
    /* 7E9C 800F9A9C 00120200 */  sll        $v0, $v0, 8
    /* 7EA0 800F9AA0 2510C200 */  or         $v0, $a2, $v0
    /* 7EA4 800F9AA4 F5FFE014 */  bnez       $a3, .L800F9A7C
    /* 7EA8 800F9AA8 000082A4 */   sh        $v0, 0x0($a0)
    /* 7EAC 800F9AAC E4E60308 */  j          .L800F9B90
    /* 7EB0 800F9AB0 02120800 */   srl       $v0, $t0, 8
  .L800F9AB4:
    /* 7EB4 800F9AB4 01438390 */  lbu        $v1, %lo(D_800D4301)($a0)
    /* 7EB8 800F9AB8 18000224 */  addiu      $v0, $zero, 0x18
    /* 7EBC 800F9ABC 12006214 */  bne        $v1, $v0, .L800F9B08
    /* 7EC0 800F9AC0 00000000 */   nop
    /* 7EC4 800F9AC4 31004011 */  beqz       $t2, .L800F9B8C
    /* 7EC8 800F9AC8 1D80023C */   lui       $v0, %hi(D_801CFD68)
    /* 7ECC 800F9ACC 68FD4524 */  addiu      $a1, $v0, %lo(D_801CFD68)
    /* 7ED0 800F9AD0 21384001 */  addu       $a3, $t2, $zero
  .L800F9AD4:
    /* 7ED4 800F9AD4 FFFFE724 */  addiu      $a3, $a3, -0x1
    /* 7ED8 800F9AD8 40200800 */  sll        $a0, $t0, 1
    /* 7EDC 800F9ADC 21100B01 */  addu       $v0, $t0, $t3
    /* 7EE0 800F9AE0 FFFF4830 */  andi       $t0, $v0, 0xFFFF
    /* 7EE4 800F9AE4 21208500 */  addu       $a0, $a0, $a1
    /* 7EE8 800F9AE8 00008394 */  lhu        $v1, 0x0($a0)
    /* 7EEC 800F9AEC 00002291 */  lbu        $v0, 0x0($t1)
    /* 7EF0 800F9AF0 00FF6630 */  andi       $a2, $v1, 0xFF00
    /* 7EF4 800F9AF4 2510C200 */  or         $v0, $a2, $v0
    /* 7EF8 800F9AF8 F6FFE014 */  bnez       $a3, .L800F9AD4
    /* 7EFC 800F9AFC 000082A4 */   sh        $v0, 0x0($a0)
    /* 7F00 800F9B00 E4E60308 */  j          .L800F9B90
    /* 7F04 800F9B04 02120800 */   srl       $v0, $t0, 8
  .L800F9B08:
    /* 7F08 800F9B08 20004011 */  beqz       $t2, .L800F9B8C
    /* 7F0C 800F9B0C 1D80023C */   lui       $v0, %hi(D_801CFD68)
    /* 7F10 800F9B10 68FD4424 */  addiu      $a0, $v0, %lo(D_801CFD68)
    /* 7F14 800F9B14 21384001 */  addu       $a3, $t2, $zero
  .L800F9B18:
    /* 7F18 800F9B18 FFFFE724 */  addiu      $a3, $a3, -0x1
    /* 7F1C 800F9B1C 40180800 */  sll        $v1, $t0, 1
    /* 7F20 800F9B20 21100B01 */  addu       $v0, $t0, $t3
    /* 7F24 800F9B24 FFFF4830 */  andi       $t0, $v0, 0xFFFF
    /* 7F28 800F9B28 21186400 */  addu       $v1, $v1, $a0
    /* 7F2C 800F9B2C 00002291 */  lbu        $v0, 0x0($t1)
    /* 7F30 800F9B30 00006690 */  lbu        $a2, 0x0($v1)
    /* 7F34 800F9B34 00120200 */  sll        $v0, $v0, 8
    /* 7F38 800F9B38 2510C200 */  or         $v0, $a2, $v0
    /* 7F3C 800F9B3C F6FFE014 */  bnez       $a3, .L800F9B18
    /* 7F40 800F9B40 000062A4 */   sh        $v0, 0x0($v1)
    /* 7F44 800F9B44 E4E60308 */  j          .L800F9B90
    /* 7F48 800F9B48 02120800 */   srl       $v0, $t0, 8
  .L800F9B4C:
    /* 7F4C 800F9B4C 42180A00 */  srl        $v1, $t2, 1
    /* 7F50 800F9B50 0E006010 */  beqz       $v1, .L800F9B8C
    /* 7F54 800F9B54 1D80023C */   lui       $v0, %hi(D_801CFD68)
    /* 7F58 800F9B58 68FD4424 */  addiu      $a0, $v0, %lo(D_801CFD68)
    /* 7F5C 800F9B5C 21386000 */  addu       $a3, $v1, $zero
  .L800F9B60:
    /* 7F60 800F9B60 FFFFE724 */  addiu      $a3, $a3, -0x1
    /* 7F64 800F9B64 40180800 */  sll        $v1, $t0, 1
    /* 7F68 800F9B68 21100B01 */  addu       $v0, $t0, $t3
    /* 7F6C 800F9B6C FFFF4830 */  andi       $t0, $v0, 0xFFFF
    /* 7F70 800F9B70 21186400 */  addu       $v1, $v1, $a0
    /* 7F74 800F9B74 00002291 */  lbu        $v0, 0x0($t1)
    /* 7F78 800F9B78 00002691 */  lbu        $a2, 0x0($t1)
    /* 7F7C 800F9B7C 00120200 */  sll        $v0, $v0, 8
    /* 7F80 800F9B80 2510C200 */  or         $v0, $a2, $v0
    /* 7F84 800F9B84 F6FFE014 */  bnez       $a3, .L800F9B60
    /* 7F88 800F9B88 000062A4 */   sh        $v0, 0x0($v1)
  .L800F9B8C:
    /* 7F8C 800F9B8C 02120800 */  srl        $v0, $t0, 8
  .L800F9B90:
    /* 7F90 800F9B90 0D80033C */  lui        $v1, %hi(D_800D4300)
  .L800F9B94:
    /* 7F94 800F9B94 2120C301 */  addu       $a0, $t6, $v1
    /* 7F98 800F9B98 0D80013C */  lui        $at, %hi(D_800D2116)
    /* 7F9C 800F9B9C 162128A0 */  sb         $t0, %lo(D_800D2116)($at)
    /* 7FA0 800F9BA0 0D80013C */  lui        $at, %hi(D_800D2117)
    /* 7FA4 800F9BA4 172122A0 */  sb         $v0, %lo(D_800D2117)($at)
    /* 7FA8 800F9BA8 00438290 */  lbu        $v0, %lo(D_800D4300)($a0)
    /* 7FAC 800F9BAC 00000000 */  nop
    /* 7FB0 800F9BB0 08004230 */  andi       $v0, $v0, 0x8
    /* 7FB4 800F9BB4 04004014 */  bnez       $v0, .L800F9BC8
    /* 7FB8 800F9BB8 21608A01 */   addu      $t4, $t4, $t2
    /* 7FBC 800F9BBC 03120C00 */  sra        $v0, $t4, 8
    /* 7FC0 800F9BC0 02438CA0 */  sb         $t4, %lo(D_800D4302)($a0)
    /* 7FC4 800F9BC4 034382A0 */  sb         $v0, %lo(D_800D4303)($a0)
  .L800F9BC8:
    /* 7FC8 800F9BC8 0800E003 */  jr         $ra
    /* 7FCC 800F9BCC 00000000 */   nop
endlabel func_800F9868
