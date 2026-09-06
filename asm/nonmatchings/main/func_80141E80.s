nonmatching func_80141E80, 0xD4

glabel func_80141E80
    /* 50280 80141E80 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 50284 80141E84 1000BFAF */  sw         $ra, 0x10($sp)
    /* 50288 80141E88 CCE4030C */  jal        func_800F9330
    /* 5028C 80141E8C 00000000 */   nop
    /* 50290 80141E90 59D9030C */  jal        func_800F6564
    /* 50294 80141E94 21F30434 */   ori       $a0, $zero, 0xF321
    /* 50298 80141E98 20D5030C */  jal        func_800F5480
    /* 5029C 80141E9C 00000000 */   nop
    /* 502A0 80141EA0 16E0030C */  jal        func_800F8058
    /* 502A4 80141EA4 08000424 */   addiu     $a0, $zero, 0x8
    /* 502A8 80141EA8 62E0030C */  jal        func_800F8188
    /* 502AC 80141EAC 21F30434 */   ori       $a0, $zero, 0xF321
    /* 502B0 80141EB0 F5D4030C */  jal        func_800F53D4
    /* 502B4 80141EB4 00000000 */   nop
    /* 502B8 80141EB8 03004010 */  beqz       $v0, .L80141EC8
    /* 502BC 80141EBC 00000000 */   nop
    /* 502C0 80141EC0 90D8030C */  jal        func_800F6240
    /* 502C4 80141EC4 2BF30434 */   ori       $a0, $zero, 0xF32B
  .L80141EC8:
    /* 502C8 80141EC8 59D9030C */  jal        func_800F6564
    /* 502CC 80141ECC 2BF30434 */   ori       $a0, $zero, 0xF32B
    /* 502D0 80141ED0 0DD9030C */  jal        func_800F6434
    /* 502D4 80141ED4 02000424 */   addiu     $a0, $zero, 0x2
    /* 502D8 80141ED8 18004014 */  bnez       $v0, .L80141F3C
    /* 502DC 80141EDC 00000000 */   nop
    /* 502E0 80141EE0 59D9030C */  jal        func_800F6564
    /* 502E4 80141EE4 29F30434 */   ori       $a0, $zero, 0xF329
    /* 502E8 80141EE8 5DD5030C */  jal        func_800F5574
    /* 502EC 80141EEC FF000424 */   addiu     $a0, $zero, 0xFF
    /* 502F0 80141EF0 F5D4030C */  jal        func_800F53D4
    /* 502F4 80141EF4 00000000 */   nop
    /* 502F8 80141EF8 10004014 */  bnez       $v0, .L80141F3C
    /* 502FC 80141EFC 00000000 */   nop
    /* 50300 80141F00 59D9030C */  jal        func_800F6564
    /* 50304 80141F04 2BF30434 */   ori       $a0, $zero, 0xF32B
    /* 50308 80141F08 0D00043C */  lui        $a0, (0xDFD5C >> 16)
    /* 5030C 80141F0C 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 50310 80141F10 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 50314 80141F14 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 50318 80141F18 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 5031C 80141F1C 00004394 */  lhu        $v1, 0x0($v0)
    /* 50320 80141F20 5CFD8434 */  ori        $a0, $a0, (0xDFD5C & 0xFFFF)
    /* 50324 80141F24 1ADB030C */  jal        func_800F6C68
    /* 50328 80141F28 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 5032C 80141F2C 62E0030C */  jal        func_800F8188
    /* 50330 80141F30 29F30434 */   ori       $a0, $zero, 0xF329
    /* 50334 80141F34 90D8030C */  jal        func_800F6240
    /* 50338 80141F38 2BF30434 */   ori       $a0, $zero, 0xF32B
  .L80141F3C:
    /* 5033C 80141F3C 68E5030C */  jal        func_800F95A0
    /* 50340 80141F40 00000000 */   nop
    /* 50344 80141F44 1000BF8F */  lw         $ra, 0x10($sp)
    /* 50348 80141F48 00000000 */  nop
    /* 5034C 80141F4C 0800E003 */  jr         $ra
    /* 50350 80141F50 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80141E80
