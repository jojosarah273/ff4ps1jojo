nonmatching func_8012CE54, 0x54

glabel func_8012CE54
    /* 3B254 8012CE54 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 3B258 8012CE58 1000BFAF */  sw         $ra, 0x10($sp)
    /* 3B25C 8012CE5C 59D9030C */  jal        func_800F6564
    /* 3B260 8012CE60 041A0424 */   addiu     $a0, $zero, 0x1A04
    /* 3B264 8012CE64 92D0030C */  jal        func_800F4248
    /* 3B268 8012CE68 40000424 */   addiu     $a0, $zero, 0x40
    /* 3B26C 8012CE6C 48D0030C */  jal        func_800F4120
    /* 3B270 8012CE70 02000424 */   addiu     $a0, $zero, 0x2
    /* 3B274 8012CE74 05004010 */  beqz       $v0, .L8012CE8C
    /* 3B278 8012CE78 00000000 */   nop
    /* 3B27C 8012CE7C 13B3040C */  jal        func_8012CC4C
    /* 3B280 8012CE80 00000000 */   nop
    /* 3B284 8012CE84 A6B30408 */  j          .L8012CE98
    /* 3B288 8012CE88 02000224 */   addiu     $v0, $zero, 0x2
  .L8012CE8C:
    /* 3B28C 8012CE8C AAB3040C */  jal        func_8012CEA8
    /* 3B290 8012CE90 00000000 */   nop
    /* 3B294 8012CE94 01000224 */  addiu      $v0, $zero, 0x1
  .L8012CE98:
    /* 3B298 8012CE98 1000BF8F */  lw         $ra, 0x10($sp)
    /* 3B29C 8012CE9C 00000000 */  nop
    /* 3B2A0 8012CEA0 0800E003 */  jr         $ra
    /* 3B2A4 8012CEA4 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8012CE54
