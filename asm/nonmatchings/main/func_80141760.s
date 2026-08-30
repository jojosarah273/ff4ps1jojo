nonmatching func_80141760, 0x320

glabel func_80141760
    /* 4FB60 80141760 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 4FB64 80141764 1000BFAF */  sw         $ra, 0x10($sp)
    /* 4FB68 80141768 59D9030C */  jal        func_800F6564
    /* 4FB6C 8014176C 49000424 */   addiu     $a0, $zero, 0x49
    /* 4FB70 80141770 50D4030C */  jal        func_800F5140
    /* 4FB74 80141774 00000000 */   nop
    /* 4FB78 80141778 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 4FB7C 8014177C 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 4FB80 80141780 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 4FB84 80141784 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 4FB88 80141788 00004394 */  lhu        $v1, 0x0($v0)
    /* 4FB8C 8014178C 53F00434 */  ori        $a0, $zero, 0xF053
    /* 4FB90 80141790 DADA030C */  jal        func_800F6B68
    /* 4FB94 80141794 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 4FB98 80141798 92D0030C */  jal        func_800F4248
    /* 4FB9C 8014179C F8000424 */   addiu     $a0, $zero, 0xF8
    /* 4FBA0 801417A0 62E0030C */  jal        func_800F8188
    /* 4FBA4 801417A4 11F10434 */   ori       $a0, $zero, 0xF111
    /* 4FBA8 801417A8 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 4FBAC 801417AC 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 4FBB0 801417B0 1A80053C */  lui        $a1, %hi(D_8019ED58)
    /* 4FBB4 801417B4 58EDA58C */  lw         $a1, %lo(D_8019ED58)($a1)
    /* 4FBB8 801417B8 00004394 */  lhu        $v1, 0x0($v0)
    /* 4FBBC 801417BC 21200000 */  addu       $a0, $zero, $zero
    /* 4FBC0 801417C0 AFE3030C */  jal        func_800F8EBC
    /* 4FBC4 801417C4 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 4FBC8 801417C8 94E3030C */  jal        func_800F8E50
    /* 4FBCC 801417CC 33F10434 */   ori       $a0, $zero, 0xF133
    /* 4FBD0 801417D0 DADA030C */  jal        func_800F6B68
    /* 4FBD4 801417D4 54F00434 */   ori       $a0, $zero, 0xF054
    /* 4FBD8 801417D8 92D0030C */  jal        func_800F4248
    /* 4FBDC 801417DC F8000424 */   addiu     $a0, $zero, 0xF8
    /* 4FBE0 801417E0 62E0030C */  jal        func_800F8188
    /* 4FBE4 801417E4 12F10434 */   ori       $a0, $zero, 0xF112
    /* 4FBE8 801417E8 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 4FBEC 801417EC 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 4FBF0 801417F0 1A80053C */  lui        $a1, %hi(D_8019ED58)
    /* 4FBF4 801417F4 58EDA58C */  lw         $a1, %lo(D_8019ED58)($a1)
    /* 4FBF8 801417F8 00004394 */  lhu        $v1, 0x0($v0)
    /* 4FBFC 801417FC 35F10434 */  ori        $a0, $zero, 0xF135
    /* 4FC00 80141800 94E3030C */  jal        func_800F8E50
    /* 4FC04 80141804 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 4FC08 80141808 AFE3030C */  jal        func_800F8EBC
    /* 4FC0C 8014180C 02000424 */   addiu     $a0, $zero, 0x2
    /* 4FC10 80141810 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 4FC14 80141814 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 4FC18 80141818 00000000 */  nop
    /* 4FC1C 8014181C 00006290 */  lbu        $v0, 0x0($v1)
    /* 4FC20 80141820 37F10434 */  ori        $a0, $zero, 0xF137
    /* 4FC24 80141824 C2100200 */  srl        $v0, $v0, 3
    /* 4FC28 80141828 62E0030C */  jal        func_800F8188
    /* 4FC2C 8014182C 000062A0 */   sb        $v0, 0x0($v1)
    /* 4FC30 80141830 91E5030C */  jal        func_800F9644
    /* 4FC34 80141834 20000424 */   addiu     $a0, $zero, 0x20
    /* 4FC38 80141838 56D9030C */  jal        func_800F6558
    /* 4FC3C 8014183C 28000424 */   addiu     $a0, $zero, 0x28
    /* 4FC40 80141840 20D5030C */  jal        func_800F5480
    /* 4FC44 80141844 00000000 */   nop
    /* 4FC48 80141848 0FCF030C */  jal        func_800F3C3C
    /* 4FC4C 8014184C 21200000 */   addu      $a0, $zero, $zero
    /* 4FC50 80141850 F3DF030C */  jal        func_800F7FCC
    /* 4FC54 80141854 21204000 */   addu      $a0, $v0, $zero
    /* 4FC58 80141858 20D5030C */  jal        func_800F5480
    /* 4FC5C 8014185C 00000000 */   nop
    /* 4FC60 80141860 0FCF030C */  jal        func_800F3C3C
    /* 4FC64 80141864 02000424 */   addiu     $a0, $zero, 0x2
    /* 4FC68 80141868 F3DF030C */  jal        func_800F7FCC
    /* 4FC6C 8014186C 21204000 */   addu      $a0, $v0, $zero
    /* 4FC70 80141870 6CE0030C */  jal        func_800F81B0
    /* 4FC74 80141874 06F40434 */   ori       $a0, $zero, 0xF406
    /* 4FC78 80141878 56D9030C */  jal        func_800F6558
    /* 4FC7C 8014187C 50000424 */   addiu     $a0, $zero, 0x50
    /* 4FC80 80141880 6CE0030C */  jal        func_800F81B0
    /* 4FC84 80141884 08F40434 */   ori       $a0, $zero, 0xF408
    /* 4FC88 80141888 98E5030C */  jal        func_800F9660
    /* 4FC8C 8014188C 20000424 */   addiu     $a0, $zero, 0x20
    /* 4FC90 80141890 C400050C */  jal        func_80140310
    /* 4FC94 80141894 00000000 */   nop
  .L80141898:
    /* 4FC98 80141898 5601050C */  jal        func_80140558
    /* 4FC9C 8014189C 00000000 */   nop
    /* 4FCA0 801418A0 91E5030C */  jal        func_800F9644
    /* 4FCA4 801418A4 20000424 */   addiu     $a0, $zero, 0x20
    /* 4FCA8 801418A8 63D9030C */  jal        func_800F658C
    /* 4FCAC 801418AC 06F40434 */   ori       $a0, $zero, 0xF406
    /* 4FCB0 801418B0 04D5030C */  jal        func_800F5410
    /* 4FCB4 801418B4 00000000 */   nop
    /* 4FCB8 801418B8 19D0030C */  jal        func_800F4064
    /* 4FCBC 801418BC 08000424 */   addiu     $a0, $zero, 0x8
    /* 4FCC0 801418C0 6CE0030C */  jal        func_800F81B0
    /* 4FCC4 801418C4 06F40434 */   ori       $a0, $zero, 0xF406
    /* 4FCC8 801418C8 63D9030C */  jal        func_800F658C
    /* 4FCCC 801418CC 08F40434 */   ori       $a0, $zero, 0xF408
    /* 4FCD0 801418D0 20D5030C */  jal        func_800F5480
    /* 4FCD4 801418D4 00000000 */   nop
    /* 4FCD8 801418D8 34E0030C */  jal        func_800F80D0
    /* 4FCDC 801418DC 08000424 */   addiu     $a0, $zero, 0x8
    /* 4FCE0 801418E0 6CE0030C */  jal        func_800F81B0
    /* 4FCE4 801418E4 08F40434 */   ori       $a0, $zero, 0xF408
    /* 4FCE8 801418E8 C7E5030C */  jal        func_800F971C
    /* 4FCEC 801418EC 00000000 */   nop
    /* 4FCF0 801418F0 98E5030C */  jal        func_800F9660
    /* 4FCF4 801418F4 20000424 */   addiu     $a0, $zero, 0x20
    /* 4FCF8 801418F8 C400050C */  jal        func_80140310
    /* 4FCFC 801418FC 00000000 */   nop
    /* 4FD00 80141900 49D7030C */  jal        func_800F5D24
    /* 4FD04 80141904 37F10434 */   ori       $a0, $zero, 0xF137
    /* 4FD08 80141908 E3D6030C */  jal        func_800F5B8C
    /* 4FD0C 8014190C 02020424 */   addiu     $a0, $zero, 0x202
    /* 4FD10 80141910 E1FF4014 */  bnez       $v0, .L80141898
    /* 4FD14 80141914 00000000 */   nop
    /* 4FD18 80141918 53D9030C */  jal        func_800F654C
    /* 4FD1C 8014191C 38000424 */   addiu     $a0, $zero, 0x38
    /* 4FD20 80141920 62E0030C */  jal        func_800F8188
    /* 4FD24 80141924 13F10434 */   ori       $a0, $zero, 0xF113
    /* 4FD28 80141928 53D9030C */  jal        func_800F654C
    /* 4FD2C 8014192C 50000424 */   addiu     $a0, $zero, 0x50
    /* 4FD30 80141930 62E0030C */  jal        func_800F8188
    /* 4FD34 80141934 14F10434 */   ori       $a0, $zero, 0xF114
    /* 4FD38 80141938 53D9030C */  jal        func_800F654C
    /* 4FD3C 8014193C 08000424 */   addiu     $a0, $zero, 0x8
    /* 4FD40 80141940 62E0030C */  jal        func_800F8188
    /* 4FD44 80141944 15F10434 */   ori       $a0, $zero, 0xF115
    /* 4FD48 80141948 2B24050C */  jal        func_801490AC
    /* 4FD4C 8014194C 00000000 */   nop
    /* 4FD50 80141950 0E5D020C */  jal        func_80097438
    /* 4FD54 80141954 00000000 */   nop
    /* 4FD58 80141958 53D9030C */  jal        func_800F654C
    /* 4FD5C 8014195C 28000424 */   addiu     $a0, $zero, 0x28
    /* 4FD60 80141960 4A35050C */  jal        func_8014D528
    /* 4FD64 80141964 00000000 */   nop
  .L80141968:
    /* 4FD68 80141968 5601050C */  jal        func_80140558
    /* 4FD6C 8014196C 00000000 */   nop
    /* 4FD70 80141970 DD24050C */  jal        func_80149374
    /* 4FD74 80141974 00000000 */   nop
    /* 4FD78 80141978 405D020C */  jal        func_80097500
    /* 4FD7C 8014197C 00000000 */   nop
    /* 4FD80 80141980 8CD9030C */  jal        func_800F6630
    /* 4FD84 80141984 2B000424 */   addiu     $a0, $zero, 0x2B
    /* 4FD88 80141988 93E0030C */  jal        func_800F824C
    /* 4FD8C 8014198C 2A000424 */   addiu     $a0, $zero, 0x2A
    /* 4FD90 80141990 8CD9030C */  jal        func_800F6630
    /* 4FD94 80141994 2B000424 */   addiu     $a0, $zero, 0x2B
    /* 4FD98 80141998 0DD9030C */  jal        func_800F6434
    /* 4FD9C 8014199C 80000424 */   addiu     $a0, $zero, 0x80
    /* 4FDA0 801419A0 05004014 */  bnez       $v0, .L801419B8
    /* 4FDA4 801419A4 00000000 */   nop
    /* 4FDA8 801419A8 EEE3030C */  jal        func_800F8FB8
    /* 4FDAC 801419AC 2B000424 */   addiu     $a0, $zero, 0x2B
    /* 4FDB0 801419B0 72060508 */  j          .L801419C8
    /* 4FDB4 801419B4 00000000 */   nop
  .L801419B8:
    /* 4FDB8 801419B8 53D9030C */  jal        func_800F654C
    /* 4FDBC 801419BC FF000424 */   addiu     $a0, $zero, 0xFF
    /* 4FDC0 801419C0 93E0030C */  jal        func_800F824C
    /* 4FDC4 801419C4 2B000424 */   addiu     $a0, $zero, 0x2B
  .L801419C8:
    /* 4FDC8 801419C8 91E5030C */  jal        func_800F9644
    /* 4FDCC 801419CC 20000424 */   addiu     $a0, $zero, 0x20
    /* 4FDD0 801419D0 63D9030C */  jal        func_800F658C
    /* 4FDD4 801419D4 06F40434 */   ori       $a0, $zero, 0xF406
    /* 4FDD8 801419D8 04D5030C */  jal        func_800F5410
    /* 4FDDC 801419DC 00000000 */   nop
    /* 4FDE0 801419E0 19D0030C */  jal        func_800F4064
    /* 4FDE4 801419E4 08000424 */   addiu     $a0, $zero, 0x8
    /* 4FDE8 801419E8 6CE0030C */  jal        func_800F81B0
    /* 4FDEC 801419EC 06F40434 */   ori       $a0, $zero, 0xF406
    /* 4FDF0 801419F0 63D9030C */  jal        func_800F658C
    /* 4FDF4 801419F4 08F40434 */   ori       $a0, $zero, 0xF408
    /* 4FDF8 801419F8 20D5030C */  jal        func_800F5480
    /* 4FDFC 801419FC 00000000 */   nop
    /* 4FE00 80141A00 C1CE030C */  jal        func_800F3B04
    /* 4FE04 80141A04 21F10434 */   ori       $a0, $zero, 0xF121
    /* 4FE08 80141A08 F3DF030C */  jal        func_800F7FCC
    /* 4FE0C 80141A0C 21204000 */   addu      $a0, $v0, $zero
    /* 4FE10 80141A10 6CE0030C */  jal        func_800F81B0
    /* 4FE14 80141A14 08F40434 */   ori       $a0, $zero, 0xF408
    /* 4FE18 80141A18 C7E5030C */  jal        func_800F971C
    /* 4FE1C 80141A1C 00000000 */   nop
    /* 4FE20 80141A20 98E5030C */  jal        func_800F9660
    /* 4FE24 80141A24 20000424 */   addiu     $a0, $zero, 0x20
    /* 4FE28 80141A28 59D9030C */  jal        func_800F6564
    /* 4FE2C 80141A2C 06F40434 */   ori       $a0, $zero, 0xF406
    /* 4FE30 80141A30 0DD9030C */  jal        func_800F6434
    /* 4FE34 80141A34 02000424 */   addiu     $a0, $zero, 0x2
    /* 4FE38 80141A38 05004014 */  bnez       $v0, .L80141A50
    /* 4FE3C 80141A3C 00000000 */   nop
    /* 4FE40 80141A40 7300050C */  jal        func_801401CC
    /* 4FE44 80141A44 00000000 */   nop
    /* 4FE48 80141A48 5A060508 */  j          .L80141968
    /* 4FE4C 80141A4C 00000000 */   nop
  .L80141A50:
    /* 4FE50 80141A50 77DC030C */  jal        func_800F71DC
    /* 4FE54 80141A54 21200000 */   addu      $a0, $zero, $zero
    /* 4FE58 80141A58 40E3030C */  jal        func_800F8D00
    /* 4FE5C 80141A5C 06F40434 */   ori       $a0, $zero, 0xF406
    /* 4FE60 80141A60 40E3030C */  jal        func_800F8D00
    /* 4FE64 80141A64 08F40434 */   ori       $a0, $zero, 0xF408
    /* 4FE68 80141A68 C400050C */  jal        func_80140310
    /* 4FE6C 80141A6C 00000000 */   nop
    /* 4FE70 80141A70 1000BF8F */  lw         $ra, 0x10($sp)
    /* 4FE74 80141A74 00000000 */  nop
    /* 4FE78 80141A78 0800E003 */  jr         $ra
    /* 4FE7C 80141A7C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80141760
