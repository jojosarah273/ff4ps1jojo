nonmatching func_8015FD14, 0x184

glabel func_8015FD14
    /* 6E114 8015FD14 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 6E118 8015FD18 1000BFAF */  sw         $ra, 0x10($sp)
    /* 6E11C 8015FD1C 53D9030C */  jal        func_800F654C
    /* 6E120 8015FD20 02000424 */   addiu     $a0, $zero, 0x2
    /* 6E124 8015FD24 62E0030C */  jal        func_800F8188
    /* 6E128 8015FD28 E6380424 */   addiu     $a0, $zero, 0x38E6
    /* 6E12C 8015FD2C 59D9030C */  jal        func_800F6564
    /* 6E130 8015FD30 03270424 */   addiu     $a0, $zero, 0x2703
    /* 6E134 8015FD34 0DD9030C */  jal        func_800F6434
    /* 6E138 8015FD38 80800434 */   ori       $a0, $zero, 0x8080
    /* 6E13C 8015FD3C 4A004014 */  bnez       $v0, .L8015FE68
    /* 6E140 8015FD40 00000000 */   nop
    /* 6E144 8015FD44 DDE3030C */  jal        func_800F8F74
    /* 6E148 8015FD48 03270424 */   addiu     $a0, $zero, 0x2703
    /* 6E14C 8015FD4C DDE3030C */  jal        func_800F8F74
    /* 6E150 8015FD50 04270424 */   addiu     $a0, $zero, 0x2704
    /* 6E154 8015FD54 DDE3030C */  jal        func_800F8F74
    /* 6E158 8015FD58 05270424 */   addiu     $a0, $zero, 0x2705
    /* 6E15C 8015FD5C DDE3030C */  jal        func_800F8F74
    /* 6E160 8015FD60 06270424 */   addiu     $a0, $zero, 0x2706
    /* 6E164 8015FD64 EEE3030C */  jal        func_800F8FB8
    /* 6E168 8015FD68 D6000424 */   addiu     $a0, $zero, 0xD6
    /* 6E16C 8015FD6C 8CD9030C */  jal        func_800F6630
    /* 6E170 8015FD70 CF000424 */   addiu     $a0, $zero, 0xCF
    /* 6E174 8015FD74 DD68050C */  jal        func_8015A374
    /* 6E178 8015FD78 00000000 */   nop
    /* 6E17C 8015FD7C 53D9030C */  jal        func_800F654C
    /* 6E180 8015FD80 03000424 */   addiu     $a0, $zero, 0x3
    /* 6E184 8015FD84 DD4C050C */  jal        func_80153374
    /* 6E188 8015FD88 00000000 */   nop
    /* 6E18C 8015FD8C 3BE4030C */  jal        func_800F90EC
    /* 6E190 8015FD90 062A0424 */   addiu     $a0, $zero, 0x2A06
    /* 6E194 8015FD94 59D9030C */  jal        func_800F6564
    /* 6E198 8015FD98 2F350424 */   addiu     $a0, $zero, 0x352F
    /* 6E19C 8015FD9C 50D4030C */  jal        func_800F5140
    /* 6E1A0 8015FDA0 00000000 */   nop
    /* 6E1A4 8015FDA4 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 6E1A8 8015FDA8 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 6E1AC 8015FDAC 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 6E1B0 8015FDB0 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 6E1B4 8015FDB4 00004394 */  lhu        $v1, 0x0($v0)
    /* 6E1B8 8015FDB8 40000424 */  addiu      $a0, $zero, 0x40
    /* 6E1BC 8015FDBC 53D9030C */  jal        func_800F654C
    /* 6E1C0 8015FDC0 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 6E1C4 8015FDC4 DAE1030C */  jal        func_800F8768
    /* 6E1C8 8015FDC8 EB290424 */   addiu     $a0, $zero, 0x29EB
    /* 6E1CC 8015FDCC 8CD9030C */  jal        func_800F6630
    /* 6E1D0 8015FDD0 CF000424 */   addiu     $a0, $zero, 0xCF
    /* 6E1D4 8015FDD4 5DD5030C */  jal        func_800F5574
    /* 6E1D8 8015FDD8 05000424 */   addiu     $a0, $zero, 0x5
    /* 6E1DC 8015FDDC F0D4030C */  jal        func_800F53C0
    /* 6E1E0 8015FDE0 00000000 */   nop
    /* 6E1E4 8015FDE4 20004010 */  beqz       $v0, .L8015FE68
    /* 6E1E8 8015FDE8 00000000 */   nop
    /* 6E1EC 8015FDEC 20D5030C */  jal        func_800F5480
    /* 6E1F0 8015FDF0 00000000 */   nop
    /* 6E1F4 8015FDF4 16E0030C */  jal        func_800F8058
    /* 6E1F8 8015FDF8 05000424 */   addiu     $a0, $zero, 0x5
    /* 6E1FC 8015FDFC 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 6E200 8015FE00 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 6E204 8015FE04 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 6E208 8015FE08 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 6E20C 8015FE0C 00004394 */  lhu        $v1, 0x0($v0)
    /* 6E210 8015FE10 BD290424 */  addiu      $a0, $zero, 0x29BD
    /* 6E214 8015FE14 DADA030C */  jal        func_800F6B68
    /* 6E218 8015FE18 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 6E21C 8015FE1C DAE1030C */  jal        func_800F8768
    /* 6E220 8015FE20 B5290424 */   addiu     $a0, $zero, 0x29B5
    /* 6E224 8015FE24 1A80033C */  lui        $v1, %hi(D_8019ED44)
    /* 6E228 8015FE28 44ED638C */  lw         $v1, %lo(D_8019ED44)($v1)
    /* 6E22C 8015FE2C 1A80043C */  lui        $a0, %hi(D_8019ED54)
    /* 6E230 8015FE30 54ED848C */  lw         $a0, %lo(D_8019ED54)($a0)
    /* 6E234 8015FE34 00006294 */  lhu        $v0, 0x0($v1)
    /* 6E238 8015FE38 00000000 */  nop
    /* 6E23C 8015FE3C 000082A4 */  sh         $v0, 0x0($a0)
    /* 6E240 8015FE40 1A80033C */  lui        $v1, %hi(D_8019ED54)
    /* 6E244 8015FE44 54ED638C */  lw         $v1, %lo(D_8019ED54)($v1)
    /* 6E248 8015FE48 00000000 */  nop
    /* 6E24C 8015FE4C 00006494 */  lhu        $a0, 0x0($v1)
    /* 6E250 8015FE50 C1CE030C */  jal        func_800F3B04
    /* 6E254 8015FE54 CA298424 */   addiu     $a0, $a0, 0x29CA
    /* 6E258 8015FE58 12D8030C */  jal        func_800F6048
    /* 6E25C 8015FE5C 21204000 */   addu      $a0, $v0, $zero
    /* 6E260 8015FE60 90D8030C */  jal        func_800F6240
    /* 6E264 8015FE64 CD290424 */   addiu     $a0, $zero, 0x29CD
  .L8015FE68:
    /* 6E268 8015FE68 59D9030C */  jal        func_800F6564
    /* 6E26C 8015FE6C 09270424 */   addiu     $a0, $zero, 0x2709
    /* 6E270 8015FE70 62E0030C */  jal        func_800F8188
    /* 6E274 8015FE74 07270424 */   addiu     $a0, $zero, 0x2707
    /* 6E278 8015FE78 59D9030C */  jal        func_800F6564
    /* 6E27C 8015FE7C 0A270424 */   addiu     $a0, $zero, 0x270A
    /* 6E280 8015FE80 62E0030C */  jal        func_800F8188
    /* 6E284 8015FE84 08270424 */   addiu     $a0, $zero, 0x2708
    /* 6E288 8015FE88 1000BF8F */  lw         $ra, 0x10($sp)
    /* 6E28C 8015FE8C 00000000 */  nop
    /* 6E290 8015FE90 0800E003 */  jr         $ra
    /* 6E294 8015FE94 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8015FD14
