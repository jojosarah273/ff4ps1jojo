nonmatching func_80172BA8, 0x460

glabel func_80172BA8
    /* 80FA8 80172BA8 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 80FAC 80172BAC 1000BFAF */  sw         $ra, 0x10($sp)
    /* 80FB0 80172BB0 9BE4030C */  jal        func_800F926C
    /* 80FB4 80172BB4 00000000 */   nop
    /* 80FB8 80172BB8 53D9030C */  jal        func_800F654C
    /* 80FBC 80172BBC 15000424 */   addiu     $a0, $zero, 0x15
    /* 80FC0 80172BC0 80E4030C */  jal        func_800F9200
    /* 80FC4 80172BC4 00000000 */   nop
    /* 80FC8 80172BC8 12E5030C */  jal        func_800F9448
    /* 80FCC 80172BCC 00000000 */   nop
    /* 80FD0 80172BD0 59D9030C */  jal        func_800F6564
    /* 80FD4 80172BD4 04170424 */   addiu     $a0, $zero, 0x1704
    /* 80FD8 80172BD8 5DD5030C */  jal        func_800F5574
    /* 80FDC 80172BDC 04000424 */   addiu     $a0, $zero, 0x4
    /* 80FE0 80172BE0 F5D4030C */  jal        func_800F53D4
    /* 80FE4 80172BE4 00000000 */   nop
    /* 80FE8 80172BE8 41004014 */  bnez       $v0, .L80172CF0
    /* 80FEC 80172BEC 00000000 */   nop
    /* 80FF0 80172BF0 59D9030C */  jal        func_800F6564
    /* 80FF4 80172BF4 1C170424 */   addiu     $a0, $zero, 0x171C
    /* 80FF8 80172BF8 0DD9030C */  jal        func_800F6434
    /* 80FFC 80172BFC 02000424 */   addiu     $a0, $zero, 0x2
    /* 81000 80172C00 FB004014 */  bnez       $v0, .L80172FF0
    /* 81004 80172C04 00000000 */   nop
    /* 81008 80172C08 59D9030C */  jal        func_800F6564
    /* 8100C 80172C0C 01170424 */   addiu     $a0, $zero, 0x1701
    /* 81010 80172C10 C1CE030C */  jal        func_800F3B04
    /* 81014 80172C14 1F170424 */   addiu     $a0, $zero, 0x171F
    /* 81018 80172C18 35D5030C */  jal        func_800F54D4
    /* 8101C 80172C1C 21204000 */   addu      $a0, $v0, $zero
    /* 81020 80172C20 F5D4030C */  jal        func_800F53D4
    /* 81024 80172C24 00000000 */   nop
    /* 81028 80172C28 F1004010 */  beqz       $v0, .L80172FF0
    /* 8102C 80172C2C 00000000 */   nop
    /* 81030 80172C30 8CD9030C */  jal        func_800F6630
    /* 81034 80172C34 AD000424 */   addiu     $a0, $zero, 0xAD
    /* 81038 80172C38 5DD5030C */  jal        func_800F5574
    /* 8103C 80172C3C 20000424 */   addiu     $a0, $zero, 0x20
    /* 81040 80172C40 F0D4030C */  jal        func_800F53C0
    /* 81044 80172C44 00000000 */   nop
    /* 81048 80172C48 07004014 */  bnez       $v0, .L80172C68
    /* 8104C 80172C4C 00000000 */   nop
    /* 81050 80172C50 92D0030C */  jal        func_800F4248
    /* 81054 80172C54 0F000424 */   addiu     $a0, $zero, 0xF
    /* 81058 80172C58 48D0030C */  jal        func_800F4120
    /* 8105C 80172C5C 02020424 */   addiu     $a0, $zero, 0x202
    /* 81060 80172C60 E3004014 */  bnez       $v0, .L80172FF0
    /* 81064 80172C64 00000000 */   nop
  .L80172C68:
    /* 81068 80172C68 59D9030C */  jal        func_800F6564
    /* 8106C 80172C6C 1D170424 */   addiu     $a0, $zero, 0x171D
    /* 81070 80172C70 93E0030C */  jal        func_800F824C
    /* 81074 80172C74 0C000424 */   addiu     $a0, $zero, 0xC
    /* 81078 80172C78 59D9030C */  jal        func_800F6564
    /* 8107C 80172C7C 1E170424 */   addiu     $a0, $zero, 0x171E
    /* 81080 80172C80 93E0030C */  jal        func_800F824C
    /* 81084 80172C84 0E000424 */   addiu     $a0, $zero, 0xE
    /* 81088 80172C88 B6CF050C */  jal        func_80173ED8
    /* 8108C 80172C8C 00000000 */   nop
    /* 81090 80172C90 8CD9030C */  jal        func_800F6630
    /* 81094 80172C94 D7000424 */   addiu     $a0, $zero, 0xD7
    /* 81098 80172C98 0DD9030C */  jal        func_800F6434
    /* 8109C 80172C9C 02020424 */   addiu     $a0, $zero, 0x202
    /* 810A0 80172CA0 D3004010 */  beqz       $v0, .L80172FF0
    /* 810A4 80172CA4 00000000 */   nop
    /* 810A8 80172CA8 8CD9030C */  jal        func_800F6630
    /* 810AC 80172CAC AD000424 */   addiu     $a0, $zero, 0xAD
    /* 810B0 80172CB0 5DD5030C */  jal        func_800F5574
    /* 810B4 80172CB4 10000424 */   addiu     $a0, $zero, 0x10
    /* 810B8 80172CB8 F5D4030C */  jal        func_800F53D4
    /* 810BC 80172CBC 00000000 */   nop
    /* 810C0 80172CC0 07004014 */  bnez       $v0, .L80172CE0
    /* 810C4 80172CC4 00000000 */   nop
    /* 810C8 80172CC8 53D9030C */  jal        func_800F654C
    /* 810CC 80172CCC 04000424 */   addiu     $a0, $zero, 0x4
    /* 810D0 80172CD0 86C7050C */  jal        func_80171E18
    /* 810D4 80172CD4 00000000 */   nop
    /* 810D8 80172CD8 FECB0508 */  j          .L80172FF8
    /* 810DC 80172CDC 00000000 */   nop
  .L80172CE0:
    /* 810E0 80172CE0 53D9030C */  jal        func_800F654C
    /* 810E4 80172CE4 03000424 */   addiu     $a0, $zero, 0x3
    /* 810E8 80172CE8 54CB0508 */  j          .L80172D50
    /* 810EC 80172CEC 00000000 */   nop
  .L80172CF0:
    /* 810F0 80172CF0 8CD9030C */  jal        func_800F6630
    /* 810F4 80172CF4 B7000424 */   addiu     $a0, $zero, 0xB7
    /* 810F8 80172CF8 78CA050C */  jal        func_801729E0
    /* 810FC 80172CFC 00000000 */   nop
    /* 81100 80172D00 53D9030C */  jal        func_800F654C
    /* 81104 80172D04 70000424 */   addiu     $a0, $zero, 0x70
    /* 81108 80172D08 93E0030C */  jal        func_800F824C
    /* 8110C 80172D0C 0C000424 */   addiu     $a0, $zero, 0xC
    /* 81110 80172D10 53D9030C */  jal        func_800F654C
    /* 81114 80172D14 70000424 */   addiu     $a0, $zero, 0x70
    /* 81118 80172D18 20D5030C */  jal        func_800F5480
    /* 8111C 80172D1C 00000000 */   nop
    /* 81120 80172D20 0FCF030C */  jal        func_800F3C3C
    /* 81124 80172D24 B7000424 */   addiu     $a0, $zero, 0xB7
    /* 81128 80172D28 D2DF030C */  jal        func_800F7F48
    /* 8112C 80172D2C 21204000 */   addu      $a0, $v0, $zero
    /* 81130 80172D30 93E0030C */  jal        func_800F824C
    /* 81134 80172D34 0E000424 */   addiu     $a0, $zero, 0xE
    /* 81138 80172D38 EEE3030C */  jal        func_800F8FB8
    /* 8113C 80172D3C 0D000424 */   addiu     $a0, $zero, 0xD
    /* 81140 80172D40 EEE3030C */  jal        func_800F8FB8
    /* 81144 80172D44 0F000424 */   addiu     $a0, $zero, 0xF
    /* 81148 80172D48 59D9030C */  jal        func_800F6564
    /* 8114C 80172D4C 05170424 */   addiu     $a0, $zero, 0x1705
  .L80172D50:
    /* 81150 80172D50 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 81154 80172D54 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 81158 80172D58 00000000 */  nop
    /* 8115C 80172D5C 00006290 */  lbu        $v0, 0x0($v1)
    /* 81160 80172D60 07000424 */  addiu      $a0, $zero, 0x7
    /* 81164 80172D64 40110200 */  sll        $v0, $v0, 5
    /* 81168 80172D68 93E0030C */  jal        func_800F824C
    /* 8116C 80172D6C 000062A0 */   sb        $v0, 0x0($v1)
    /* 81170 80172D70 59D9030C */  jal        func_800F6564
    /* 81174 80172D74 04170424 */   addiu     $a0, $zero, 0x1704
    /* 81178 80172D78 5DD5030C */  jal        func_800F5574
    /* 8117C 80172D7C 04000424 */   addiu     $a0, $zero, 0x4
    /* 81180 80172D80 F5D4030C */  jal        func_800F53D4
    /* 81184 80172D84 00000000 */   nop
    /* 81188 80172D88 15004010 */  beqz       $v0, .L80172DE0
    /* 8118C 80172D8C 00000000 */   nop
    /* 81190 80172D90 59D9030C */  jal        func_800F6564
    /* 81194 80172D94 FD060424 */   addiu     $a0, $zero, 0x6FD
    /* 81198 80172D98 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 8119C 80172D9C 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 811A0 80172DA0 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 811A4 80172DA4 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 811A8 80172DA8 00004394 */  lhu        $v1, 0x0($v0)
    /* 811AC 80172DAC 7A000424 */  addiu      $a0, $zero, 0x7A
    /* 811B0 80172DB0 8CD9030C */  jal        func_800F6630
    /* 811B4 80172DB4 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 811B8 80172DB8 58D2030C */  jal        func_800F4960
    /* 811BC 80172DBC 37BE0434 */   ori       $a0, $zero, 0xBE37
    /* 811C0 80172DC0 48D0030C */  jal        func_800F4120
    /* 811C4 80172DC4 02020424 */   addiu     $a0, $zero, 0x202
    /* 811C8 80172DC8 05004014 */  bnez       $v0, .L80172DE0
    /* 811CC 80172DCC 00000000 */   nop
    /* 811D0 80172DD0 53D9030C */  jal        func_800F654C
    /* 811D4 80172DD4 10000424 */   addiu     $a0, $zero, 0x10
    /* 811D8 80172DD8 7ACB0508 */  j          .L80172DE8
    /* 811DC 80172DDC 00000000 */   nop
  .L80172DE0:
    /* 811E0 80172DE0 53D9030C */  jal        func_800F654C
    /* 811E4 80172DE4 21200000 */   addu      $a0, $zero, $zero
  .L80172DE8:
    /* 811E8 80172DE8 04D5030C */  jal        func_800F5410
    /* 811EC 80172DEC 00000000 */   nop
    /* 811F0 80172DF0 0FCF030C */  jal        func_800F3C3C
    /* 811F4 80172DF4 07000424 */   addiu     $a0, $zero, 0x7
    /* 811F8 80172DF8 CECF030C */  jal        func_800F3F38
    /* 811FC 80172DFC 21204000 */   addu      $a0, $v0, $zero
    /* 81200 80172E00 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 81204 80172E04 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 81208 80172E08 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 8120C 80172E0C 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 81210 80172E10 00004394 */  lhu        $v1, 0x0($v0)
    /* 81214 80172E14 21200000 */  addu       $a0, $zero, $zero
    /* 81218 80172E18 40DD030C */  jal        func_800F7500
    /* 8121C 80172E1C 0000A3A4 */   sh        $v1, 0x0($a1)
  .L80172E20:
    /* 81220 80172E20 DADA030C */  jal        func_800F6B68
    /* 81224 80172E24 B4BF0434 */   ori       $a0, $zero, 0xBFB4
    /* 81228 80172E28 04D5030C */  jal        func_800F5410
    /* 8122C 80172E2C 00000000 */   nop
    /* 81230 80172E30 0FCF030C */  jal        func_800F3C3C
    /* 81234 80172E34 0C000424 */   addiu     $a0, $zero, 0xC
    /* 81238 80172E38 CECF030C */  jal        func_800F3F38
    /* 8123C 80172E3C 21204000 */   addu      $a0, $v0, $zero
    /* 81240 80172E40 58E2030C */  jal        func_800F8960
    /* 81244 80172E44 6C040424 */   addiu     $a0, $zero, 0x46C
    /* 81248 80172E48 8CD9030C */  jal        func_800F6630
    /* 8124C 80172E4C 0D000424 */   addiu     $a0, $zero, 0xD
    /* 81250 80172E50 02D0030C */  jal        func_800F4008
    /* 81254 80172E54 21200000 */   addu      $a0, $zero, $zero
    /* 81258 80172E58 92D0030C */  jal        func_800F4248
    /* 8125C 80172E5C 01000424 */   addiu     $a0, $zero, 0x1
    /* 81260 80172E60 48D0030C */  jal        func_800F4120
    /* 81264 80172E64 02000424 */   addiu     $a0, $zero, 0x2
    /* 81268 80172E68 05004014 */  bnez       $v0, .L80172E80
    /* 8126C 80172E6C 00000000 */   nop
    /* 81270 80172E70 53D9030C */  jal        func_800F654C
    /* 81274 80172E74 5B000424 */   addiu     $a0, $zero, 0x5B
    /* 81278 80172E78 31C5050C */  jal        func_801714C4
    /* 8127C 80172E7C 00000000 */   nop
  .L80172E80:
    /* 81280 80172E80 DADA030C */  jal        func_800F6B68
    /* 81284 80172E84 B5BF0434 */   ori       $a0, $zero, 0xBFB5
    /* 81288 80172E88 04D5030C */  jal        func_800F5410
    /* 8128C 80172E8C 00000000 */   nop
    /* 81290 80172E90 0FCF030C */  jal        func_800F3C3C
    /* 81294 80172E94 0E000424 */   addiu     $a0, $zero, 0xE
    /* 81298 80172E98 CECF030C */  jal        func_800F3F38
    /* 8129C 80172E9C 21204000 */   addu      $a0, $v0, $zero
    /* 812A0 80172EA0 58E2030C */  jal        func_800F8960
    /* 812A4 80172EA4 6D040424 */   addiu     $a0, $zero, 0x46D
    /* 812A8 80172EA8 DADA030C */  jal        func_800F6B68
    /* 812AC 80172EAC B6BF0434 */   ori       $a0, $zero, 0xBFB6
    /* 812B0 80172EB0 04D5030C */  jal        func_800F5410
    /* 812B4 80172EB4 00000000 */   nop
    /* 812B8 80172EB8 02D0030C */  jal        func_800F4008
    /* 812BC 80172EBC 78000424 */   addiu     $a0, $zero, 0x78
    /* 812C0 80172EC0 58E2030C */  jal        func_800F8960
    /* 812C4 80172EC4 6E040424 */   addiu     $a0, $zero, 0x46E
    /* 812C8 80172EC8 DADA030C */  jal        func_800F6B68
    /* 812CC 80172ECC B7BF0434 */   ori       $a0, $zero, 0xBFB7
    /* 812D0 80172ED0 04D5030C */  jal        func_800F5410
    /* 812D4 80172ED4 00000000 */   nop
    /* 812D8 80172ED8 02D0030C */  jal        func_800F4008
    /* 812DC 80172EDC 18000424 */   addiu     $a0, $zero, 0x18
    /* 812E0 80172EE0 58E2030C */  jal        func_800F8960
    /* 812E4 80172EE4 6F040424 */   addiu     $a0, $zero, 0x46F
    /* 812E8 80172EE8 D9D8030C */  jal        func_800F6364
    /* 812EC 80172EEC 00000000 */   nop
    /* 812F0 80172EF0 D9D8030C */  jal        func_800F6364
    /* 812F4 80172EF4 00000000 */   nop
    /* 812F8 80172EF8 D9D8030C */  jal        func_800F6364
    /* 812FC 80172EFC 00000000 */   nop
    /* 81300 80172F00 D9D8030C */  jal        func_800F6364
    /* 81304 80172F04 00000000 */   nop
    /* 81308 80172F08 EFD8030C */  jal        func_800F63BC
    /* 8130C 80172F0C 00000000 */   nop
    /* 81310 80172F10 EFD8030C */  jal        func_800F63BC
    /* 81314 80172F14 00000000 */   nop
    /* 81318 80172F18 EFD8030C */  jal        func_800F63BC
    /* 8131C 80172F1C 00000000 */   nop
    /* 81320 80172F20 EFD8030C */  jal        func_800F63BC
    /* 81324 80172F24 00000000 */   nop
    /* 81328 80172F28 A4D6030C */  jal        func_800F5A90
    /* 8132C 80172F2C 10000424 */   addiu     $a0, $zero, 0x10
    /* 81330 80172F30 F5D4030C */  jal        func_800F53D4
    /* 81334 80172F34 00000000 */   nop
    /* 81338 80172F38 B9FF4010 */  beqz       $v0, .L80172E20
    /* 8133C 80172F3C 00000000 */   nop
    /* 81340 80172F40 59D9030C */  jal        func_800F6564
    /* 81344 80172F44 04170424 */   addiu     $a0, $zero, 0x1704
    /* 81348 80172F48 5DD5030C */  jal        func_800F5574
    /* 8134C 80172F4C 04000424 */   addiu     $a0, $zero, 0x4
    /* 81350 80172F50 F5D4030C */  jal        func_800F53D4
    /* 81354 80172F54 00000000 */   nop
    /* 81358 80172F58 25004010 */  beqz       $v0, .L80172FF0
    /* 8135C 80172F5C 00000000 */   nop
    /* 81360 80172F60 8CD9030C */  jal        func_800F6630
    /* 81364 80172F64 AD000424 */   addiu     $a0, $zero, 0xAD
    /* 81368 80172F68 5DD5030C */  jal        func_800F5574
    /* 8136C 80172F6C 20000424 */   addiu     $a0, $zero, 0x20
    /* 81370 80172F70 F5D4030C */  jal        func_800F53D4
    /* 81374 80172F74 00000000 */   nop
    /* 81378 80172F78 1D004010 */  beqz       $v0, .L80172FF0
    /* 8137C 80172F7C 00000000 */   nop
    /* 81380 80172F80 8CD9030C */  jal        func_800F6630
    /* 81384 80172F84 B7000424 */   addiu     $a0, $zero, 0xB7
    /* 81388 80172F88 5DD5030C */  jal        func_800F5574
    /* 8138C 80172F8C 10000424 */   addiu     $a0, $zero, 0x10
    /* 81390 80172F90 F5D4030C */  jal        func_800F53D4
    /* 81394 80172F94 00000000 */   nop
    /* 81398 80172F98 15004010 */  beqz       $v0, .L80172FF0
    /* 8139C 80172F9C 00000000 */   nop
    /* 813A0 80172FA0 53D9030C */  jal        func_800F654C
    /* 813A4 80172FA4 74000424 */   addiu     $a0, $zero, 0x74
    /* 813A8 80172FA8 62E0030C */  jal        func_800F8188
    /* 813AC 80172FAC 7C040424 */   addiu     $a0, $zero, 0x47C
    /* 813B0 80172FB0 59D9030C */  jal        func_800F6564
    /* 813B4 80172FB4 F8060424 */   addiu     $a0, $zero, 0x6F8
    /* 813B8 80172FB8 04D5030C */  jal        func_800F5410
    /* 813BC 80172FBC 00000000 */   nop
    /* 813C0 80172FC0 02D0030C */  jal        func_800F4008
    /* 813C4 80172FC4 68000424 */   addiu     $a0, $zero, 0x68
    /* 813C8 80172FC8 62E0030C */  jal        func_800F8188
    /* 813CC 80172FCC 7D040424 */   addiu     $a0, $zero, 0x47D
    /* 813D0 80172FD0 53D9030C */  jal        func_800F654C
    /* 813D4 80172FD4 2E000424 */   addiu     $a0, $zero, 0x2E
    /* 813D8 80172FD8 62E0030C */  jal        func_800F8188
    /* 813DC 80172FDC 7E040424 */   addiu     $a0, $zero, 0x47E
    /* 813E0 80172FE0 53D9030C */  jal        func_800F654C
    /* 813E4 80172FE4 21000424 */   addiu     $a0, $zero, 0x21
    /* 813E8 80172FE8 62E0030C */  jal        func_800F8188
    /* 813EC 80172FEC 7F040424 */   addiu     $a0, $zero, 0x47F
  .L80172FF0:
    /* 813F0 80172FF0 12E5030C */  jal        func_800F9448
    /* 813F4 80172FF4 00000000 */   nop
  .L80172FF8:
    /* 813F8 80172FF8 1000BF8F */  lw         $ra, 0x10($sp)
    /* 813FC 80172FFC 00000000 */  nop
    /* 81400 80173000 0800E003 */  jr         $ra
    /* 81404 80173004 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80172BA8
