nonmatching func_80190B44, 0x40C

glabel func_80190B44
    /* 9EF44 80190B44 1A80023C */  lui        $v0, %hi(D_8019B9F4)
    /* 9EF48 80190B48 F4B9428C */  lw         $v0, %lo(D_8019B9F4)($v0)
    /* 9EF4C 80190B4C C8FFBD27 */  addiu      $sp, $sp, -0x38
    /* 9EF50 80190B50 1800B0AF */  sw         $s0, 0x18($sp)
    /* 9EF54 80190B54 2180A000 */  addu       $s0, $a1, $zero
    /* 9EF58 80190B58 3000B6AF */  sw         $s6, 0x30($sp)
    /* 9EF5C 80190B5C 21B0C000 */  addu       $s6, $a2, $zero
    /* 9EF60 80190B60 2000B2AF */  sw         $s2, 0x20($sp)
    /* 9EF64 80190B64 2190E000 */  addu       $s2, $a3, $zero
    /* 9EF68 80190B68 1C00B1AF */  sw         $s1, 0x1C($sp)
    /* 9EF6C 80190B6C 21888000 */  addu       $s1, $a0, $zero
    /* 9EF70 80190B70 3400BFAF */  sw         $ra, 0x34($sp)
    /* 9EF74 80190B74 2C00B5AF */  sw         $s5, 0x2C($sp)
    /* 9EF78 80190B78 2800B4AF */  sw         $s4, 0x28($sp)
    /* 9EF7C 80190B7C 02004228 */  slti       $v0, $v0, 0x2
    /* 9EF80 80190B80 09004014 */  bnez       $v0, .L80190BA8
    /* 9EF84 80190B84 2400B3AF */   sw        $s3, 0x24($sp)
    /* 9EF88 80190B88 FF002232 */  andi       $v0, $s1, 0xFF
    /* 9EF8C 80190B8C 80100200 */  sll        $v0, $v0, 2
    /* 9EF90 80190B90 1A80053C */  lui        $a1, %hi(D_8019BA10)
    /* 9EF94 80190B94 2128A200 */  addu       $a1, $a1, $v0
    /* 9EF98 80190B98 10BAA58C */  lw         $a1, %lo(D_8019BA10)($a1)
    /* 9EF9C 80190B9C 0F80043C */  lui        $a0, %hi(D_800F35F8)
    /* 9EFA0 80190BA0 323C060C */  jal        func_8018F0C8
    /* 9EFA4 80190BA4 F8358424 */   addiu     $a0, $a0, %lo(D_800F35F8)
  .L80190BA8:
    /* 9EFA8 80190BA8 FF002232 */  andi       $v0, $s1, 0xFF
    /* 9EFAC 80190BAC 80180200 */  sll        $v1, $v0, 2
    /* 9EFB0 80190BB0 1A80023C */  lui        $v0, %hi(D_8019BC30)
    /* 9EFB4 80190BB4 21104300 */  addu       $v0, $v0, $v1
    /* 9EFB8 80190BB8 30BC428C */  lw         $v0, %lo(D_8019BC30)($v0)
    /* 9EFBC 80190BBC 00000000 */  nop
    /* 9EFC0 80190BC0 10004010 */  beqz       $v0, .L80190C04
    /* 9EFC4 80190BC4 21200000 */   addu      $a0, $zero, $zero
    /* 9EFC8 80190BC8 0E000016 */  bnez       $s0, .L80190C04
    /* 9EFCC 80190BCC 00000000 */   nop
    /* 9EFD0 80190BD0 1A80023C */  lui        $v0, %hi(D_8019B9F4)
    /* 9EFD4 80190BD4 F4B9428C */  lw         $v0, %lo(D_8019B9F4)($v0)
    /* 9EFD8 80190BD8 00000000 */  nop
    /* 9EFDC 80190BDC D2004018 */  blez       $v0, .L80190F28
    /* 9EFE0 80190BE0 FEFF0224 */   addiu     $v0, $zero, -0x2
    /* 9EFE4 80190BE4 1A80053C */  lui        $a1, %hi(D_8019BA10)
    /* 9EFE8 80190BE8 2128A300 */  addu       $a1, $a1, $v1
    /* 9EFEC 80190BEC 10BAA58C */  lw         $a1, %lo(D_8019BA10)($a1)
    /* 9EFF0 80190BF0 0F80043C */  lui        $a0, %hi(D_800F3600)
    /* 9EFF4 80190BF4 323C060C */  jal        func_8018F0C8
    /* 9EFF8 80190BF8 00368424 */   addiu     $a0, $a0, %lo(D_800F3600)
    /* 9EFFC 80190BFC CA430608 */  j          .L80190F28
    /* 9F000 80190C00 FEFF0224 */   addiu     $v0, $zero, -0x2
  .L80190C04:
    /* 9F004 80190C04 7F41060C */  jal        func_801905FC
    /* 9F008 80190C08 21280000 */   addu      $a1, $zero, $zero
    /* 9F00C 80190C0C FF002332 */  andi       $v1, $s1, 0xFF
    /* 9F010 80190C10 02000224 */  addiu      $v0, $zero, 0x2
    /* 9F014 80190C14 0D006214 */  bne        $v1, $v0, .L80190C4C
    /* 9F018 80190C18 0E000224 */   addiu     $v0, $zero, 0xE
    /* 9F01C 80190C1C 21200000 */  addu       $a0, $zero, $zero
    /* 9F020 80190C20 21100402 */  addu       $v0, $s0, $a0
  .L80190C24:
    /* 9F024 80190C24 00004290 */  lbu        $v0, 0x0($v0)
    /* 9F028 80190C28 1A80013C */  lui        $at, %hi(D_8019BA04)
    /* 9F02C 80190C2C 21082400 */  addu       $at, $at, $a0
    /* 9F030 80190C30 04BA22A0 */  sb         $v0, %lo(D_8019BA04)($at)
    /* 9F034 80190C34 01008424 */  addiu      $a0, $a0, 0x1
    /* 9F038 80190C38 04008228 */  slti       $v0, $a0, 0x4
    /* 9F03C 80190C3C F9FF4014 */  bnez       $v0, .L80190C24
    /* 9F040 80190C40 21100402 */   addu      $v0, $s0, $a0
    /* 9F044 80190C44 FF002332 */  andi       $v1, $s1, 0xFF
    /* 9F048 80190C48 0E000224 */  addiu      $v0, $zero, 0xE
  .L80190C4C:
    /* 9F04C 80190C4C 04006214 */  bne        $v1, $v0, .L80190C60
    /* 9F050 80190C50 00000000 */   nop
    /* 9F054 80190C54 00000292 */  lbu        $v0, 0x0($s0)
    /* 9F058 80190C58 1A80013C */  lui        $at, %hi(D_8019BA08)
    /* 9F05C 80190C5C 08BA22A0 */  sb         $v0, %lo(D_8019BA08)($at)
  .L80190C60:
    /* 9F060 80190C60 1A80053C */  lui        $a1, %hi(D_8019BCC8)
    /* 9F064 80190C64 C8BCA524 */  addiu      $a1, $a1, %lo(D_8019BCC8)
    /* 9F068 80190C68 80200300 */  sll        $a0, $v1, 2
    /* 9F06C 80190C6C 0000A0A0 */  sb         $zero, 0x0($a1)
    /* 9F070 80190C70 1A80023C */  lui        $v0, %hi(D_8019BB30)
    /* 9F074 80190C74 21104400 */  addu       $v0, $v0, $a0
    /* 9F078 80190C78 30BB428C */  lw         $v0, %lo(D_8019BB30)($v0)
    /* 9F07C 80190C7C 1A80033C */  lui        $v1, %hi(D_8019BB30)
    /* 9F080 80190C80 02004010 */  beqz       $v0, .L80190C8C
    /* 9F084 80190C84 30BB6324 */   addiu     $v1, $v1, %lo(D_8019BB30)
    /* 9F088 80190C88 0100A0A0 */  sb         $zero, 0x1($a1)
  .L80190C8C:
    /* 9F08C 80190C8C 1A80023C */  lui        $v0, %hi(D_8019BCB0)
    /* 9F090 80190C90 B0BC428C */  lw         $v0, %lo(D_8019BCB0)($v0)
    /* 9F094 80190C94 00000000 */  nop
    /* 9F098 80190C98 000040A0 */  sb         $zero, 0x0($v0)
    /* 9F09C 80190C9C 00016224 */  addiu      $v0, $v1, 0x100
    /* 9F0A0 80190CA0 21188200 */  addu       $v1, $a0, $v0
    /* 9F0A4 80190CA4 0000628C */  lw         $v0, 0x0($v1)
    /* 9F0A8 80190CA8 00000000 */  nop
    /* 9F0AC 80190CAC 0D004018 */  blez       $v0, .L80190CE4
    /* 9F0B0 80190CB0 21200000 */   addu      $a0, $zero, $zero
    /* 9F0B4 80190CB4 21286000 */  addu       $a1, $v1, $zero
    /* 9F0B8 80190CB8 21100402 */  addu       $v0, $s0, $a0
  .L80190CBC:
    /* 9F0BC 80190CBC 1A80033C */  lui        $v1, %hi(D_8019BCC0)
    /* 9F0C0 80190CC0 C0BC638C */  lw         $v1, %lo(D_8019BCC0)($v1)
    /* 9F0C4 80190CC4 00004290 */  lbu        $v0, 0x0($v0)
    /* 9F0C8 80190CC8 00000000 */  nop
    /* 9F0CC 80190CCC 000062A0 */  sb         $v0, 0x0($v1)
    /* 9F0D0 80190CD0 0000A28C */  lw         $v0, 0x0($a1)
    /* 9F0D4 80190CD4 01008424 */  addiu      $a0, $a0, 0x1
    /* 9F0D8 80190CD8 2A108200 */  slt        $v0, $a0, $v0
    /* 9F0DC 80190CDC F7FF4014 */  bnez       $v0, .L80190CBC
    /* 9F0E0 80190CE0 21100402 */   addu      $v0, $s0, $a0
  .L80190CE4:
    /* 9F0E4 80190CE4 1A80023C */  lui        $v0, %hi(D_8019BCBC)
    /* 9F0E8 80190CE8 BCBC428C */  lw         $v0, %lo(D_8019BCBC)($v0)
    /* 9F0EC 80190CEC 1A80013C */  lui        $at, %hi(D_8019BA09)
    /* 9F0F0 80190CF0 09BA31A0 */  sb         $s1, %lo(D_8019BA09)($at)
    /* 9F0F4 80190CF4 000051A0 */  sb         $s1, 0x0($v0)
    /* 9F0F8 80190CF8 8B004016 */  bnez       $s2, .L80190F28
    /* 9F0FC 80190CFC 21100000 */   addu      $v0, $zero, $zero
    /* 9F100 80190D00 3A4A060C */  jal        func_801928E8
    /* 9F104 80190D04 FFFF0424 */   addiu     $a0, $zero, -0x1
    /* 9F108 80190D08 C0034224 */  addiu      $v0, $v0, 0x3C0
    /* 9F10C 80190D0C 1A80043C */  lui        $a0, %hi(D_8019BCC8)
    /* 9F110 80190D10 C8BC8424 */  addiu      $a0, $a0, %lo(D_8019BCC8)
    /* 9F114 80190D14 2080013C */  lui        $at, %hi(D_801F8F28)
    /* 9F118 80190D18 288F22AC */  sw         $v0, %lo(D_801F8F28)($at)
    /* 9F11C 80190D1C 2080013C */  lui        $at, %hi(D_801F8F2C)
    /* 9F120 80190D20 2C8F20AC */  sw         $zero, %lo(D_801F8F2C)($at)
    /* 9F124 80190D24 00008390 */  lbu        $v1, 0x0($a0)
    /* 9F128 80190D28 0F80023C */  lui        $v0, %hi(D_800F3610)
    /* 9F12C 80190D2C 10364224 */  addiu      $v0, $v0, %lo(D_800F3610)
    /* 9F130 80190D30 2080013C */  lui        $at, %hi(D_801F8F30)
    /* 9F134 80190D34 308F22AC */  sw         $v0, %lo(D_801F8F30)($at)
    /* 9F138 80190D38 67006014 */  bnez       $v1, .L80190ED8
    /* 9F13C 80190D3C 2130C002 */   addu      $a2, $s6, $zero
    /* 9F140 80190D40 1A80153C */  lui        $s5, %hi(D_8019BA10)
    /* 9F144 80190D44 10BAB526 */  addiu      $s5, $s5, %lo(D_8019BA10)
    /* 9F148 80190D48 1A80133C */  lui        $s3, %hi(D_8019BA90)
    /* 9F14C 80190D4C 90BA7326 */  addiu      $s3, $s3, %lo(D_8019BA90)
    /* 9F150 80190D50 21908000 */  addu       $s2, $a0, $zero
    /* 9F154 80190D54 01005426 */  addiu      $s4, $s2, 0x1
  .L80190D58:
    /* 9F158 80190D58 3A4A060C */  jal        func_801928E8
    /* 9F15C 80190D5C FFFF0424 */   addiu     $a0, $zero, -0x1
    /* 9F160 80190D60 2080033C */  lui        $v1, %hi(D_801F8F28)
    /* 9F164 80190D64 288F638C */  lw         $v1, %lo(D_801F8F28)($v1)
    /* 9F168 80190D68 00000000 */  nop
    /* 9F16C 80190D6C 2A186200 */  slt        $v1, $v1, $v0
    /* 9F170 80190D70 0C006014 */  bnez       $v1, .L80190DA4
    /* 9F174 80190D74 00000000 */   nop
    /* 9F178 80190D78 2080023C */  lui        $v0, %hi(D_801F8F2C)
    /* 9F17C 80190D7C 2C8F428C */  lw         $v0, %lo(D_801F8F2C)($v0)
    /* 9F180 80190D80 00000000 */  nop
    /* 9F184 80190D84 21184000 */  addu       $v1, $v0, $zero
    /* 9F188 80190D88 01004224 */  addiu      $v0, $v0, 0x1
    /* 9F18C 80190D8C 2080013C */  lui        $at, %hi(D_801F8F2C)
    /* 9F190 80190D90 2C8F22AC */  sw         $v0, %lo(D_801F8F2C)($at)
    /* 9F194 80190D94 3C00023C */  lui        $v0, (0x3C0000 >> 16)
    /* 9F198 80190D98 2A104300 */  slt        $v0, $v0, $v1
    /* 9F19C 80190D9C 1B004010 */  beqz       $v0, .L80190E0C
    /* 9F1A0 80190DA0 00000000 */   nop
  .L80190DA4:
    /* 9F1A4 80190DA4 0F80043C */  lui        $a0, %hi(D_800F355C)
    /* 9F1A8 80190DA8 8845060C */  jal        func_80191620
    /* 9F1AC 80190DAC 5C358424 */   addiu     $a0, $a0, %lo(D_800F355C)
    /* 9F1B0 80190DB0 00004492 */  lbu        $a0, 0x0($s2)
    /* 9F1B4 80190DB4 01004292 */  lbu        $v0, 0x1($s2)
    /* 9F1B8 80190DB8 2080053C */  lui        $a1, %hi(D_801F8F30)
    /* 9F1BC 80190DBC 308FA58C */  lw         $a1, %lo(D_801F8F30)($a1)
    /* 9F1C0 80190DC0 80100200 */  sll        $v0, $v0, 2
    /* 9F1C4 80190DC4 21105300 */  addu       $v0, $v0, $s3
    /* 9F1C8 80190DC8 80200400 */  sll        $a0, $a0, 2
    /* 9F1CC 80190DCC 0000438C */  lw         $v1, 0x0($v0)
    /* 9F1D0 80190DD0 1A80023C */  lui        $v0, %hi(D_8019BA09)
    /* 9F1D4 80190DD4 09BA4290 */  lbu        $v0, %lo(D_8019BA09)($v0)
    /* 9F1D8 80190DD8 21209300 */  addu       $a0, $a0, $s3
    /* 9F1DC 80190DDC 80100200 */  sll        $v0, $v0, 2
    /* 9F1E0 80190DE0 21105500 */  addu       $v0, $v0, $s5
    /* 9F1E4 80190DE4 1000A3AF */  sw         $v1, 0x10($sp)
    /* 9F1E8 80190DE8 0000468C */  lw         $a2, 0x0($v0)
    /* 9F1EC 80190DEC 0000878C */  lw         $a3, 0x0($a0)
    /* 9F1F0 80190DF0 0F80043C */  lui        $a0, %hi(D_800F356C)
    /* 9F1F4 80190DF4 323C060C */  jal        func_8018F0C8
    /* 9F1F8 80190DF8 6C358424 */   addiu     $a0, $a0, %lo(D_800F356C)
    /* 9F1FC 80190DFC F643060C */  jal        func_80190FD8
    /* 9F200 80190E00 00000000 */   nop
    /* 9F204 80190E04 84430608 */  j          .L80190E10
    /* 9F208 80190E08 FFFF0224 */   addiu     $v0, $zero, -0x1
  .L80190E0C:
    /* 9F20C 80190E0C 21100000 */  addu       $v0, $zero, $zero
  .L80190E10:
    /* 9F210 80190E10 45004014 */  bnez       $v0, .L80190F28
    /* 9F214 80190E14 FFFF0224 */   addiu     $v0, $zero, -0x1
    /* 9F218 80190E18 134B060C */  jal        func_80192C4C
    /* 9F21C 80190E1C 00000000 */   nop
    /* 9F220 80190E20 29004010 */  beqz       $v0, .L80190EC8
    /* 9F224 80190E24 00000000 */   nop
    /* 9F228 80190E28 1A80023C */  lui        $v0, %hi(D_8019BCB0)
    /* 9F22C 80190E2C B0BC428C */  lw         $v0, %lo(D_8019BCB0)($v0)
    /* 9F230 80190E30 00000000 */  nop
    /* 9F234 80190E34 00004290 */  lbu        $v0, 0x0($v0)
    /* 9F238 80190E38 00000000 */  nop
    /* 9F23C 80190E3C 03005130 */  andi       $s1, $v0, 0x3
  .L80190E40:
    /* 9F240 80190E40 2640060C */  jal        func_80190098
    /* 9F244 80190E44 00000000 */   nop
    /* 9F248 80190E48 21804000 */  addu       $s0, $v0, $zero
    /* 9F24C 80190E4C 1A000012 */  beqz       $s0, .L80190EB8
    /* 9F250 80190E50 04000232 */   andi      $v0, $s0, 0x4
    /* 9F254 80190E54 0B004010 */  beqz       $v0, .L80190E84
    /* 9F258 80190E58 02000232 */   andi      $v0, $s0, 0x2
    /* 9F25C 80190E5C 1A80023C */  lui        $v0, %hi(D_8019B9F0)
    /* 9F260 80190E60 F0B9428C */  lw         $v0, %lo(D_8019B9F0)($v0)
    /* 9F264 80190E64 00000000 */  nop
    /* 9F268 80190E68 05004010 */  beqz       $v0, .L80190E80
    /* 9F26C 80190E6C 00000000 */   nop
    /* 9F270 80190E70 00008492 */  lbu        $a0, 0x0($s4)
    /* 9F274 80190E74 2080053C */  lui        $a1, %hi(D_801F8F18)
    /* 9F278 80190E78 09F84000 */  jalr       $v0
    /* 9F27C 80190E7C 188FA524 */   addiu     $a1, $a1, %lo(D_801F8F18)
  .L80190E80:
    /* 9F280 80190E80 02000232 */  andi       $v0, $s0, 0x2
  .L80190E84:
    /* 9F284 80190E84 EEFF4010 */  beqz       $v0, .L80190E40
    /* 9F288 80190E88 00000000 */   nop
    /* 9F28C 80190E8C 1A80023C */  lui        $v0, %hi(D_8019B9EC)
    /* 9F290 80190E90 ECB9428C */  lw         $v0, %lo(D_8019B9EC)($v0)
    /* 9F294 80190E94 00000000 */  nop
    /* 9F298 80190E98 E9FF4010 */  beqz       $v0, .L80190E40
    /* 9F29C 80190E9C 00000000 */   nop
    /* 9F2A0 80190EA0 00004492 */  lbu        $a0, 0x0($s2)
    /* 9F2A4 80190EA4 2080053C */  lui        $a1, %hi(D_801F8F10)
    /* 9F2A8 80190EA8 09F84000 */  jalr       $v0
    /* 9F2AC 80190EAC 108FA524 */   addiu     $a1, $a1, %lo(D_801F8F10)
    /* 9F2B0 80190EB0 90430608 */  j          .L80190E40
    /* 9F2B4 80190EB4 00000000 */   nop
  .L80190EB8:
    /* 9F2B8 80190EB8 1A80023C */  lui        $v0, %hi(D_8019BCB0)
    /* 9F2BC 80190EBC B0BC428C */  lw         $v0, %lo(D_8019BCB0)($v0)
    /* 9F2C0 80190EC0 00000000 */  nop
    /* 9F2C4 80190EC4 000051A0 */  sb         $s1, 0x0($v0)
  .L80190EC8:
    /* 9F2C8 80190EC8 00004292 */  lbu        $v0, 0x0($s2)
    /* 9F2CC 80190ECC 00000000 */  nop
    /* 9F2D0 80190ED0 A1FF4010 */  beqz       $v0, .L80190D58
    /* 9F2D4 80190ED4 2130C002 */   addu      $a2, $s6, $zero
  .L80190ED8:
    /* 9F2D8 80190ED8 2080043C */  lui        $a0, %hi(D_801F8F10)
    /* 9F2DC 80190EDC 108F8424 */  addiu      $a0, $a0, %lo(D_801F8F10)
    /* 9F2E0 80190EE0 0800C010 */  beqz       $a2, .L80190F04
    /* 9F2E4 80190EE4 07000324 */   addiu     $v1, $zero, 0x7
    /* 9F2E8 80190EE8 FFFF0524 */  addiu      $a1, $zero, -0x1
  .L80190EEC:
    /* 9F2EC 80190EEC 00008290 */  lbu        $v0, 0x0($a0)
    /* 9F2F0 80190EF0 01008424 */  addiu      $a0, $a0, 0x1
    /* 9F2F4 80190EF4 FFFF6324 */  addiu      $v1, $v1, -0x1
    /* 9F2F8 80190EF8 0000C2A0 */  sb         $v0, 0x0($a2)
    /* 9F2FC 80190EFC FBFF6514 */  bne        $v1, $a1, .L80190EEC
    /* 9F300 80190F00 0100C624 */   addiu     $a2, $a2, 0x1
  .L80190F04:
    /* 9F304 80190F04 21200000 */  addu       $a0, $zero, $zero
    /* 9F308 80190F08 1A80023C */  lui        $v0, %hi(D_8019BCC8)
    /* 9F30C 80190F0C C8BC4224 */  addiu      $v0, $v0, %lo(D_8019BCC8)
    /* 9F310 80190F10 00004390 */  lbu        $v1, 0x0($v0)
    /* 9F314 80190F14 05000224 */  addiu      $v0, $zero, 0x5
    /* 9F318 80190F18 03006214 */  bne        $v1, $v0, .L80190F28
    /* 9F31C 80190F1C 21108000 */   addu      $v0, $a0, $zero
    /* 9F320 80190F20 FFFF0424 */  addiu      $a0, $zero, -0x1
    /* 9F324 80190F24 21108000 */  addu       $v0, $a0, $zero
  .L80190F28:
    /* 9F328 80190F28 3400BF8F */  lw         $ra, 0x34($sp)
    /* 9F32C 80190F2C 3000B68F */  lw         $s6, 0x30($sp)
    /* 9F330 80190F30 2C00B58F */  lw         $s5, 0x2C($sp)
    /* 9F334 80190F34 2800B48F */  lw         $s4, 0x28($sp)
    /* 9F338 80190F38 2400B38F */  lw         $s3, 0x24($sp)
    /* 9F33C 80190F3C 2000B28F */  lw         $s2, 0x20($sp)
    /* 9F340 80190F40 1C00B18F */  lw         $s1, 0x1C($sp)
    /* 9F344 80190F44 1800B08F */  lw         $s0, 0x18($sp)
    /* 9F348 80190F48 0800E003 */  jr         $ra
    /* 9F34C 80190F4C 3800BD27 */   addiu     $sp, $sp, 0x38
endlabel func_80190B44
