nonmatching func_80107830, 0x344

glabel func_80107830
    /* 15C30 80107830 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 15C34 80107834 1000BFAF */  sw         $ra, 0x10($sp)
    /* 15C38 80107838 77DC030C */  jal        func_800F71DC
    /* 15C3C 8010783C 21200000 */   addu      $a0, $zero, $zero
    /* 15C40 80107840 53D9030C */  jal        func_800F654C
    /* 15C44 80107844 FF000424 */   addiu     $a0, $zero, 0xFF
    /* 15C48 80107848 01000224 */  addiu      $v0, $zero, 0x1
    /* 15C4C 8010784C 1A80013C */  lui        $at, %hi(D_8019EDE8)
    /* 15C50 80107850 E8ED22A4 */  sh         $v0, %lo(D_8019EDE8)($at)
  .L80107854:
    /* 15C54 80107854 DAE1030C */  jal        func_800F8768
    /* 15C58 80107858 74070424 */   addiu     $a0, $zero, 0x774
    /* 15C5C 8010785C D9D8030C */  jal        func_800F6364
    /* 15C60 80107860 00000000 */   nop
    /* 15C64 80107864 56D6030C */  jal        func_800F5958
    /* 15C68 80107868 80010424 */   addiu     $a0, $zero, 0x180
    /* 15C6C 8010786C F5D4030C */  jal        func_800F53D4
    /* 15C70 80107870 00000000 */   nop
    /* 15C74 80107874 F7FF4010 */  beqz       $v0, .L80107854
    /* 15C78 80107878 00000000 */   nop
    /* 15C7C 8010787C 8CD9030C */  jal        func_800F6630
    /* 15C80 80107880 BA000424 */   addiu     $a0, $zero, 0xBA
    /* 15C84 80107884 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 15C88 80107888 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 15C8C 8010788C 00000000 */  nop
    /* 15C90 80107890 00006290 */  lbu        $v0, 0x0($v1)
    /* 15C94 80107894 00000000 */  nop
    /* 15C98 80107898 80100200 */  sll        $v0, $v0, 2
    /* 15C9C 8010789C 000062A0 */  sb         $v0, 0x0($v1)
    /* 15CA0 801078A0 1A80043C */  lui        $a0, %hi(D_8019ED44)
    /* 15CA4 801078A4 44ED848C */  lw         $a0, %lo(D_8019ED44)($a0)
    /* 15CA8 801078A8 1A80033C */  lui        $v1, %hi(D_8019ED54)
    /* 15CAC 801078AC 54ED638C */  lw         $v1, %lo(D_8019ED54)($v1)
    /* 15CB0 801078B0 00008294 */  lhu        $v0, 0x0($a0)
    /* 15CB4 801078B4 3D000424 */  addiu      $a0, $zero, 0x3D
    /* 15CB8 801078B8 5BE3030C */  jal        func_800F8D6C
    /* 15CBC 801078BC 000062A4 */   sh        $v0, 0x0($v1)
    /* 15CC0 801078C0 40DD030C */  jal        func_800F7500
    /* 15CC4 801078C4 21200000 */   addu      $a0, $zero, $zero
    /* 15CC8 801078C8 AFE3030C */  jal        func_800F8EBC
    /* 15CCC 801078CC 40000424 */   addiu     $a0, $zero, 0x40
    /* 15CD0 801078D0 53D9030C */  jal        func_800F654C
    /* 15CD4 801078D4 08000424 */   addiu     $a0, $zero, 0x8
    /* 15CD8 801078D8 93E0030C */  jal        func_800F824C
    /* 15CDC 801078DC 07000424 */   addiu     $a0, $zero, 0x7
  .L801078E0:
    /* 15CE0 801078E0 9CDC030C */  jal        func_800F7270
    /* 15CE4 801078E4 3D000424 */   addiu     $a0, $zero, 0x3D
    /* 15CE8 801078E8 DADA030C */  jal        func_800F6B68
    /* 15CEC 801078EC 12070424 */   addiu     $a0, $zero, 0x712
    /* 15CF0 801078F0 0DD9030C */  jal        func_800F6434
    /* 15CF4 801078F4 02020424 */   addiu     $a0, $zero, 0x202
    /* 15CF8 801078F8 96004010 */  beqz       $v0, .L80107B54
    /* 15CFC 801078FC 00000000 */   nop
    /* 15D00 80107900 EEE3030C */  jal        func_800F8FB8
    /* 15D04 80107904 19000424 */   addiu     $a0, $zero, 0x19
    /* 15D08 80107908 50D4030C */  jal        func_800F5140
    /* 15D0C 8010790C 00000000 */   nop
    /* 15D10 80107910 D3D3030C */  jal        func_800F4F4C
    /* 15D14 80107914 00000000 */   nop
    /* 15D18 80107918 0FCF030C */  jal        func_800F3C3C
    /* 15D1C 8010791C 19000424 */   addiu     $a0, $zero, 0x19
    /* 15D20 80107920 90DE030C */  jal        func_800F7A40
    /* 15D24 80107924 21204000 */   addu      $a0, $v0, $zero
    /* 15D28 80107928 50D4030C */  jal        func_800F5140
    /* 15D2C 8010792C 00000000 */   nop
    /* 15D30 80107930 D3D3030C */  jal        func_800F4F4C
    /* 15D34 80107934 00000000 */   nop
    /* 15D38 80107938 0FCF030C */  jal        func_800F3C3C
    /* 15D3C 8010793C 19000424 */   addiu     $a0, $zero, 0x19
    /* 15D40 80107940 90DE030C */  jal        func_800F7A40
    /* 15D44 80107944 21204000 */   addu      $a0, $v0, $zero
    /* 15D48 80107948 50D4030C */  jal        func_800F5140
    /* 15D4C 8010794C 00000000 */   nop
    /* 15D50 80107950 D3D3030C */  jal        func_800F4F4C
    /* 15D54 80107954 00000000 */   nop
    /* 15D58 80107958 0FCF030C */  jal        func_800F3C3C
    /* 15D5C 8010795C 19000424 */   addiu     $a0, $zero, 0x19
    /* 15D60 80107960 90DE030C */  jal        func_800F7A40
    /* 15D64 80107964 21204000 */   addu      $a0, $v0, $zero
    /* 15D68 80107968 04D5030C */  jal        func_800F5410
    /* 15D6C 8010796C 00000000 */   nop
    /* 15D70 80107970 1A80023C */  lui        $v0, %hi(D_8019ED54)
    /* 15D74 80107974 54ED428C */  lw         $v0, %lo(D_8019ED54)($v0)
    /* 15D78 80107978 00000000 */  nop
    /* 15D7C 8010797C 00004494 */  lhu        $a0, 0x0($v0)
    /* 15D80 80107980 C1CE030C */  jal        func_800F3B04
    /* 15D84 80107984 12078424 */   addiu     $a0, $a0, 0x712
    /* 15D88 80107988 CECF030C */  jal        func_800F3F38
    /* 15D8C 8010798C 21204000 */   addu      $a0, $v0, $zero
    /* 15D90 80107990 93E0030C */  jal        func_800F824C
    /* 15D94 80107994 18000424 */   addiu     $a0, $zero, 0x18
    /* 15D98 80107998 8CD9030C */  jal        func_800F6630
    /* 15D9C 8010799C 19000424 */   addiu     $a0, $zero, 0x19
    /* 15DA0 801079A0 02D0030C */  jal        func_800F4008
    /* 15DA4 801079A4 21200000 */   addu      $a0, $zero, $zero
    /* 15DA8 801079A8 93E0030C */  jal        func_800F824C
    /* 15DAC 801079AC 19000424 */   addiu     $a0, $zero, 0x19
    /* 15DB0 801079B0 9CDC030C */  jal        func_800F7270
    /* 15DB4 801079B4 18000424 */   addiu     $a0, $zero, 0x18
    /* 15DB8 801079B8 D9D8030C */  jal        func_800F6364
    /* 15DBC 801079BC 00000000 */   nop
    /* 15DC0 801079C0 65DD030C */  jal        func_800F7594
    /* 15DC4 801079C4 40000424 */   addiu     $a0, $zero, 0x40
    /* 15DC8 801079C8 53D9030C */  jal        func_800F654C
    /* 15DCC 801079CC 08000424 */   addiu     $a0, $zero, 0x8
    /* 15DD0 801079D0 93E0030C */  jal        func_800F824C
    /* 15DD4 801079D4 08000424 */   addiu     $a0, $zero, 0x8
    /* 15DD8 801079D8 0F00043C */  lui        $a0, (0xF8000 >> 16)
  .L801079DC:
    /* 15DDC 801079DC 1ADB030C */  jal        func_800F6C68
    /* 15DE0 801079E0 00808434 */   ori       $a0, $a0, (0xF8000 & 0xFFFF)
    /* 15DE4 801079E4 EE24040C */  jal        func_801093B8
    /* 15DE8 801079E8 00000000 */   nop
    /* 15DEC 801079EC 58E2030C */  jal        func_800F8960
    /* 15DF0 801079F0 74070424 */   addiu     $a0, $zero, 0x774
    /* 15DF4 801079F4 52CF030C */  jal        func_800F3D48
    /* 15DF8 801079F8 00000000 */   nop
    /* 15DFC 801079FC 58E2030C */  jal        func_800F8960
    /* 15E00 80107A00 34080424 */   addiu     $a0, $zero, 0x834
    /* 15E04 80107A04 53D9030C */  jal        func_800F654C
    /* 15E08 80107A08 21200000 */   addu      $a0, $zero, $zero
    /* 15E0C 80107A0C 52CF030C */  jal        func_800F3D48
    /* 15E10 80107A10 00000000 */   nop
    /* 15E14 80107A14 EFD8030C */  jal        func_800F63BC
    /* 15E18 80107A18 00000000 */   nop
    /* 15E1C 80107A1C D9D8030C */  jal        func_800F6364
    /* 15E20 80107A20 00000000 */   nop
    /* 15E24 80107A24 68D7030C */  jal        func_800F5DA0
    /* 15E28 80107A28 08000424 */   addiu     $a0, $zero, 0x8
    /* 15E2C 80107A2C E3D6030C */  jal        func_800F5B8C
    /* 15E30 80107A30 02020424 */   addiu     $a0, $zero, 0x202
    /* 15E34 80107A34 E9FF4014 */  bnez       $v0, .L801079DC
    /* 15E38 80107A38 0F00043C */   lui       $a0, (0xF8000 >> 16)
    /* 15E3C 80107A3C 65DD030C */  jal        func_800F7594
    /* 15E40 80107A40 40000424 */   addiu     $a0, $zero, 0x40
    /* 15E44 80107A44 53D9030C */  jal        func_800F654C
    /* 15E48 80107A48 C8000424 */   addiu     $a0, $zero, 0xC8
    /* 15E4C 80107A4C 58E2030C */  jal        func_800F8960
    /* 15E50 80107A50 7C070424 */   addiu     $a0, $zero, 0x77C
    /* 15E54 80107A54 9CDC030C */  jal        func_800F7270
    /* 15E58 80107A58 3D000424 */   addiu     $a0, $zero, 0x3D
    /* 15E5C 80107A5C DADA030C */  jal        func_800F6B68
    /* 15E60 80107A60 13070424 */   addiu     $a0, $zero, 0x713
    /* 15E64 80107A64 93E0030C */  jal        func_800F824C
    /* 15E68 80107A68 30000424 */   addiu     $a0, $zero, 0x30
    /* 15E6C 80107A6C EEE3030C */  jal        func_800F8FB8
    /* 15E70 80107A70 31000424 */   addiu     $a0, $zero, 0x31
    /* 15E74 80107A74 EEE3030C */  jal        func_800F8FB8
    /* 15E78 80107A78 32000424 */   addiu     $a0, $zero, 0x32
    /* 15E7C 80107A7C 39D3050C */  jal        func_80174CE4
    /* 15E80 80107A80 00000000 */   nop
    /* 15E84 80107A84 65DD030C */  jal        func_800F7594
    /* 15E88 80107A88 40000424 */   addiu     $a0, $zero, 0x40
    /* 15E8C 80107A8C 8CD9030C */  jal        func_800F6630
    /* 15E90 80107A90 3A000424 */   addiu     $a0, $zero, 0x3A
    /* 15E94 80107A94 58E2030C */  jal        func_800F8960
    /* 15E98 80107A98 7D070424 */   addiu     $a0, $zero, 0x77D
    /* 15E9C 80107A9C 8CD9030C */  jal        func_800F6630
    /* 15EA0 80107AA0 3B000424 */   addiu     $a0, $zero, 0x3B
    /* 15EA4 80107AA4 58E2030C */  jal        func_800F8960
    /* 15EA8 80107AA8 7E070424 */   addiu     $a0, $zero, 0x77E
    /* 15EAC 80107AAC 8CD9030C */  jal        func_800F6630
    /* 15EB0 80107AB0 07000424 */   addiu     $a0, $zero, 0x7
    /* 15EB4 80107AB4 92D0030C */  jal        func_800F4248
    /* 15EB8 80107AB8 01000424 */   addiu     $a0, $zero, 0x1
    /* 15EBC 80107ABC 48D0030C */  jal        func_800F4120
    /* 15EC0 80107AC0 02020424 */   addiu     $a0, $zero, 0x202
    /* 15EC4 80107AC4 0B004014 */  bnez       $v0, .L80107AF4
    /* 15EC8 80107AC8 00000000 */   nop
    /* 15ECC 80107ACC 8CD9030C */  jal        func_800F6630
    /* 15ED0 80107AD0 40000424 */   addiu     $a0, $zero, 0x40
    /* 15ED4 80107AD4 04D5030C */  jal        func_800F5410
    /* 15ED8 80107AD8 00000000 */   nop
    /* 15EDC 80107ADC 02D0030C */  jal        func_800F4008
    /* 15EE0 80107AE0 0D000424 */   addiu     $a0, $zero, 0xD
    /* 15EE4 80107AE4 93E0030C */  jal        func_800F824C
    /* 15EE8 80107AE8 40000424 */   addiu     $a0, $zero, 0x40
    /* 15EEC 80107AEC C51E0408 */  j          .L80107B14
    /* 15EF0 80107AF0 00000000 */   nop
  .L80107AF4:
    /* 15EF4 80107AF4 8CD9030C */  jal        func_800F6630
    /* 15EF8 80107AF8 40000424 */   addiu     $a0, $zero, 0x40
    /* 15EFC 80107AFC 04D5030C */  jal        func_800F5410
    /* 15F00 80107B00 00000000 */   nop
    /* 15F04 80107B04 02D0030C */  jal        func_800F4008
    /* 15F08 80107B08 0B000424 */   addiu     $a0, $zero, 0xB
    /* 15F0C 80107B0C 93E0030C */  jal        func_800F824C
    /* 15F10 80107B10 40000424 */   addiu     $a0, $zero, 0x40
  .L80107B14:
    /* 15F14 80107B14 9CDC030C */  jal        func_800F7270
    /* 15F18 80107B18 3D000424 */   addiu     $a0, $zero, 0x3D
    /* 15F1C 80107B1C 1A80033C */  lui        $v1, %hi(D_8019ED54)
    /* 15F20 80107B20 54ED638C */  lw         $v1, %lo(D_8019ED54)($v1)
    /* 15F24 80107B24 00000000 */  nop
    /* 15F28 80107B28 00006294 */  lhu        $v0, 0x0($v1)
    /* 15F2C 80107B2C 3D000424 */  addiu      $a0, $zero, 0x3D
    /* 15F30 80107B30 02004224 */  addiu      $v0, $v0, 0x2
    /* 15F34 80107B34 5BE3030C */  jal        func_800F8D6C
    /* 15F38 80107B38 000062A4 */   sh        $v0, 0x0($v1)
    /* 15F3C 80107B3C 68D7030C */  jal        func_800F5DA0
    /* 15F40 80107B40 07000424 */   addiu     $a0, $zero, 0x7
    /* 15F44 80107B44 E3D6030C */  jal        func_800F5B8C
    /* 15F48 80107B48 02000424 */   addiu     $a0, $zero, 0x2
    /* 15F4C 80107B4C 64FF4010 */  beqz       $v0, .L801078E0
    /* 15F50 80107B50 00000000 */   nop
  .L80107B54:
    /* 15F54 80107B54 53D9030C */  jal        func_800F654C
    /* 15F58 80107B58 01000424 */   addiu     $a0, $zero, 0x1
    /* 15F5C 80107B5C 93E0030C */  jal        func_800F824C
    /* 15F60 80107B60 E6000424 */   addiu     $a0, $zero, 0xE6
    /* 15F64 80107B64 1000BF8F */  lw         $ra, 0x10($sp)
    /* 15F68 80107B68 00000000 */  nop
    /* 15F6C 80107B6C 0800E003 */  jr         $ra
    /* 15F70 80107B70 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80107830
