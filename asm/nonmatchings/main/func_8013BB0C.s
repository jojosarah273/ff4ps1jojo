nonmatching func_8013BB0C, 0x1F8

glabel func_8013BB0C
    /* 49F0C 8013BB0C D8FFBD27 */  addiu      $sp, $sp, -0x28
    /* 49F10 8013BB10 E0FF0434 */  ori        $a0, $zero, 0xFFE0
    /* 49F14 8013BB14 2400BFAF */  sw         $ra, 0x24($sp)
    /* 49F18 8013BB18 2000B2AF */  sw         $s2, 0x20($sp)
    /* 49F1C 8013BB1C 1C00B1AF */  sw         $s1, 0x1C($sp)
    /* 49F20 8013BB20 77DC030C */  jal        func_800F71DC
    /* 49F24 8013BB24 1800B0AF */   sw        $s0, 0x18($sp)
    /* 49F28 8013BB28 5BE3030C */  jal        func_800F8D6C
    /* 49F2C 8013BB2C 93000424 */   addiu     $a0, $zero, 0x93
    /* 49F30 8013BB30 77DC030C */  jal        func_800F71DC
    /* 49F34 8013BB34 88FF0434 */   ori       $a0, $zero, 0xFF88
    /* 49F38 8013BB38 5BE3030C */  jal        func_800F8D6C
    /* 49F3C 8013BB3C 9F000424 */   addiu     $a0, $zero, 0x9F
    /* 49F40 8013BB40 2B84040C */  jal        func_801210AC
    /* 49F44 8013BB44 0100123C */   lui       $s2, (0x10000 >> 16)
    /* 49F48 8013BB48 E5F2040C */  jal        func_8013CB94
    /* 49F4C 8013BB4C 1D80103C */   lui       $s0, %hi(D_801D3D68)
    /* 49F50 8013BB50 EF83040C */  jal        func_80120FBC
    /* 49F54 8013BB54 683D1026 */   addiu     $s0, $s0, %lo(D_801D3D68)
    /* 49F58 8013BB58 77DC030C */  jal        func_800F71DC
    /* 49F5C 8013BB5C 00ED0434 */   ori       $a0, $zero, 0xED00
    /* 49F60 8013BB60 40E3030C */  jal        func_800F8D00
    /* 49F64 8013BB64 1D1B0424 */   addiu     $a0, $zero, 0x1B1D
    /* 49F68 8013BB68 90D8030C */  jal        func_800F6240
    /* 49F6C 8013BB6C C61B0424 */   addiu     $a0, $zero, 0x1BC6
    /* 49F70 8013BB70 1AAA040C */  jal        func_8012A868
    /* 49F74 8013BB74 00000000 */   nop
    /* 49F78 8013BB78 C783040C */  jal        func_80120F1C
    /* 49F7C 8013BB7C 00000000 */   nop
    /* 49F80 8013BB80 1A80023C */  lui        $v0, %hi(D_80199262)
    /* 49F84 8013BB84 62924494 */  lhu        $a0, %lo(D_80199262)($v0)
    /* 49F88 8013BB88 40DD030C */  jal        func_800F7500
    /* 49F8C 8013BB8C 00000000 */   nop
    /* 49F90 8013BB90 CC7B040C */  jal        func_8011EF30
    /* 49F94 8013BB94 00000000 */   nop
    /* 49F98 8013BB98 8B83040C */  jal        func_80120E2C
    /* 49F9C 8013BB9C 00000000 */   nop
    /* 49FA0 8013BBA0 B0AA040C */  jal        func_8012AAC0
    /* 49FA4 8013BBA4 00000000 */   nop
    /* 49FA8 8013BBA8 CC98040C */  jal        func_80126330
    /* 49FAC 8013BBAC 00000000 */   nop
    /* 49FB0 8013BBB0 9FBA050C */  jal        func_8016EA7C
    /* 49FB4 8013BBB4 00000000 */   nop
    /* 49FB8 8013BBB8 EEE3030C */  jal        func_800F8FB8
    /* 49FBC 8013BBBC 60000424 */   addiu     $a0, $zero, 0x60
    /* 49FC0 8013BBC0 21200002 */  addu       $a0, $s0, $zero
    /* 49FC4 8013BBC4 00020524 */  addiu      $a1, $zero, 0x200
    /* 49FC8 8013BBC8 21300000 */  addu       $a2, $zero, $zero
    /* 49FCC 8013BBCC 3EFE050C */  jal        func_8017F8F8
    /* 49FD0 8013BBD0 21380000 */   addu      $a3, $zero, $zero
    /* 49FD4 8013BBD4 21200002 */  addu       $a0, $s0, $zero
    /* 49FD8 8013BBD8 00020524 */  addiu      $a1, $zero, 0x200
    /* 49FDC 8013BBDC 21300000 */  addu       $a2, $zero, $zero
    /* 49FE0 8013BBE0 3EFE050C */  jal        func_8017F8F8
    /* 49FE4 8013BBE4 11000724 */   addiu     $a3, $zero, 0x11
    /* 49FE8 8013BBE8 21200002 */  addu       $a0, $s0, $zero
    /* 49FEC 8013BBEC 00020524 */  addiu      $a1, $zero, 0x200
    /* 49FF0 8013BBF0 21300000 */  addu       $a2, $zero, $zero
    /* 49FF4 8013BBF4 3EFE050C */  jal        func_8017F8F8
    /* 49FF8 8013BBF8 12000724 */   addiu     $a3, $zero, 0x12
    /* 49FFC 8013BBFC 00400426 */  addiu      $a0, $s0, 0x4000
    /* 4A000 8013BC00 00030524 */  addiu      $a1, $zero, 0x300
    /* 4A004 8013BC04 21300000 */  addu       $a2, $zero, $zero
    /* 4A008 8013BC08 3EFE050C */  jal        func_8017F8F8
    /* 4A00C 8013BC0C FFFF0724 */   addiu     $a3, $zero, -0x1
    /* 4A010 8013BC10 1A80023C */  lui        $v0, %hi(D_8019A7FC)
    /* 4A014 8013BC14 FCA75124 */  addiu      $s1, $v0, %lo(D_8019A7FC)
    /* 4A018 8013BC18 1A80033C */  lui        $v1, %hi(D_8019A774)
    /* 4A01C 8013BC1C 74A77024 */  addiu      $s0, $v1, %lo(D_8019A774)
    /* 4A020 8013BC20 1A80013C */  lui        $at, %hi(D_8019EE30)
    /* 4A024 8013BC24 30EE20A4 */  sh         $zero, %lo(D_8019EE30)($at)
    /* 4A028 8013BC28 1A80013C */  lui        $at, %hi(D_8019EE2E)
    /* 4A02C 8013BC2C 2EEE20A4 */  sh         $zero, %lo(D_8019EE2E)($at)
    /* 4A030 8013BC30 1A80013C */  lui        $at, %hi(D_8019EE2C)
    /* 4A034 8013BC34 2CEE20A4 */  sh         $zero, %lo(D_8019EE2C)($at)
  .L8013BC38:
    /* 4A038 8013BC38 1000A427 */  addiu      $a0, $sp, 0x10
    /* 4A03C 8013BC3C 00002586 */  lh         $a1, 0x0($s1)
    /* 4A040 8013BC40 02002696 */  lhu        $a2, 0x2($s1)
    /* 4A044 8013BC44 04003126 */  addiu      $s1, $s1, 0x4
    /* 4A048 8013BC48 00000296 */  lhu        $v0, 0x0($s0)
    /* 4A04C 8013BC4C 02000396 */  lhu        $v1, 0x2($s0)
    /* 4A050 8013BC50 04000796 */  lhu        $a3, 0x4($s0)
    /* 4A054 8013BC54 06000896 */  lhu        $t0, 0x6($s0)
    /* 4A058 8013BC58 08001026 */  addiu      $s0, $s0, 0x8
    /* 4A05C 8013BC5C 00FFC624 */  addiu      $a2, $a2, -0x100
    /* 4A060 8013BC60 00340600 */  sll        $a2, $a2, 16
    /* 4A064 8013BC64 03340600 */  sra        $a2, $a2, 16
    /* 4A068 8013BC68 1000A2A7 */  sh         $v0, 0x10($sp)
    /* 4A06C 8013BC6C 1200A3A7 */  sh         $v1, 0x12($sp)
    /* 4A070 8013BC70 1400A7A7 */  sh         $a3, 0x14($sp)
    /* 4A074 8013BC74 C051060C */  jal        func_80194700
    /* 4A078 8013BC78 1600A8A7 */   sh        $t0, 0x16($sp)
    /* 4A07C 8013BC7C E550060C */  jal        func_80194394
    /* 4A080 8013BC80 21200000 */   addu      $a0, $zero, $zero
    /* 4A084 8013BC84 21184002 */  addu       $v1, $s2, $zero
    /* 4A088 8013BC88 0100023C */  lui        $v0, (0x10000 >> 16)
    /* 4A08C 8013BC8C 031C0300 */  sra        $v1, $v1, 16
    /* 4A090 8013BC90 11006328 */  slti       $v1, $v1, 0x11
    /* 4A094 8013BC94 E8FF6014 */  bnez       $v1, .L8013BC38
    /* 4A098 8013BC98 21904202 */   addu      $s2, $s2, $v0
    /* 4A09C 8013BC9C 6499040C */  jal        func_80126590
    /* 4A0A0 8013BCA0 00000000 */   nop
  .L8013BCA4:
    /* 4A0A4 8013BCA4 BFF0040C */  jal        func_8013C2FC
    /* 4A0A8 8013BCA8 00000000 */   nop
    /* 4A0AC 8013BCAC 8CD9030C */  jal        func_800F6630
    /* 4A0B0 8013BCB0 60000424 */   addiu     $a0, $zero, 0x60
    /* 4A0B4 8013BCB4 0DD9030C */  jal        func_800F6434
    /* 4A0B8 8013BCB8 02000424 */   addiu     $a0, $zero, 0x2
    /* 4A0BC 8013BCBC 09004014 */  bnez       $v0, .L8013BCE4
    /* 4A0C0 8013BCC0 00000000 */   nop
    /* 4A0C4 8013BCC4 9CF2040C */  jal        func_8013CA70
    /* 4A0C8 8013BCC8 00000000 */   nop
    /* 4A0CC 8013BCCC F0D4030C */  jal        func_800F53C0
    /* 4A0D0 8013BCD0 00000000 */   nop
    /* 4A0D4 8013BCD4 F3FF4014 */  bnez       $v0, .L8013BCA4
    /* 4A0D8 8013BCD8 00000000 */   nop
    /* 4A0DC 8013BCDC 3BEF0408 */  j          .L8013BCEC
    /* 4A0E0 8013BCE0 00000000 */   nop
  .L8013BCE4:
    /* 4A0E4 8013BCE4 41EF040C */  jal        func_8013BD04
    /* 4A0E8 8013BCE8 00000000 */   nop
  .L8013BCEC:
    /* 4A0EC 8013BCEC 2400BF8F */  lw         $ra, 0x24($sp)
    /* 4A0F0 8013BCF0 2000B28F */  lw         $s2, 0x20($sp)
    /* 4A0F4 8013BCF4 1C00B18F */  lw         $s1, 0x1C($sp)
    /* 4A0F8 8013BCF8 1800B08F */  lw         $s0, 0x18($sp)
    /* 4A0FC 8013BCFC 0800E003 */  jr         $ra
    /* 4A100 8013BD00 2800BD27 */   addiu     $sp, $sp, 0x28
endlabel func_8013BB0C
