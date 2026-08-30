nonmatching func_801218EC, 0x100

glabel func_801218EC
    /* 2FCEC 801218EC E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 2FCF0 801218F0 1000BFAF */  sw         $ra, 0x10($sp)
    /* 2FCF4 801218F4 F0D4030C */  jal        func_800F53C0
    /* 2FCF8 801218F8 00000000 */   nop
    /* 2FCFC 801218FC 07004010 */  beqz       $v0, .L8012191C
    /* 2FD00 80121900 00000000 */   nop
    /* 2FD04 80121904 A587040C */  jal        func_80121E94
    /* 2FD08 80121908 00000000 */   nop
    /* 2FD0C 8012190C 68D7030C */  jal        func_800F5DA0
    /* 2FD10 80121910 66000424 */   addiu     $a0, $zero, 0x66
    /* 2FD14 80121914 4B860408 */  j          .L8012192C
    /* 2FD18 80121918 00000000 */   nop
  .L8012191C:
    /* 2FD1C 8012191C 5987040C */  jal        func_80121D64
    /* 2FD20 80121920 00000000 */   nop
    /* 2FD24 80121924 AFD8030C */  jal        func_800F62BC
    /* 2FD28 80121928 66000424 */   addiu     $a0, $zero, 0x66
  .L8012192C:
    /* 2FD2C 8012192C 3987040C */  jal        func_80121CE4
    /* 2FD30 80121930 00000000 */   nop
    /* 2FD34 80121934 8CD9030C */  jal        func_800F6630
    /* 2FD38 80121938 65000424 */   addiu     $a0, $zero, 0x65
    /* 2FD3C 8012193C 20D5030C */  jal        func_800F5480
    /* 2FD40 80121940 00000000 */   nop
    /* 2FD44 80121944 0FCF030C */  jal        func_800F3C3C
    /* 2FD48 80121948 63000424 */   addiu     $a0, $zero, 0x63
    /* 2FD4C 8012194C D2DF030C */  jal        func_800F7F48
    /* 2FD50 80121950 21204000 */   addu      $a0, $v0, $zero
    /* 2FD54 80121954 33D7030C */  jal        func_800F5CCC
    /* 2FD58 80121958 00000000 */   nop
    /* 2FD5C 8012195C 93E0030C */  jal        func_800F824C
    /* 2FD60 80121960 1D000424 */   addiu     $a0, $zero, 0x1D
    /* 2FD64 80121964 53D9030C */  jal        func_800F654C
    /* 2FD68 80121968 FC000424 */   addiu     $a0, $zero, 0xFC
    /* 2FD6C 8012196C DAE1030C */  jal        func_800F8768
    /* 2FD70 80121970 21200000 */   addu      $a0, $zero, $zero
    /* 2FD74 80121974 1A80033C */  lui        $v1, %hi(D_8019ED54)
    /* 2FD78 80121978 54ED638C */  lw         $v1, %lo(D_8019ED54)($v1)
    /* 2FD7C 8012197C 00000000 */  nop
    /* 2FD80 80121980 00006294 */  lhu        $v0, 0x0($v1)
    /* 2FD84 80121984 FD000424 */  addiu      $a0, $zero, 0xFD
    /* 2FD88 80121988 02004224 */  addiu      $v0, $v0, 0x2
    /* 2FD8C 8012198C 53D9030C */  jal        func_800F654C
    /* 2FD90 80121990 000062A4 */   sh        $v0, 0x0($v1)
  .L80121994:
    /* 2FD94 80121994 DAE1030C */  jal        func_800F8768
    /* 2FD98 80121998 21200000 */   addu      $a0, $zero, $zero
    /* 2FD9C 8012199C 1A80033C */  lui        $v1, %hi(D_8019ED54)
    /* 2FDA0 801219A0 54ED638C */  lw         $v1, %lo(D_8019ED54)($v1)
    /* 2FDA4 801219A4 00000000 */  nop
    /* 2FDA8 801219A8 00006294 */  lhu        $v0, 0x0($v1)
    /* 2FDAC 801219AC 1D000424 */  addiu      $a0, $zero, 0x1D
    /* 2FDB0 801219B0 02004224 */  addiu      $v0, $v0, 0x2
    /* 2FDB4 801219B4 68D7030C */  jal        func_800F5DA0
    /* 2FDB8 801219B8 000062A4 */   sh        $v0, 0x0($v1)
    /* 2FDBC 801219BC E3D6030C */  jal        func_800F5B8C
    /* 2FDC0 801219C0 02020424 */   addiu     $a0, $zero, 0x202
    /* 2FDC4 801219C4 F3FF4014 */  bnez       $v0, .L80121994
    /* 2FDC8 801219C8 00000000 */   nop
    /* 2FDCC 801219CC 53D9030C */  jal        func_800F654C
    /* 2FDD0 801219D0 FE000424 */   addiu     $a0, $zero, 0xFE
    /* 2FDD4 801219D4 DAE1030C */  jal        func_800F8768
    /* 2FDD8 801219D8 21200000 */   addu      $a0, $zero, $zero
    /* 2FDDC 801219DC 1000BF8F */  lw         $ra, 0x10($sp)
    /* 2FDE0 801219E0 00000000 */  nop
    /* 2FDE4 801219E4 0800E003 */  jr         $ra
    /* 2FDE8 801219E8 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_801218EC
