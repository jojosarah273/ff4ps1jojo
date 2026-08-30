nonmatching func_80103DD8, 0xD4

glabel func_80103DD8
    /* 121D8 80103DD8 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 121DC 80103DDC 1000BFAF */  sw         $ra, 0x10($sp)
    /* 121E0 80103DE0 77DC030C */  jal        func_800F71DC
    /* 121E4 80103DE4 98FF0434 */   ori       $a0, $zero, 0xFF98
    /* 121E8 80103DE8 5BE3030C */  jal        func_800F8D6C
    /* 121EC 80103DEC 5C000424 */   addiu     $a0, $zero, 0x5C
    /* 121F0 80103DF0 53D9030C */  jal        func_800F654C
    /* 121F4 80103DF4 DF000424 */   addiu     $a0, $zero, 0xDF
    /* 121F8 80103DF8 93E0030C */  jal        func_800F824C
    /* 121FC 80103DFC 79000424 */   addiu     $a0, $zero, 0x79
    /* 12200 80103E00 BE010224 */  addiu      $v0, $zero, 0x1BE
    /* 12204 80103E04 1A80013C */  lui        $at, %hi(D_8019EE28)
    /* 12208 80103E08 28EE22AC */  sw         $v0, %lo(D_8019EE28)($at)
  .L80103E0C:
    /* 1220C 80103E0C ECF9030C */  jal        func_800FE7B0
    /* 12210 80103E10 00000000 */   nop
    /* 12214 80103E14 DDE3030C */  jal        func_800F8F74
    /* 12218 80103E18 0C420424 */   addiu     $a0, $zero, 0x420C
    /* 1221C 80103E1C 8CD9030C */  jal        func_800F6630
    /* 12220 80103E20 79000424 */   addiu     $a0, $zero, 0x79
    /* 12224 80103E24 93E0030C */  jal        func_800F824C
    /* 12228 80103E28 6E000424 */   addiu     $a0, $zero, 0x6E
    /* 1222C 80103E2C EEE3030C */  jal        func_800F8FB8
    /* 12230 80103E30 6F000424 */   addiu     $a0, $zero, 0x6F
    /* 12234 80103E34 0FCF030C */  jal        func_800F3C3C
    /* 12238 80103E38 6E000424 */   addiu     $a0, $zero, 0x6E
    /* 1223C 80103E3C CAD3030C */  jal        func_800F4F28
    /* 12240 80103E40 21204000 */   addu      $a0, $v0, $zero
    /* 12244 80103E44 D3D3030C */  jal        func_800F4F4C
    /* 12248 80103E48 00000000 */   nop
    /* 1224C 80103E4C 0FCF030C */  jal        func_800F3C3C
    /* 12250 80103E50 6F000424 */   addiu     $a0, $zero, 0x6F
    /* 12254 80103E54 90DE030C */  jal        func_800F7A40
    /* 12258 80103E58 21204000 */   addu      $a0, $v0, $zero
    /* 1225C 80103E5C B9F9030C */  jal        func_800FE6E4
    /* 12260 80103E60 00000000 */   nop
    /* 12264 80103E64 C00F040C */  jal        func_80103F00
    /* 12268 80103E68 00000000 */   nop
    /* 1226C 80103E6C 2310040C */  jal        func_8010408C
    /* 12270 80103E70 00000000 */   nop
    /* 12274 80103E74 68D7030C */  jal        func_800F5DA0
    /* 12278 80103E78 79000424 */   addiu     $a0, $zero, 0x79
    /* 1227C 80103E7C 8CD9030C */  jal        func_800F6630
    /* 12280 80103E80 79000424 */   addiu     $a0, $zero, 0x79
    /* 12284 80103E84 5DD5030C */  jal        func_800F5574
    /* 12288 80103E88 FF000424 */   addiu     $a0, $zero, 0xFF
    /* 1228C 80103E8C F5D4030C */  jal        func_800F53D4
    /* 12290 80103E90 00000000 */   nop
    /* 12294 80103E94 DDFF4010 */  beqz       $v0, .L80103E0C
    /* 12298 80103E98 00000000 */   nop
    /* 1229C 80103E9C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 122A0 80103EA0 00000000 */  nop
    /* 122A4 80103EA4 0800E003 */  jr         $ra
    /* 122A8 80103EA8 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80103DD8
