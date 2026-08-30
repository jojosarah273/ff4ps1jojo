nonmatching func_801449D0, 0x2A8

glabel func_801449D0
    /* 52DD0 801449D0 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 52DD4 801449D4 1000BFAF */  sw         $ra, 0x10($sp)
    /* 52DD8 801449D8 59D9030C */  jal        func_800F6564
    /* 52DDC 801449DC 13180424 */   addiu     $a0, $zero, 0x1813
    /* 52DE0 801449E0 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 52DE4 801449E4 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 52DE8 801449E8 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 52DEC 801449EC 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 52DF0 801449F0 00004394 */  lhu        $v1, 0x0($v0)
    /* 52DF4 801449F4 01190424 */  addiu      $a0, $zero, 0x1901
    /* 52DF8 801449F8 DADA030C */  jal        func_800F6B68
    /* 52DFC 801449FC 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 52E00 80144A00 92D0030C */  jal        func_800F4248
    /* 52E04 80144A04 03000424 */   addiu     $a0, $zero, 0x3
    /* 52E08 80144A08 93E0030C */  jal        func_800F824C
    /* 52E0C 80144A0C 01000424 */   addiu     $a0, $zero, 0x1
    /* 52E10 80144A10 C7E5030C */  jal        func_800F971C
    /* 52E14 80144A14 00000000 */   nop
    /* 52E18 80144A18 1A80033C */  lui        $v1, %hi(D_8019ED44)
    /* 52E1C 80144A1C 44ED638C */  lw         $v1, %lo(D_8019ED44)($v1)
    /* 52E20 80144A20 1A80043C */  lui        $a0, %hi(D_8019ED54)
    /* 52E24 80144A24 54ED848C */  lw         $a0, %lo(D_8019ED54)($a0)
    /* 52E28 80144A28 00006294 */  lhu        $v0, 0x0($v1)
    /* 52E2C 80144A2C 00000000 */  nop
    /* 52E30 80144A30 000082A4 */  sh         $v0, 0x0($a0)
    /* 52E34 80144A34 1A80033C */  lui        $v1, %hi(D_8019ED44)
    /* 52E38 80144A38 44ED638C */  lw         $v1, %lo(D_8019ED44)($v1)
    /* 52E3C 80144A3C 1A80043C */  lui        $a0, %hi(D_8019ED58)
    /* 52E40 80144A40 58ED848C */  lw         $a0, %lo(D_8019ED58)($a0)
    /* 52E44 80144A44 00006294 */  lhu        $v0, 0x0($v1)
    /* 52E48 80144A48 00000000 */  nop
    /* 52E4C 80144A4C 000082A4 */  sh         $v0, 0x0($a0)
  .L80144A50:
    /* 52E50 80144A50 59D9030C */  jal        func_800F6564
    /* 52E54 80144A54 C06C0424 */   addiu     $a0, $zero, 0x6CC0
    /* 52E58 80144A58 0DD9030C */  jal        func_800F6434
    /* 52E5C 80144A5C 02000424 */   addiu     $a0, $zero, 0x2
    /* 52E60 80144A60 13004014 */  bnez       $v0, .L80144AB0
    /* 52E64 80144A64 00000000 */   nop
    /* 52E68 80144A68 59D9030C */  jal        func_800F6564
    /* 52E6C 80144A6C 46F40434 */   ori       $a0, $zero, 0xF446
    /* 52E70 80144A70 0DD9030C */  jal        func_800F6434
    /* 52E74 80144A74 02000424 */   addiu     $a0, $zero, 0x2
    /* 52E78 80144A78 13004014 */  bnez       $v0, .L80144AC8
    /* 52E7C 80144A7C 00000000 */   nop
  .L80144A80:
    /* 52E80 80144A80 DADA030C */  jal        func_800F6B68
    /* 52E84 80144A84 E6EB0434 */   ori       $a0, $zero, 0xEBE6
    /* 52E88 80144A88 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 52E8C 80144A8C 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 52E90 80144A90 00000000 */  nop
    /* 52E94 80144A94 00006290 */  lbu        $v0, 0x0($v1)
    /* 52E98 80144A98 40030424 */  addiu      $a0, $zero, 0x340
    /* 52E9C 80144A9C 27100200 */  nor        $v0, $zero, $v0
    /* 52EA0 80144AA0 58E2030C */  jal        func_800F8960
    /* 52EA4 80144AA4 000062A0 */   sb        $v0, 0x0($v1)
    /* 52EA8 80144AA8 B6120508 */  j          .L80144AD8
    /* 52EAC 80144AAC 00000000 */   nop
  .L80144AB0:
    /* 52EB0 80144AB0 59D9030C */  jal        func_800F6564
    /* 52EB4 80144AB4 46F40434 */   ori       $a0, $zero, 0xF446
    /* 52EB8 80144AB8 0DD9030C */  jal        func_800F6434
    /* 52EBC 80144ABC 02000424 */   addiu     $a0, $zero, 0x2
    /* 52EC0 80144AC0 EFFF4014 */  bnez       $v0, .L80144A80
    /* 52EC4 80144AC4 00000000 */   nop
  .L80144AC8:
    /* 52EC8 80144AC8 DADA030C */  jal        func_800F6B68
    /* 52ECC 80144ACC E6EB0434 */   ori       $a0, $zero, 0xEBE6
    /* 52ED0 80144AD0 58E2030C */  jal        func_800F8960
    /* 52ED4 80144AD4 40030424 */   addiu     $a0, $zero, 0x340
  .L80144AD8:
    /* 52ED8 80144AD8 DADA030C */  jal        func_800F6B68
    /* 52EDC 80144ADC 76EC0434 */   ori       $a0, $zero, 0xEC76
    /* 52EE0 80144AE0 04D5030C */  jal        func_800F5410
    /* 52EE4 80144AE4 00000000 */   nop
    /* 52EE8 80144AE8 0FCF030C */  jal        func_800F3C3C
    /* 52EEC 80144AEC 01000424 */   addiu     $a0, $zero, 0x1
    /* 52EF0 80144AF0 CECF030C */  jal        func_800F3F38
    /* 52EF4 80144AF4 21204000 */   addu      $a0, $v0, $zero
    /* 52EF8 80144AF8 1A80023C */  lui        $v0, %hi(D_8019ED54)
    /* 52EFC 80144AFC 54ED428C */  lw         $v0, %lo(D_8019ED54)($v0)
    /* 52F00 80144B00 00000000 */  nop
    /* 52F04 80144B04 00004394 */  lhu        $v1, 0x0($v0)
    /* 52F08 80144B08 77EC0434 */  ori        $a0, $zero, 0xEC77
    /* 52F0C 80144B0C C1CE030C */  jal        func_800F3B04
    /* 52F10 80144B10 21206400 */   addu      $a0, $v1, $a0
    /* 52F14 80144B14 CECF030C */  jal        func_800F3F38
    /* 52F18 80144B18 21204000 */   addu      $a0, $v0, $zero
    /* 52F1C 80144B1C 58E2030C */  jal        func_800F8960
    /* 52F20 80144B20 41030424 */   addiu     $a0, $zero, 0x341
    /* 52F24 80144B24 D9D8030C */  jal        func_800F6364
    /* 52F28 80144B28 00000000 */   nop
    /* 52F2C 80144B2C D9D8030C */  jal        func_800F6364
    /* 52F30 80144B30 00000000 */   nop
    /* 52F34 80144B34 EFD8030C */  jal        func_800F63BC
    /* 52F38 80144B38 00000000 */   nop
    /* 52F3C 80144B3C EFD8030C */  jal        func_800F63BC
    /* 52F40 80144B40 00000000 */   nop
    /* 52F44 80144B44 EFD8030C */  jal        func_800F63BC
    /* 52F48 80144B48 00000000 */   nop
    /* 52F4C 80144B4C EFD8030C */  jal        func_800F63BC
    /* 52F50 80144B50 00000000 */   nop
    /* 52F54 80144B54 56D6030C */  jal        func_800F5958
    /* 52F58 80144B58 78000424 */   addiu     $a0, $zero, 0x78
    /* 52F5C 80144B5C F5D4030C */  jal        func_800F53D4
    /* 52F60 80144B60 00000000 */   nop
    /* 52F64 80144B64 BAFF4010 */  beqz       $v0, .L80144A50
    /* 52F68 80144B68 00000000 */   nop
    /* 52F6C 80144B6C C7E5030C */  jal        func_800F971C
    /* 52F70 80144B70 00000000 */   nop
    /* 52F74 80144B74 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 52F78 80144B78 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 52F7C 80144B7C 1A80043C */  lui        $a0, %hi(D_8019ED58)
    /* 52F80 80144B80 58ED848C */  lw         $a0, %lo(D_8019ED58)($a0)
    /* 52F84 80144B84 00004394 */  lhu        $v1, 0x0($v0)
    /* 52F88 80144B88 00000000 */  nop
    /* 52F8C 80144B8C 000083A4 */  sh         $v1, 0x0($a0)
  .L80144B90:
    /* 52F90 80144B90 1A80033C */  lui        $v1, %hi(D_8019ED60)
    /* 52F94 80144B94 60ED638C */  lw         $v1, %lo(D_8019ED60)($v1)
    /* 52F98 80144B98 1A80043C */  lui        $a0, %hi(D_8019ED40)
    /* 52F9C 80144B9C 40ED848C */  lw         $a0, %lo(D_8019ED40)($a0)
    /* 52FA0 80144BA0 00006290 */  lbu        $v0, 0x0($v1)
    /* 52FA4 80144BA4 00000000 */  nop
    /* 52FA8 80144BA8 000082A0 */  sb         $v0, 0x0($a0)
    /* 52FAC 80144BAC 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 52FB0 80144BB0 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 52FB4 80144BB4 00000000 */  nop
    /* 52FB8 80144BB8 00006290 */  lbu        $v0, 0x0($v1)
    /* 52FBC 80144BBC 00000000 */  nop
    /* 52FC0 80144BC0 C2100200 */  srl        $v0, $v0, 3
    /* 52FC4 80144BC4 000062A0 */  sb         $v0, 0x0($v1)
    /* 52FC8 80144BC8 1A80043C */  lui        $a0, %hi(D_8019ED44)
    /* 52FCC 80144BCC 44ED848C */  lw         $a0, %lo(D_8019ED44)($a0)
    /* 52FD0 80144BD0 1A80033C */  lui        $v1, %hi(D_8019ED54)
    /* 52FD4 80144BD4 54ED638C */  lw         $v1, %lo(D_8019ED54)($v1)
    /* 52FD8 80144BD8 00008294 */  lhu        $v0, 0x0($a0)
    /* 52FDC 80144BDC E7EB0434 */  ori        $a0, $zero, 0xEBE7
    /* 52FE0 80144BE0 5CDB030C */  jal        func_800F6D70
    /* 52FE4 80144BE4 000062A4 */   sh        $v0, 0x0($v1)
    /* 52FE8 80144BE8 19DE030C */  jal        func_800F7864
    /* 52FEC 80144BEC 00000000 */   nop
    /* 52FF0 80144BF0 BADD030C */  jal        func_800F76E8
    /* 52FF4 80144BF4 00000000 */   nop
    /* 52FF8 80144BF8 1A80023C */  lui        $v0, %hi(D_8019ED54)
    /* 52FFC 80144BFC 54ED428C */  lw         $v0, %lo(D_8019ED54)($v0)
    /* 53000 80144C00 00000000 */  nop
    /* 53004 80144C04 00004494 */  lhu        $a0, 0x0($v0)
    /* 53008 80144C08 C1CE030C */  jal        func_800F3B04
    /* 5300C 80144C0C 04058424 */   addiu     $a0, $a0, 0x504
    /* 53010 80144C10 32DF030C */  jal        func_800F7CC8
    /* 53014 80144C14 21204000 */   addu      $a0, $v0, $zero
    /* 53018 80144C18 20D5030C */  jal        func_800F5480
    /* 5301C 80144C1C 00000000 */   nop
    /* 53020 80144C20 1A80023C */  lui        $v0, %hi(D_8019ED54)
    /* 53024 80144C24 54ED428C */  lw         $v0, %lo(D_8019ED54)($v0)
    /* 53028 80144C28 00000000 */  nop
    /* 5302C 80144C2C 00004494 */  lhu        $a0, 0x0($v0)
    /* 53030 80144C30 C1CE030C */  jal        func_800F3B04
    /* 53034 80144C34 04058424 */   addiu     $a0, $a0, 0x504
    /* 53038 80144C38 32DF030C */  jal        func_800F7CC8
    /* 5303C 80144C3C 21204000 */   addu      $a0, $v0, $zero
    /* 53040 80144C40 EFD8030C */  jal        func_800F63BC
    /* 53044 80144C44 00000000 */   nop
    /* 53048 80144C48 EFD8030C */  jal        func_800F63BC
    /* 5304C 80144C4C 00000000 */   nop
    /* 53050 80144C50 A4D6030C */  jal        func_800F5A90
    /* 53054 80144C54 78000424 */   addiu     $a0, $zero, 0x78
    /* 53058 80144C58 F5D4030C */  jal        func_800F53D4
    /* 5305C 80144C5C 00000000 */   nop
    /* 53060 80144C60 CBFF4010 */  beqz       $v0, .L80144B90
    /* 53064 80144C64 00000000 */   nop
    /* 53068 80144C68 1000BF8F */  lw         $ra, 0x10($sp)
    /* 5306C 80144C6C 00000000 */  nop
    /* 53070 80144C70 0800E003 */  jr         $ra
    /* 53074 80144C74 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_801449D0
