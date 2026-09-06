nonmatching func_80138A6C, 0x244

glabel func_80138A6C
    /* 46E6C 80138A6C D8FFBD27 */  addiu      $sp, $sp, -0x28
    /* 46E70 80138A70 2400BFAF */  sw         $ra, 0x24($sp)
    /* 46E74 80138A74 2000B2AF */  sw         $s2, 0x20($sp)
    /* 46E78 80138A78 1C00B1AF */  sw         $s1, 0x1C($sp)
    /* 46E7C 80138A7C 4F8F040C */  jal        func_80123D3C
    /* 46E80 80138A80 1800B0AF */   sw        $s0, 0x18($sp)
    /* 46E84 80138A84 A690040C */  jal        func_80124298
    /* 46E88 80138A88 1D80103C */   lui       $s0, %hi(D_801D3D68)
    /* 46E8C 80138A8C 53D9030C */  jal        func_800F654C
    /* 46E90 80138A90 01000424 */   addiu     $a0, $zero, 0x1
    /* 46E94 80138A94 62E0030C */  jal        func_800F8188
    /* 46E98 80138A98 731A0424 */   addiu     $a0, $zero, 0x1A73
    /* 46E9C 80138A9C 91E5030C */  jal        func_800F9644
    /* 46EA0 80138AA0 20000424 */   addiu     $a0, $zero, 0x20
    /* 46EA4 80138AA4 7CD9030C */  jal        func_800F65F0
    /* 46EA8 80138AA8 04020424 */   addiu     $a0, $zero, 0x204
    /* 46EAC 80138AAC 8BE4030C */  jal        func_800F922C
    /* 46EB0 80138AB0 683D1026 */   addiu     $s0, $s0, %lo(D_801D3D68)
    /* 46EB4 80138AB4 7CD9030C */  jal        func_800F65F0
    /* 46EB8 80138AB8 06020424 */   addiu     $a0, $zero, 0x206
    /* 46EBC 80138ABC 8BE4030C */  jal        func_800F922C
    /* 46EC0 80138AC0 0100123C */   lui       $s2, (0x10000 >> 16)
    /* 46EC4 80138AC4 98E5030C */  jal        func_800F9660
    /* 46EC8 80138AC8 20000424 */   addiu     $a0, $zero, 0x20
    /* 46ECC 80138ACC 2ED5030C */  jal        func_800F54B8
    /* 46ED0 80138AD0 00000000 */   nop
    /* 46ED4 80138AD4 53D9030C */  jal        func_800F654C
    /* 46ED8 80138AD8 2C000424 */   addiu     $a0, $zero, 0x2C
    /* 46EDC 80138ADC 7AE0030C */  jal        func_800F81E8
    /* 46EE0 80138AE0 05020424 */   addiu     $a0, $zero, 0x205
    /* 46EE4 80138AE4 53D9030C */  jal        func_800F654C
    /* 46EE8 80138AE8 CE000424 */   addiu     $a0, $zero, 0xCE
    /* 46EEC 80138AEC 7AE0030C */  jal        func_800F81E8
    /* 46EF0 80138AF0 06020424 */   addiu     $a0, $zero, 0x206
    /* 46EF4 80138AF4 53D9030C */  jal        func_800F654C
    /* 46EF8 80138AF8 01000424 */   addiu     $a0, $zero, 0x1
    /* 46EFC 80138AFC 7AE0030C */  jal        func_800F81E8
    /* 46F00 80138B00 07020424 */   addiu     $a0, $zero, 0x207
    /* 46F04 80138B04 53D9030C */  jal        func_800F654C
    /* 46F08 80138B08 21000424 */   addiu     $a0, $zero, 0x21
    /* 46F0C 80138B0C 7AE0030C */  jal        func_800F81E8
    /* 46F10 80138B10 00420424 */   addiu     $a0, $zero, 0x4200
    /* 46F14 80138B14 72D9030C */  jal        func_800F65C8
    /* 46F18 80138B18 11420424 */   addiu     $a0, $zero, 0x4211
    /* 46F1C 80138B1C 12D5030C */  jal        func_800F5448
    /* 46F20 80138B20 00000000 */   nop
    /* 46F24 80138B24 90D8030C */  jal        func_800F6240
    /* 46F28 80138B28 491B0424 */   addiu     $a0, $zero, 0x1B49
    /* 46F2C 80138B2C ED8F040C */  jal        func_80123FB4
    /* 46F30 80138B30 00000000 */   nop
    /* 46F34 80138B34 6E90040C */  jal        func_801241B8
    /* 46F38 80138B38 00000000 */   nop
    /* 46F3C 80138B3C CC98040C */  jal        func_80126330
    /* 46F40 80138B40 00000000 */   nop
    /* 46F44 80138B44 2CE3040C */  jal        func_80138CB0
    /* 46F48 80138B48 00000000 */   nop
    /* 46F4C 80138B4C A9E6040C */  jal        func_80139AA4
    /* 46F50 80138B50 00000000 */   nop
    /* 46F54 80138B54 A97D040C */  jal        func_8011F6A4
    /* 46F58 80138B58 00000000 */   nop
    /* 46F5C 80138B5C C37B040C */  jal        func_8011EF0C
    /* 46F60 80138B60 00000000 */   nop
    /* 46F64 80138B64 21200002 */  addu       $a0, $s0, $zero
    /* 46F68 80138B68 00020524 */  addiu      $a1, $zero, 0x200
    /* 46F6C 80138B6C 21300000 */  addu       $a2, $zero, $zero
    /* 46F70 80138B70 3EFE050C */  jal        func_8017F8F8
    /* 46F74 80138B74 21380000 */   addu      $a3, $zero, $zero
    /* 46F78 80138B78 21200002 */  addu       $a0, $s0, $zero
    /* 46F7C 80138B7C 00020524 */  addiu      $a1, $zero, 0x200
    /* 46F80 80138B80 21300000 */  addu       $a2, $zero, $zero
    /* 46F84 80138B84 3EFE050C */  jal        func_8017F8F8
    /* 46F88 80138B88 11000724 */   addiu     $a3, $zero, 0x11
    /* 46F8C 80138B8C 21200002 */  addu       $a0, $s0, $zero
    /* 46F90 80138B90 00020524 */  addiu      $a1, $zero, 0x200
    /* 46F94 80138B94 21300000 */  addu       $a2, $zero, $zero
    /* 46F98 80138B98 3EFE050C */  jal        func_8017F8F8
    /* 46F9C 80138B9C 12000724 */   addiu     $a3, $zero, 0x12
    /* 46FA0 80138BA0 00400426 */  addiu      $a0, $s0, 0x4000
    /* 46FA4 80138BA4 00030524 */  addiu      $a1, $zero, 0x300
    /* 46FA8 80138BA8 21300000 */  addu       $a2, $zero, $zero
    /* 46FAC 80138BAC 3EFE050C */  jal        func_8017F8F8
    /* 46FB0 80138BB0 FFFF0724 */   addiu     $a3, $zero, -0x1
    /* 46FB4 80138BB4 1A80023C */  lui        $v0, %hi(D_8019A7FC)
    /* 46FB8 80138BB8 FCA75124 */  addiu      $s1, $v0, %lo(D_8019A7FC)
    /* 46FBC 80138BBC 1A80033C */  lui        $v1, %hi(D_8019A774)
    /* 46FC0 80138BC0 74A77024 */  addiu      $s0, $v1, %lo(D_8019A774)
    /* 46FC4 80138BC4 1A80013C */  lui        $at, %hi(D_8019EE30)
    /* 46FC8 80138BC8 30EE20A4 */  sh         $zero, %lo(D_8019EE30)($at)
    /* 46FCC 80138BCC 1A80013C */  lui        $at, %hi(D_8019EE2E)
    /* 46FD0 80138BD0 2EEE20A4 */  sh         $zero, %lo(D_8019EE2E)($at)
    /* 46FD4 80138BD4 1A80013C */  lui        $at, %hi(D_8019EE2C)
    /* 46FD8 80138BD8 2CEE20A4 */  sh         $zero, %lo(D_8019EE2C)($at)
  .L80138BDC:
    /* 46FDC 80138BDC 1000A427 */  addiu      $a0, $sp, 0x10
    /* 46FE0 80138BE0 00002586 */  lh         $a1, 0x0($s1)
    /* 46FE4 80138BE4 02002696 */  lhu        $a2, 0x2($s1)
    /* 46FE8 80138BE8 04003126 */  addiu      $s1, $s1, 0x4
    /* 46FEC 80138BEC 00000296 */  lhu        $v0, 0x0($s0)
    /* 46FF0 80138BF0 02000396 */  lhu        $v1, 0x2($s0)
    /* 46FF4 80138BF4 04000796 */  lhu        $a3, 0x4($s0)
    /* 46FF8 80138BF8 06000896 */  lhu        $t0, 0x6($s0)
    /* 46FFC 80138BFC 08001026 */  addiu      $s0, $s0, 0x8
    /* 47000 80138C00 00FFC624 */  addiu      $a2, $a2, -0x100
    /* 47004 80138C04 00340600 */  sll        $a2, $a2, 16
    /* 47008 80138C08 03340600 */  sra        $a2, $a2, 16
    /* 4700C 80138C0C 1000A2A7 */  sh         $v0, 0x10($sp)
    /* 47010 80138C10 1200A3A7 */  sh         $v1, 0x12($sp)
    /* 47014 80138C14 1400A7A7 */  sh         $a3, 0x14($sp)
    /* 47018 80138C18 C051060C */  jal        func_80194700
    /* 4701C 80138C1C 1600A8A7 */   sh        $t0, 0x16($sp)
    /* 47020 80138C20 E550060C */  jal        func_80194394
    /* 47024 80138C24 21200000 */   addu      $a0, $zero, $zero
    /* 47028 80138C28 21184002 */  addu       $v1, $s2, $zero
    /* 4702C 80138C2C 0100023C */  lui        $v0, (0x10000 >> 16)
    /* 47030 80138C30 031C0300 */  sra        $v1, $v1, 16
    /* 47034 80138C34 11006328 */  slti       $v1, $v1, 0x11
    /* 47038 80138C38 E8FF6014 */  bnez       $v1, .L80138BDC
    /* 4703C 80138C3C 21904202 */   addu      $s2, $s2, $v0
    /* 47040 80138C40 6499040C */  jal        func_80126590
    /* 47044 80138C44 00000000 */   nop
    /* 47048 80138C48 49E3040C */  jal        func_80138D24
    /* 4704C 80138C4C 00000000 */   nop
    /* 47050 80138C50 DDE3030C */  jal        func_800F8F74
    /* 47054 80138C54 491B0424 */   addiu     $a0, $zero, 0x1B49
    /* 47058 80138C58 8499040C */  jal        func_80126610
    /* 4705C 80138C5C 00000000 */   nop
    /* 47060 80138C60 2ED5030C */  jal        func_800F54B8
    /* 47064 80138C64 00000000 */   nop
    /* 47068 80138C68 91E5030C */  jal        func_800F9644
    /* 4706C 80138C6C 20000424 */   addiu     $a0, $zero, 0x20
    /* 47070 80138C70 04E5030C */  jal        func_800F9410
    /* 47074 80138C74 00000000 */   nop
    /* 47078 80138C78 84E0030C */  jal        func_800F8210
    /* 4707C 80138C7C 06020424 */   addiu     $a0, $zero, 0x206
    /* 47080 80138C80 04E5030C */  jal        func_800F9410
    /* 47084 80138C84 00000000 */   nop
    /* 47088 80138C88 84E0030C */  jal        func_800F8210
    /* 4708C 80138C8C 04020424 */   addiu     $a0, $zero, 0x204
    /* 47090 80138C90 98E5030C */  jal        func_800F9660
    /* 47094 80138C94 20000424 */   addiu     $a0, $zero, 0x20
    /* 47098 80138C98 2400BF8F */  lw         $ra, 0x24($sp)
    /* 4709C 80138C9C 2000B28F */  lw         $s2, 0x20($sp)
    /* 470A0 80138CA0 1C00B18F */  lw         $s1, 0x1C($sp)
    /* 470A4 80138CA4 1800B08F */  lw         $s0, 0x18($sp)
    /* 470A8 80138CA8 0800E003 */  jr         $ra
    /* 470AC 80138CAC 2800BD27 */   addiu     $sp, $sp, 0x28
endlabel func_80138A6C
