nonmatching func_801569EC, 0x75C

glabel func_801569EC
    /* 64DEC 801569EC E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 64DF0 801569F0 1000BFAF */  sw         $ra, 0x10($sp)
    /* 64DF4 801569F4 59D9030C */  jal        func_800F6564
    /* 64DF8 801569F8 A0350424 */   addiu     $a0, $zero, 0x35A0
    /* 64DFC 801569FC 93E0030C */  jal        func_800F824C
    /* 64E00 80156A00 DF000424 */   addiu     $a0, $zero, 0xDF
    /* 64E04 80156A04 53D9030C */  jal        func_800F654C
    /* 64E08 80156A08 14000424 */   addiu     $a0, $zero, 0x14
    /* 64E0C 80156A0C 93E0030C */  jal        func_800F824C
    /* 64E10 80156A10 E1000424 */   addiu     $a0, $zero, 0xE1
    /* 64E14 80156A14 0349050C */  jal        func_8015240C
    /* 64E18 80156A18 00000000 */   nop
    /* 64E1C 80156A1C 59D9030C */  jal        func_800F6564
    /* 64E20 80156A20 A1350424 */   addiu     $a0, $zero, 0x35A1
    /* 64E24 80156A24 93E0030C */  jal        func_800F824C
    /* 64E28 80156A28 E5000424 */   addiu     $a0, $zero, 0xE5
    /* 64E2C 80156A2C 40DD030C */  jal        func_800F7500
    /* 64E30 80156A30 30E00434 */   ori       $a0, $zero, 0xE030
    /* 64E34 80156A34 53D9030C */  jal        func_800F654C
    /* 64E38 80156A38 0E000424 */   addiu     $a0, $zero, 0xE
    /* 64E3C 80156A3C 9049050C */  jal        func_80152640
    /* 64E40 80156A40 00000000 */   nop
    /* 64E44 80156A44 1A80023C */  lui        $v0, %hi(D_8019ED58)
    /* 64E48 80156A48 58ED428C */  lw         $v0, %lo(D_8019ED58)($v0)
    /* 64E4C 80156A4C 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 64E50 80156A50 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 64E54 80156A54 00004394 */  lhu        $v1, 0x0($v0)
    /* 64E58 80156A58 E3000424 */  addiu      $a0, $zero, 0xE3
    /* 64E5C 80156A5C 65DD030C */  jal        func_800F7594
    /* 64E60 80156A60 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 64E64 80156A64 AFE3030C */  jal        func_800F8EBC
    /* 64E68 80156A68 98000424 */   addiu     $a0, $zero, 0x98
    /* 64E6C 80156A6C AFE3030C */  jal        func_800F8EBC
    /* 64E70 80156A70 9C000424 */   addiu     $a0, $zero, 0x9C
    /* 64E74 80156A74 0E00043C */  lui        $a0, (0xEE030 >> 16)
  .L80156A78:
    /* 64E78 80156A78 1ADB030C */  jal        func_800F6C68
    /* 64E7C 80156A7C 30E08434 */   ori       $a0, $a0, (0xEE030 & 0xFFFF)
    /* 64E80 80156A80 58E2030C */  jal        func_800F8960
    /* 64E84 80156A84 7F390424 */   addiu     $a0, $zero, 0x397F
    /* 64E88 80156A88 D9D8030C */  jal        func_800F6364
    /* 64E8C 80156A8C 00000000 */   nop
    /* 64E90 80156A90 EFD8030C */  jal        func_800F63BC
    /* 64E94 80156A94 00000000 */   nop
    /* 64E98 80156A98 5DD5030C */  jal        func_800F5574
    /* 64E9C 80156A9C FF000424 */   addiu     $a0, $zero, 0xFF
    /* 64EA0 80156AA0 F5D4030C */  jal        func_800F53D4
    /* 64EA4 80156AA4 00000000 */   nop
    /* 64EA8 80156AA8 F3FF4010 */  beqz       $v0, .L80156A78
    /* 64EAC 80156AAC 0E00043C */   lui       $a0, (0xEE030 >> 16)
    /* 64EB0 80156AB0 59D9030C */  jal        func_800F6564
    /* 64EB4 80156AB4 A0350424 */   addiu     $a0, $zero, 0x35A0
    /* 64EB8 80156AB8 93E0030C */  jal        func_800F824C
    /* 64EBC 80156ABC DF000424 */   addiu     $a0, $zero, 0xDF
    /* 64EC0 80156AC0 53D9030C */  jal        func_800F654C
    /* 64EC4 80156AC4 28000424 */   addiu     $a0, $zero, 0x28
    /* 64EC8 80156AC8 93E0030C */  jal        func_800F824C
    /* 64ECC 80156ACC E1000424 */   addiu     $a0, $zero, 0xE1
    /* 64ED0 80156AD0 0349050C */  jal        func_8015240C
    /* 64ED4 80156AD4 00000000 */   nop
    /* 64ED8 80156AD8 65DD030C */  jal        func_800F7594
    /* 64EDC 80156ADC E3000424 */   addiu     $a0, $zero, 0xE3
    /* 64EE0 80156AE0 AFE3030C */  jal        func_800F8EBC
    /* 64EE4 80156AE4 9A000424 */   addiu     $a0, $zero, 0x9A
    /* 64EE8 80156AE8 AFE3030C */  jal        func_800F8EBC
    /* 64EEC 80156AEC 9E000424 */   addiu     $a0, $zero, 0x9E
  .L80156AF0:
    /* 64EF0 80156AF0 9CDC030C */  jal        func_800F7270
    /* 64EF4 80156AF4 98000424 */   addiu     $a0, $zero, 0x98
    /* 64EF8 80156AF8 DADA030C */  jal        func_800F6B68
    /* 64EFC 80156AFC 7F390424 */   addiu     $a0, $zero, 0x397F
    /* 64F00 80156B00 5DD5030C */  jal        func_800F5574
    /* 64F04 80156B04 FF000424 */   addiu     $a0, $zero, 0xFF
    /* 64F08 80156B08 F5D4030C */  jal        func_800F53D4
    /* 64F0C 80156B0C 00000000 */   nop
    /* 64F10 80156B10 3E004014 */  bnez       $v0, .L80156C0C
    /* 64F14 80156B14 00000000 */   nop
    /* 64F18 80156B18 93E0030C */  jal        func_800F824C
    /* 64F1C 80156B1C E5000424 */   addiu     $a0, $zero, 0xE5
    /* 64F20 80156B20 40DD030C */  jal        func_800F7500
    /* 64F24 80156B24 00E60434 */   ori       $a0, $zero, 0xE600
    /* 64F28 80156B28 53D9030C */  jal        func_800F654C
    /* 64F2C 80156B2C 0E000424 */   addiu     $a0, $zero, 0xE
    /* 64F30 80156B30 9049050C */  jal        func_80152640
    /* 64F34 80156B34 00000000 */   nop
    /* 64F38 80156B38 1A80023C */  lui        $v0, %hi(D_8019ED58)
    /* 64F3C 80156B3C 58ED428C */  lw         $v0, %lo(D_8019ED58)($v0)
    /* 64F40 80156B40 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 64F44 80156B44 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 64F48 80156B48 00004394 */  lhu        $v1, 0x0($v0)
    /* 64F4C 80156B4C 9A000424 */  addiu      $a0, $zero, 0x9A
    /* 64F50 80156B50 65DD030C */  jal        func_800F7594
    /* 64F54 80156B54 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 64F58 80156B58 53D9030C */  jal        func_800F654C
    /* 64F5C 80156B5C 04000424 */   addiu     $a0, $zero, 0x4
    /* 64F60 80156B60 93E0030C */  jal        func_800F824C
    /* 64F64 80156B64 A9000424 */   addiu     $a0, $zero, 0xA9
    /* 64F68 80156B68 0E00043C */  lui        $a0, (0xEE600 >> 16)
  .L80156B6C:
    /* 64F6C 80156B6C 1ADB030C */  jal        func_800F6C68
    /* 64F70 80156B70 00E68434 */   ori       $a0, $a0, (0xEE600 & 0xFFFF)
    /* 64F74 80156B74 58E2030C */  jal        func_800F8960
    /* 64F78 80156B78 1F3A0424 */   addiu     $a0, $zero, 0x3A1F
    /* 64F7C 80156B7C 5DD5030C */  jal        func_800F5574
    /* 64F80 80156B80 FF000424 */   addiu     $a0, $zero, 0xFF
    /* 64F84 80156B84 F5D4030C */  jal        func_800F53D4
    /* 64F88 80156B88 00000000 */   nop
    /* 64F8C 80156B8C 03004014 */  bnez       $v0, .L80156B9C
    /* 64F90 80156B90 00000000 */   nop
    /* 64F94 80156B94 D9D8030C */  jal        func_800F6364
    /* 64F98 80156B98 00000000 */   nop
  .L80156B9C:
    /* 64F9C 80156B9C EFD8030C */  jal        func_800F63BC
    /* 64FA0 80156BA0 00000000 */   nop
    /* 64FA4 80156BA4 68D7030C */  jal        func_800F5DA0
    /* 64FA8 80156BA8 A9000424 */   addiu     $a0, $zero, 0xA9
    /* 64FAC 80156BAC 8CD9030C */  jal        func_800F6630
    /* 64FB0 80156BB0 A9000424 */   addiu     $a0, $zero, 0xA9
    /* 64FB4 80156BB4 0DD9030C */  jal        func_800F6434
    /* 64FB8 80156BB8 02020424 */   addiu     $a0, $zero, 0x202
    /* 64FBC 80156BBC EBFF4014 */  bnez       $v0, .L80156B6C
    /* 64FC0 80156BC0 0E00043C */   lui       $a0, (0xEE600 >> 16)
    /* 64FC4 80156BC4 AFE3030C */  jal        func_800F8EBC
    /* 64FC8 80156BC8 9A000424 */   addiu     $a0, $zero, 0x9A
    /* 64FCC 80156BCC 04D5030C */  jal        func_800F5410
    /* 64FD0 80156BD0 00000000 */   nop
    /* 64FD4 80156BD4 8CD9030C */  jal        func_800F6630
    /* 64FD8 80156BD8 98000424 */   addiu     $a0, $zero, 0x98
    /* 64FDC 80156BDC 02D0030C */  jal        func_800F4008
    /* 64FE0 80156BE0 02000424 */   addiu     $a0, $zero, 0x2
    /* 64FE4 80156BE4 93E0030C */  jal        func_800F824C
    /* 64FE8 80156BE8 98000424 */   addiu     $a0, $zero, 0x98
    /* 64FEC 80156BEC 8CD9030C */  jal        func_800F6630
    /* 64FF0 80156BF0 99000424 */   addiu     $a0, $zero, 0x99
    /* 64FF4 80156BF4 02D0030C */  jal        func_800F4008
    /* 64FF8 80156BF8 21200000 */   addu      $a0, $zero, $zero
    /* 64FFC 80156BFC 93E0030C */  jal        func_800F824C
    /* 65000 80156C00 99000424 */   addiu     $a0, $zero, 0x99
    /* 65004 80156C04 BC5A0508 */  j          .L80156AF0
    /* 65008 80156C08 00000000 */   nop
  .L80156C0C:
    /* 6500C 80156C0C 59D9030C */  jal        func_800F6564
    /* 65010 80156C10 A0350424 */   addiu     $a0, $zero, 0x35A0
    /* 65014 80156C14 93E0030C */  jal        func_800F824C
    /* 65018 80156C18 DF000424 */   addiu     $a0, $zero, 0xDF
    /* 6501C 80156C1C 53D9030C */  jal        func_800F654C
    /* 65020 80156C20 A0000424 */   addiu     $a0, $zero, 0xA0
    /* 65024 80156C24 93E0030C */  jal        func_800F824C
    /* 65028 80156C28 E1000424 */   addiu     $a0, $zero, 0xE1
    /* 6502C 80156C2C 0349050C */  jal        func_8015240C
    /* 65030 80156C30 00000000 */   nop
    /* 65034 80156C34 65DD030C */  jal        func_800F7594
    /* 65038 80156C38 E3000424 */   addiu     $a0, $zero, 0xE3
    /* 6503C 80156C3C AFE3030C */  jal        func_800F8EBC
    /* 65040 80156C40 9A000424 */   addiu     $a0, $zero, 0x9A
    /* 65044 80156C44 53D9030C */  jal        func_800F654C
    /* 65048 80156C48 0A000424 */   addiu     $a0, $zero, 0xA
    /* 6504C 80156C4C 93E0030C */  jal        func_800F824C
    /* 65050 80156C50 AB000424 */   addiu     $a0, $zero, 0xAB
  .L80156C54:
    /* 65054 80156C54 53D9030C */  jal        func_800F654C
    /* 65058 80156C58 04000424 */   addiu     $a0, $zero, 0x4
    /* 6505C 80156C5C 93E0030C */  jal        func_800F824C
    /* 65060 80156C60 A9000424 */   addiu     $a0, $zero, 0xA9
  .L80156C64:
    /* 65064 80156C64 9CDC030C */  jal        func_800F7270
    /* 65068 80156C68 9E000424 */   addiu     $a0, $zero, 0x9E
    /* 6506C 80156C6C DADA030C */  jal        func_800F6B68
    /* 65070 80156C70 1F3A0424 */   addiu     $a0, $zero, 0x3A1F
    /* 65074 80156C74 5DD5030C */  jal        func_800F5574
    /* 65078 80156C78 FF000424 */   addiu     $a0, $zero, 0xFF
    /* 6507C 80156C7C F5D4030C */  jal        func_800F53D4
    /* 65080 80156C80 00000000 */   nop
    /* 65084 80156C84 22004014 */  bnez       $v0, .L80156D10
    /* 65088 80156C88 00000000 */   nop
    /* 6508C 80156C8C 93E0030C */  jal        func_800F824C
    /* 65090 80156C90 DF000424 */   addiu     $a0, $zero, 0xDF
    /* 65094 80156C94 53D9030C */  jal        func_800F654C
    /* 65098 80156C98 04000424 */   addiu     $a0, $zero, 0x4
    /* 6509C 80156C9C 93E0030C */  jal        func_800F824C
    /* 650A0 80156CA0 E1000424 */   addiu     $a0, $zero, 0xE1
    /* 650A4 80156CA4 0349050C */  jal        func_8015240C
    /* 650A8 80156CA8 00000000 */   nop
    /* 650AC 80156CAC 9CDC030C */  jal        func_800F7270
    /* 650B0 80156CB0 E3000424 */   addiu     $a0, $zero, 0xE3
    /* 650B4 80156CB4 65DD030C */  jal        func_800F7594
    /* 650B8 80156CB8 9A000424 */   addiu     $a0, $zero, 0x9A
    /* 650BC 80156CBC 53D9030C */  jal        func_800F654C
    /* 650C0 80156CC0 04000424 */   addiu     $a0, $zero, 0x4
    /* 650C4 80156CC4 93E0030C */  jal        func_800F824C
    /* 650C8 80156CC8 AA000424 */   addiu     $a0, $zero, 0xAA
    /* 650CC 80156CCC 0E00043C */  lui        $a0, (0xEE700 >> 16)
  .L80156CD0:
    /* 650D0 80156CD0 1ADB030C */  jal        func_800F6C68
    /* 650D4 80156CD4 00E78434 */   ori       $a0, $a0, (0xEE700 & 0xFFFF)
    /* 650D8 80156CD8 58E2030C */  jal        func_800F8960
    /* 650DC 80156CDC 5F3B0424 */   addiu     $a0, $zero, 0x3B5F
    /* 650E0 80156CE0 D9D8030C */  jal        func_800F6364
    /* 650E4 80156CE4 00000000 */   nop
    /* 650E8 80156CE8 EFD8030C */  jal        func_800F63BC
    /* 650EC 80156CEC 00000000 */   nop
    /* 650F0 80156CF0 68D7030C */  jal        func_800F5DA0
    /* 650F4 80156CF4 AA000424 */   addiu     $a0, $zero, 0xAA
    /* 650F8 80156CF8 8CD9030C */  jal        func_800F6630
    /* 650FC 80156CFC AA000424 */   addiu     $a0, $zero, 0xAA
    /* 65100 80156D00 0DD9030C */  jal        func_800F6434
    /* 65104 80156D04 02020424 */   addiu     $a0, $zero, 0x202
    /* 65108 80156D08 F1FF4014 */  bnez       $v0, .L80156CD0
    /* 6510C 80156D0C 0E00043C */   lui       $a0, (0xEE700 >> 16)
  .L80156D10:
    /* 65110 80156D10 04D5030C */  jal        func_800F5410
    /* 65114 80156D14 00000000 */   nop
    /* 65118 80156D18 8CD9030C */  jal        func_800F6630
    /* 6511C 80156D1C 9A000424 */   addiu     $a0, $zero, 0x9A
    /* 65120 80156D20 02D0030C */  jal        func_800F4008
    /* 65124 80156D24 04000424 */   addiu     $a0, $zero, 0x4
    /* 65128 80156D28 93E0030C */  jal        func_800F824C
    /* 6512C 80156D2C 9A000424 */   addiu     $a0, $zero, 0x9A
    /* 65130 80156D30 8CD9030C */  jal        func_800F6630
    /* 65134 80156D34 9B000424 */   addiu     $a0, $zero, 0x9B
    /* 65138 80156D38 02D0030C */  jal        func_800F4008
    /* 6513C 80156D3C 21200000 */   addu      $a0, $zero, $zero
    /* 65140 80156D40 93E0030C */  jal        func_800F824C
    /* 65144 80156D44 9B000424 */   addiu     $a0, $zero, 0x9B
    /* 65148 80156D48 04D5030C */  jal        func_800F5410
    /* 6514C 80156D4C 00000000 */   nop
    /* 65150 80156D50 8CD9030C */  jal        func_800F6630
    /* 65154 80156D54 9E000424 */   addiu     $a0, $zero, 0x9E
    /* 65158 80156D58 02D0030C */  jal        func_800F4008
    /* 6515C 80156D5C 01000424 */   addiu     $a0, $zero, 0x1
    /* 65160 80156D60 93E0030C */  jal        func_800F824C
    /* 65164 80156D64 9E000424 */   addiu     $a0, $zero, 0x9E
    /* 65168 80156D68 8CD9030C */  jal        func_800F6630
    /* 6516C 80156D6C 9F000424 */   addiu     $a0, $zero, 0x9F
    /* 65170 80156D70 02D0030C */  jal        func_800F4008
    /* 65174 80156D74 21200000 */   addu      $a0, $zero, $zero
    /* 65178 80156D78 93E0030C */  jal        func_800F824C
    /* 6517C 80156D7C 9F000424 */   addiu     $a0, $zero, 0x9F
    /* 65180 80156D80 68D7030C */  jal        func_800F5DA0
    /* 65184 80156D84 A9000424 */   addiu     $a0, $zero, 0xA9
    /* 65188 80156D88 8CD9030C */  jal        func_800F6630
    /* 6518C 80156D8C A9000424 */   addiu     $a0, $zero, 0xA9
    /* 65190 80156D90 0DD9030C */  jal        func_800F6434
    /* 65194 80156D94 02020424 */   addiu     $a0, $zero, 0x202
    /* 65198 80156D98 B2FF4014 */  bnez       $v0, .L80156C64
    /* 6519C 80156D9C 00000000 */   nop
    /* 651A0 80156DA0 68D7030C */  jal        func_800F5DA0
    /* 651A4 80156DA4 AB000424 */   addiu     $a0, $zero, 0xAB
    /* 651A8 80156DA8 8CD9030C */  jal        func_800F6630
    /* 651AC 80156DAC AB000424 */   addiu     $a0, $zero, 0xAB
    /* 651B0 80156DB0 0DD9030C */  jal        func_800F6434
    /* 651B4 80156DB4 02020424 */   addiu     $a0, $zero, 0x202
    /* 651B8 80156DB8 A6FF4014 */  bnez       $v0, .L80156C54
    /* 651BC 80156DBC 00000000 */   nop
    /* 651C0 80156DC0 59D9030C */  jal        func_800F6564
    /* 651C4 80156DC4 A0350424 */   addiu     $a0, $zero, 0x35A0
    /* 651C8 80156DC8 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 651CC 80156DCC 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 651D0 80156DD0 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 651D4 80156DD4 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 651D8 80156DD8 00004394 */  lhu        $v1, 0x0($v0)
    /* 651DC 80156DDC 3D390424 */  addiu      $a0, $zero, 0x393D
    /* 651E0 80156DE0 40E3030C */  jal        func_800F8D00
    /* 651E4 80156DE4 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 651E8 80156DE8 77DC030C */  jal        func_800F71DC
    /* 651EC 80156DEC 58020424 */   addiu     $a0, $zero, 0x258
    /* 651F0 80156DF0 40E3030C */  jal        func_800F8D00
    /* 651F4 80156DF4 3F390424 */   addiu     $a0, $zero, 0x393F
    /* 651F8 80156DF8 DB48050C */  jal        func_8015236C
    /* 651FC 80156DFC 00000000 */   nop
    /* 65200 80156E00 4DDD030C */  jal        func_800F7534
    /* 65204 80156E04 41390424 */   addiu     $a0, $zero, 0x3941
    /* 65208 80156E08 AFE3030C */  jal        func_800F8EBC
    /* 6520C 80156E0C 9A000424 */   addiu     $a0, $zero, 0x9A
    /* 65210 80156E10 94E3030C */  jal        func_800F8E50
    /* 65214 80156E14 96280424 */   addiu     $a0, $zero, 0x2896
  .L80156E18:
    /* 65218 80156E18 9CDC030C */  jal        func_800F7270
    /* 6521C 80156E1C 9C000424 */   addiu     $a0, $zero, 0x9C
    /* 65220 80156E20 DADA030C */  jal        func_800F6B68
    /* 65224 80156E24 7F390424 */   addiu     $a0, $zero, 0x397F
    /* 65228 80156E28 5DD5030C */  jal        func_800F5574
    /* 6522C 80156E2C FF000424 */   addiu     $a0, $zero, 0xFF
    /* 65230 80156E30 F5D4030C */  jal        func_800F53D4
    /* 65234 80156E34 00000000 */   nop
    /* 65238 80156E38 63004014 */  bnez       $v0, .L80156FC8
    /* 6523C 80156E3C 00000000 */   nop
    /* 65240 80156E40 D9D8030C */  jal        func_800F6364
    /* 65244 80156E44 00000000 */   nop
    /* 65248 80156E48 DADA030C */  jal        func_800F6B68
    /* 6524C 80156E4C 7F390424 */   addiu     $a0, $zero, 0x397F
    /* 65250 80156E50 93E0030C */  jal        func_800F824C
    /* 65254 80156E54 E5000424 */   addiu     $a0, $zero, 0xE5
    /* 65258 80156E58 40DD030C */  jal        func_800F7500
    /* 6525C 80156E5C 00E90434 */   ori       $a0, $zero, 0xE900
    /* 65260 80156E60 59D9030C */  jal        func_800F6564
    /* 65264 80156E64 EF380424 */   addiu     $a0, $zero, 0x38EF
    /* 65268 80156E68 0DD9030C */  jal        func_800F6434
    /* 6526C 80156E6C 02000424 */   addiu     $a0, $zero, 0x2
    /* 65270 80156E70 03004014 */  bnez       $v0, .L80156E80
    /* 65274 80156E74 00000000 */   nop
    /* 65278 80156E78 40DD030C */  jal        func_800F7500
    /* 6527C 80156E7C C0B60434 */   ori       $a0, $zero, 0xB6C0
  .L80156E80:
    /* 65280 80156E80 53D9030C */  jal        func_800F654C
    /* 65284 80156E84 0E000424 */   addiu     $a0, $zero, 0xE
    /* 65288 80156E88 9049050C */  jal        func_80152640
    /* 6528C 80156E8C 00000000 */   nop
    /* 65290 80156E90 59D9030C */  jal        func_800F6564
    /* 65294 80156E94 EF380424 */   addiu     $a0, $zero, 0x38EF
    /* 65298 80156E98 0DD9030C */  jal        func_800F6434
    /* 6529C 80156E9C 02020424 */   addiu     $a0, $zero, 0x202
    /* 652A0 80156EA0 1A004014 */  bnez       $v0, .L80156F0C
    /* 652A4 80156EA4 00000000 */   nop
    /* 652A8 80156EA8 1A80023C */  lui        $v0, %hi(D_8019ED58)
    /* 652AC 80156EAC 58ED428C */  lw         $v0, %lo(D_8019ED58)($v0)
    /* 652B0 80156EB0 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 652B4 80156EB4 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 652B8 80156EB8 00004394 */  lhu        $v1, 0x0($v0)
    /* 652BC 80156EBC 9A000424 */  addiu      $a0, $zero, 0x9A
    /* 652C0 80156EC0 65DD030C */  jal        func_800F7594
    /* 652C4 80156EC4 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 652C8 80156EC8 0E00043C */  lui        $a0, (0xEE900 >> 16)
  .L80156ECC:
    /* 652CC 80156ECC 1ADB030C */  jal        func_800F6C68
    /* 652D0 80156ED0 00E98434 */   ori       $a0, $a0, (0xEE900 & 0xFFFF)
    /* 652D4 80156ED4 58E2030C */  jal        func_800F8960
    /* 652D8 80156ED8 5F400424 */   addiu     $a0, $zero, 0x405F
    /* 652DC 80156EDC D9D8030C */  jal        func_800F6364
    /* 652E0 80156EE0 00000000 */   nop
    /* 652E4 80156EE4 EFD8030C */  jal        func_800F63BC
    /* 652E8 80156EE8 00000000 */   nop
    /* 652EC 80156EEC 5DD5030C */  jal        func_800F5574
    /* 652F0 80156EF0 FF000424 */   addiu     $a0, $zero, 0xFF
    /* 652F4 80156EF4 F5D4030C */  jal        func_800F53D4
    /* 652F8 80156EF8 00000000 */   nop
    /* 652FC 80156EFC F3FF4010 */  beqz       $v0, .L80156ECC
    /* 65300 80156F00 0E00043C */   lui       $a0, (0xEE900 >> 16)
    /* 65304 80156F04 DA5B0508 */  j          .L80156F68
    /* 65308 80156F08 00000000 */   nop
  .L80156F0C:
    /* 6530C 80156F0C 1A80023C */  lui        $v0, %hi(D_8019ED58)
    /* 65310 80156F10 58ED428C */  lw         $v0, %lo(D_8019ED58)($v0)
    /* 65314 80156F14 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 65318 80156F18 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 6531C 80156F1C 00004394 */  lhu        $v1, 0x0($v0)
    /* 65320 80156F20 9A000424 */  addiu      $a0, $zero, 0x9A
    /* 65324 80156F24 65DD030C */  jal        func_800F7594
    /* 65328 80156F28 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 6532C 80156F2C 0E00043C */  lui        $a0, (0xEB6C0 >> 16)
  .L80156F30:
    /* 65330 80156F30 1ADB030C */  jal        func_800F6C68
    /* 65334 80156F34 C0B68434 */   ori       $a0, $a0, (0xEB6C0 & 0xFFFF)
    /* 65338 80156F38 58E2030C */  jal        func_800F8960
    /* 6533C 80156F3C 5F400424 */   addiu     $a0, $zero, 0x405F
    /* 65340 80156F40 D9D8030C */  jal        func_800F6364
    /* 65344 80156F44 00000000 */   nop
    /* 65348 80156F48 EFD8030C */  jal        func_800F63BC
    /* 6534C 80156F4C 00000000 */   nop
    /* 65350 80156F50 5DD5030C */  jal        func_800F5574
    /* 65354 80156F54 FF000424 */   addiu     $a0, $zero, 0xFF
    /* 65358 80156F58 F5D4030C */  jal        func_800F53D4
    /* 6535C 80156F5C 00000000 */   nop
    /* 65360 80156F60 F3FF4010 */  beqz       $v0, .L80156F30
    /* 65364 80156F64 0E00043C */   lui       $a0, (0xEB6C0 >> 16)
  .L80156F68:
    /* 65368 80156F68 91E5030C */  jal        func_800F9644
    /* 6536C 80156F6C 20000424 */   addiu     $a0, $zero, 0x20
    /* 65370 80156F70 04D5030C */  jal        func_800F5410
    /* 65374 80156F74 00000000 */   nop
    /* 65378 80156F78 96D9030C */  jal        func_800F6658
    /* 6537C 80156F7C 9A000424 */   addiu     $a0, $zero, 0x9A
    /* 65380 80156F80 19D0030C */  jal        func_800F4064
    /* 65384 80156F84 3C000424 */   addiu     $a0, $zero, 0x3C
    /* 65388 80156F88 9DE0030C */  jal        func_800F8274
    /* 6538C 80156F8C 9A000424 */   addiu     $a0, $zero, 0x9A
    /* 65390 80156F90 04D5030C */  jal        func_800F5410
    /* 65394 80156F94 00000000 */   nop
    /* 65398 80156F98 96D9030C */  jal        func_800F6658
    /* 6539C 80156F9C 9C000424 */   addiu     $a0, $zero, 0x9C
    /* 653A0 80156FA0 19D0030C */  jal        func_800F4064
    /* 653A4 80156FA4 02000424 */   addiu     $a0, $zero, 0x2
    /* 653A8 80156FA8 9DE0030C */  jal        func_800F8274
    /* 653AC 80156FAC 9C000424 */   addiu     $a0, $zero, 0x9C
    /* 653B0 80156FB0 C7E5030C */  jal        func_800F971C
    /* 653B4 80156FB4 00000000 */   nop
    /* 653B8 80156FB8 98E5030C */  jal        func_800F9660
    /* 653BC 80156FBC 20000424 */   addiu     $a0, $zero, 0x20
    /* 653C0 80156FC0 865B0508 */  j          .L80156E18
    /* 653C4 80156FC4 00000000 */   nop
  .L80156FC8:
    /* 653C8 80156FC8 59D9030C */  jal        func_800F6564
    /* 653CC 80156FCC A0350424 */   addiu     $a0, $zero, 0x35A0
    /* 653D0 80156FD0 93E0030C */  jal        func_800F824C
    /* 653D4 80156FD4 DF000424 */   addiu     $a0, $zero, 0xDF
    /* 653D8 80156FD8 53D9030C */  jal        func_800F654C
    /* 653DC 80156FDC 14000424 */   addiu     $a0, $zero, 0x14
    /* 653E0 80156FE0 93E0030C */  jal        func_800F824C
    /* 653E4 80156FE4 E1000424 */   addiu     $a0, $zero, 0xE1
    /* 653E8 80156FE8 0349050C */  jal        func_8015240C
    /* 653EC 80156FEC 00000000 */   nop
    /* 653F0 80156FF0 9CDC030C */  jal        func_800F7270
    /* 653F4 80156FF4 E3000424 */   addiu     $a0, $zero, 0xE3
    /* 653F8 80156FF8 C7E5030C */  jal        func_800F971C
    /* 653FC 80156FFC 00000000 */   nop
    /* 65400 80157000 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 65404 80157004 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 65408 80157008 1A80053C */  lui        $a1, %hi(D_8019ED58)
    /* 6540C 8015700C 58EDA58C */  lw         $a1, %lo(D_8019ED58)($a1)
    /* 65410 80157010 00004394 */  lhu        $v1, 0x0($v0)
    /* 65414 80157014 A9000424 */  addiu      $a0, $zero, 0xA9
    /* 65418 80157018 AFE3030C */  jal        func_800F8EBC
    /* 6541C 8015701C 0000A3A4 */   sh        $v1, 0x0($a1)
  .L80157020:
    /* 65420 80157020 DADA030C */  jal        func_800F6B68
    /* 65424 80157024 7F390424 */   addiu     $a0, $zero, 0x397F
    /* 65428 80157028 0DD9030C */  jal        func_800F6434
    /* 6542C 8015702C 02000424 */   addiu     $a0, $zero, 0x2
    /* 65430 80157030 0B004014 */  bnez       $v0, .L80157060
    /* 65434 80157034 00000000 */   nop
    /* 65438 80157038 D9D8030C */  jal        func_800F6364
    /* 6543C 8015703C 00000000 */   nop
    /* 65440 80157040 D9D8030C */  jal        func_800F6364
    /* 65444 80157044 00000000 */   nop
    /* 65448 80157048 AFD8030C */  jal        func_800F62BC
    /* 6544C 8015704C A9000424 */   addiu     $a0, $zero, 0xA9
    /* 65450 80157050 AFD8030C */  jal        func_800F62BC
    /* 65454 80157054 A9000424 */   addiu     $a0, $zero, 0xA9
    /* 65458 80157058 085C0508 */  j          .L80157020
    /* 6545C 8015705C 00000000 */   nop
  .L80157060:
    /* 65460 80157060 8CD9030C */  jal        func_800F6630
    /* 65464 80157064 A9000424 */   addiu     $a0, $zero, 0xA9
    /* 65468 80157068 19DE030C */  jal        func_800F7864
    /* 6546C 8015706C 00000000 */   nop
    /* 65470 80157070 BADD030C */  jal        func_800F76E8
    /* 65474 80157074 00000000 */   nop
    /* 65478 80157078 80E4030C */  jal        func_800F9200
    /* 6547C 8015707C 00000000 */   nop
    /* 65480 80157080 59D9030C */  jal        func_800F6564
    /* 65484 80157084 A0350424 */   addiu     $a0, $zero, 0x35A0
    /* 65488 80157088 1A80033C */  lui        $v1, %hi(D_8019ED44)
    /* 6548C 8015708C 44ED638C */  lw         $v1, %lo(D_8019ED44)($v1)
    /* 65490 80157090 1A80043C */  lui        $a0, %hi(D_8019ED54)
    /* 65494 80157094 54ED848C */  lw         $a0, %lo(D_8019ED54)($a0)
    /* 65498 80157098 00006294 */  lhu        $v0, 0x0($v1)
    /* 6549C 8015709C F7E4030C */  jal        func_800F93DC
    /* 654A0 801570A0 000082A4 */   sh        $v0, 0x0($a0)
    /* 654A4 801570A4 DAE1030C */  jal        func_800F8768
    /* 654A8 801570A8 04360424 */   addiu     $a0, $zero, 0x3604
    /* 654AC 801570AC 93E0030C */  jal        func_800F824C
    /* 654B0 801570B0 DF000424 */   addiu     $a0, $zero, 0xDF
    /* 654B4 801570B4 53D9030C */  jal        func_800F654C
    /* 654B8 801570B8 3C000424 */   addiu     $a0, $zero, 0x3C
    /* 654BC 801570BC 93E0030C */  jal        func_800F824C
    /* 654C0 801570C0 E1000424 */   addiu     $a0, $zero, 0xE1
    /* 654C4 801570C4 0349050C */  jal        func_8015240C
    /* 654C8 801570C8 00000000 */   nop
    /* 654CC 801570CC 59D9030C */  jal        func_800F6564
    /* 654D0 801570D0 A0350424 */   addiu     $a0, $zero, 0x35A0
    /* 654D4 801570D4 50D4030C */  jal        func_800F5140
    /* 654D8 801570D8 00000000 */   nop
    /* 654DC 801570DC 1A80033C */  lui        $v1, %hi(D_8019ED44)
    /* 654E0 801570E0 44ED638C */  lw         $v1, %lo(D_8019ED44)($v1)
    /* 654E4 801570E4 1A80043C */  lui        $a0, %hi(D_8019ED54)
    /* 654E8 801570E8 54ED848C */  lw         $a0, %lo(D_8019ED54)($a0)
    /* 654EC 801570EC 00006294 */  lhu        $v0, 0x0($v1)
    /* 654F0 801570F0 04D5030C */  jal        func_800F5410
    /* 654F4 801570F4 000082A4 */   sh        $v0, 0x0($a0)
    /* 654F8 801570F8 59D9030C */  jal        func_800F6564
    /* 654FC 801570FC 96280424 */   addiu     $a0, $zero, 0x2896
    /* 65500 80157100 0FCF030C */  jal        func_800F3C3C
    /* 65504 80157104 E3000424 */   addiu     $a0, $zero, 0xE3
    /* 65508 80157108 CECF030C */  jal        func_800F3F38
    /* 6550C 8015710C 21204000 */   addu      $a0, $v0, $zero
    /* 65510 80157110 DAE1030C */  jal        func_800F8768
    /* 65514 80157114 0C360424 */   addiu     $a0, $zero, 0x360C
    /* 65518 80157118 59D9030C */  jal        func_800F6564
    /* 6551C 8015711C 97280424 */   addiu     $a0, $zero, 0x2897
    /* 65520 80157120 0FCF030C */  jal        func_800F3C3C
    /* 65524 80157124 E4000424 */   addiu     $a0, $zero, 0xE4
    /* 65528 80157128 CECF030C */  jal        func_800F3F38
    /* 6552C 8015712C 21204000 */   addu      $a0, $v0, $zero
    /* 65530 80157130 DAE1030C */  jal        func_800F8768
    /* 65534 80157134 0D360424 */   addiu     $a0, $zero, 0x360D
    /* 65538 80157138 1000BF8F */  lw         $ra, 0x10($sp)
    /* 6553C 8015713C 00000000 */  nop
    /* 65540 80157140 0800E003 */  jr         $ra
    /* 65544 80157144 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_801569EC
