nonmatching func_801118CC, 0x210

glabel func_801118CC
    /* 1FCCC 801118CC E0FFBD27 */  addiu      $sp, $sp, -0x20
    /* 1FCD0 801118D0 1000B0AF */  sw         $s0, 0x10($sp)
    /* 1FCD4 801118D4 21800000 */  addu       $s0, $zero, $zero
    /* 1FCD8 801118D8 1800BFAF */  sw         $ra, 0x18($sp)
    /* 1FCDC 801118DC C546040C */  jal        func_80111B14
    /* 1FCE0 801118E0 1400B1AF */   sw        $s1, 0x14($sp)
    /* 1FCE4 801118E4 53D9030C */  jal        func_800F654C
    /* 1FCE8 801118E8 81000424 */   addiu     $a0, $zero, 0x81
    /* 1FCEC 801118EC 62E0030C */  jal        func_800F8188
    /* 1FCF0 801118F0 00420424 */   addiu     $a0, $zero, 0x4200
    /* 1FCF4 801118F4 77DC030C */  jal        func_800F71DC
    /* 1FCF8 801118F8 00020424 */   addiu     $a0, $zero, 0x200
    /* 1FCFC 801118FC 5BE3030C */  jal        func_800F8D6C
    /* 1FD00 80111900 89000424 */   addiu     $a0, $zero, 0x89
    /* 1FD04 80111904 EEE3030C */  jal        func_800F8FB8
    /* 1FD08 80111908 79000424 */   addiu     $a0, $zero, 0x79
    /* 1FD0C 8011190C 1A80113C */  lui        $s1, %hi(D_80198C2C)
    /* 1FD10 80111910 03000224 */  addiu      $v0, $zero, 0x3
  .L80111914:
    /* 1FD14 80111914 05000216 */  bne        $s0, $v0, .L8011192C
    /* 1FD18 80111918 01000226 */   addiu     $v0, $s0, 0x1
    /* 1FD1C 8011191C 0F000224 */  addiu      $v0, $zero, 0xF
    /* 1FD20 80111920 0D80013C */  lui        $at, %hi(D_800D2100)
    /* 1FD24 80111924 002122A0 */  sb         $v0, %lo(D_800D2100)($at)
    /* 1FD28 80111928 01000226 */  addiu      $v0, $s0, 0x1
  .L8011192C:
    /* 1FD2C 8011192C FFFF5030 */  andi       $s0, $v0, 0xFFFF
    /* 1FD30 80111930 53D9030C */  jal        func_800F654C
    /* 1FD34 80111934 03000424 */   addiu     $a0, $zero, 0x3
    /* 1FD38 80111938 62E0030C */  jal        func_800F8188
    /* 1FD3C 8011193C 05170424 */   addiu     $a0, $zero, 0x1705
    /* 1FD40 80111940 B746040C */  jal        func_80111ADC
    /* 1FD44 80111944 00000000 */   nop
    /* 1FD48 80111948 53D9030C */  jal        func_800F654C
    /* 1FD4C 8011194C 28000424 */   addiu     $a0, $zero, 0x28
    /* 1FD50 80111950 62E0030C */  jal        func_800F8188
    /* 1FD54 80111954 40030424 */   addiu     $a0, $zero, 0x340
    /* 1FD58 80111958 62E0030C */  jal        func_800F8188
    /* 1FD5C 8011195C 00030424 */   addiu     $a0, $zero, 0x300
    /* 1FD60 80111960 8CD9030C */  jal        func_800F6630
    /* 1FD64 80111964 7A000424 */   addiu     $a0, $zero, 0x7A
    /* 1FD68 80111968 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 1FD6C 8011196C 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 1FD70 80111970 00000000 */  nop
    /* 1FD74 80111974 00006290 */  lbu        $v0, 0x0($v1)
    /* 1FD78 80111978 00000000 */  nop
    /* 1FD7C 8011197C 02110200 */  srl        $v0, $v0, 4
    /* 1FD80 80111980 000062A0 */  sb         $v0, 0x0($v1)
    /* 1FD84 80111984 1A80043C */  lui        $a0, %hi(D_8019ED44)
    /* 1FD88 80111988 44ED848C */  lw         $a0, %lo(D_8019ED44)($a0)
    /* 1FD8C 8011198C 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 1FD90 80111990 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 1FD94 80111994 00008294 */  lhu        $v0, 0x0($a0)
    /* 1FD98 80111998 00000000 */  nop
    /* 1FD9C 8011199C 0000A2A4 */  sh         $v0, 0x0($a1)
    /* 1FDA0 801119A0 1A80033C */  lui        $v1, %hi(D_8019ED54)
    /* 1FDA4 801119A4 54ED638C */  lw         $v1, %lo(D_8019ED54)($v1)
    /* 1FDA8 801119A8 2C8C2426 */  addiu      $a0, $s1, %lo(D_80198C2C)
    /* 1FDAC 801119AC 00006294 */  lhu        $v0, 0x0($v1)
    /* 1FDB0 801119B0 1A80053C */  lui        $a1, %hi(D_8019ED40)
    /* 1FDB4 801119B4 40EDA58C */  lw         $a1, %lo(D_8019ED40)($a1)
    /* 1FDB8 801119B8 21104400 */  addu       $v0, $v0, $a0
    /* 1FDBC 801119BC 00004390 */  lbu        $v1, 0x0($v0)
    /* 1FDC0 801119C0 41030424 */  addiu      $a0, $zero, 0x341
    /* 1FDC4 801119C4 62E0030C */  jal        func_800F8188
    /* 1FDC8 801119C8 0000A3A0 */   sb        $v1, 0x0($a1)
    /* 1FDCC 801119CC 53D9030C */  jal        func_800F654C
    /* 1FDD0 801119D0 30000424 */   addiu     $a0, $zero, 0x30
    /* 1FDD4 801119D4 62E0030C */  jal        func_800F8188
    /* 1FDD8 801119D8 42030424 */   addiu     $a0, $zero, 0x342
    /* 1FDDC 801119DC 1A80023C */  lui        $v0, %hi(D_8019ED5C)
    /* 1FDE0 801119E0 5CED428C */  lw         $v0, %lo(D_8019ED5C)($v0)
    /* 1FDE4 801119E4 1A80053C */  lui        $a1, %hi(D_8019ED40)
    /* 1FDE8 801119E8 40EDA58C */  lw         $a1, %lo(D_8019ED40)($a1)
    /* 1FDEC 801119EC 00004390 */  lbu        $v1, 0x0($v0)
    /* 1FDF0 801119F0 04000424 */  addiu      $a0, $zero, 0x4
    /* 1FDF4 801119F4 92D0030C */  jal        func_800F4248
    /* 1FDF8 801119F8 0000A3A0 */   sb        $v1, 0x0($a1)
    /* 1FDFC 801119FC 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 1FE00 80111A00 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 1FE04 80111A04 00000000 */  nop
    /* 1FE08 80111A08 00006290 */  lbu        $v0, 0x0($v1)
    /* 1FE0C 80111A0C 00000000 */  nop
    /* 1FE10 80111A10 00110200 */  sll        $v0, $v0, 4
    /* 1FE14 80111A14 000062A0 */  sb         $v0, 0x0($v1)
    /* 1FE18 80111A18 1A80053C */  lui        $a1, %hi(D_8019ED40)
    /* 1FE1C 80111A1C 40EDA58C */  lw         $a1, %lo(D_8019ED40)($a1)
    /* 1FE20 80111A20 00000000 */  nop
    /* 1FE24 80111A24 0000A290 */  lbu        $v0, 0x0($a1)
    /* 1FE28 80111A28 43030424 */  addiu      $a0, $zero, 0x343
    /* 1FE2C 80111A2C 37004234 */  ori        $v0, $v0, 0x37
    /* 1FE30 80111A30 62E0030C */  jal        func_800F8188
    /* 1FE34 80111A34 0000A2A0 */   sb        $v0, 0x0($a1)
    /* 1FE38 80111A38 53D9030C */  jal        func_800F654C
    /* 1FE3C 80111A3C 70000424 */   addiu     $a0, $zero, 0x70
    /* 1FE40 80111A40 62E0030C */  jal        func_800F8188
    /* 1FE44 80111A44 01030424 */   addiu     $a0, $zero, 0x301
    /* 1FE48 80111A48 8CD9030C */  jal        func_800F6630
    /* 1FE4C 80111A4C 7A000424 */   addiu     $a0, $zero, 0x7A
    /* 1FE50 80111A50 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 1FE54 80111A54 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 1FE58 80111A58 00000000 */  nop
    /* 1FE5C 80111A5C 00006290 */  lbu        $v0, 0x0($v1)
    /* 1FE60 80111A60 02000424 */  addiu      $a0, $zero, 0x2
    /* 1FE64 80111A64 82100200 */  srl        $v0, $v0, 2
    /* 1FE68 80111A68 92D0030C */  jal        func_800F4248
    /* 1FE6C 80111A6C 000062A0 */   sb        $v0, 0x0($v1)
    /* 1FE70 80111A70 04D5030C */  jal        func_800F5410
    /* 1FE74 80111A74 00000000 */   nop
    /* 1FE78 80111A78 02D0030C */  jal        func_800F4008
    /* 1FE7C 80111A7C E4000424 */   addiu     $a0, $zero, 0xE4
    /* 1FE80 80111A80 62E0030C */  jal        func_800F8188
    /* 1FE84 80111A84 02030424 */   addiu     $a0, $zero, 0x302
    /* 1FE88 80111A88 53D9030C */  jal        func_800F654C
    /* 1FE8C 80111A8C 37000424 */   addiu     $a0, $zero, 0x37
    /* 1FE90 80111A90 62E0030C */  jal        func_800F8188
    /* 1FE94 80111A94 03030424 */   addiu     $a0, $zero, 0x303
    /* 1FE98 80111A98 9CDC030C */  jal        func_800F7270
    /* 1FE9C 80111A9C 89000424 */   addiu     $a0, $zero, 0x89
    /* 1FEA0 80111AA0 92D7030C */  jal        func_800F5E48
    /* 1FEA4 80111AA4 00000000 */   nop
    /* 1FEA8 80111AA8 5BE3030C */  jal        func_800F8D6C
    /* 1FEAC 80111AAC 89000424 */   addiu     $a0, $zero, 0x89
    /* 1FEB0 80111AB0 19D7030C */  jal        func_800F5C64
    /* 1FEB4 80111AB4 02020424 */   addiu     $a0, $zero, 0x202
    /* 1FEB8 80111AB8 96FF4014 */  bnez       $v0, .L80111914
    /* 1FEBC 80111ABC 03000224 */   addiu     $v0, $zero, 0x3
    /* 1FEC0 80111AC0 977A040C */  jal        func_8011EA5C
    /* 1FEC4 80111AC4 00000000 */   nop
    /* 1FEC8 80111AC8 1800BF8F */  lw         $ra, 0x18($sp)
    /* 1FECC 80111ACC 1400B18F */  lw         $s1, 0x14($sp)
    /* 1FED0 80111AD0 1000B08F */  lw         $s0, 0x10($sp)
    /* 1FED4 80111AD4 0800E003 */  jr         $ra
    /* 1FED8 80111AD8 2000BD27 */   addiu     $sp, $sp, 0x20
endlabel func_801118CC
