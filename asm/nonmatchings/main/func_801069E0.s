nonmatching func_801069E0, 0x13C

glabel func_801069E0
    /* 14DE0 801069E0 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 14DE4 801069E4 7F000424 */  addiu      $a0, $zero, 0x7F
    /* 14DE8 801069E8 1400BFAF */  sw         $ra, 0x14($sp)
    /* 14DEC 801069EC 8CD9030C */  jal        func_800F6630
    /* 14DF0 801069F0 1000B0AF */   sw        $s0, 0x10($sp)
    /* 14DF4 801069F4 0DD9030C */  jal        func_800F6434
    /* 14DF8 801069F8 02020424 */   addiu     $a0, $zero, 0x202
    /* 14DFC 801069FC 21004014 */  bnez       $v0, .L80106A84
    /* 14E00 80106A00 DA000424 */   addiu     $a0, $zero, 0xDA
    /* 14E04 80106A04 8CD9030C */  jal        func_800F6630
    /* 14E08 80106A08 DA000424 */   addiu     $a0, $zero, 0xDA
    /* 14E0C 80106A0C 4400838F */  lw         $v1, %gp_rel(D_8019ED40)($gp)
    /* 14E10 80106A10 00000000 */  nop
    /* 14E14 80106A14 00006290 */  lbu        $v0, 0x0($v1)
    /* 14E18 80106A18 00000000 */  nop
    /* 14E1C 80106A1C C0100200 */  sll        $v0, $v0, 3
    /* 14E20 80106A20 04D5030C */  jal        func_800F5410
    /* 14E24 80106A24 000062A0 */   sb        $v0, 0x0($v1)
    /* 14E28 80106A28 02D0030C */  jal        func_800F4008
    /* 14E2C 80106A2C 90000424 */   addiu     $a0, $zero, 0x90
    /* 14E30 80106A30 62E0030C */  jal        func_800F8188
    /* 14E34 80106A34 09420424 */   addiu     $a0, $zero, 0x4209
    /* 14E38 80106A38 DDE3030C */  jal        func_800F8F74
    /* 14E3C 80106A3C 0A420424 */   addiu     $a0, $zero, 0x420A
    /* 14E40 80106A40 1A80103C */  lui        $s0, %hi(D_8019FFE8)
    /* 14E44 80106A44 E8FF1026 */  addiu      $s0, $s0, %lo(D_8019FFE8)
    /* 14E48 80106A48 34000696 */  lhu        $a2, 0x34($s0)
    /* 14E4C 80106A4C 4400858F */  lw         $a1, %gp_rel(D_8019ED40)($gp)
    /* 14E50 80106A50 BB000424 */  addiu      $a0, $zero, 0xBB
    /* 14E54 80106A54 3E0006A6 */  sh         $a2, 0x3E($s0)
    /* 14E58 80106A58 0000A290 */  lbu        $v0, 0x0($a1)
    /* 14E5C 80106A5C 00010324 */  addiu      $v1, $zero, 0x100
    /* 14E60 80106A60 380003A6 */  sh         $v1, 0x38($s0)
    /* 14E64 80106A64 23104600 */  subu       $v0, $v0, $a2
    /* 14E68 80106A68 8CD9030C */  jal        func_800F6630
    /* 14E6C 80106A6C 420002A6 */   sh        $v0, 0x42($s0)
    /* 14E70 80106A70 4400828F */  lw         $v0, %gp_rel(D_8019ED40)($gp)
    /* 14E74 80106A74 00000000 */  nop
    /* 14E78 80106A78 00004390 */  lbu        $v1, 0x0($v0)
    /* 14E7C 80106A7C C31A0408 */  j          .L80106B0C
    /* 14E80 80106A80 3A0003A6 */   sh        $v1, 0x3A($s0)
  .L80106A84:
    /* 14E84 80106A84 1A80103C */  lui        $s0, %hi(D_8019FFE8)
    /* 14E88 80106A88 E8FF1026 */  addiu      $s0, $s0, %lo(D_8019FFE8)
    /* 14E8C 80106A8C 1A80013C */  lui        $at, %hi(D_8019EE64)
    /* 14E90 80106A90 64EE20A4 */  sh         $zero, %lo(D_8019EE64)($at)
    /* 14E94 80106A94 8CD9030C */  jal        func_800F6630
    /* 14E98 80106A98 460000A6 */   sh        $zero, 0x46($s0)
    /* 14E9C 80106A9C 4400838F */  lw         $v1, %gp_rel(D_8019ED40)($gp)
    /* 14EA0 80106AA0 00000000 */  nop
    /* 14EA4 80106AA4 00006290 */  lbu        $v0, 0x0($v1)
    /* 14EA8 80106AA8 00000000 */  nop
    /* 14EAC 80106AAC C0100200 */  sll        $v0, $v0, 3
    /* 14EB0 80106AB0 000062A0 */  sb         $v0, 0x0($v1)
    /* 14EB4 80106AB4 4400848F */  lw         $a0, %gp_rel(D_8019ED40)($gp)
    /* 14EB8 80106AB8 00000000 */  nop
    /* 14EBC 80106ABC 00008290 */  lbu        $v0, 0x0($a0)
    /* 14EC0 80106AC0 00000000 */  nop
    /* 14EC4 80106AC4 27100200 */  nor        $v0, $zero, $v0
    /* 14EC8 80106AC8 04D5030C */  jal        func_800F5410
    /* 14ECC 80106ACC 000082A0 */   sb        $v0, 0x0($a0)
    /* 14ED0 80106AD0 02D0030C */  jal        func_800F4008
    /* 14ED4 80106AD4 89000424 */   addiu     $a0, $zero, 0x89
    /* 14ED8 80106AD8 4400838F */  lw         $v1, %gp_rel(D_8019ED40)($gp)
    /* 14EDC 80106ADC 00000000 */  nop
    /* 14EE0 80106AE0 00006290 */  lbu        $v0, 0x0($v1)
    /* 14EE4 80106AE4 1A80013C */  lui        $at, %hi(D_8019EE6C)
    /* 14EE8 80106AE8 6CEE22A4 */  sh         $v0, %lo(D_8019EE6C)($at)
    /* 14EEC 80106AEC 00006590 */  lbu        $a1, 0x0($v1)
    /* 14EF0 80106AF0 42000296 */  lhu        $v0, 0x42($s0)
    /* 14EF4 80106AF4 81000424 */  addiu      $a0, $zero, 0x81
    /* 14EF8 80106AF8 4C0002A6 */  sh         $v0, 0x4C($s0)
    /* 14EFC 80106AFC 53D9030C */  jal        func_800F654C
    /* 14F00 80106B00 480005A6 */   sh        $a1, 0x48($s0)
    /* 14F04 80106B04 62E0030C */  jal        func_800F8188
    /* 14F08 80106B08 00420424 */   addiu     $a0, $zero, 0x4200
  .L80106B0C:
    /* 14F0C 80106B0C 1400BF8F */  lw         $ra, 0x14($sp)
    /* 14F10 80106B10 1000B08F */  lw         $s0, 0x10($sp)
    /* 14F14 80106B14 0800E003 */  jr         $ra
    /* 14F18 80106B18 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_801069E0
