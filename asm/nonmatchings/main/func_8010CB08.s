nonmatching func_8010CB08, 0x5D0

glabel func_8010CB08
    /* 1AF08 8010CB08 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 1AF0C 8010CB0C 1000BFAF */  sw         $ra, 0x10($sp)
    /* 1AF10 8010CB10 DDE3030C */  jal        func_800F8F74
    /* 1AF14 8010CB14 FD080424 */   addiu     $a0, $zero, 0x8FD
    /* 1AF18 8010CB18 9334040C */  jal        func_8010D24C
    /* 1AF1C 8010CB1C 00000000 */   nop
    /* 1AF20 8010CB20 59D9030C */  jal        func_800F6564
    /* 1AF24 8010CB24 DE0F0424 */   addiu     $a0, $zero, 0xFDE
    /* 1AF28 8010CB28 EEE3030C */  jal        func_800F8FB8
    /* 1AF2C 8010CB2C 3E000424 */   addiu     $a0, $zero, 0x3E
    /* 1AF30 8010CB30 50D4030C */  jal        func_800F5140
    /* 1AF34 8010CB34 00000000 */   nop
    /* 1AF38 8010CB38 D3D3030C */  jal        func_800F4F4C
    /* 1AF3C 8010CB3C 00000000 */   nop
    /* 1AF40 8010CB40 0FCF030C */  jal        func_800F3C3C
    /* 1AF44 8010CB44 3E000424 */   addiu     $a0, $zero, 0x3E
    /* 1AF48 8010CB48 90DE030C */  jal        func_800F7A40
    /* 1AF4C 8010CB4C 21204000 */   addu      $a0, $v0, $zero
    /* 1AF50 8010CB50 93E0030C */  jal        func_800F824C
    /* 1AF54 8010CB54 3D000424 */   addiu     $a0, $zero, 0x3D
    /* 1AF58 8010CB58 59D9030C */  jal        func_800F6564
    /* 1AF5C 8010CB5C E50F0424 */   addiu     $a0, $zero, 0xFE5
    /* 1AF60 8010CB60 0DD9030C */  jal        func_800F6434
    /* 1AF64 8010CB64 80000424 */   addiu     $a0, $zero, 0x80
    /* 1AF68 8010CB68 07004014 */  bnez       $v0, .L8010CB88
    /* 1AF6C 8010CB6C 00000000 */   nop
    /* 1AF70 8010CB70 59D9030C */  jal        func_800F6564
    /* 1AF74 8010CB74 01170424 */   addiu     $a0, $zero, 0x1701
    /* 1AF78 8010CB78 0DD9030C */  jal        func_800F6434
    /* 1AF7C 8010CB7C 02000424 */   addiu     $a0, $zero, 0x2
    /* 1AF80 8010CB80 05004014 */  bnez       $v0, .L8010CB98
    /* 1AF84 8010CB84 00000000 */   nop
  .L8010CB88:
    /* 1AF88 8010CB88 AFD8030C */  jal        func_800F62BC
    /* 1AF8C 8010CB8C 3E000424 */   addiu     $a0, $zero, 0x3E
    /* 1AF90 8010CB90 AFD8030C */  jal        func_800F62BC
    /* 1AF94 8010CB94 3E000424 */   addiu     $a0, $zero, 0x3E
  .L8010CB98:
    /* 1AF98 8010CB98 9CDC030C */  jal        func_800F7270
    /* 1AF9C 8010CB9C 3D000424 */   addiu     $a0, $zero, 0x3D
    /* 1AFA0 8010CBA0 1300043C */  lui        $a0, (0x138000 >> 16)
    /* 1AFA4 8010CBA4 1ADB030C */  jal        func_800F6C68
    /* 1AFA8 8010CBA8 00808434 */   ori       $a0, $a0, (0x138000 & 0xFFFF)
    /* 1AFAC 8010CBAC 93E0030C */  jal        func_800F824C
    /* 1AFB0 8010CBB0 3D000424 */   addiu     $a0, $zero, 0x3D
    /* 1AFB4 8010CBB4 1300043C */  lui        $a0, (0x138001 >> 16)
    /* 1AFB8 8010CBB8 1ADB030C */  jal        func_800F6C68
    /* 1AFBC 8010CBBC 01808434 */   ori       $a0, $a0, (0x138001 & 0xFFFF)
    /* 1AFC0 8010CBC0 93E0030C */  jal        func_800F824C
    /* 1AFC4 8010CBC4 3E000424 */   addiu     $a0, $zero, 0x3E
    /* 1AFC8 8010CBC8 9CDC030C */  jal        func_800F7270
    /* 1AFCC 8010CBCC 3D000424 */   addiu     $a0, $zero, 0x3D
    /* 1AFD0 8010CBD0 40E3030C */  jal        func_800F8D00
    /* 1AFD4 8010CBD4 CF090424 */   addiu     $a0, $zero, 0x9CF
    /* 1AFD8 8010CBD8 40E3030C */  jal        func_800F8D00
    /* 1AFDC 8010CBDC D1090424 */   addiu     $a0, $zero, 0x9D1
    /* 1AFE0 8010CBE0 DDE3030C */  jal        func_800F8F74
    /* 1AFE4 8010CBE4 FE080424 */   addiu     $a0, $zero, 0x8FE
    /* 1AFE8 8010CBE8 84DC030C */  jal        func_800F7210
    /* 1AFEC 8010CBEC CF090424 */   addiu     $a0, $zero, 0x9CF
  .L8010CBF0:
    /* 1AFF0 8010CBF0 1300043C */  lui        $a0, (0x138300 >> 16)
    /* 1AFF4 8010CBF4 1ADB030C */  jal        func_800F6C68
    /* 1AFF8 8010CBF8 00838434 */   ori       $a0, $a0, (0x138300 & 0xFFFF)
    /* 1AFFC 8010CBFC 0DD9030C */  jal        func_800F6434
    /* 1B000 8010CC00 02000424 */   addiu     $a0, $zero, 0x2
    /* 1B004 8010CC04 0B004014 */  bnez       $v0, .L8010CC34
    /* 1B008 8010CC08 00000000 */   nop
    /* 1B00C 8010CC0C 90D8030C */  jal        func_800F6240
    /* 1B010 8010CC10 FE080424 */   addiu     $a0, $zero, 0x8FE
    /* 1B014 8010CC14 1A80033C */  lui        $v1, %hi(D_8019ED54)
    /* 1B018 8010CC18 54ED638C */  lw         $v1, %lo(D_8019ED54)($v1)
    /* 1B01C 8010CC1C 00000000 */  nop
    /* 1B020 8010CC20 00006294 */  lhu        $v0, 0x0($v1)
    /* 1B024 8010CC24 00000000 */  nop
    /* 1B028 8010CC28 04004224 */  addiu      $v0, $v0, 0x4
    /* 1B02C 8010CC2C FC320408 */  j          .L8010CBF0
    /* 1B030 8010CC30 000062A4 */   sh        $v0, 0x0($v1)
  .L8010CC34:
    /* 1B034 8010CC34 59D9030C */  jal        func_800F6564
    /* 1B038 8010CC38 FE080424 */   addiu     $a0, $zero, 0x8FE
    /* 1B03C 8010CC3C 0DD9030C */  jal        func_800F6434
    /* 1B040 8010CC40 02020424 */   addiu     $a0, $zero, 0x202
    /* 1B044 8010CC44 20014010 */  beqz       $v0, .L8010D0C8
    /* 1B048 8010CC48 00000000 */   nop
    /* 1B04C 8010CC4C EEE3030C */  jal        func_800F8FB8
    /* 1B050 8010CC50 AE000424 */   addiu     $a0, $zero, 0xAE
    /* 1B054 8010CC54 77DC030C */  jal        func_800F71DC
    /* 1B058 8010CC58 21200000 */   addu      $a0, $zero, $zero
    /* 1B05C 8010CC5C 5BE3030C */  jal        func_800F8D6C
    /* 1B060 8010CC60 AF000424 */   addiu     $a0, $zero, 0xAF
  .L8010CC64:
    /* 1B064 8010CC64 84DC030C */  jal        func_800F7210
    /* 1B068 8010CC68 CF090424 */   addiu     $a0, $zero, 0x9CF
    /* 1B06C 8010CC6C 1300043C */  lui        $a0, (0x138300 >> 16)
    /* 1B070 8010CC70 1ADB030C */  jal        func_800F6C68
    /* 1B074 8010CC74 00838434 */   ori       $a0, $a0, (0x138300 & 0xFFFF)
    /* 1B078 8010CC78 8735040C */  jal        func_8010D61C
    /* 1B07C 8010CC7C 00000000 */   nop
    /* 1B080 8010CC80 8CD9030C */  jal        func_800F6630
    /* 1B084 8010CC84 06000424 */   addiu     $a0, $zero, 0x6
    /* 1B088 8010CC88 5DD5030C */  jal        func_800F5574
    /* 1B08C 8010CC8C 2E000424 */   addiu     $a0, $zero, 0x2E
    /* 1B090 8010CC90 F0D4030C */  jal        func_800F53C0
    /* 1B094 8010CC94 00000000 */   nop
    /* 1B098 8010CC98 05004014 */  bnez       $v0, .L8010CCB0
    /* 1B09C 8010CC9C 00000000 */   nop
    /* 1B0A0 8010CCA0 53D9030C */  jal        func_800F654C
    /* 1B0A4 8010CCA4 21200000 */   addu      $a0, $zero, $zero
    /* 1B0A8 8010CCA8 42330408 */  j          .L8010CD08
    /* 1B0AC 8010CCAC 00000000 */   nop
  .L8010CCB0:
    /* 1B0B0 8010CCB0 5DD5030C */  jal        func_800F5574
    /* 1B0B4 8010CCB4 30000424 */   addiu     $a0, $zero, 0x30
    /* 1B0B8 8010CCB8 F0D4030C */  jal        func_800F53C0
    /* 1B0BC 8010CCBC 00000000 */   nop
    /* 1B0C0 8010CCC0 05004014 */  bnez       $v0, .L8010CCD8
    /* 1B0C4 8010CCC4 00000000 */   nop
    /* 1B0C8 8010CCC8 53D9030C */  jal        func_800F654C
    /* 1B0CC 8010CCCC 03000424 */   addiu     $a0, $zero, 0x3
    /* 1B0D0 8010CCD0 42330408 */  j          .L8010CD08
    /* 1B0D4 8010CCD4 00000000 */   nop
  .L8010CCD8:
    /* 1B0D8 8010CCD8 5DD5030C */  jal        func_800F5574
    /* 1B0DC 8010CCDC 46000424 */   addiu     $a0, $zero, 0x46
    /* 1B0E0 8010CCE0 F0D4030C */  jal        func_800F53C0
    /* 1B0E4 8010CCE4 00000000 */   nop
    /* 1B0E8 8010CCE8 05004014 */  bnez       $v0, .L8010CD00
    /* 1B0EC 8010CCEC 00000000 */   nop
    /* 1B0F0 8010CCF0 53D9030C */  jal        func_800F654C
    /* 1B0F4 8010CCF4 02000424 */   addiu     $a0, $zero, 0x2
    /* 1B0F8 8010CCF8 42330408 */  j          .L8010CD08
    /* 1B0FC 8010CCFC 00000000 */   nop
  .L8010CD00:
    /* 1B100 8010CD00 53D9030C */  jal        func_800F654C
    /* 1B104 8010CD04 01000424 */   addiu     $a0, $zero, 0x1
  .L8010CD08:
    /* 1B108 8010CD08 93E0030C */  jal        func_800F824C
    /* 1B10C 8010CD0C 07000424 */   addiu     $a0, $zero, 0x7
    /* 1B110 8010CD10 84DC030C */  jal        func_800F7210
    /* 1B114 8010CD14 CF090424 */   addiu     $a0, $zero, 0x9CF
    /* 1B118 8010CD18 65DD030C */  jal        func_800F7594
    /* 1B11C 8010CD1C AF000424 */   addiu     $a0, $zero, 0xAF
    /* 1B120 8010CD20 1300043C */  lui        $a0, (0x138303 >> 16)
    /* 1B124 8010CD24 1ADB030C */  jal        func_800F6C68
    /* 1B128 8010CD28 03838434 */   ori       $a0, $a0, (0x138303 & 0xFFFF)
    /* 1B12C 8010CD2C 58E2030C */  jal        func_800F8960
    /* 1B130 8010CD30 01090424 */   addiu     $a0, $zero, 0x901
    /* 1B134 8010CD34 92D0030C */  jal        func_800F4248
    /* 1B138 8010CD38 03000424 */   addiu     $a0, $zero, 0x3
    /* 1B13C 8010CD3C 58E2030C */  jal        func_800F8960
    /* 1B140 8010CD40 09090424 */   addiu     $a0, $zero, 0x909
    /* 1B144 8010CD44 7AD8030C */  jal        func_800F61E8
    /* 1B148 8010CD48 00000000 */   nop
    /* 1B14C 8010CD4C 58E2030C */  jal        func_800F8960
    /* 1B150 8010CD50 02090424 */   addiu     $a0, $zero, 0x902
    /* 1B154 8010CD54 5CDB030C */  jal        func_800F6D70
    /* 1B158 8010CD58 01090424 */   addiu     $a0, $zero, 0x901
    /* 1B15C 8010CD5C 92D0030C */  jal        func_800F4248
    /* 1B160 8010CD60 FC000424 */   addiu     $a0, $zero, 0xFC
    /* 1B164 8010CD64 0FCF030C */  jal        func_800F3C3C
    /* 1B168 8010CD68 07000424 */   addiu     $a0, $zero, 0x7
    /* 1B16C 8010CD6C 31DE030C */  jal        func_800F78C4
    /* 1B170 8010CD70 21204000 */   addu      $a0, $v0, $zero
    /* 1B174 8010CD74 58E2030C */  jal        func_800F8960
    /* 1B178 8010CD78 01090424 */   addiu     $a0, $zero, 0x901
    /* 1B17C 8010CD7C 8CD9030C */  jal        func_800F6630
    /* 1B180 8010CD80 06000424 */   addiu     $a0, $zero, 0x6
    /* 1B184 8010CD84 5DD5030C */  jal        func_800F5574
    /* 1B188 8010CD88 0E000424 */   addiu     $a0, $zero, 0xE
    /* 1B18C 8010CD8C F0D4030C */  jal        func_800F53C0
    /* 1B190 8010CD90 00000000 */   nop
    /* 1B194 8010CD94 0C004014 */  bnez       $v0, .L8010CDC8
    /* 1B198 8010CD98 00000000 */   nop
    /* 1B19C 8010CD9C 1500043C */  lui        $a0, (0x15B2FA >> 16)
    /* 1B1A0 8010CDA0 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 1B1A4 8010CDA4 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 1B1A8 8010CDA8 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 1B1AC 8010CDAC 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 1B1B0 8010CDB0 00004394 */  lhu        $v1, 0x0($v0)
    /* 1B1B4 8010CDB4 FAB28434 */  ori        $a0, $a0, (0x15B2FA & 0xFFFF)
    /* 1B1B8 8010CDB8 1ADB030C */  jal        func_800F6C68
    /* 1B1BC 8010CDBC 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 1B1C0 8010CDC0 81330408 */  j          .L8010CE04
    /* 1B1C4 8010CDC4 00000000 */   nop
  .L8010CDC8:
    /* 1B1C8 8010CDC8 1300043C */  lui        $a0, (0x138303 >> 16)
    /* 1B1CC 8010CDCC 1ADB030C */  jal        func_800F6C68
    /* 1B1D0 8010CDD0 03838434 */   ori       $a0, $a0, (0x138303 & 0xFFFF)
    /* 1B1D4 8010CDD4 92D0030C */  jal        func_800F4248
    /* 1B1D8 8010CDD8 0C000424 */   addiu     $a0, $zero, 0xC
    /* 1B1DC 8010CDDC 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 1B1E0 8010CDE0 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 1B1E4 8010CDE4 00000000 */  nop
    /* 1B1E8 8010CDE8 00006290 */  lbu        $v0, 0x0($v1)
    /* 1B1EC 8010CDEC 00000000 */  nop
    /* 1B1F0 8010CDF0 82100200 */  srl        $v0, $v0, 2
    /* 1B1F4 8010CDF4 04D5030C */  jal        func_800F5410
    /* 1B1F8 8010CDF8 000062A0 */   sb        $v0, 0x0($v1)
    /* 1B1FC 8010CDFC 02D0030C */  jal        func_800F4008
    /* 1B200 8010CE00 04000424 */   addiu     $a0, $zero, 0x4
  .L8010CE04:
    /* 1B204 8010CE04 58E2030C */  jal        func_800F8960
    /* 1B208 8010CE08 0D090424 */   addiu     $a0, $zero, 0x90D
    /* 1B20C 8010CE0C 84DC030C */  jal        func_800F7210
    /* 1B210 8010CE10 CF090424 */   addiu     $a0, $zero, 0x9CF
    /* 1B214 8010CE14 1300043C */  lui        $a0, (0x138300 >> 16)
    /* 1B218 8010CE18 1ADB030C */  jal        func_800F6C68
    /* 1B21C 8010CE1C 00838434 */   ori       $a0, $a0, (0x138300 & 0xFFFF)
    /* 1B220 8010CE20 58E2030C */  jal        func_800F8960
    /* 1B224 8010CE24 07090424 */   addiu     $a0, $zero, 0x907
    /* 1B228 8010CE28 1300043C */  lui        $a0, (0x138301 >> 16)
    /* 1B22C 8010CE2C 1ADB030C */  jal        func_800F6C68
    /* 1B230 8010CE30 01838434 */   ori       $a0, $a0, (0x138301 & 0xFFFF)
    /* 1B234 8010CE34 0DD9030C */  jal        func_800F6434
    /* 1B238 8010CE38 80000424 */   addiu     $a0, $zero, 0x80
    /* 1B23C 8010CE3C 05004014 */  bnez       $v0, .L8010CE54
    /* 1B240 8010CE40 00000000 */   nop
    /* 1B244 8010CE44 53D9030C */  jal        func_800F654C
    /* 1B248 8010CE48 21200000 */   addu      $a0, $zero, $zero
    /* 1B24C 8010CE4C 58E2030C */  jal        func_800F8960
    /* 1B250 8010CE50 02090424 */   addiu     $a0, $zero, 0x902
  .L8010CE54:
    /* 1B254 8010CE54 1300043C */  lui        $a0, (0x138301 >> 16)
    /* 1B258 8010CE58 1ADB030C */  jal        func_800F6C68
    /* 1B25C 8010CE5C 01838434 */   ori       $a0, $a0, (0x138301 & 0xFFFF)
    /* 1B260 8010CE60 92D0030C */  jal        func_800F4248
    /* 1B264 8010CE64 3F000424 */   addiu     $a0, $zero, 0x3F
    /* 1B268 8010CE68 58E2030C */  jal        func_800F8960
    /* 1B26C 8010CE6C 04090424 */   addiu     $a0, $zero, 0x904
    /* 1B270 8010CE70 93E0030C */  jal        func_800F824C
    /* 1B274 8010CE74 0C000424 */   addiu     $a0, $zero, 0xC
    /* 1B278 8010CE78 1300043C */  lui        $a0, (0x138302 >> 16)
    /* 1B27C 8010CE7C 1ADB030C */  jal        func_800F6C68
    /* 1B280 8010CE80 02838434 */   ori       $a0, $a0, (0x138302 & 0xFFFF)
    /* 1B284 8010CE84 58E2030C */  jal        func_800F8960
    /* 1B288 8010CE88 06090424 */   addiu     $a0, $zero, 0x906
    /* 1B28C 8010CE8C 93E0030C */  jal        func_800F824C
    /* 1B290 8010CE90 0E000424 */   addiu     $a0, $zero, 0xE
    /* 1B294 8010CE94 5CDB030C */  jal        func_800F6D70
    /* 1B298 8010CE98 07090424 */   addiu     $a0, $zero, 0x907
    /* 1B29C 8010CE9C 2536040C */  jal        func_8010D894
    /* 1B2A0 8010CEA0 00000000 */   nop
    /* 1B2A4 8010CEA4 58E2030C */  jal        func_800F8960
    /* 1B2A8 8010CEA8 0B090424 */   addiu     $a0, $zero, 0x90B
    /* 1B2AC 8010CEAC 5DD5030C */  jal        func_800F5574
    /* 1B2B0 8010CEB0 21200000 */   addu      $a0, $zero, $zero
    /* 1B2B4 8010CEB4 F5D4030C */  jal        func_800F53D4
    /* 1B2B8 8010CEB8 00000000 */   nop
    /* 1B2BC 8010CEBC 03004014 */  bnez       $v0, .L8010CECC
    /* 1B2C0 8010CEC0 00000000 */   nop
    /* 1B2C4 8010CEC4 3B35040C */  jal        func_8010D4EC
    /* 1B2C8 8010CEC8 00000000 */   nop
  .L8010CECC:
    /* 1B2CC 8010CECC 53D9030C */  jal        func_800F654C
    /* 1B2D0 8010CED0 21200000 */   addu      $a0, $zero, $zero
    /* 1B2D4 8010CED4 58E2030C */  jal        func_800F8960
    /* 1B2D8 8010CED8 FF080424 */   addiu     $a0, $zero, 0x8FF
    /* 1B2DC 8010CEDC 58E2030C */  jal        func_800F8960
    /* 1B2E0 8010CEE0 03090424 */   addiu     $a0, $zero, 0x903
    /* 1B2E4 8010CEE4 58E2030C */  jal        func_800F8960
    /* 1B2E8 8010CEE8 05090424 */   addiu     $a0, $zero, 0x905
    /* 1B2EC 8010CEEC 58E2030C */  jal        func_800F8960
    /* 1B2F0 8010CEF0 00090424 */   addiu     $a0, $zero, 0x900
    /* 1B2F4 8010CEF4 58E2030C */  jal        func_800F8960
    /* 1B2F8 8010CEF8 08090424 */   addiu     $a0, $zero, 0x908
    /* 1B2FC 8010CEFC 58E2030C */  jal        func_800F8960
    /* 1B300 8010CF00 0C090424 */   addiu     $a0, $zero, 0x90C
    /* 1B304 8010CF04 5CDB030C */  jal        func_800F6D70
    /* 1B308 8010CF08 04090424 */   addiu     $a0, $zero, 0x904
    /* 1B30C 8010CF0C 93E0030C */  jal        func_800F824C
    /* 1B310 8010CF10 3D000424 */   addiu     $a0, $zero, 0x3D
    /* 1B314 8010CF14 5CDB030C */  jal        func_800F6D70
    /* 1B318 8010CF18 06090424 */   addiu     $a0, $zero, 0x906
    /* 1B31C 8010CF1C 93E0030C */  jal        func_800F824C
    /* 1B320 8010CF20 3E000424 */   addiu     $a0, $zero, 0x3E
    /* 1B324 8010CF24 9CDC030C */  jal        func_800F7270
    /* 1B328 8010CF28 3D000424 */   addiu     $a0, $zero, 0x3D
    /* 1B32C 8010CF2C 7F00043C */  lui        $a0, (0x7F5C71 >> 16)
    /* 1B330 8010CF30 1ADB030C */  jal        func_800F6C68
    /* 1B334 8010CF34 715C8434 */   ori       $a0, $a0, (0x7F5C71 & 0xFFFF)
    /* 1B338 8010CF38 93E0030C */  jal        func_800F824C
    /* 1B33C 8010CF3C 3D000424 */   addiu     $a0, $zero, 0x3D
    /* 1B340 8010CF40 EEE3030C */  jal        func_800F8FB8
    /* 1B344 8010CF44 3E000424 */   addiu     $a0, $zero, 0x3E
    /* 1B348 8010CF48 0FCF030C */  jal        func_800F3C3C
    /* 1B34C 8010CF4C 3D000424 */   addiu     $a0, $zero, 0x3D
    /* 1B350 8010CF50 CAD3030C */  jal        func_800F4F28
    /* 1B354 8010CF54 21204000 */   addu      $a0, $v0, $zero
    /* 1B358 8010CF58 D3D3030C */  jal        func_800F4F4C
    /* 1B35C 8010CF5C 00000000 */   nop
    /* 1B360 8010CF60 0FCF030C */  jal        func_800F3C3C
    /* 1B364 8010CF64 3E000424 */   addiu     $a0, $zero, 0x3E
    /* 1B368 8010CF68 90DE030C */  jal        func_800F7A40
    /* 1B36C 8010CF6C 21204000 */   addu      $a0, $v0, $zero
    /* 1B370 8010CF70 9CDC030C */  jal        func_800F7270
    /* 1B374 8010CF74 3D000424 */   addiu     $a0, $zero, 0x3D
    /* 1B378 8010CF78 DADA030C */  jal        func_800F6B68
    /* 1B37C 8010CF7C DC0E0424 */   addiu     $a0, $zero, 0xEDC
    /* 1B380 8010CF80 9CDC030C */  jal        func_800F7270
    /* 1B384 8010CF84 AF000424 */   addiu     $a0, $zero, 0xAF
    /* 1B388 8010CF88 92D0030C */  jal        func_800F4248
    /* 1B38C 8010CF8C 08000424 */   addiu     $a0, $zero, 0x8
    /* 1B390 8010CF90 DAE1030C */  jal        func_800F8768
    /* 1B394 8010CF94 0A090424 */   addiu     $a0, $zero, 0x90A
    /* 1B398 8010CF98 84DC030C */  jal        func_800F7210
    /* 1B39C 8010CF9C CF090424 */   addiu     $a0, $zero, 0x9CF
    /* 1B3A0 8010CFA0 1A80033C */  lui        $v1, %hi(D_8019ED54)
    /* 1B3A4 8010CFA4 54ED638C */  lw         $v1, %lo(D_8019ED54)($v1)
    /* 1B3A8 8010CFA8 00000000 */  nop
    /* 1B3AC 8010CFAC 00006294 */  lhu        $v0, 0x0($v1)
    /* 1B3B0 8010CFB0 CF090424 */  addiu      $a0, $zero, 0x9CF
    /* 1B3B4 8010CFB4 04004224 */  addiu      $v0, $v0, 0x4
    /* 1B3B8 8010CFB8 40E3030C */  jal        func_800F8D00
    /* 1B3BC 8010CFBC 000062A4 */   sh        $v0, 0x0($v1)
    /* 1B3C0 8010CFC0 8CD9030C */  jal        func_800F6630
    /* 1B3C4 8010CFC4 AF000424 */   addiu     $a0, $zero, 0xAF
    /* 1B3C8 8010CFC8 04D5030C */  jal        func_800F5410
    /* 1B3CC 8010CFCC 00000000 */   nop
    /* 1B3D0 8010CFD0 02D0030C */  jal        func_800F4008
    /* 1B3D4 8010CFD4 0F000424 */   addiu     $a0, $zero, 0xF
    /* 1B3D8 8010CFD8 93E0030C */  jal        func_800F824C
    /* 1B3DC 8010CFDC AF000424 */   addiu     $a0, $zero, 0xAF
    /* 1B3E0 8010CFE0 AFD8030C */  jal        func_800F62BC
    /* 1B3E4 8010CFE4 AE000424 */   addiu     $a0, $zero, 0xAE
    /* 1B3E8 8010CFE8 8CD9030C */  jal        func_800F6630
    /* 1B3EC 8010CFEC AE000424 */   addiu     $a0, $zero, 0xAE
    /* 1B3F0 8010CFF0 C1CE030C */  jal        func_800F3B04
    /* 1B3F4 8010CFF4 FE080424 */   addiu     $a0, $zero, 0x8FE
    /* 1B3F8 8010CFF8 35D5030C */  jal        func_800F54D4
    /* 1B3FC 8010CFFC 21204000 */   addu      $a0, $v0, $zero
    /* 1B400 8010D000 F5D4030C */  jal        func_800F53D4
    /* 1B404 8010D004 00000000 */   nop
    /* 1B408 8010D008 16FF4010 */  beqz       $v0, .L8010CC64
    /* 1B40C 8010D00C 00000000 */   nop
    /* 1B410 8010D010 53D9030C */  jal        func_800F654C
    /* 1B414 8010D014 0C000424 */   addiu     $a0, $zero, 0xC
    /* 1B418 8010D018 93E0030C */  jal        func_800F824C
    /* 1B41C 8010D01C AE000424 */   addiu     $a0, $zero, 0xAE
    /* 1B420 8010D020 53D9030C */  jal        func_800F654C
    /* 1B424 8010D024 18000424 */   addiu     $a0, $zero, 0x18
    /* 1B428 8010D028 A835040C */  jal        func_8010D6A0
    /* 1B42C 8010D02C 00000000 */   nop
    /* 1B430 8010D030 53D9030C */  jal        func_800F654C
    /* 1B434 8010D034 1B000424 */   addiu     $a0, $zero, 0x1B
    /* 1B438 8010D038 AFD8030C */  jal        func_800F62BC
    /* 1B43C 8010D03C AE000424 */   addiu     $a0, $zero, 0xAE
    /* 1B440 8010D040 A835040C */  jal        func_8010D6A0
    /* 1B444 8010D044 00000000 */   nop
    /* 1B448 8010D048 53D9030C */  jal        func_800F654C
    /* 1B44C 8010D04C 1C000424 */   addiu     $a0, $zero, 0x1C
    /* 1B450 8010D050 AFD8030C */  jal        func_800F62BC
    /* 1B454 8010D054 AE000424 */   addiu     $a0, $zero, 0xAE
    /* 1B458 8010D058 A835040C */  jal        func_8010D6A0
    /* 1B45C 8010D05C 00000000 */   nop
    /* 1B460 8010D060 59D9030C */  jal        func_800F6564
    /* 1B464 8010D064 E10F0424 */   addiu     $a0, $zero, 0xFE1
    /* 1B468 8010D068 92D0030C */  jal        func_800F4248
    /* 1B46C 8010D06C 0F000424 */   addiu     $a0, $zero, 0xF
    /* 1B470 8010D070 40DD030C */  jal        func_800F7500
    /* 1B474 8010D074 21200000 */   addu      $a0, $zero, $zero
    /* 1B478 8010D078 3634040C */  jal        func_8010D0D8
    /* 1B47C 8010D07C 00000000 */   nop
    /* 1B480 8010D080 59D9030C */  jal        func_800F6564
    /* 1B484 8010D084 E10F0424 */   addiu     $a0, $zero, 0xFE1
    /* 1B488 8010D088 1A80023C */  lui        $v0, %hi(D_8019ED40)
    /* 1B48C 8010D08C 40ED428C */  lw         $v0, %lo(D_8019ED40)($v0)
    /* 1B490 8010D090 00000000 */  nop
    /* 1B494 8010D094 00004390 */  lbu        $v1, 0x0($v0)
    /* 1B498 8010D098 40000424 */  addiu      $a0, $zero, 0x40
    /* 1B49C 8010D09C 02190300 */  srl        $v1, $v1, 4
    /* 1B4A0 8010D0A0 40DD030C */  jal        func_800F7500
    /* 1B4A4 8010D0A4 000043A0 */   sb        $v1, 0x0($v0)
    /* 1B4A8 8010D0A8 3634040C */  jal        func_8010D0D8
    /* 1B4AC 8010D0AC 00000000 */   nop
    /* 1B4B0 8010D0B0 1D80043C */  lui        $a0, %hi(D_801D7D68)
    /* 1B4B4 8010D0B4 687D8424 */  addiu      $a0, $a0, %lo(D_801D7D68)
    /* 1B4B8 8010D0B8 00030524 */  addiu      $a1, $zero, 0x300
    /* 1B4BC 8010D0BC 21300000 */  addu       $a2, $zero, $zero
    /* 1B4C0 8010D0C0 3EFE050C */  jal        func_8017F8F8
    /* 1B4C4 8010D0C4 FFFF0724 */   addiu     $a3, $zero, -0x1
  .L8010D0C8:
    /* 1B4C8 8010D0C8 1000BF8F */  lw         $ra, 0x10($sp)
    /* 1B4CC 8010D0CC 00000000 */  nop
    /* 1B4D0 8010D0D0 0800E003 */  jr         $ra
    /* 1B4D4 8010D0D4 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8010CB08
