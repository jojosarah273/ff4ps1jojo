nonmatching func_80110CFC, 0x230

glabel func_80110CFC
    /* 1F0FC 80110CFC E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 1F100 80110D00 1000BFAF */  sw         $ra, 0x10($sp)
    /* 1F104 80110D04 CB43040C */  jal        func_80110F2C
    /* 1F108 80110D08 00000000 */   nop
    /* 1F10C 80110D0C 53D9030C */  jal        func_800F654C
    /* 1F110 80110D10 01000424 */   addiu     $a0, $zero, 0x1
    /* 1F114 80110D14 7AE0030C */  jal        func_800F81E8
    /* 1F118 80110D18 C8060424 */   addiu     $a0, $zero, 0x6C8
    /* 1F11C 80110D1C 77DC030C */  jal        func_800F71DC
    /* 1F120 80110D20 21200000 */   addu      $a0, $zero, $zero
  .L80110D24:
    /* 1F124 80110D24 DADA030C */  jal        func_800F6B68
    /* 1F128 80110D28 BB0E0424 */   addiu     $a0, $zero, 0xEBB
    /* 1F12C 80110D2C DAE1030C */  jal        func_800F8768
    /* 1F130 80110D30 6D0A0424 */   addiu     $a0, $zero, 0xA6D
    /* 1F134 80110D34 D9D8030C */  jal        func_800F6364
    /* 1F138 80110D38 00000000 */   nop
    /* 1F13C 80110D3C 56D6030C */  jal        func_800F5958
    /* 1F140 80110D40 10000424 */   addiu     $a0, $zero, 0x10
    /* 1F144 80110D44 F5D4030C */  jal        func_800F53D4
    /* 1F148 80110D48 00000000 */   nop
    /* 1F14C 80110D4C F5FF4010 */  beqz       $v0, .L80110D24
    /* 1F150 80110D50 00000000 */   nop
    /* 1F154 80110D54 EEE3030C */  jal        func_800F8FB8
    /* 1F158 80110D58 26000424 */   addiu     $a0, $zero, 0x26
  .L80110D5C:
    /* 1F15C 80110D5C E943040C */  jal        func_80110FA4
    /* 1F160 80110D60 00000000 */   nop
    /* 1F164 80110D64 53D9030C */  jal        func_800F654C
    /* 1F168 80110D68 20000424 */   addiu     $a0, $zero, 0x20
    /* 1F16C 80110D6C 93E0030C */  jal        func_800F824C
    /* 1F170 80110D70 B9000424 */   addiu     $a0, $zero, 0xB9
    /* 1F174 80110D74 E0CD050C */  jal        func_80173780
    /* 1F178 80110D78 00000000 */   nop
    /* 1F17C 80110D7C 8CD9030C */  jal        func_800F6630
    /* 1F180 80110D80 7A000424 */   addiu     $a0, $zero, 0x7A
    /* 1F184 80110D84 19DE030C */  jal        func_800F7864
    /* 1F188 80110D88 00000000 */   nop
    /* 1F18C 80110D8C CADD030C */  jal        func_800F7728
    /* 1F190 80110D90 01010424 */   addiu     $a0, $zero, 0x101
    /* 1F194 80110D94 03004014 */  bnez       $v0, .L80110DA4
    /* 1F198 80110D98 00000000 */   nop
    /* 1F19C 80110D9C AFD8030C */  jal        func_800F62BC
    /* 1F1A0 80110DA0 26000424 */   addiu     $a0, $zero, 0x26
  .L80110DA4:
    /* 1F1A4 80110DA4 8CD9030C */  jal        func_800F6630
    /* 1F1A8 80110DA8 26000424 */   addiu     $a0, $zero, 0x26
    /* 1F1AC 80110DAC 0DD9030C */  jal        func_800F6434
    /* 1F1B0 80110DB0 80000424 */   addiu     $a0, $zero, 0x80
    /* 1F1B4 80110DB4 27004014 */  bnez       $v0, .L80110E54
    /* 1F1B8 80110DB8 00000000 */   nop
    /* 1F1BC 80110DBC 50D4030C */  jal        func_800F5140
    /* 1F1C0 80110DC0 00000000 */   nop
    /* 1F1C4 80110DC4 93E0030C */  jal        func_800F824C
    /* 1F1C8 80110DC8 22000424 */   addiu     $a0, $zero, 0x22
    /* 1F1CC 80110DCC 8CD9030C */  jal        func_800F6630
    /* 1F1D0 80110DD0 24000424 */   addiu     $a0, $zero, 0x24
    /* 1F1D4 80110DD4 04D5030C */  jal        func_800F5410
    /* 1F1D8 80110DD8 00000000 */   nop
    /* 1F1DC 80110DDC 0FCF030C */  jal        func_800F3C3C
    /* 1F1E0 80110DE0 22000424 */   addiu     $a0, $zero, 0x22
    /* 1F1E4 80110DE4 CECF030C */  jal        func_800F3F38
    /* 1F1E8 80110DE8 21204000 */   addu      $a0, $v0, $zero
    /* 1F1EC 80110DEC 93E0030C */  jal        func_800F824C
    /* 1F1F0 80110DF0 24000424 */   addiu     $a0, $zero, 0x24
    /* 1F1F4 80110DF4 1A80033C */  lui        $v1, %hi(D_8019ED68)
    /* 1F1F8 80110DF8 68ED638C */  lw         $v1, %lo(D_8019ED68)($v1)
    /* 1F1FC 80110DFC 00000000 */  nop
    /* 1F200 80110E00 00006290 */  lbu        $v0, 0x0($v1)
    /* 1F204 80110E04 00000000 */  nop
    /* 1F208 80110E08 FD004230 */  andi       $v0, $v0, 0xFD
    /* 1F20C 80110E0C 000062A0 */  sb         $v0, 0x0($v1)
    /* 1F210 80110E10 1A80043C */  lui        $a0, %hi(D_8019ED50)
    /* 1F214 80110E14 50ED848C */  lw         $a0, %lo(D_8019ED50)($a0)
    /* 1F218 80110E18 1A80053C */  lui        $a1, %hi(D_8019ED68)
    /* 1F21C 80110E1C 68EDA58C */  lw         $a1, %lo(D_8019ED68)($a1)
    /* 1F220 80110E20 00008290 */  lbu        $v0, 0x0($a0)
    /* 1F224 80110E24 0000A390 */  lbu        $v1, 0x0($a1)
    /* 1F228 80110E28 02004014 */  bnez       $v0, .L80110E34
    /* 1F22C 80110E2C 00000000 */   nop
    /* 1F230 80110E30 02006334 */  ori        $v1, $v1, 0x2
  .L80110E34:
    /* 1F234 80110E34 F0D4030C */  jal        func_800F53C0
    /* 1F238 80110E38 0000A3A0 */   sb        $v1, 0x0($a1)
    /* 1F23C 80110E3C 05004014 */  bnez       $v0, .L80110E54
    /* 1F240 80110E40 00000000 */   nop
    /* 1F244 80110E44 F242040C */  jal        func_80110BC8
    /* 1F248 80110E48 00000000 */   nop
    /* 1F24C 80110E4C AF430408 */  j          .L80110EBC
    /* 1F250 80110E50 00000000 */   nop
  .L80110E54:
    /* 1F254 80110E54 92D0030C */  jal        func_800F4248
    /* 1F258 80110E58 F1000424 */   addiu     $a0, $zero, 0xF1
    /* 1F25C 80110E5C 5DD5030C */  jal        func_800F5574
    /* 1F260 80110E60 80000424 */   addiu     $a0, $zero, 0x80
    /* 1F264 80110E64 F5D4030C */  jal        func_800F53D4
    /* 1F268 80110E68 00000000 */   nop
    /* 1F26C 80110E6C 05004010 */  beqz       $v0, .L80110E84
    /* 1F270 80110E70 00000000 */   nop
    /* 1F274 80110E74 53D9030C */  jal        func_800F654C
    /* 1F278 80110E78 01000424 */   addiu     $a0, $zero, 0x1
    /* 1F27C 80110E7C 93E0030C */  jal        func_800F824C
    /* 1F280 80110E80 C4000424 */   addiu     $a0, $zero, 0xC4
  .L80110E84:
    /* 1F284 80110E84 77DC030C */  jal        func_800F71DC
    /* 1F288 80110E88 21200000 */   addu      $a0, $zero, $zero
  .L80110E8C:
    /* 1F28C 80110E8C DADA030C */  jal        func_800F6B68
    /* 1F290 80110E90 6D0A0424 */   addiu     $a0, $zero, 0xA6D
    /* 1F294 80110E94 DAE1030C */  jal        func_800F8768
    /* 1F298 80110E98 BB0E0424 */   addiu     $a0, $zero, 0xEBB
    /* 1F29C 80110E9C D9D8030C */  jal        func_800F6364
    /* 1F2A0 80110EA0 00000000 */   nop
    /* 1F2A4 80110EA4 56D6030C */  jal        func_800F5958
    /* 1F2A8 80110EA8 10000424 */   addiu     $a0, $zero, 0x10
    /* 1F2AC 80110EAC F5D4030C */  jal        func_800F53D4
    /* 1F2B0 80110EB0 00000000 */   nop
    /* 1F2B4 80110EB4 F5FF4010 */  beqz       $v0, .L80110E8C
    /* 1F2B8 80110EB8 00000000 */   nop
  .L80110EBC:
    /* 1F2BC 80110EBC 8CD9030C */  jal        func_800F6630
    /* 1F2C0 80110EC0 26000424 */   addiu     $a0, $zero, 0x26
    /* 1F2C4 80110EC4 5DD5030C */  jal        func_800F5574
    /* 1F2C8 80110EC8 FF000424 */   addiu     $a0, $zero, 0xFF
    /* 1F2CC 80110ECC F5D4030C */  jal        func_800F53D4
    /* 1F2D0 80110ED0 00000000 */   nop
    /* 1F2D4 80110ED4 A1FF4010 */  beqz       $v0, .L80110D5C
    /* 1F2D8 80110ED8 00000000 */   nop
    /* 1F2DC 80110EDC EEE3030C */  jal        func_800F8FB8
    /* 1F2E0 80110EE0 C8000424 */   addiu     $a0, $zero, 0xC8
    /* 1F2E4 80110EE4 53D9030C */  jal        func_800F654C
    /* 1F2E8 80110EE8 01000424 */   addiu     $a0, $zero, 0x1
    /* 1F2EC 80110EEC 62E0030C */  jal        func_800F8188
    /* 1F2F0 80110EF0 24170424 */   addiu     $a0, $zero, 0x1724
    /* 1F2F4 80110EF4 DDE3030C */  jal        func_800F8F74
    /* 1F2F8 80110EF8 27170424 */   addiu     $a0, $zero, 0x1727
    /* 1F2FC 80110EFC EEE3030C */  jal        func_800F8FB8
    /* 1F300 80110F00 B9000424 */   addiu     $a0, $zero, 0xB9
    /* 1F304 80110F04 77DC030C */  jal        func_800F71DC
    /* 1F308 80110F08 96C70434 */   ori       $a0, $zero, 0xC796
    /* 1F30C 80110F0C 40E3030C */  jal        func_800F8D00
    /* 1F310 80110F10 25170424 */   addiu     $a0, $zero, 0x1725
    /* 1F314 80110F14 977A040C */  jal        func_8011EA5C
    /* 1F318 80110F18 00000000 */   nop
    /* 1F31C 80110F1C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 1F320 80110F20 00000000 */  nop
    /* 1F324 80110F24 0800E003 */  jr         $ra
    /* 1F328 80110F28 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80110CFC
