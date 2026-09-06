nonmatching func_8015084C, 0x1E4

glabel func_8015084C
    /* 5EC4C 8015084C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 5EC50 80150850 01000224 */  addiu      $v0, $zero, 0x1
    /* 5EC54 80150854 1400BFAF */  sw         $ra, 0x14($sp)
    /* 5EC58 80150858 1000B0AF */  sw         $s0, 0x10($sp)
    /* 5EC5C 8015085C 1A80013C */  lui        $at, %hi(D_8019EE54)
    /* 5EC60 80150860 54EE22A4 */  sh         $v0, %lo(D_8019EE54)($at)
    /* 5EC64 80150864 E550060C */  jal        func_80194394
    /* 5EC68 80150868 21200000 */   addu      $a0, $zero, $zero
    /* 5EC6C 8015086C 3A4A060C */  jal        func_801928E8
    /* 5EC70 80150870 21200000 */   addu      $a0, $zero, $zero
    /* 5EC74 80150874 BF50060C */  jal        func_801942FC
    /* 5EC78 80150878 21200000 */   addu      $a0, $zero, $zero
    /* 5EC7C 8015087C AF41050C */  jal        func_801506BC
    /* 5EC80 80150880 00000000 */   nop
    /* 5EC84 80150884 08000424 */  addiu      $a0, $zero, 0x8
    /* 5EC88 80150888 1C80023C */  lui        $v0, %hi(D_801B9B10)
    /* 5EC8C 8015088C 109B4224 */  addiu      $v0, $v0, %lo(D_801B9B10)
    /* 5EC90 80150890 1A80033C */  lui        $v1, %hi(D_801A4E00)
    /* 5EC94 80150894 004E6324 */  addiu      $v1, $v1, %lo(D_801A4E00)
    /* 5EC98 80150898 470D0524 */  addiu      $a1, $zero, 0xD47
  .L8015089C:
    /* 5EC9C 8015089C 100064A4 */  sh         $a0, 0x10($v1)
    /* 5ECA0 801508A0 120064A4 */  sh         $a0, 0x12($v1)
    /* 5ECA4 801508A4 100044A4 */  sh         $a0, 0x10($v0)
    /* 5ECA8 801508A8 120044A4 */  sh         $a0, 0x12($v0)
    /* 5ECAC 801508AC 14004224 */  addiu      $v0, $v0, 0x14
    /* 5ECB0 801508B0 FFFFA524 */  addiu      $a1, $a1, -0x1
    /* 5ECB4 801508B4 F9FFA104 */  bgez       $a1, .L8015089C
    /* 5ECB8 801508B8 14006324 */   addiu     $v1, $v1, 0x14
    /* 5ECBC 801508BC 1A80033C */  lui        $v1, %hi(D_8019ED4C)
    /* 5ECC0 801508C0 4CED638C */  lw         $v1, %lo(D_8019ED4C)($v1)
    /* 5ECC4 801508C4 1A80043C */  lui        $a0, %hi(D_8019ED68)
    /* 5ECC8 801508C8 68ED848C */  lw         $a0, %lo(D_8019ED68)($a0)
    /* 5ECCC 801508CC 0D80103C */  lui        $s0, %hi(D_800D0000)
    /* 5ECD0 801508D0 1A80013C */  lui        $at, %hi(D_8019EEB0)
    /* 5ECD4 801508D4 B0EE20A4 */  sh         $zero, %lo(D_8019EEB0)($at)
    /* 5ECD8 801508D8 1A80013C */  lui        $at, %hi(D_8019EDC6)
    /* 5ECDC 801508DC C6ED20A4 */  sh         $zero, %lo(D_8019EDC6)($at)
    /* 5ECE0 801508E0 00006294 */  lhu        $v0, 0x0($v1)
    /* 5ECE4 801508E4 00008590 */  lbu        $a1, 0x0($a0)
    /* 5ECE8 801508E8 21105000 */  addu       $v0, $v0, $s0
    /* 5ECEC 801508EC 000045A0 */  sb         $a1, %lo(D_800D0000)($v0)
    /* 5ECF0 801508F0 1A80033C */  lui        $v1, %hi(D_8019ED4C)
    /* 5ECF4 801508F4 4CED638C */  lw         $v1, %lo(D_8019ED4C)($v1)
    /* 5ECF8 801508F8 00000000 */  nop
    /* 5ECFC 801508FC 00006294 */  lhu        $v0, 0x0($v1)
    /* 5ED00 80150900 30000424 */  addiu      $a0, $zero, 0x30
    /* 5ED04 80150904 FFFF4224 */  addiu      $v0, $v0, -0x1
    /* 5ED08 80150908 91E5030C */  jal        func_800F9644
    /* 5ED0C 8015090C 000062A4 */   sh        $v0, 0x0($v1)
    /* 5ED10 80150910 9BE4030C */  jal        func_800F926C
    /* 5ED14 80150914 00000000 */   nop
    /* 5ED18 80150918 A6E4030C */  jal        func_800F9298
    /* 5ED1C 8015091C 00000000 */   nop
    /* 5ED20 80150920 8BE4030C */  jal        func_800F922C
    /* 5ED24 80150924 00000000 */   nop
    /* 5ED28 80150928 CCE4030C */  jal        func_800F9330
    /* 5ED2C 8015092C 00000000 */   nop
    /* 5ED30 80150930 E7E4030C */  jal        func_800F939C
    /* 5ED34 80150934 00000000 */   nop
    /* 5ED38 80150938 56D9030C */  jal        func_800F6558
    /* 5ED3C 8015093C 21200000 */   addu      $a0, $zero, $zero
    /* 5ED40 80150940 98E5030C */  jal        func_800F9660
    /* 5ED44 80150944 20000424 */   addiu     $a0, $zero, 0x20
    /* 5ED48 80150948 91E5030C */  jal        func_800F9644
    /* 5ED4C 8015094C 10000424 */   addiu     $a0, $zero, 0x10
    /* 5ED50 80150950 1643050C */  jal        func_80150C58
    /* 5ED54 80150954 00000000 */   nop
    /* 5ED58 80150958 53D9030C */  jal        func_800F654C
    /* 5ED5C 8015095C 21200000 */   addu      $a0, $zero, $zero
    /* 5ED60 80150960 7AE0030C */  jal        func_800F81E8
    /* 5ED64 80150964 00210424 */   addiu     $a0, $zero, 0x2100
    /* 5ED68 80150968 7AE0030C */  jal        func_800F81E8
    /* 5ED6C 8015096C 0C420424 */   addiu     $a0, $zero, 0x420C
    /* 5ED70 80150970 7AE0030C */  jal        func_800F81E8
    /* 5ED74 80150974 0B420424 */   addiu     $a0, $zero, 0x420B
    /* 5ED78 80150978 7AE0030C */  jal        func_800F81E8
    /* 5ED7C 8015097C 00420424 */   addiu     $a0, $zero, 0x4200
    /* 5ED80 80150980 91E5030C */  jal        func_800F9644
    /* 5ED84 80150984 30000424 */   addiu     $a0, $zero, 0x30
    /* 5ED88 80150988 83E5030C */  jal        func_800F960C
    /* 5ED8C 8015098C 00000000 */   nop
    /* 5ED90 80150990 68E5030C */  jal        func_800F95A0
    /* 5ED94 80150994 00000000 */   nop
    /* 5ED98 80150998 04E5030C */  jal        func_800F9410
    /* 5ED9C 8015099C 00000000 */   nop
    /* 5EDA0 801509A0 2EE5030C */  jal        func_800F94B8
    /* 5EDA4 801509A4 00000000 */   nop
    /* 5EDA8 801509A8 12E5030C */  jal        func_800F9448
    /* 5EDAC 801509AC 00000000 */   nop
    /* 5EDB0 801509B0 1A80043C */  lui        $a0, %hi(D_8019ED4C)
    /* 5EDB4 801509B4 4CED848C */  lw         $a0, %lo(D_8019ED4C)($a0)
    /* 5EDB8 801509B8 00000000 */  nop
    /* 5EDBC 801509BC 00008294 */  lhu        $v0, 0x0($a0)
    /* 5EDC0 801509C0 00000000 */  nop
    /* 5EDC4 801509C4 01004224 */  addiu      $v0, $v0, 0x1
    /* 5EDC8 801509C8 000082A4 */  sh         $v0, 0x0($a0)
    /* 5EDCC 801509CC 1A80033C */  lui        $v1, %hi(D_8019ED4C)
    /* 5EDD0 801509D0 4CED638C */  lw         $v1, %lo(D_8019ED4C)($v1)
    /* 5EDD4 801509D4 00000000 */  nop
    /* 5EDD8 801509D8 00006294 */  lhu        $v0, 0x0($v1)
    /* 5EDDC 801509DC 1A80053C */  lui        $a1, %hi(D_8019ED68)
    /* 5EDE0 801509E0 68EDA58C */  lw         $a1, %lo(D_8019ED68)($a1)
    /* 5EDE4 801509E4 21105000 */  addu       $v0, $v0, $s0
    /* 5EDE8 801509E8 00004390 */  lbu        $v1, %lo(D_800D0000)($v0)
    /* 5EDEC 801509EC 21200000 */  addu       $a0, $zero, $zero
    /* 5EDF0 801509F0 E550060C */  jal        func_80194394
    /* 5EDF4 801509F4 0000A3A0 */   sb        $v1, 0x0($a1)
    /* 5EDF8 801509F8 3A4A060C */  jal        func_801928E8
    /* 5EDFC 801509FC 21200000 */   addu      $a0, $zero, $zero
    /* 5EE00 80150A00 BF50060C */  jal        func_801942FC
    /* 5EE04 80150A04 21200000 */   addu      $a0, $zero, $zero
    /* 5EE08 80150A08 AF41050C */  jal        func_801506BC
    /* 5EE0C 80150A0C 00000000 */   nop
    /* 5EE10 80150A10 1400BF8F */  lw         $ra, 0x14($sp)
    /* 5EE14 80150A14 1000B08F */  lw         $s0, 0x10($sp)
    /* 5EE18 80150A18 1A80013C */  lui        $at, %hi(D_8019EE54)
    /* 5EE1C 80150A1C 54EE20A4 */  sh         $zero, %lo(D_8019EE54)($at)
    /* 5EE20 80150A20 1A80013C */  lui        $at, %hi(D_8019EDC6)
    /* 5EE24 80150A24 C6ED20A4 */  sh         $zero, %lo(D_8019EDC6)($at)
    /* 5EE28 80150A28 0800E003 */  jr         $ra
    /* 5EE2C 80150A2C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8015084C
