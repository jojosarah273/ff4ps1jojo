nonmatching func_80187D1C, 0x90

glabel func_80187D1C
    /* 9611C 80187D1C 8C008287 */  lh         $v0, %gp_rel(D_8019ED88)($gp)
    /* 96120 80187D20 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 96124 80187D24 0A004014 */  bnez       $v0, .L80187D50
    /* 96128 80187D28 1000BFAF */   sw        $ra, 0x10($sp)
    /* 9612C 80187D2C 0D80023C */  lui        $v0, (0x800D2200 >> 16)
    /* 96130 80187D30 00224234 */  ori        $v0, $v0, (0x800D2200 & 0xFFFF)
    /* 96134 80187D34 FF1F0324 */  addiu      $v1, $zero, 0x1FFF
  .L80187D38:
    /* 96138 80187D38 000040A0 */  sb         $zero, 0x0($v0)
    /* 9613C 80187D3C FFFF6324 */  addiu      $v1, $v1, -0x1
    /* 96140 80187D40 FDFF6104 */  bgez       $v1, .L80187D38
    /* 96144 80187D44 01004224 */   addiu     $v0, $v0, 0x1
    /* 96148 80187D48 5A1F0608 */  j          .L80187D68
    /* 9614C 80187D4C 00000000 */   nop
  .L80187D50:
    /* 96150 80187D50 AE008287 */  lh         $v0, %gp_rel(D_8019EDAA)($gp)
    /* 96154 80187D54 00000000 */  nop
    /* 96158 80187D58 03004014 */  bnez       $v0, .L80187D68
    /* 9615C 80187D5C 00000000 */   nop
    /* 96160 80187D60 341F060C */  jal        func_80187CD0
    /* 96164 80187D64 01000424 */   addiu     $a0, $zero, 0x1
  .L80187D68:
    /* 96168 80187D68 1000BF8F */  lw         $ra, 0x10($sp)
    /* 9616C 80187D6C 01000224 */  addiu      $v0, $zero, 0x1
    /* 96170 80187D70 AE0082A7 */  sh         $v0, %gp_rel(D_8019EDAA)($gp)
    /* 96174 80187D74 900080A7 */  sh         $zero, %gp_rel(D_8019ED8C)($gp)
    /* 96178 80187D78 AC0080A7 */  sh         $zero, %gp_rel(D_8019EDA8)($gp)
    /* 9617C 80187D7C BC0080A7 */  sh         $zero, %gp_rel(D_8019EDB8)($gp)
    /* 96180 80187D80 C60080A7 */  sh         $zero, %gp_rel(D_8019EDC2)($gp)
    /* 96184 80187D84 8E0080A7 */  sh         $zero, %gp_rel(D_8019ED8A)($gp)
    /* 96188 80187D88 CC0080A7 */  sh         $zero, %gp_rel(D_8019EDC8)($gp)
    /* 9618C 80187D8C 9C0080A7 */  sh         $zero, %gp_rel(D_8019ED98)($gp)
    /* 96190 80187D90 C80080A7 */  sh         $zero, %gp_rel(D_8019EDC4)($gp)
    /* 96194 80187D94 A00080A7 */  sh         $zero, %gp_rel(D_8019ED9C)($gp)
    /* 96198 80187D98 100280A7 */  sh         $zero, %gp_rel(D_8019EF0C)($gp)
    /* 9619C 80187D9C F00180A7 */  sh         $zero, %gp_rel(D_8019EEEC)($gp)
    /* 961A0 80187DA0 940080A7 */  sh         $zero, %gp_rel(D_8019ED90)($gp)
    /* 961A4 80187DA4 0800E003 */  jr         $ra
    /* 961A8 80187DA8 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80187D1C
