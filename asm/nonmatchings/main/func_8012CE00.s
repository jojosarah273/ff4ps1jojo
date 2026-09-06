nonmatching func_8012CE00, 0x54

glabel func_8012CE00
    /* 3B200 8012CE00 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 3B204 8012CE04 1000BFAF */  sw         $ra, 0x10($sp)
    /* 3B208 8012CE08 59D9030C */  jal        func_800F6564
    /* 3B20C 8012CE0C 041A0424 */   addiu     $a0, $zero, 0x1A04
    /* 3B210 8012CE10 92D0030C */  jal        func_800F4248
    /* 3B214 8012CE14 20000424 */   addiu     $a0, $zero, 0x20
    /* 3B218 8012CE18 48D0030C */  jal        func_800F4120
    /* 3B21C 8012CE1C 02000424 */   addiu     $a0, $zero, 0x2
    /* 3B220 8012CE20 05004010 */  beqz       $v0, .L8012CE38
    /* 3B224 8012CE24 00000000 */   nop
    /* 3B228 8012CE28 13B3040C */  jal        func_8012CC4C
    /* 3B22C 8012CE2C 00000000 */   nop
    /* 3B230 8012CE30 91B30408 */  j          .L8012CE44
    /* 3B234 8012CE34 02000224 */   addiu     $v0, $zero, 0x2
  .L8012CE38:
    /* 3B238 8012CE38 AAB3040C */  jal        func_8012CEA8
    /* 3B23C 8012CE3C 00000000 */   nop
    /* 3B240 8012CE40 01000224 */  addiu      $v0, $zero, 0x1
  .L8012CE44:
    /* 3B244 8012CE44 1000BF8F */  lw         $ra, 0x10($sp)
    /* 3B248 8012CE48 00000000 */  nop
    /* 3B24C 8012CE4C 0800E003 */  jr         $ra
    /* 3B250 8012CE50 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8012CE00
