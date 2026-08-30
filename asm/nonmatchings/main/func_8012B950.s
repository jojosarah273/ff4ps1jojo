nonmatching func_8012B950, 0xC4

glabel func_8012B950
    /* 39D50 8012B950 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 39D54 8012B954 1000BFAF */  sw         $ra, 0x10($sp)
  .L8012B958:
    /* 39D58 8012B958 59D9030C */  jal        func_800F6564
    /* 39D5C 8012B95C C31B0424 */   addiu     $a0, $zero, 0x1BC3
    /* 39D60 8012B960 AB93040C */  jal        func_80124EAC
    /* 39D64 8012B964 00000000 */   nop
    /* 39D68 8012B968 1A80023C */  lui        $v0, %hi(D_8019ED54)
    /* 39D6C 8012B96C 54ED428C */  lw         $v0, %lo(D_8019ED54)($v0)
    /* 39D70 8012B970 1A80053C */  lui        $a1, %hi(D_8019ED58)
    /* 39D74 8012B974 58EDA58C */  lw         $a1, %lo(D_8019ED58)($a1)
    /* 39D78 8012B978 00004394 */  lhu        $v1, 0x0($v0)
    /* 39D7C 8012B97C C11B0424 */  addiu      $a0, $zero, 0x1BC1
    /* 39D80 8012B980 59D9030C */  jal        func_800F6564
    /* 39D84 8012B984 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 39D88 8012B988 50D4030C */  jal        func_800F5140
    /* 39D8C 8012B98C 00000000 */   nop
    /* 39D90 8012B990 3489040C */  jal        func_801224D0
    /* 39D94 8012B994 00000000 */   nop
    /* 39D98 8012B998 91E5030C */  jal        func_800F9644
    /* 39D9C 8012B99C 20000424 */   addiu     $a0, $zero, 0x20
    /* 39DA0 8012B9A0 1E00043C */  lui        $a0, (0x1EFD7D >> 16)
    /* 39DA4 8012B9A4 3DDB030C */  jal        func_800F6CF4
    /* 39DA8 8012B9A8 7DFD8434 */   ori       $a0, $a0, (0x1EFD7D & 0xFFFF)
    /* 39DAC 8012B9AC 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 39DB0 8012B9B0 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 39DB4 8012B9B4 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 39DB8 8012B9B8 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 39DBC 8012B9BC 00004394 */  lhu        $v1, 0x0($v0)
    /* 39DC0 8012B9C0 20000424 */  addiu      $a0, $zero, 0x20
    /* 39DC4 8012B9C4 98E5030C */  jal        func_800F9660
    /* 39DC8 8012B9C8 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 39DCC 8012B9CC DAAE040C */  jal        func_8012BB68
    /* 39DD0 8012B9D0 00000000 */   nop
    /* 39DD4 8012B9D4 90D8030C */  jal        func_800F6240
    /* 39DD8 8012B9D8 C11B0424 */   addiu     $a0, $zero, 0x1BC1
    /* 39DDC 8012B9DC 90D8030C */  jal        func_800F6240
    /* 39DE0 8012B9E0 C31B0424 */   addiu     $a0, $zero, 0x1BC3
    /* 39DE4 8012B9E4 59D9030C */  jal        func_800F6564
    /* 39DE8 8012B9E8 C31B0424 */   addiu     $a0, $zero, 0x1BC3
    /* 39DEC 8012B9EC 5DD5030C */  jal        func_800F5574
    /* 39DF0 8012B9F0 05000424 */   addiu     $a0, $zero, 0x5
    /* 39DF4 8012B9F4 F5D4030C */  jal        func_800F53D4
    /* 39DF8 8012B9F8 00000000 */   nop
    /* 39DFC 8012B9FC D6FF4010 */  beqz       $v0, .L8012B958
    /* 39E00 8012BA00 00000000 */   nop
    /* 39E04 8012BA04 1000BF8F */  lw         $ra, 0x10($sp)
    /* 39E08 8012BA08 00000000 */  nop
    /* 39E0C 8012BA0C 0800E003 */  jr         $ra
    /* 39E10 8012BA10 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8012B950
