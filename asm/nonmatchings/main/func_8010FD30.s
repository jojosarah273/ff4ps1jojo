nonmatching func_8010FD30, 0x1BC

glabel func_8010FD30
    /* 1E130 8010FD30 E0FFBD27 */  addiu      $sp, $sp, -0x20
    /* 1E134 8010FD34 1C00BFAF */  sw         $ra, 0x1C($sp)
    /* 1E138 8010FD38 1800B2AF */  sw         $s2, 0x18($sp)
    /* 1E13C 8010FD3C 1400B1AF */  sw         $s1, 0x14($sp)
    /* 1E140 8010FD40 0940040C */  jal        func_80110024
    /* 1E144 8010FD44 1000B0AF */   sw        $s0, 0x10($sp)
    /* 1E148 8010FD48 77DC030C */  jal        func_800F71DC
    /* 1E14C 8010FD4C 00020424 */   addiu     $a0, $zero, 0x200
    /* 1E150 8010FD50 5BE3030C */  jal        func_800F8D6C
    /* 1E154 8010FD54 89000424 */   addiu     $a0, $zero, 0x89
    /* 1E158 8010FD58 1A80123C */  lui        $s2, %hi(D_80198C0C)
    /* 1E15C 8010FD5C 1A80113C */  lui        $s1, %hi(D_80198C14)
  .L8010FD60:
    /* 1E160 8010FD60 DEF9030C */  jal        func_800FE778
    /* 1E164 8010FD64 0C8C5026 */   addiu     $s0, $s2, %lo(D_80198C0C)
    /* 1E168 8010FD68 1CFA030C */  jal        func_800FE870
    /* 1E16C 8010FD6C 00000000 */   nop
    /* 1E170 8010FD70 8CD9030C */  jal        func_800F6630
    /* 1E174 8010FD74 7A000424 */   addiu     $a0, $zero, 0x7A
    /* 1E178 8010FD78 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 1E17C 8010FD7C 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 1E180 8010FD80 00000000 */  nop
    /* 1E184 8010FD84 00006290 */  lbu        $v0, 0x0($v1)
    /* 1E188 8010FD88 06000424 */  addiu      $a0, $zero, 0x6
    /* 1E18C 8010FD8C C2100200 */  srl        $v0, $v0, 3
    /* 1E190 8010FD90 92D0030C */  jal        func_800F4248
    /* 1E194 8010FD94 000062A0 */   sb        $v0, 0x0($v1)
    /* 1E198 8010FD98 1A80033C */  lui        $v1, %hi(D_8019ED44)
    /* 1E19C 8010FD9C 44ED638C */  lw         $v1, %lo(D_8019ED44)($v1)
    /* 1E1A0 8010FDA0 1A80043C */  lui        $a0, %hi(D_8019ED58)
    /* 1E1A4 8010FDA4 58ED848C */  lw         $a0, %lo(D_8019ED58)($a0)
    /* 1E1A8 8010FDA8 00006294 */  lhu        $v0, 0x0($v1)
    /* 1E1AC 8010FDAC 00000000 */  nop
    /* 1E1B0 8010FDB0 000082A4 */  sh         $v0, 0x0($a0)
    /* 1E1B4 8010FDB4 1A80033C */  lui        $v1, %hi(D_8019ED58)
    /* 1E1B8 8010FDB8 58ED638C */  lw         $v1, %lo(D_8019ED58)($v1)
    /* 1E1BC 8010FDBC 00000000 */  nop
    /* 1E1C0 8010FDC0 00006294 */  lhu        $v0, 0x0($v1)
    /* 1E1C4 8010FDC4 1A80053C */  lui        $a1, %hi(D_8019ED40)
    /* 1E1C8 8010FDC8 40EDA58C */  lw         $a1, %lo(D_8019ED40)($a1)
    /* 1E1CC 8010FDCC 21105000 */  addu       $v0, $v0, $s0
    /* 1E1D0 8010FDD0 00004390 */  lbu        $v1, 0x0($v0)
    /* 1E1D4 8010FDD4 D40A0424 */  addiu      $a0, $zero, 0xAD4
    /* 1E1D8 8010FDD8 62E0030C */  jal        func_800F8188
    /* 1E1DC 8010FDDC 0000A3A0 */   sb        $v1, 0x0($a1)
    /* 1E1E0 8010FDE0 1A80033C */  lui        $v1, %hi(D_8019ED58)
    /* 1E1E4 8010FDE4 58ED638C */  lw         $v1, %lo(D_8019ED58)($v1)
    /* 1E1E8 8010FDE8 00000000 */  nop
    /* 1E1EC 8010FDEC 00006294 */  lhu        $v0, 0x0($v1)
    /* 1E1F0 8010FDF0 1A80053C */  lui        $a1, %hi(D_8019ED40)
    /* 1E1F4 8010FDF4 40EDA58C */  lw         $a1, %lo(D_8019ED40)($a1)
    /* 1E1F8 8010FDF8 21105000 */  addu       $v0, $v0, $s0
    /* 1E1FC 8010FDFC 01004390 */  lbu        $v1, 0x1($v0)
    /* 1E200 8010FE00 D50A0424 */  addiu      $a0, $zero, 0xAD5
    /* 1E204 8010FE04 62E0030C */  jal        func_800F8188
    /* 1E208 8010FE08 0000A3A0 */   sb        $v1, 0x0($a1)
    /* 1E20C 8010FE0C 1A80023C */  lui        $v0, %hi(D_8019ED58)
    /* 1E210 8010FE10 58ED428C */  lw         $v0, %lo(D_8019ED58)($v0)
    /* 1E214 8010FE14 148C3026 */  addiu      $s0, $s1, %lo(D_80198C14)
    /* 1E218 8010FE18 00004394 */  lhu        $v1, 0x0($v0)
    /* 1E21C 8010FE1C 1A80053C */  lui        $a1, %hi(D_8019ED40)
    /* 1E220 8010FE20 40EDA58C */  lw         $a1, %lo(D_8019ED40)($a1)
    /* 1E224 8010FE24 21187000 */  addu       $v1, $v1, $s0
    /* 1E228 8010FE28 00006290 */  lbu        $v0, 0x0($v1)
    /* 1E22C 8010FE2C D00A0424 */  addiu      $a0, $zero, 0xAD0
    /* 1E230 8010FE30 62E0030C */  jal        func_800F8188
    /* 1E234 8010FE34 0000A2A0 */   sb        $v0, 0x0($a1)
    /* 1E238 8010FE38 1A80033C */  lui        $v1, %hi(D_8019ED58)
    /* 1E23C 8010FE3C 58ED638C */  lw         $v1, %lo(D_8019ED58)($v1)
    /* 1E240 8010FE40 00000000 */  nop
    /* 1E244 8010FE44 00006294 */  lhu        $v0, 0x0($v1)
    /* 1E248 8010FE48 1A80053C */  lui        $a1, %hi(D_8019ED40)
    /* 1E24C 8010FE4C 40EDA58C */  lw         $a1, %lo(D_8019ED40)($a1)
    /* 1E250 8010FE50 21105000 */  addu       $v0, $v0, $s0
    /* 1E254 8010FE54 01004390 */  lbu        $v1, 0x1($v0)
    /* 1E258 8010FE58 D10A0424 */  addiu      $a0, $zero, 0xAD1
    /* 1E25C 8010FE5C 62E0030C */  jal        func_800F8188
    /* 1E260 8010FE60 0000A3A0 */   sb        $v1, 0x0($a1)
    /* 1E264 8010FE64 4B57040C */  jal        func_80115D2C
    /* 1E268 8010FE68 00000000 */   nop
    /* 1E26C 8010FE6C 1D41040C */  jal        func_80110474
    /* 1E270 8010FE70 00000000 */   nop
    /* 1E274 8010FE74 8CD9030C */  jal        func_800F6630
    /* 1E278 8010FE78 89000424 */   addiu     $a0, $zero, 0x89
    /* 1E27C 8010FE7C 92D0030C */  jal        func_800F4248
    /* 1E280 8010FE80 3F000424 */   addiu     $a0, $zero, 0x3F
    /* 1E284 8010FE84 48D0030C */  jal        func_800F4120
    /* 1E288 8010FE88 02020424 */   addiu     $a0, $zero, 0x202
    /* 1E28C 8010FE8C 05004014 */  bnez       $v0, .L8010FEA4
    /* 1E290 8010FE90 00000000 */   nop
    /* 1E294 8010FE94 53D9030C */  jal        func_800F654C
    /* 1E298 8010FE98 23000424 */   addiu     $a0, $zero, 0x23
    /* 1E29C 8010FE9C 01F6030C */  jal        func_800FD804
    /* 1E2A0 8010FEA0 00000000 */   nop
  .L8010FEA4:
    /* 1E2A4 8010FEA4 9CDC030C */  jal        func_800F7270
    /* 1E2A8 8010FEA8 89000424 */   addiu     $a0, $zero, 0x89
    /* 1E2AC 8010FEAC 92D7030C */  jal        func_800F5E48
    /* 1E2B0 8010FEB0 00000000 */   nop
    /* 1E2B4 8010FEB4 5BE3030C */  jal        func_800F8D6C
    /* 1E2B8 8010FEB8 89000424 */   addiu     $a0, $zero, 0x89
    /* 1E2BC 8010FEBC 19D7030C */  jal        func_800F5C64
    /* 1E2C0 8010FEC0 02020424 */   addiu     $a0, $zero, 0x202
    /* 1E2C4 8010FEC4 A6FF4014 */  bnez       $v0, .L8010FD60
    /* 1E2C8 8010FEC8 00000000 */   nop
    /* 1E2CC 8010FECC 977A040C */  jal        func_8011EA5C
    /* 1E2D0 8010FED0 00000000 */   nop
    /* 1E2D4 8010FED4 1C00BF8F */  lw         $ra, 0x1C($sp)
    /* 1E2D8 8010FED8 1800B28F */  lw         $s2, 0x18($sp)
    /* 1E2DC 8010FEDC 1400B18F */  lw         $s1, 0x14($sp)
    /* 1E2E0 8010FEE0 1000B08F */  lw         $s0, 0x10($sp)
    /* 1E2E4 8010FEE4 0800E003 */  jr         $ra
    /* 1E2E8 8010FEE8 2000BD27 */   addiu     $sp, $sp, 0x20
endlabel func_8010FD30
