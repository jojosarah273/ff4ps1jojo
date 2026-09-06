nonmatching func_80192C8C, 0xD8

glabel func_80192C8C
    /* A108C 80192C8C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* A1090 80192C90 1000B0AF */  sw         $s0, 0x10($sp)
    /* A1094 80192C94 1A80103C */  lui        $s0, %hi(D_8019BE6C)
    /* A1098 80192C98 6CBE1026 */  addiu      $s0, $s0, %lo(D_8019BE6C)
    /* A109C 80192C9C 1400BFAF */  sw         $ra, 0x14($sp)
    /* A10A0 80192CA0 00000296 */  lhu        $v0, 0x0($s0)
    /* A10A4 80192CA4 00000000 */  nop
    /* A10A8 80192CA8 2A004014 */  bnez       $v0, .L80192D54
    /* A10AC 80192CAC 21100000 */   addu      $v0, $zero, $zero
    /* A10B0 80192CB0 1A80033C */  lui        $v1, %hi(D_8019CEF8)
    /* A10B4 80192CB4 F8CE638C */  lw         $v1, %lo(D_8019CEF8)($v1)
    /* A10B8 80192CB8 1A80023C */  lui        $v0, %hi(D_8019CEFC)
    /* A10BC 80192CBC FCCE428C */  lw         $v0, %lo(D_8019CEFC)($v0)
    /* A10C0 80192CC0 3333053C */  lui        $a1, (0x33333333 >> 16)
    /* A10C4 80192CC4 000040A4 */  sh         $zero, 0x0($v0)
    /* A10C8 80192CC8 00004294 */  lhu        $v0, 0x0($v0)
    /* A10CC 80192CCC 3333A534 */  ori        $a1, $a1, (0x33333333 & 0xFFFF)
    /* A10D0 80192CD0 000062A4 */  sh         $v0, 0x0($v1)
    /* A10D4 80192CD4 1A80023C */  lui        $v0, %hi(D_8019CF00)
    /* A10D8 80192CD8 00CF428C */  lw         $v0, %lo(D_8019CF00)($v0)
    /* A10DC 80192CDC 21200002 */  addu       $a0, $s0, $zero
    /* A10E0 80192CE0 000045AC */  sw         $a1, 0x0($v0)
    /* A10E4 80192CE4 654C060C */  jal        func_80193194
    /* A10E8 80192CE8 1A040524 */   addiu     $a1, $zero, 0x41A
    /* A10EC 80192CEC 6E4C060C */  jal        func_801931B8
    /* A10F0 80192CF0 38000426 */   addiu     $a0, $s0, 0x38
    /* A10F4 80192CF4 03004010 */  beqz       $v0, .L80192D04
    /* A10F8 80192CF8 00000000 */   nop
    /* A10FC 80192CFC 594B060C */  jal        func_80192D64
    /* A1100 80192D00 00000000 */   nop
  .L80192D04:
    /* A1104 80192D04 1A80103C */  lui        $s0, %hi(D_8019BEA8)
    /* A1108 80192D08 A8BE1026 */  addiu      $s0, $s0, %lo(D_8019BEA8)
    /* A110C 80192D0C FCFF0426 */  addiu      $a0, $s0, -0x4
    /* A1110 80192D10 DC0F0226 */  addiu      $v0, $s0, 0xFDC
    /* A1114 80192D14 B65D060C */  jal        func_801976D8
    /* A1118 80192D18 000002AE */   sw        $v0, 0x0($s0)
    /* A111C 80192D1C 01000224 */  addiu      $v0, $zero, 0x1
    /* A1120 80192D20 724C060C */  jal        func_801931C8
    /* A1124 80192D24 C4FF02A6 */   sh        $v0, -0x3C($s0)
    /* A1128 80192D28 1A80033C */  lui        $v1, %hi(D_8019CEF4)
    /* A112C 80192D2C F4CE638C */  lw         $v1, %lo(D_8019CEF4)($v1)
    /* A1130 80192D30 BA4C060C */  jal        func_801932E8
    /* A1134 80192D34 140062AC */   sw        $v0, 0x14($v1)
    /* A1138 80192D38 1A80043C */  lui        $a0, %hi(D_8019CEF4)
    /* A113C 80192D3C F4CE848C */  lw         $a0, %lo(D_8019CEF4)($a0)
    /* A1140 80192D40 8C5D060C */  jal        func_80197630
    /* A1144 80192D44 040082AC */   sw        $v0, 0x4($a0)
    /* A1148 80192D48 BE5D060C */  jal        func_801976F8
    /* A114C 80192D4C C4FF1026 */   addiu     $s0, $s0, -0x3C
    /* A1150 80192D50 21100002 */  addu       $v0, $s0, $zero
  .L80192D54:
    /* A1154 80192D54 1400BF8F */  lw         $ra, 0x14($sp)
    /* A1158 80192D58 1000B08F */  lw         $s0, 0x10($sp)
    /* A115C 80192D5C 0800E003 */  jr         $ra
    /* A1160 80192D60 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80192C8C
