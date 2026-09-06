nonmatching func_8019592C, 0x230

glabel func_8019592C
    /* A3D2C 8019592C E0FFBD27 */  addiu      $sp, $sp, -0x20
    /* A3D30 80195930 21408000 */  addu       $t0, $a0, $zero
    /* A3D34 80195934 1C00BFAF */  sw         $ra, 0x1C($sp)
    /* A3D38 80195938 1800B2AF */  sw         $s2, 0x18($sp)
    /* A3D3C 8019593C 1400B1AF */  sw         $s1, 0x14($sp)
    /* A3D40 80195940 1000B0AF */  sw         $s0, 0x10($sp)
    /* A3D44 80195944 04000385 */  lh         $v1, 0x4($t0)
    /* A3D48 80195948 04000495 */  lhu        $a0, 0x4($t0)
    /* A3D4C 8019594C 0C006004 */  bltz       $v1, .L80195980
    /* A3D50 80195950 2148A000 */   addu      $t1, $a1, $zero
    /* A3D54 80195954 1A80023C */  lui        $v0, %hi(D_8019DB58)
    /* A3D58 80195958 58DB4284 */  lh         $v0, %lo(D_8019DB58)($v0)
    /* A3D5C 8019595C 00000000 */  nop
    /* A3D60 80195960 FFFF4224 */  addiu      $v0, $v0, -0x1
    /* A3D64 80195964 2A104300 */  slt        $v0, $v0, $v1
    /* A3D68 80195968 1A80033C */  lui        $v1, %hi(D_8019DB58)
    /* A3D6C 8019596C 58DB6394 */  lhu        $v1, %lo(D_8019DB58)($v1)
    /* A3D70 80195970 04004014 */  bnez       $v0, .L80195984
    /* A3D74 80195974 FFFF6224 */   addiu     $v0, $v1, -0x1
    /* A3D78 80195978 61560608 */  j          .L80195984
    /* A3D7C 8019597C 21108000 */   addu      $v0, $a0, $zero
  .L80195980:
    /* A3D80 80195980 21100000 */  addu       $v0, $zero, $zero
  .L80195984:
    /* A3D84 80195984 06000385 */  lh         $v1, 0x6($t0)
    /* A3D88 80195988 06000495 */  lhu        $a0, 0x6($t0)
    /* A3D8C 8019598C 0C006004 */  bltz       $v1, .L801959C0
    /* A3D90 80195990 040002A5 */   sh        $v0, 0x4($t0)
    /* A3D94 80195994 1A80023C */  lui        $v0, %hi(D_8019DB5A)
    /* A3D98 80195998 5ADB4284 */  lh         $v0, %lo(D_8019DB5A)($v0)
    /* A3D9C 8019599C 00000000 */  nop
    /* A3DA0 801959A0 FFFF4224 */  addiu      $v0, $v0, -0x1
    /* A3DA4 801959A4 2A104300 */  slt        $v0, $v0, $v1
    /* A3DA8 801959A8 1A80033C */  lui        $v1, %hi(D_8019DB5A)
    /* A3DAC 801959AC 5ADB6394 */  lhu        $v1, %lo(D_8019DB5A)($v1)
    /* A3DB0 801959B0 04004014 */  bnez       $v0, .L801959C4
    /* A3DB4 801959B4 FFFF6324 */   addiu     $v1, $v1, -0x1
    /* A3DB8 801959B8 71560608 */  j          .L801959C4
    /* A3DBC 801959BC 21188000 */   addu      $v1, $a0, $zero
  .L801959C0:
    /* A3DC0 801959C0 21180000 */  addu       $v1, $zero, $zero
  .L801959C4:
    /* A3DC4 801959C4 00000295 */  lhu        $v0, 0x0($t0)
    /* A3DC8 801959C8 00000000 */  nop
    /* A3DCC 801959CC 3F004230 */  andi       $v0, $v0, 0x3F
    /* A3DD0 801959D0 06004014 */  bnez       $v0, .L801959EC
    /* A3DD4 801959D4 060003A5 */   sh        $v1, 0x6($t0)
    /* A3DD8 801959D8 04000295 */  lhu        $v0, 0x4($t0)
    /* A3DDC 801959DC 00000000 */  nop
    /* A3DE0 801959E0 3F004230 */  andi       $v0, $v0, 0x3F
    /* A3DE4 801959E4 37004010 */  beqz       $v0, .L80195AC4
    /* A3DE8 801959E8 FF05023C */   lui       $v0, (0x5FFFFFF >> 16)
  .L801959EC:
    /* A3DEC 801959EC FF00063C */  lui        $a2, (0xFFFFFF >> 16)
    /* A3DF0 801959F0 FFFFC634 */  ori        $a2, $a2, (0xFFFFFF & 0xFFFF)
    /* A3DF4 801959F4 FFE4043C */  lui        $a0, (0xE4FFFFFF >> 16)
    /* A3DF8 801959F8 FFFF8434 */  ori        $a0, $a0, (0xE4FFFFFF & 0xFFFF)
    /* A3DFC 801959FC FF03073C */  lui        $a3, (0x3FFFFFF >> 16)
    /* A3E00 80195A00 2080053C */  lui        $a1, %hi(D_801FD358)
    /* A3E04 80195A04 58D3A524 */  addiu      $a1, $a1, %lo(D_801FD358)
    /* A3E08 80195A08 2080103C */  lui        $s0, %hi(D_801FD380)
    /* A3E0C 80195A0C 80D31026 */  addiu      $s0, $s0, %lo(D_801FD380)
    /* A3E10 80195A10 24100602 */  and        $v0, $s0, $a2
    /* A3E14 80195A14 0008033C */  lui        $v1, (0x8000000 >> 16)
    /* A3E18 80195A18 25104300 */  or         $v0, $v0, $v1
    /* A3E1C 80195A1C 00E3113C */  lui        $s1, (0xE3000000 >> 16)
    /* A3E20 80195A20 00E5123C */  lui        $s2, (0xE5000000 >> 16)
    /* A3E24 80195A24 0000A2AC */  sw         $v0, 0x0($a1)
    /* A3E28 80195A28 00E6023C */  lui        $v0, (0xE6000000 >> 16)
    /* A3E2C 80195A2C 24302601 */  and        $a2, $t1, $a2
    /* A3E30 80195A30 0060033C */  lui        $v1, (0x60000000 >> 16)
    /* A3E34 80195A34 2530C300 */  or         $a2, $a2, $v1
    /* A3E38 80195A38 1000A2AC */  sw         $v0, 0x10($a1)
    /* A3E3C 80195A3C 1A80023C */  lui        $v0, %hi(D_8019DC5C)
    /* A3E40 80195A40 5CDC428C */  lw         $v0, %lo(D_8019DC5C)($v0)
    /* A3E44 80195A44 00E1033C */  lui        $v1, (0xE1000000 >> 16)
    /* A3E48 80195A48 0400B1AC */  sw         $s1, 0x4($a1)
    /* A3E4C 80195A4C 0800A4AC */  sw         $a0, 0x8($a1)
    /* A3E50 80195A50 0C00B2AC */  sw         $s2, 0xC($a1)
    /* A3E54 80195A54 0000448C */  lw         $a0, 0x0($v0)
    /* A3E58 80195A58 C2170900 */  srl        $v0, $t1, 31
    /* A3E5C 80195A5C 80120200 */  sll        $v0, $v0, 10
    /* A3E60 80195A60 25104300 */  or         $v0, $v0, $v1
    /* A3E64 80195A64 1800A6AC */  sw         $a2, 0x18($a1)
    /* A3E68 80195A68 FF078430 */  andi       $a0, $a0, 0x7FF
    /* A3E6C 80195A6C 25208200 */  or         $a0, $a0, $v0
    /* A3E70 80195A70 1400A4AC */  sw         $a0, 0x14($a1)
    /* A3E74 80195A74 0000028D */  lw         $v0, 0x0($t0)
    /* A3E78 80195A78 FFFFE734 */  ori        $a3, $a3, (0x3FFFFFF & 0xFFFF)
    /* A3E7C 80195A7C 1C00A2AC */  sw         $v0, 0x1C($a1)
    /* A3E80 80195A80 0400028D */  lw         $v0, 0x4($t0)
    /* A3E84 80195A84 03000424 */  addiu      $a0, $zero, 0x3
    /* A3E88 80195A88 000007AE */  sw         $a3, 0x0($s0)
    /* A3E8C 80195A8C 2F58060C */  jal        func_801960BC
    /* A3E90 80195A90 2000A2AC */   sw        $v0, 0x20($a1)
    /* A3E94 80195A94 04000424 */  addiu      $a0, $zero, 0x4
    /* A3E98 80195A98 25105100 */  or         $v0, $v0, $s1
    /* A3E9C 80195A9C 2F58060C */  jal        func_801960BC
    /* A3EA0 80195AA0 040002AE */   sw        $v0, 0x4($s0)
    /* A3EA4 80195AA4 05000424 */  addiu      $a0, $zero, 0x5
    /* A3EA8 80195AA8 00E4033C */  lui        $v1, (0xE4000000 >> 16)
    /* A3EAC 80195AAC 25104300 */  or         $v0, $v0, $v1
    /* A3EB0 80195AB0 2F58060C */  jal        func_801960BC
    /* A3EB4 80195AB4 080002AE */   sw        $v0, 0x8($s0)
    /* A3EB8 80195AB8 25105200 */  or         $v0, $v0, $s2
    /* A3EBC 80195ABC CD560608 */  j          .L80195B34
    /* A3EC0 80195AC0 0C0002AE */   sw        $v0, 0xC($s0)
  .L80195AC4:
    /* A3EC4 80195AC4 FFFF4234 */  ori        $v0, $v0, (0x5FFFFFF & 0xFFFF)
    /* A3EC8 80195AC8 FF00033C */  lui        $v1, (0xFFFFFF >> 16)
    /* A3ECC 80195ACC FFFF6334 */  ori        $v1, $v1, (0xFFFFFF & 0xFFFF)
    /* A3ED0 80195AD0 2080063C */  lui        $a2, %hi(D_801FD358)
    /* A3ED4 80195AD4 58D3C624 */  addiu      $a2, $a2, %lo(D_801FD358)
    /* A3ED8 80195AD8 0000C2AC */  sw         $v0, 0x0($a2)
    /* A3EDC 80195ADC 00E6023C */  lui        $v0, (0xE6000000 >> 16)
    /* A3EE0 80195AE0 24182301 */  and        $v1, $t1, $v1
    /* A3EE4 80195AE4 0002053C */  lui        $a1, (0x2000000 >> 16)
    /* A3EE8 80195AE8 0400C2AC */  sw         $v0, 0x4($a2)
    /* A3EEC 80195AEC 1A80023C */  lui        $v0, %hi(D_8019DC5C)
    /* A3EF0 80195AF0 5CDC428C */  lw         $v0, %lo(D_8019DC5C)($v0)
    /* A3EF4 80195AF4 25186500 */  or         $v1, $v1, $a1
    /* A3EF8 80195AF8 0000448C */  lw         $a0, 0x0($v0)
    /* A3EFC 80195AFC C2170900 */  srl        $v0, $t1, 31
    /* A3F00 80195B00 80120200 */  sll        $v0, $v0, 10
    /* A3F04 80195B04 0C00C3AC */  sw         $v1, 0xC($a2)
    /* A3F08 80195B08 00E1033C */  lui        $v1, (0xE1000000 >> 16)
    /* A3F0C 80195B0C 25104300 */  or         $v0, $v0, $v1
    /* A3F10 80195B10 FF078430 */  andi       $a0, $a0, 0x7FF
    /* A3F14 80195B14 25208200 */  or         $a0, $a0, $v0
    /* A3F18 80195B18 0800C4AC */  sw         $a0, 0x8($a2)
    /* A3F1C 80195B1C 0000028D */  lw         $v0, 0x0($t0)
    /* A3F20 80195B20 00000000 */  nop
    /* A3F24 80195B24 1000C2AC */  sw         $v0, 0x10($a2)
    /* A3F28 80195B28 0400028D */  lw         $v0, 0x4($t0)
    /* A3F2C 80195B2C 00000000 */  nop
    /* A3F30 80195B30 1400C2AC */  sw         $v0, 0x14($a2)
  .L80195B34:
    /* A3F34 80195B34 2080043C */  lui        $a0, %hi(D_801FD358)
    /* A3F38 80195B38 1D58060C */  jal        func_80196074
    /* A3F3C 80195B3C 58D38424 */   addiu     $a0, $a0, %lo(D_801FD358)
    /* A3F40 80195B40 21100000 */  addu       $v0, $zero, $zero
    /* A3F44 80195B44 1C00BF8F */  lw         $ra, 0x1C($sp)
    /* A3F48 80195B48 1800B28F */  lw         $s2, 0x18($sp)
    /* A3F4C 80195B4C 1400B18F */  lw         $s1, 0x14($sp)
    /* A3F50 80195B50 1000B08F */  lw         $s0, 0x10($sp)
    /* A3F54 80195B54 0800E003 */  jr         $ra
    /* A3F58 80195B58 2000BD27 */   addiu     $sp, $sp, 0x20
endlabel func_8019592C
