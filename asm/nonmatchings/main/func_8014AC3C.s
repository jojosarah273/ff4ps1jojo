nonmatching func_8014AC3C, 0xE8

glabel func_8014AC3C
    /* 5903C 8014AC3C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 59040 8014AC40 1000BFAF */  sw         $ra, 0x10($sp)
    /* 59044 8014AC44 5B32050C */  jal        func_8014C96C
    /* 59048 8014AC48 00000000 */   nop
    /* 5904C 8014AC4C 53D9030C */  jal        func_800F654C
    /* 59050 8014AC50 03000424 */   addiu     $a0, $zero, 0x3
    /* 59054 8014AC54 62E0030C */  jal        func_800F8188
    /* 59058 8014AC58 A0F20434 */   ori       $a0, $zero, 0xF2A0
    /* 5905C 8014AC5C 53D9030C */  jal        func_800F654C
    /* 59060 8014AC60 0F000424 */   addiu     $a0, $zero, 0xF
    /* 59064 8014AC64 93E0030C */  jal        func_800F824C
    /* 59068 8014AC68 04000424 */   addiu     $a0, $zero, 0x4
    /* 5906C 8014AC6C 74F9040C */  jal        func_8013E5D0
    /* 59070 8014AC70 00000000 */   nop
    /* 59074 8014AC74 DDE3030C */  jal        func_800F8F74
    /* 59078 8014AC78 58F40434 */   ori       $a0, $zero, 0xF458
    /* 5907C 8014AC7C 53D9030C */  jal        func_800F654C
    /* 59080 8014AC80 01000424 */   addiu     $a0, $zero, 0x1
    /* 59084 8014AC84 6D2E050C */  jal        func_8014B9B4
    /* 59088 8014AC88 00000000 */   nop
    /* 5908C 8014AC8C 59D9030C */  jal        func_800F6564
    /* 59090 8014AC90 C4340424 */   addiu     $a0, $zero, 0x34C4
    /* 59094 8014AC94 62E0030C */  jal        func_800F8188
    /* 59098 8014AC98 3EF10434 */   ori       $a0, $zero, 0xF13E
    /* 5909C 8014AC9C 59D9030C */  jal        func_800F6564
    /* 590A0 8014ACA0 C5340424 */   addiu     $a0, $zero, 0x34C5
    /* 590A4 8014ACA4 0DD9030C */  jal        func_800F6434
    /* 590A8 8014ACA8 02000424 */   addiu     $a0, $zero, 0x2
    /* 590AC 8014ACAC 03004014 */  bnez       $v0, .L8014ACBC
    /* 590B0 8014ACB0 00000000 */   nop
    /* 590B4 8014ACB4 BEF8040C */  jal        func_8013E2F8
    /* 590B8 8014ACB8 00000000 */   nop
  .L8014ACBC:
    /* 590BC 8014ACBC DDE3030C */  jal        func_800F8F74
    /* 590C0 8014ACC0 58F40434 */   ori       $a0, $zero, 0xF458
    /* 590C4 8014ACC4 59D9030C */  jal        func_800F6564
    /* 590C8 8014ACC8 C4340424 */   addiu     $a0, $zero, 0x34C4
    /* 590CC 8014ACCC 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 590D0 8014ACD0 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 590D4 8014ACD4 00000000 */  nop
    /* 590D8 8014ACD8 00006290 */  lbu        $v0, 0x0($v1)
    /* 590DC 8014ACDC 3EF10434 */  ori        $a0, $zero, 0xF13E
    /* 590E0 8014ACE0 80004238 */  xori       $v0, $v0, 0x80
    /* 590E4 8014ACE4 62E0030C */  jal        func_800F8188
    /* 590E8 8014ACE8 000062A0 */   sb        $v0, 0x0($v1)
    /* 590EC 8014ACEC 8D2E050C */  jal        func_8014BA34
    /* 590F0 8014ACF0 00000000 */   nop
    /* 590F4 8014ACF4 59D9030C */  jal        func_800F6564
    /* 590F8 8014ACF8 23350424 */   addiu     $a0, $zero, 0x3523
    /* 590FC 8014ACFC 0DD9030C */  jal        func_800F6434
    /* 59100 8014AD00 02000424 */   addiu     $a0, $zero, 0x2
    /* 59104 8014AD04 03004014 */  bnez       $v0, .L8014AD14
    /* 59108 8014AD08 00000000 */   nop
    /* 5910C 8014AD0C BEF8040C */  jal        func_8013E2F8
    /* 59110 8014AD10 00000000 */   nop
  .L8014AD14:
    /* 59114 8014AD14 1000BF8F */  lw         $ra, 0x10($sp)
    /* 59118 8014AD18 00000000 */  nop
    /* 5911C 8014AD1C 0800E003 */  jr         $ra
    /* 59120 8014AD20 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8014AC3C
