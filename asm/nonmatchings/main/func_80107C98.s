nonmatching func_80107C98, 0x2A4

glabel func_80107C98
    /* 16098 80107C98 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 1609C 80107C9C 1000BFAF */  sw         $ra, 0x10($sp)
    /* 160A0 80107CA0 8CD9030C */  jal        func_800F6630
    /* 160A4 80107CA4 CC000424 */   addiu     $a0, $zero, 0xCC
    /* 160A8 80107CA8 53D9030C */  jal        func_800F654C
    /* 160AC 80107CAC 01000424 */   addiu     $a0, $zero, 0x1
    /* 160B0 80107CB0 93E0030C */  jal        func_800F824C
    /* 160B4 80107CB4 EA000424 */   addiu     $a0, $zero, 0xEA
  .L80107CB8:
    /* 160B8 80107CB8 DEF9030C */  jal        func_800FE778
    /* 160BC 80107CBC 00000000 */   nop
    /* 160C0 80107CC0 8CD9030C */  jal        func_800F6630
    /* 160C4 80107CC4 EA000424 */   addiu     $a0, $zero, 0xEA
    /* 160C8 80107CC8 5DD5030C */  jal        func_800F5574
    /* 160CC 80107CCC 02000424 */   addiu     $a0, $zero, 0x2
    /* 160D0 80107CD0 F5D4030C */  jal        func_800F53D4
    /* 160D4 80107CD4 00000000 */   nop
    /* 160D8 80107CD8 F7FF4010 */  beqz       $v0, .L80107CB8
    /* 160DC 80107CDC 00000000 */   nop
    /* 160E0 80107CE0 77DC030C */  jal        func_800F71DC
    /* 160E4 80107CE4 21200000 */   addu      $a0, $zero, $zero
    /* 160E8 80107CE8 40E3030C */  jal        func_800F8D00
    /* 160EC 80107CEC F4080424 */   addiu     $a0, $zero, 0x8F4
    /* 160F0 80107CF0 EEE3030C */  jal        func_800F8FB8
    /* 160F4 80107CF4 DE000424 */   addiu     $a0, $zero, 0xDE
    /* 160F8 80107CF8 53D9030C */  jal        func_800F654C
    /* 160FC 80107CFC EC000424 */   addiu     $a0, $zero, 0xEC
    /* 16100 80107D00 93E0030C */  jal        func_800F824C
    /* 16104 80107D04 BB000424 */   addiu     $a0, $zero, 0xBB
    /* 16108 80107D08 EEE3030C */  jal        func_800F8FB8
    /* 1610C 80107D0C BA000424 */   addiu     $a0, $zero, 0xBA
    /* 16110 80107D10 1621040C */  jal        func_80108458
    /* 16114 80107D14 00000000 */   nop
    /* 16118 80107D18 53D9030C */  jal        func_800F654C
    /* 1611C 80107D1C 01000424 */   addiu     $a0, $zero, 0x1
    /* 16120 80107D20 93E0030C */  jal        func_800F824C
    /* 16124 80107D24 DF000424 */   addiu     $a0, $zero, 0xDF
    /* 16128 80107D28 93E0030C */  jal        func_800F824C
    /* 1612C 80107D2C EB000424 */   addiu     $a0, $zero, 0xEB
    /* 16130 80107D30 1A80033C */  lui        $v1, %hi(D_8019EDE8)
    /* 16134 80107D34 E8ED6384 */  lh         $v1, %lo(D_8019EDE8)($v1)
    /* 16138 80107D38 01000224 */  addiu      $v0, $zero, 0x1
    /* 1613C 80107D3C 03006214 */  bne        $v1, $v0, .L80107D4C
    /* 16140 80107D40 00000000 */   nop
    /* 16144 80107D44 1A80013C */  lui        $at, %hi(D_8019EDE8)
    /* 16148 80107D48 E8ED20A4 */  sh         $zero, %lo(D_8019EDE8)($at)
  .L80107D4C:
    /* 1614C 80107D4C DEF9030C */  jal        func_800FE778
    /* 16150 80107D50 00000000 */   nop
  .L80107D54:
    /* 16154 80107D54 8CD9030C */  jal        func_800F6630
    /* 16158 80107D58 7F000424 */   addiu     $a0, $zero, 0x7F
    /* 1615C 80107D5C 5DD5030C */  jal        func_800F5574
    /* 16160 80107D60 02000424 */   addiu     $a0, $zero, 0x2
    /* 16164 80107D64 F5D4030C */  jal        func_800F53D4
    /* 16168 80107D68 00000000 */   nop
    /* 1616C 80107D6C F9FF4010 */  beqz       $v0, .L80107D54
    /* 16170 80107D70 00000000 */   nop
    /* 16174 80107D74 AFD8030C */  jal        func_800F62BC
    /* 16178 80107D78 DF000424 */   addiu     $a0, $zero, 0xDF
    /* 1617C 80107D7C 8CD9030C */  jal        func_800F6630
    /* 16180 80107D80 DF000424 */   addiu     $a0, $zero, 0xDF
    /* 16184 80107D84 5DD5030C */  jal        func_800F5574
    /* 16188 80107D88 08000424 */   addiu     $a0, $zero, 0x8
    /* 1618C 80107D8C F5D4030C */  jal        func_800F53D4
    /* 16190 80107D90 00000000 */   nop
    /* 16194 80107D94 EDFF4010 */  beqz       $v0, .L80107D4C
    /* 16198 80107D98 00000000 */   nop
  .L80107D9C:
    /* 1619C 80107D9C 84DC030C */  jal        func_800F7210
    /* 161A0 80107DA0 F4080424 */   addiu     $a0, $zero, 0x8F4
    /* 161A4 80107DA4 5CDC030C */  jal        func_800F7170
    /* 161A8 80107DA8 02000424 */   addiu     $a0, $zero, 0x2
    /* 161AC 80107DAC 11004014 */  bnez       $v0, .L80107DF4
    /* 161B0 80107DB0 00000000 */   nop
  .L80107DB4:
    /* 161B4 80107DB4 6BDF050C */  jal        func_80177DAC
    /* 161B8 80107DB8 00000000 */   nop
    /* 161BC 80107DBC C1CE030C */  jal        func_800F3B04
    /* 161C0 80107DC0 F6080424 */   addiu     $a0, $zero, 0x8F6
    /* 161C4 80107DC4 ABD5030C */  jal        func_800F56AC
    /* 161C8 80107DC8 21204000 */   addu      $a0, $v0, $zero
    /* 161CC 80107DCC F5D4030C */  jal        func_800F53D4
    /* 161D0 80107DD0 00000000 */   nop
    /* 161D4 80107DD4 F7FF4010 */  beqz       $v0, .L80107DB4
    /* 161D8 80107DD8 00000000 */   nop
    /* 161DC 80107DDC 77DC030C */  jal        func_800F71DC
    /* 161E0 80107DE0 21200000 */   addu      $a0, $zero, $zero
    /* 161E4 80107DE4 40E3030C */  jal        func_800F8D00
    /* 161E8 80107DE8 F4080424 */   addiu     $a0, $zero, 0x8F4
    /* 161EC 80107DEC 8F1F0408 */  j          .L80107E3C
    /* 161F0 80107DF0 00000000 */   nop
  .L80107DF4:
    /* 161F4 80107DF4 8CD9030C */  jal        func_800F6630
    /* 161F8 80107DF8 DE000424 */   addiu     $a0, $zero, 0xDE
    /* 161FC 80107DFC 5DD5030C */  jal        func_800F5574
    /* 16200 80107E00 02000424 */   addiu     $a0, $zero, 0x2
    /* 16204 80107E04 F5D4030C */  jal        func_800F53D4
    /* 16208 80107E08 00000000 */   nop
    /* 1620C 80107E0C 47004014 */  bnez       $v0, .L80107F2C
    /* 16210 80107E10 00000000 */   nop
    /* 16214 80107E14 8CD9030C */  jal        func_800F6630
    /* 16218 80107E18 CB000424 */   addiu     $a0, $zero, 0xCB
    /* 1621C 80107E1C 0DD9030C */  jal        func_800F6434
    /* 16220 80107E20 02020424 */   addiu     $a0, $zero, 0x202
    /* 16224 80107E24 05004014 */  bnez       $v0, .L80107E3C
    /* 16228 80107E28 00000000 */   nop
    /* 1622C 80107E2C 7FF6030C */  jal        func_800FD9FC
    /* 16230 80107E30 00000000 */   nop
    /* 16234 80107E34 93F6030C */  jal        func_800FDA4C
    /* 16238 80107E38 00000000 */   nop
  .L80107E3C:
    /* 1623C 80107E3C 8CD9030C */  jal        func_800F6630
    /* 16240 80107E40 DE000424 */   addiu     $a0, $zero, 0xDE
    /* 16244 80107E44 0DD9030C */  jal        func_800F6434
    /* 16248 80107E48 02020424 */   addiu     $a0, $zero, 0x202
    /* 1624C 80107E4C 37004014 */  bnez       $v0, .L80107F2C
    /* 16250 80107E50 00000000 */   nop
    /* 16254 80107E54 1621040C */  jal        func_80108458
    /* 16258 80107E58 00000000 */   nop
    /* 1625C 80107E5C 53D9030C */  jal        func_800F654C
    /* 16260 80107E60 10000424 */   addiu     $a0, $zero, 0x10
    /* 16264 80107E64 93E0030C */  jal        func_800F824C
    /* 16268 80107E68 07000424 */   addiu     $a0, $zero, 0x7
  .L80107E6C:
    /* 1626C 80107E6C DEF9030C */  jal        func_800FE778
    /* 16270 80107E70 00000000 */   nop
    /* 16274 80107E74 8CD9030C */  jal        func_800F6630
    /* 16278 80107E78 CB000424 */   addiu     $a0, $zero, 0xCB
    /* 1627C 80107E7C 0DD9030C */  jal        func_800F6434
    /* 16280 80107E80 02020424 */   addiu     $a0, $zero, 0x202
    /* 16284 80107E84 0D004014 */  bnez       $v0, .L80107EBC
    /* 16288 80107E88 00000000 */   nop
    /* 1628C 80107E8C AFD8030C */  jal        func_800F62BC
    /* 16290 80107E90 BB000424 */   addiu     $a0, $zero, 0xBB
    /* 16294 80107E94 AFD8030C */  jal        func_800F62BC
    /* 16298 80107E98 BB000424 */   addiu     $a0, $zero, 0xBB
    /* 1629C 80107E9C AFD8030C */  jal        func_800F62BC
    /* 162A0 80107EA0 BB000424 */   addiu     $a0, $zero, 0xBB
    /* 162A4 80107EA4 AFD8030C */  jal        func_800F62BC
    /* 162A8 80107EA8 BB000424 */   addiu     $a0, $zero, 0xBB
    /* 162AC 80107EAC 68D7030C */  jal        func_800F5DA0
    /* 162B0 80107EB0 07000424 */   addiu     $a0, $zero, 0x7
    /* 162B4 80107EB4 C31F0408 */  j          .L80107F0C
    /* 162B8 80107EB8 00000000 */   nop
  .L80107EBC:
    /* 162BC 80107EBC 8CD9030C */  jal        func_800F6630
    /* 162C0 80107EC0 7A000424 */   addiu     $a0, $zero, 0x7A
    /* 162C4 80107EC4 92D0030C */  jal        func_800F4248
    /* 162C8 80107EC8 07000424 */   addiu     $a0, $zero, 0x7
    /* 162CC 80107ECC 48D0030C */  jal        func_800F4120
    /* 162D0 80107ED0 02020424 */   addiu     $a0, $zero, 0x202
    /* 162D4 80107ED4 0D004014 */  bnez       $v0, .L80107F0C
    /* 162D8 80107ED8 00000000 */   nop
    /* 162DC 80107EDC AFD8030C */  jal        func_800F62BC
    /* 162E0 80107EE0 BB000424 */   addiu     $a0, $zero, 0xBB
    /* 162E4 80107EE4 8CD9030C */  jal        func_800F6630
    /* 162E8 80107EE8 7A000424 */   addiu     $a0, $zero, 0x7A
    /* 162EC 80107EEC 92D0030C */  jal        func_800F4248
    /* 162F0 80107EF0 1F000424 */   addiu     $a0, $zero, 0x1F
    /* 162F4 80107EF4 48D0030C */  jal        func_800F4120
    /* 162F8 80107EF8 02020424 */   addiu     $a0, $zero, 0x202
    /* 162FC 80107EFC 03004014 */  bnez       $v0, .L80107F0C
    /* 16300 80107F00 00000000 */   nop
    /* 16304 80107F04 68D7030C */  jal        func_800F5DA0
    /* 16308 80107F08 07000424 */   addiu     $a0, $zero, 0x7
  .L80107F0C:
    /* 1630C 80107F0C 8CD9030C */  jal        func_800F6630
    /* 16310 80107F10 07000424 */   addiu     $a0, $zero, 0x7
    /* 16314 80107F14 0DD9030C */  jal        func_800F6434
    /* 16318 80107F18 02020424 */   addiu     $a0, $zero, 0x202
    /* 1631C 80107F1C D3FF4014 */  bnez       $v0, .L80107E6C
    /* 16320 80107F20 00000000 */   nop
    /* 16324 80107F24 671F0408 */  j          .L80107D9C
    /* 16328 80107F28 00000000 */   nop
  .L80107F2C:
    /* 1632C 80107F2C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 16330 80107F30 00000000 */  nop
    /* 16334 80107F34 0800E003 */  jr         $ra
    /* 16338 80107F38 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80107C98
