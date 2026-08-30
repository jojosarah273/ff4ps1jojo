nonmatching func_80169A18, 0x264

glabel func_80169A18
    /* 77E18 80169A18 E0FFBD27 */  addiu      $sp, $sp, -0x20
    /* 77E1C 80169A1C 64000424 */  addiu      $a0, $zero, 0x64
    /* 77E20 80169A20 1800BFAF */  sw         $ra, 0x18($sp)
    /* 77E24 80169A24 1400B1AF */  sw         $s1, 0x14($sp)
    /* 77E28 80169A28 8CD9030C */  jal        func_800F6630
    /* 77E2C 80169A2C 1000B0AF */   sw        $s0, 0x10($sp)
    /* 77E30 80169A30 5DD5030C */  jal        func_800F5574
    /* 77E34 80169A34 01000424 */   addiu     $a0, $zero, 0x1
    /* 77E38 80169A38 F5D4030C */  jal        func_800F53D4
    /* 77E3C 80169A3C 00000000 */   nop
    /* 77E40 80169A40 1F004014 */  bnez       $v0, .L80169AC0
    /* 77E44 80169A44 00000000 */   nop
    /* 77E48 80169A48 5DD5030C */  jal        func_800F5574
    /* 77E4C 80169A4C 02000424 */   addiu     $a0, $zero, 0x2
    /* 77E50 80169A50 F5D4030C */  jal        func_800F53D4
    /* 77E54 80169A54 00000000 */   nop
    /* 77E58 80169A58 05004010 */  beqz       $v0, .L80169A70
    /* 77E5C 80169A5C 00000000 */   nop
    /* 77E60 80169A60 56A6050C */  jal        func_80169958
    /* 77E64 80169A64 1D80113C */   lui       $s1, %hi(D_801CFD68)
    /* 77E68 80169A68 F1A60508 */  j          .L80169BC4
    /* 77E6C 80169A6C 00000000 */   nop
  .L80169A70:
    /* 77E70 80169A70 77DC030C */  jal        func_800F71DC
    /* 77E74 80169A74 1E3D0424 */   addiu     $a0, $zero, 0x3D1E
    /* 77E78 80169A78 40E3030C */  jal        func_800F8D00
    /* 77E7C 80169A7C 1B7D0424 */   addiu     $a0, $zero, 0x7D1B
    /* 77E80 80169A80 77DC030C */  jal        func_800F71DC
    /* 77E84 80169A84 C5E90434 */   ori       $a0, $zero, 0xE9C5
    /* 77E88 80169A88 40E3030C */  jal        func_800F8D00
    /* 77E8C 80169A8C 197D0424 */   addiu     $a0, $zero, 0x7D19
    /* 77E90 80169A90 53D9030C */  jal        func_800F654C
    /* 77E94 80169A94 13000424 */   addiu     $a0, $zero, 0x13
    /* 77E98 80169A98 62E0030C */  jal        func_800F8188
    /* 77E9C 80169A9C 1E7D0424 */   addiu     $a0, $zero, 0x7D1E
    /* 77EA0 80169AA0 53D9030C */  jal        func_800F654C
    /* 77EA4 80169AA4 80000424 */   addiu     $a0, $zero, 0x80
    /* 77EA8 80169AA8 62E0030C */  jal        func_800F8188
    /* 77EAC 80169AAC 1D7D0424 */   addiu     $a0, $zero, 0x7D1D
    /* 77EB0 80169AB0 36B5050C */  jal        func_8016D4D8
    /* 77EB4 80169AB4 1D80113C */   lui       $s1, %hi(D_801CFD68)
    /* 77EB8 80169AB8 F1A60508 */  j          .L80169BC4
    /* 77EBC 80169ABC 00000000 */   nop
  .L80169AC0:
    /* 77EC0 80169AC0 C7E5030C */  jal        func_800F971C
    /* 77EC4 80169AC4 1D80113C */   lui       $s1, %hi(D_801CFD68)
    /* 77EC8 80169AC8 193D0424 */  addiu      $a0, $zero, 0x3D19
    /* 77ECC 80169ACC 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 77ED0 80169AD0 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 77ED4 80169AD4 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 77ED8 80169AD8 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 77EDC 80169ADC 00004394 */  lhu        $v1, 0x0($v0)
    /* 77EE0 80169AE0 40DD030C */  jal        func_800F7500
    /* 77EE4 80169AE4 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 77EE8 80169AE8 AFE3030C */  jal        func_800F8EBC
    /* 77EEC 80169AEC 06000424 */   addiu     $a0, $zero, 0x6
    /* 77EF0 80169AF0 53D9030C */  jal        func_800F654C
    /* 77EF4 80169AF4 06000424 */   addiu     $a0, $zero, 0x6
    /* 77EF8 80169AF8 93E0030C */  jal        func_800F824C
    /* 77EFC 80169AFC 02000424 */   addiu     $a0, $zero, 0x2
    /* 77F00 80169B00 53D9030C */  jal        func_800F654C
    /* 77F04 80169B04 01000424 */   addiu     $a0, $zero, 0x1
    /* 77F08 80169B08 93E0030C */  jal        func_800F824C
    /* 77F0C 80169B0C 04000424 */   addiu     $a0, $zero, 0x4
  .L80169B10:
    /* 77F10 80169B10 C7E5030C */  jal        func_800F971C
    /* 77F14 80169B14 00000000 */   nop
    /* 77F18 80169B18 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 77F1C 80169B1C 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 77F20 80169B20 1A80043C */  lui        $a0, %hi(D_8019ED58)
    /* 77F24 80169B24 58ED848C */  lw         $a0, %lo(D_8019ED58)($a0)
    /* 77F28 80169B28 00004394 */  lhu        $v1, 0x0($v0)
    /* 77F2C 80169B2C 00000000 */  nop
    /* 77F30 80169B30 000083A4 */  sh         $v1, 0x0($a0)
  .L80169B34:
    /* 77F34 80169B34 8CD9030C */  jal        func_800F6630
    /* 77F38 80169B38 04000424 */   addiu     $a0, $zero, 0x4
    /* 77F3C 80169B3C BBE0030C */  jal        func_800F82EC
    /* 77F40 80169B40 06000424 */   addiu     $a0, $zero, 0x6
    /* 77F44 80169B44 AFD8030C */  jal        func_800F62BC
    /* 77F48 80169B48 04000424 */   addiu     $a0, $zero, 0x4
    /* 77F4C 80169B4C EFD8030C */  jal        func_800F63BC
    /* 77F50 80169B50 00000000 */   nop
    /* 77F54 80169B54 D9D8030C */  jal        func_800F6364
    /* 77F58 80169B58 00000000 */   nop
    /* 77F5C 80169B5C A4D6030C */  jal        func_800F5A90
    /* 77F60 80169B60 05000424 */   addiu     $a0, $zero, 0x5
    /* 77F64 80169B64 F5D4030C */  jal        func_800F53D4
    /* 77F68 80169B68 00000000 */   nop
    /* 77F6C 80169B6C F1FF4010 */  beqz       $v0, .L80169B34
    /* 77F70 80169B70 00000000 */   nop
    /* 77F74 80169B74 91E5030C */  jal        func_800F9644
    /* 77F78 80169B78 20000424 */   addiu     $a0, $zero, 0x20
    /* 77F7C 80169B7C 96D9030C */  jal        func_800F6658
    /* 77F80 80169B80 06000424 */   addiu     $a0, $zero, 0x6
    /* 77F84 80169B84 04D5030C */  jal        func_800F5410
    /* 77F88 80169B88 00000000 */   nop
    /* 77F8C 80169B8C 19D0030C */  jal        func_800F4064
    /* 77F90 80169B90 80000424 */   addiu     $a0, $zero, 0x80
    /* 77F94 80169B94 9DE0030C */  jal        func_800F8274
    /* 77F98 80169B98 06000424 */   addiu     $a0, $zero, 0x6
    /* 77F9C 80169B9C C7E5030C */  jal        func_800F971C
    /* 77FA0 80169BA0 00000000 */   nop
    /* 77FA4 80169BA4 98E5030C */  jal        func_800F9660
    /* 77FA8 80169BA8 20000424 */   addiu     $a0, $zero, 0x20
    /* 77FAC 80169BAC 68D7030C */  jal        func_800F5DA0
    /* 77FB0 80169BB0 02000424 */   addiu     $a0, $zero, 0x2
    /* 77FB4 80169BB4 E3D6030C */  jal        func_800F5B8C
    /* 77FB8 80169BB8 02020424 */   addiu     $a0, $zero, 0x202
    /* 77FBC 80169BBC D4FF4014 */  bnez       $v0, .L80169B10
    /* 77FC0 80169BC0 00000000 */   nop
  .L80169BC4:
    /* 77FC4 80169BC4 C7E5030C */  jal        func_800F971C
    /* 77FC8 80169BC8 00000000 */   nop
    /* 77FCC 80169BCC 7AE0030C */  jal        func_800F81E8
    /* 77FD0 80169BD0 15210424 */   addiu     $a0, $zero, 0x2115
    /* 77FD4 80169BD4 1A80023C */  lui        $v0, %hi(D_8019ED40)
    /* 77FD8 80169BD8 40ED428C */  lw         $v0, %lo(D_8019ED40)($v0)
    /* 77FDC 80169BDC 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 77FE0 80169BE0 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 77FE4 80169BE4 00004390 */  lbu        $v1, 0x0($v0)
    /* 77FE8 80169BE8 00005090 */  lbu        $s0, 0x0($v0)
    /* 77FEC 80169BEC 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 77FF0 80169BF0 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 77FF4 80169BF4 001A0300 */  sll        $v1, $v1, 8
    /* 77FF8 80169BF8 00004494 */  lhu        $a0, 0x0($v0)
    /* 77FFC 80169BFC 25800302 */  or         $s0, $s0, $v1
    /* 78000 80169C00 0000A4A4 */  sh         $a0, 0x0($a1)
  .L80169C04:
    /* 78004 80169C04 DADA030C */  jal        func_800F6B68
    /* 78008 80169C08 193D0424 */   addiu     $a0, $zero, 0x3D19
    /* 7800C 80169C0C 40201000 */  sll        $a0, $s0, 1
    /* 78010 80169C10 01000226 */  addiu      $v0, $s0, 0x1
    /* 78014 80169C14 FFFF5030 */  andi       $s0, $v0, 0xFFFF
    /* 78018 80169C18 68FD2326 */  addiu      $v1, $s1, %lo(D_801CFD68)
    /* 7801C 80169C1C 21208300 */  addu       $a0, $a0, $v1
    /* 78020 80169C20 1A80053C */  lui        $a1, %hi(D_8019ED40)
    /* 78024 80169C24 40EDA58C */  lw         $a1, %lo(D_8019ED40)($a1)
    /* 78028 80169C28 00008294 */  lhu        $v0, 0x0($a0)
    /* 7802C 80169C2C 0000A390 */  lbu        $v1, 0x0($a1)
    /* 78030 80169C30 00FF4230 */  andi       $v0, $v0, 0xFF00
    /* 78034 80169C34 25186200 */  or         $v1, $v1, $v0
    /* 78038 80169C38 D9D8030C */  jal        func_800F6364
    /* 7803C 80169C3C 000083A4 */   sh        $v1, 0x0($a0)
    /* 78040 80169C40 56D6030C */  jal        func_800F5958
    /* 78044 80169C44 00400424 */   addiu     $a0, $zero, 0x4000
    /* 78048 80169C48 F5D4030C */  jal        func_800F53D4
    /* 7804C 80169C4C 00000000 */   nop
    /* 78050 80169C50 ECFF4010 */  beqz       $v0, .L80169C04
    /* 78054 80169C54 00000000 */   nop
    /* 78058 80169C58 53D9030C */  jal        func_800F654C
    /* 7805C 80169C5C 80000424 */   addiu     $a0, $zero, 0x80
    /* 78060 80169C60 7AE0030C */  jal        func_800F81E8
    /* 78064 80169C64 15210424 */   addiu     $a0, $zero, 0x2115
    /* 78068 80169C68 1800BF8F */  lw         $ra, 0x18($sp)
    /* 7806C 80169C6C 1400B18F */  lw         $s1, 0x14($sp)
    /* 78070 80169C70 1000B08F */  lw         $s0, 0x10($sp)
    /* 78074 80169C74 0800E003 */  jr         $ra
    /* 78078 80169C78 2000BD27 */   addiu     $sp, $sp, 0x20
endlabel func_80169A18
