nonmatching func_80126990, 0x1F8

glabel func_80126990
    /* 34D90 80126990 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 34D94 80126994 1000BFAF */  sw         $ra, 0x10($sp)
    /* 34D98 80126998 8CD9030C */  jal        func_800F6630
    /* 34D9C 8012699C D2000424 */   addiu     $a0, $zero, 0xD2
    /* 34DA0 801269A0 0DD9030C */  jal        func_800F6434
    /* 34DA4 801269A4 02020424 */   addiu     $a0, $zero, 0x202
    /* 34DA8 801269A8 73004010 */  beqz       $v0, .L80126B78
    /* 34DAC 801269AC 00000000 */   nop
    /* 34DB0 801269B0 8CD9030C */  jal        func_800F6630
    /* 34DB4 801269B4 BE000424 */   addiu     $a0, $zero, 0xBE
    /* 34DB8 801269B8 0DD9030C */  jal        func_800F6434
    /* 34DBC 801269BC 80800434 */   ori       $a0, $zero, 0x8080
    /* 34DC0 801269C0 19004014 */  bnez       $v0, .L80126A28
    /* 34DC4 801269C4 00000000 */   nop
    /* 34DC8 801269C8 92D0030C */  jal        func_800F4248
    /* 34DCC 801269CC 7F000424 */   addiu     $a0, $zero, 0x7F
    /* 34DD0 801269D0 93E0030C */  jal        func_800F824C
    /* 34DD4 801269D4 59000424 */   addiu     $a0, $zero, 0x59
    /* 34DD8 801269D8 04D5030C */  jal        func_800F5410
    /* 34DDC 801269DC 00000000 */   nop
    /* 34DE0 801269E0 8CD9030C */  jal        func_800F6630
    /* 34DE4 801269E4 BD000424 */   addiu     $a0, $zero, 0xBD
    /* 34DE8 801269E8 0FCF030C */  jal        func_800F3C3C
    /* 34DEC 801269EC B9000424 */   addiu     $a0, $zero, 0xB9
    /* 34DF0 801269F0 CECF030C */  jal        func_800F3F38
    /* 34DF4 801269F4 21204000 */   addu      $a0, $v0, $zero
    /* 34DF8 801269F8 93E0030C */  jal        func_800F824C
    /* 34DFC 801269FC B9000424 */   addiu     $a0, $zero, 0xB9
    /* 34E00 80126A00 8CD9030C */  jal        func_800F6630
    /* 34E04 80126A04 BA000424 */   addiu     $a0, $zero, 0xBA
    /* 34E08 80126A08 0FCF030C */  jal        func_800F3C3C
    /* 34E0C 80126A0C 59000424 */   addiu     $a0, $zero, 0x59
    /* 34E10 80126A10 CECF030C */  jal        func_800F3F38
    /* 34E14 80126A14 21204000 */   addu      $a0, $v0, $zero
    /* 34E18 80126A18 93E0030C */  jal        func_800F824C
    /* 34E1C 80126A1C BA000424 */   addiu     $a0, $zero, 0xBA
    /* 34E20 80126A20 9C9A0408 */  j          .L80126A70
    /* 34E24 80126A24 00000000 */   nop
  .L80126A28:
    /* 34E28 80126A28 8CD9030C */  jal        func_800F6630
    /* 34E2C 80126A2C B9000424 */   addiu     $a0, $zero, 0xB9
    /* 34E30 80126A30 20D5030C */  jal        func_800F5480
    /* 34E34 80126A34 00000000 */   nop
    /* 34E38 80126A38 0FCF030C */  jal        func_800F3C3C
    /* 34E3C 80126A3C BD000424 */   addiu     $a0, $zero, 0xBD
    /* 34E40 80126A40 D2DF030C */  jal        func_800F7F48
    /* 34E44 80126A44 21204000 */   addu      $a0, $v0, $zero
    /* 34E48 80126A48 93E0030C */  jal        func_800F824C
    /* 34E4C 80126A4C B9000424 */   addiu     $a0, $zero, 0xB9
    /* 34E50 80126A50 8CD9030C */  jal        func_800F6630
    /* 34E54 80126A54 BA000424 */   addiu     $a0, $zero, 0xBA
    /* 34E58 80126A58 0FCF030C */  jal        func_800F3C3C
    /* 34E5C 80126A5C BE000424 */   addiu     $a0, $zero, 0xBE
    /* 34E60 80126A60 D2DF030C */  jal        func_800F7F48
    /* 34E64 80126A64 21204000 */   addu      $a0, $v0, $zero
    /* 34E68 80126A68 93E0030C */  jal        func_800F824C
    /* 34E6C 80126A6C BA000424 */   addiu     $a0, $zero, 0xBA
  .L80126A70:
    /* 34E70 80126A70 8CD9030C */  jal        func_800F6630
    /* 34E74 80126A74 C0000424 */   addiu     $a0, $zero, 0xC0
    /* 34E78 80126A78 0DD9030C */  jal        func_800F6434
    /* 34E7C 80126A7C 80800434 */   ori       $a0, $zero, 0x8080
    /* 34E80 80126A80 19004014 */  bnez       $v0, .L80126AE8
    /* 34E84 80126A84 00000000 */   nop
    /* 34E88 80126A88 92D0030C */  jal        func_800F4248
    /* 34E8C 80126A8C 7F000424 */   addiu     $a0, $zero, 0x7F
    /* 34E90 80126A90 93E0030C */  jal        func_800F824C
    /* 34E94 80126A94 59000424 */   addiu     $a0, $zero, 0x59
    /* 34E98 80126A98 04D5030C */  jal        func_800F5410
    /* 34E9C 80126A9C 00000000 */   nop
    /* 34EA0 80126AA0 8CD9030C */  jal        func_800F6630
    /* 34EA4 80126AA4 BF000424 */   addiu     $a0, $zero, 0xBF
    /* 34EA8 80126AA8 0FCF030C */  jal        func_800F3C3C
    /* 34EAC 80126AAC BB000424 */   addiu     $a0, $zero, 0xBB
    /* 34EB0 80126AB0 CECF030C */  jal        func_800F3F38
    /* 34EB4 80126AB4 21204000 */   addu      $a0, $v0, $zero
    /* 34EB8 80126AB8 93E0030C */  jal        func_800F824C
    /* 34EBC 80126ABC BB000424 */   addiu     $a0, $zero, 0xBB
    /* 34EC0 80126AC0 8CD9030C */  jal        func_800F6630
    /* 34EC4 80126AC4 BC000424 */   addiu     $a0, $zero, 0xBC
    /* 34EC8 80126AC8 0FCF030C */  jal        func_800F3C3C
    /* 34ECC 80126ACC 59000424 */   addiu     $a0, $zero, 0x59
    /* 34ED0 80126AD0 CECF030C */  jal        func_800F3F38
    /* 34ED4 80126AD4 21204000 */   addu      $a0, $v0, $zero
    /* 34ED8 80126AD8 93E0030C */  jal        func_800F824C
    /* 34EDC 80126ADC BC000424 */   addiu     $a0, $zero, 0xBC
    /* 34EE0 80126AE0 CC9A0408 */  j          .L80126B30
    /* 34EE4 80126AE4 00000000 */   nop
  .L80126AE8:
    /* 34EE8 80126AE8 8CD9030C */  jal        func_800F6630
    /* 34EEC 80126AEC BB000424 */   addiu     $a0, $zero, 0xBB
    /* 34EF0 80126AF0 20D5030C */  jal        func_800F5480
    /* 34EF4 80126AF4 00000000 */   nop
    /* 34EF8 80126AF8 0FCF030C */  jal        func_800F3C3C
    /* 34EFC 80126AFC BF000424 */   addiu     $a0, $zero, 0xBF
    /* 34F00 80126B00 D2DF030C */  jal        func_800F7F48
    /* 34F04 80126B04 21204000 */   addu      $a0, $v0, $zero
    /* 34F08 80126B08 93E0030C */  jal        func_800F824C
    /* 34F0C 80126B0C BB000424 */   addiu     $a0, $zero, 0xBB
    /* 34F10 80126B10 8CD9030C */  jal        func_800F6630
    /* 34F14 80126B14 BC000424 */   addiu     $a0, $zero, 0xBC
    /* 34F18 80126B18 0FCF030C */  jal        func_800F3C3C
    /* 34F1C 80126B1C C0000424 */   addiu     $a0, $zero, 0xC0
    /* 34F20 80126B20 D2DF030C */  jal        func_800F7F48
    /* 34F24 80126B24 21204000 */   addu      $a0, $v0, $zero
    /* 34F28 80126B28 93E0030C */  jal        func_800F824C
    /* 34F2C 80126B2C BC000424 */   addiu     $a0, $zero, 0xBC
  .L80126B30:
    /* 34F30 80126B30 8CD9030C */  jal        func_800F6630
    /* 34F34 80126B34 BC000424 */   addiu     $a0, $zero, 0xBC
    /* 34F38 80126B38 52CF030C */  jal        func_800F3D48
    /* 34F3C 80126B3C 00000000 */   nop
    /* 34F40 80126B40 8CD9030C */  jal        func_800F6630
    /* 34F44 80126B44 BA000424 */   addiu     $a0, $zero, 0xBA
    /* 34F48 80126B48 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 34F4C 80126B4C 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 34F50 80126B50 1A80053C */  lui        $a1, %hi(D_8019ED58)
    /* 34F54 80126B54 58EDA58C */  lw         $a1, %lo(D_8019ED58)($a1)
    /* 34F58 80126B58 00004394 */  lhu        $v1, 0x0($v0)
    /* 34F5C 80126B5C D3000424 */  addiu      $a0, $zero, 0xD3
    /* 34F60 80126B60 8CD9030C */  jal        func_800F6630
    /* 34F64 80126B64 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 34F68 80126B68 C191040C */  jal        func_80124704
    /* 34F6C 80126B6C 00000000 */   nop
    /* 34F70 80126B70 68D7030C */  jal        func_800F5DA0
    /* 34F74 80126B74 D2000424 */   addiu     $a0, $zero, 0xD2
  .L80126B78:
    /* 34F78 80126B78 1000BF8F */  lw         $ra, 0x10($sp)
    /* 34F7C 80126B7C 00000000 */  nop
    /* 34F80 80126B80 0800E003 */  jr         $ra
    /* 34F84 80126B84 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80126990
