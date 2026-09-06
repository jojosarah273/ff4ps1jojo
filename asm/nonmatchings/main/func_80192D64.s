nonmatching func_80192D64, 0x1D0

glabel func_80192D64
    /* A1164 80192D64 D8FFBD27 */  addiu      $sp, $sp, -0x28
    /* A1168 80192D68 1400B1AF */  sw         $s1, 0x14($sp)
    /* A116C 80192D6C 1A80113C */  lui        $s1, %hi(D_8019BE6C)
    /* A1170 80192D70 6CBE3126 */  addiu      $s1, $s1, %lo(D_8019BE6C)
    /* A1174 80192D74 2400BFAF */  sw         $ra, 0x24($sp)
    /* A1178 80192D78 2000B4AF */  sw         $s4, 0x20($sp)
    /* A117C 80192D7C 1C00B3AF */  sw         $s3, 0x1C($sp)
    /* A1180 80192D80 1800B2AF */  sw         $s2, 0x18($sp)
    /* A1184 80192D84 1000B0AF */  sw         $s0, 0x10($sp)
    /* A1188 80192D88 00002296 */  lhu        $v0, 0x0($s1)
    /* A118C 80192D8C 00000000 */  nop
    /* A1190 80192D90 0A004014 */  bnez       $v0, .L80192DBC
    /* A1194 80192D94 00000000 */   nop
    /* A1198 80192D98 1A80023C */  lui        $v0, %hi(D_8019CEF8)
    /* A119C 80192D9C F8CE428C */  lw         $v0, %lo(D_8019CEF8)($v0)
    /* A11A0 80192DA0 00000000 */  nop
    /* A11A4 80192DA4 00004594 */  lhu        $a1, 0x0($v0)
    /* A11A8 80192DA8 0F80043C */  lui        $a0, %hi(D_800F3714)
    /* A11AC 80192DAC 323C060C */  jal        func_8018F0C8
    /* A11B0 80192DB0 14378424 */   addiu     $a0, $a0, %lo(D_800F3714)
    /* A11B4 80192DB4 AE5D060C */  jal        func_801976B8
    /* A11B8 80192DB8 00000000 */   nop
  .L80192DBC:
    /* A11BC 80192DBC 1A80043C */  lui        $a0, %hi(D_8019CEF8)
    /* A11C0 80192DC0 F8CE848C */  lw         $a0, %lo(D_8019CEF8)($a0)
    /* A11C4 80192DC4 30002396 */  lhu        $v1, 0x30($s1)
    /* A11C8 80192DC8 01000224 */  addiu      $v0, $zero, 0x1
    /* A11CC 80192DCC 020022A6 */  sh         $v0, 0x2($s1)
    /* A11D0 80192DD0 1A80023C */  lui        $v0, %hi(D_8019CEFC)
    /* A11D4 80192DD4 FCCE428C */  lw         $v0, %lo(D_8019CEFC)($v0)
    /* A11D8 80192DD8 00008494 */  lhu        $a0, 0x0($a0)
    /* A11DC 80192DDC 00004294 */  lhu        $v0, 0x0($v0)
    /* A11E0 80192DE0 24186400 */  and        $v1, $v1, $a0
    /* A11E4 80192DE4 24104300 */  and        $v0, $v0, $v1
    /* A11E8 80192DE8 26004010 */  beqz       $v0, .L80192E84
    /* A11EC 80192DEC 21804000 */   addu      $s0, $v0, $zero
    /* A11F0 80192DF0 01001324 */  addiu      $s3, $zero, 0x1
    /* A11F4 80192DF4 04003426 */  addiu      $s4, $s1, 0x4
  .L80192DF8:
    /* A11F8 80192DF8 16000012 */  beqz       $s0, .L80192E54
    /* A11FC 80192DFC 21880000 */   addu      $s1, $zero, $zero
    /* A1200 80192E00 21908002 */  addu       $s2, $s4, $zero
  .L80192E04:
    /* A1204 80192E04 0B00222A */  slti       $v0, $s1, 0xB
    /* A1208 80192E08 12004010 */  beqz       $v0, .L80192E54
    /* A120C 80192E0C 01000232 */   andi      $v0, $s0, 0x1
    /* A1210 80192E10 0B004010 */  beqz       $v0, .L80192E40
    /* A1214 80192E14 04103302 */   sllv      $v0, $s3, $s1
    /* A1218 80192E18 1A80033C */  lui        $v1, %hi(D_8019CEF8)
    /* A121C 80192E1C F8CE638C */  lw         $v1, %lo(D_8019CEF8)($v1)
    /* A1220 80192E20 27100200 */  nor        $v0, $zero, $v0
    /* A1224 80192E24 000062A4 */  sh         $v0, 0x0($v1)
    /* A1228 80192E28 0000428E */  lw         $v0, 0x0($s2)
    /* A122C 80192E2C 00000000 */  nop
    /* A1230 80192E30 03004010 */  beqz       $v0, .L80192E40
    /* A1234 80192E34 00000000 */   nop
    /* A1238 80192E38 09F84000 */  jalr       $v0
    /* A123C 80192E3C 00000000 */   nop
  .L80192E40:
    /* A1240 80192E40 04005226 */  addiu      $s2, $s2, 0x4
    /* A1244 80192E44 42801000 */  srl        $s0, $s0, 1
    /* A1248 80192E48 FFFF0232 */  andi       $v0, $s0, 0xFFFF
    /* A124C 80192E4C EDFF4014 */  bnez       $v0, .L80192E04
    /* A1250 80192E50 01003126 */   addiu     $s1, $s1, 0x1
  .L80192E54:
    /* A1254 80192E54 1A80043C */  lui        $a0, %hi(D_8019CEF8)
    /* A1258 80192E58 F8CE848C */  lw         $a0, %lo(D_8019CEF8)($a0)
    /* A125C 80192E5C 1A80033C */  lui        $v1, %hi(D_8019BE9C)
    /* A1260 80192E60 9CBE6394 */  lhu        $v1, %lo(D_8019BE9C)($v1)
    /* A1264 80192E64 1A80023C */  lui        $v0, %hi(D_8019CEFC)
    /* A1268 80192E68 FCCE428C */  lw         $v0, %lo(D_8019CEFC)($v0)
    /* A126C 80192E6C 00008494 */  lhu        $a0, 0x0($a0)
    /* A1270 80192E70 00004294 */  lhu        $v0, 0x0($v0)
    /* A1274 80192E74 24186400 */  and        $v1, $v1, $a0
    /* A1278 80192E78 24104300 */  and        $v0, $v0, $v1
    /* A127C 80192E7C DEFF4014 */  bnez       $v0, .L80192DF8
    /* A1280 80192E80 21804000 */   addu      $s0, $v0, $zero
  .L80192E84:
    /* A1284 80192E84 1A80053C */  lui        $a1, %hi(D_8019CEF8)
    /* A1288 80192E88 F8CEA58C */  lw         $a1, %lo(D_8019CEF8)($a1)
    /* A128C 80192E8C 1A80063C */  lui        $a2, %hi(D_8019CEFC)
    /* A1290 80192E90 FCCEC68C */  lw         $a2, %lo(D_8019CEFC)($a2)
    /* A1294 80192E94 0000A294 */  lhu        $v0, 0x0($a1)
    /* A1298 80192E98 0000C394 */  lhu        $v1, 0x0($a2)
    /* A129C 80192E9C 00000000 */  nop
    /* A12A0 80192EA0 24104300 */  and        $v0, $v0, $v1
    /* A12A4 80192EA4 16004010 */  beqz       $v0, .L80192F00
    /* A12A8 80192EA8 00000000 */   nop
    /* A12AC 80192EAC 1A80023C */  lui        $v0, %hi(D_8019CF04)
    /* A12B0 80192EB0 04CF4224 */  addiu      $v0, $v0, %lo(D_8019CF04)
    /* A12B4 80192EB4 0000438C */  lw         $v1, 0x0($v0)
    /* A12B8 80192EB8 00000000 */  nop
    /* A12BC 80192EBC 21206000 */  addu       $a0, $v1, $zero
    /* A12C0 80192EC0 01006324 */  addiu      $v1, $v1, 0x1
    /* A12C4 80192EC4 01088428 */  slti       $a0, $a0, 0x801
    /* A12C8 80192EC8 0F008014 */  bnez       $a0, .L80192F08
    /* A12CC 80192ECC 000043AC */   sw        $v1, 0x0($v0)
    /* A12D0 80192ED0 0F80043C */  lui        $a0, %hi(D_800F3730)
    /* A12D4 80192ED4 30378424 */  addiu      $a0, $a0, %lo(D_800F3730)
    /* A12D8 80192ED8 0000A594 */  lhu        $a1, 0x0($a1)
    /* A12DC 80192EDC 0000C694 */  lhu        $a2, 0x0($a2)
    /* A12E0 80192EE0 323C060C */  jal        func_8018F0C8
    /* A12E4 80192EE4 00000000 */   nop
    /* A12E8 80192EE8 1A80023C */  lui        $v0, %hi(D_8019CEF8)
    /* A12EC 80192EEC F8CE428C */  lw         $v0, %lo(D_8019CEF8)($v0)
    /* A12F0 80192EF0 1A80013C */  lui        $at, %hi(D_8019CF04)
    /* A12F4 80192EF4 04CF20AC */  sw         $zero, %lo(D_8019CF04)($at)
    /* A12F8 80192EF8 C24B0608 */  j          .L80192F08
    /* A12FC 80192EFC 000040A4 */   sh        $zero, 0x0($v0)
  .L80192F00:
    /* A1300 80192F00 1A80013C */  lui        $at, %hi(D_8019CF04)
    /* A1304 80192F04 04CF20AC */  sw         $zero, %lo(D_8019CF04)($at)
  .L80192F08:
    /* A1308 80192F08 1A80013C */  lui        $at, %hi(D_8019BE6E)
    /* A130C 80192F0C AE5D060C */  jal        func_801976B8
    /* A1310 80192F10 6EBE20A4 */   sh        $zero, %lo(D_8019BE6E)($at)
    /* A1314 80192F14 2400BF8F */  lw         $ra, 0x24($sp)
    /* A1318 80192F18 2000B48F */  lw         $s4, 0x20($sp)
    /* A131C 80192F1C 1C00B38F */  lw         $s3, 0x1C($sp)
    /* A1320 80192F20 1800B28F */  lw         $s2, 0x18($sp)
    /* A1324 80192F24 1400B18F */  lw         $s1, 0x14($sp)
    /* A1328 80192F28 1000B08F */  lw         $s0, 0x10($sp)
    /* A132C 80192F2C 0800E003 */  jr         $ra
    /* A1330 80192F30 2800BD27 */   addiu     $sp, $sp, 0x28
endlabel func_80192D64
