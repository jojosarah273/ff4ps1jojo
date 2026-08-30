nonmatching func_8013CBF0, 0x318

glabel func_8013CBF0
    /* 4AFF0 8013CBF0 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 4AFF4 8013CBF4 1000BFAF */  sw         $ra, 0x10($sp)
    /* 4AFF8 8013CBF8 5DD5030C */  jal        func_800F5574
    /* 4AFFC 8013CBFC 01000424 */   addiu     $a0, $zero, 0x1
    /* 4B000 8013CC00 F5D4030C */  jal        func_800F53D4
    /* 4B004 8013CC04 00000000 */   nop
    /* 4B008 8013CC08 09004014 */  bnez       $v0, .L8013CC30
    /* 4B00C 8013CC0C 00000000 */   nop
    /* 4B010 8013CC10 5DD5030C */  jal        func_800F5574
    /* 4B014 8013CC14 02000424 */   addiu     $a0, $zero, 0x2
    /* 4B018 8013CC18 F5D4030C */  jal        func_800F53D4
    /* 4B01C 8013CC1C 00000000 */   nop
    /* 4B020 8013CC20 15004014 */  bnez       $v0, .L8013CC78
    /* 4B024 8013CC24 00000000 */   nop
    /* 4B028 8013CC28 BEF30408 */  j          .L8013CEF8
    /* 4B02C 8013CC2C 00000000 */   nop
  .L8013CC30:
    /* 4B030 8013CC30 53D9030C */  jal        func_800F654C
    /* 4B034 8013CC34 07000424 */   addiu     $a0, $zero, 0x7
    /* 4B038 8013CC38 62E0030C */  jal        func_800F8188
    /* 4B03C 8013CC3C 1BF10434 */   ori       $a0, $zero, 0xF11B
    /* 4B040 8013CC40 53D9030C */  jal        func_800F654C
    /* 4B044 8013CC44 05000424 */   addiu     $a0, $zero, 0x5
    /* 4B048 8013CC48 62E0030C */  jal        func_800F8188
    /* 4B04C 8013CC4C 1CF10434 */   ori       $a0, $zero, 0xF11C
    /* 4B050 8013CC50 53D9030C */  jal        func_800F654C
    /* 4B054 8013CC54 14000424 */   addiu     $a0, $zero, 0x14
    /* 4B058 8013CC58 62E0030C */  jal        func_800F8188
    /* 4B05C 8013CC5C 18F10434 */   ori       $a0, $zero, 0xF118
    /* 4B060 8013CC60 DDE3030C */  jal        func_800F8F74
    /* 4B064 8013CC64 16F10434 */   ori       $a0, $zero, 0xF116
    /* 4B068 8013CC68 53D9030C */  jal        func_800F654C
    /* 4B06C 8013CC6C AE000424 */   addiu     $a0, $zero, 0xAE
    /* 4B070 8013CC70 30F30408 */  j          .L8013CCC0
    /* 4B074 8013CC74 00000000 */   nop
  .L8013CC78:
    /* 4B078 8013CC78 53D9030C */  jal        func_800F654C
    /* 4B07C 8013CC7C 03000424 */   addiu     $a0, $zero, 0x3
    /* 4B080 8013CC80 62E0030C */  jal        func_800F8188
    /* 4B084 8013CC84 1BF10434 */   ori       $a0, $zero, 0xF11B
    /* 4B088 8013CC88 53D9030C */  jal        func_800F654C
    /* 4B08C 8013CC8C 08000424 */   addiu     $a0, $zero, 0x8
    /* 4B090 8013CC90 62E0030C */  jal        func_800F8188
    /* 4B094 8013CC94 1CF10434 */   ori       $a0, $zero, 0xF11C
    /* 4B098 8013CC98 53D9030C */  jal        func_800F654C
    /* 4B09C 8013CC9C 08000424 */   addiu     $a0, $zero, 0x8
    /* 4B0A0 8013CCA0 62E0030C */  jal        func_800F8188
    /* 4B0A4 8013CCA4 16F10434 */   ori       $a0, $zero, 0xF116
    /* 4B0A8 8013CCA8 53D9030C */  jal        func_800F654C
    /* 4B0AC 8013CCAC FF000424 */   addiu     $a0, $zero, 0xFF
    /* 4B0B0 8013CCB0 62E0030C */  jal        func_800F8188
    /* 4B0B4 8013CCB4 18F10434 */   ori       $a0, $zero, 0xF118
    /* 4B0B8 8013CCB8 53D9030C */  jal        func_800F654C
    /* 4B0BC 8013CCBC 9E000424 */   addiu     $a0, $zero, 0x9E
  .L8013CCC0:
    /* 4B0C0 8013CCC0 C235050C */  jal        func_8014D708
    /* 4B0C4 8013CCC4 00000000 */   nop
    /* 4B0C8 8013CCC8 4BF4040C */  jal        func_8013D12C
    /* 4B0CC 8013CCCC 00000000 */   nop
    /* 4B0D0 8013CCD0 7A23050C */  jal        func_80148DE8
    /* 4B0D4 8013CCD4 00000000 */   nop
    /* 4B0D8 8013CCD8 C7E5030C */  jal        func_800F971C
    /* 4B0DC 8013CCDC 00000000 */   nop
    /* 4B0E0 8013CCE0 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 4B0E4 8013CCE4 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 4B0E8 8013CCE8 1A80043C */  lui        $a0, %hi(D_8019ED54)
    /* 4B0EC 8013CCEC 54ED848C */  lw         $a0, %lo(D_8019ED54)($a0)
    /* 4B0F0 8013CCF0 00004394 */  lhu        $v1, 0x0($v0)
    /* 4B0F4 8013CCF4 00000000 */  nop
    /* 4B0F8 8013CCF8 000083A4 */  sh         $v1, 0x0($a0)
  .L8013CCFC:
    /* 4B0FC 8013CCFC 80E4030C */  jal        func_800F9200
    /* 4B100 8013CD00 00000000 */   nop
    /* 4B104 8013CD04 910F050C */  jal        func_80143E44
    /* 4B108 8013CD08 00000000 */   nop
    /* 4B10C 8013CD0C F7E4030C */  jal        func_800F93DC
    /* 4B110 8013CD10 00000000 */   nop
    /* 4B114 8013CD14 04D5030C */  jal        func_800F5410
    /* 4B118 8013CD18 00000000 */   nop
    /* 4B11C 8013CD1C 02D0030C */  jal        func_800F4008
    /* 4B120 8013CD20 20000424 */   addiu     $a0, $zero, 0x20
    /* 4B124 8013CD24 D9D8030C */  jal        func_800F6364
    /* 4B128 8013CD28 00000000 */   nop
    /* 4B12C 8013CD2C 56D6030C */  jal        func_800F5958
    /* 4B130 8013CD30 08000424 */   addiu     $a0, $zero, 0x8
    /* 4B134 8013CD34 F5D4030C */  jal        func_800F53D4
    /* 4B138 8013CD38 00000000 */   nop
    /* 4B13C 8013CD3C EFFF4010 */  beqz       $v0, .L8013CCFC
    /* 4B140 8013CD40 00000000 */   nop
    /* 4B144 8013CD44 C7E5030C */  jal        func_800F971C
    /* 4B148 8013CD48 00000000 */   nop
    /* 4B14C 8013CD4C 9823050C */  jal        func_80148E60
    /* 4B150 8013CD50 00000000 */   nop
    /* 4B154 8013CD54 59D9030C */  jal        func_800F6564
    /* 4B158 8013CD58 48000424 */   addiu     $a0, $zero, 0x48
    /* 4B15C 8013CD5C 50D4030C */  jal        func_800F5140
    /* 4B160 8013CD60 00000000 */   nop
    /* 4B164 8013CD64 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 4B168 8013CD68 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 4B16C 8013CD6C 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 4B170 8013CD70 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 4B174 8013CD74 00004394 */  lhu        $v1, 0x0($v0)
    /* 4B178 8013CD78 53F00434 */  ori        $a0, $zero, 0xF053
    /* 4B17C 8013CD7C DADA030C */  jal        func_800F6B68
    /* 4B180 8013CD80 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 4B184 8013CD84 04D5030C */  jal        func_800F5410
    /* 4B188 8013CD88 00000000 */   nop
    /* 4B18C 8013CD8C 02D0030C */  jal        func_800F4008
    /* 4B190 8013CD90 10000424 */   addiu     $a0, $zero, 0x10
    /* 4B194 8013CD94 62E0030C */  jal        func_800F8188
    /* 4B198 8013CD98 11F10434 */   ori       $a0, $zero, 0xF111
    /* 4B19C 8013CD9C DADA030C */  jal        func_800F6B68
    /* 4B1A0 8013CDA0 54F00434 */   ori       $a0, $zero, 0xF054
    /* 4B1A4 8013CDA4 20D5030C */  jal        func_800F5480
    /* 4B1A8 8013CDA8 00000000 */   nop
    /* 4B1AC 8013CDAC 16E0030C */  jal        func_800F8058
    /* 4B1B0 8013CDB0 08000424 */   addiu     $a0, $zero, 0x8
    /* 4B1B4 8013CDB4 62E0030C */  jal        func_800F8188
    /* 4B1B8 8013CDB8 12F10434 */   ori       $a0, $zero, 0xF112
    /* 4B1BC 8013CDBC DDE3030C */  jal        func_800F8F74
    /* 4B1C0 8013CDC0 15F10434 */   ori       $a0, $zero, 0xF115
    /* 4B1C4 8013CDC4 DDE3030C */  jal        func_800F8F74
    /* 4B1C8 8013CDC8 14F10434 */   ori       $a0, $zero, 0xF114
    /* 4B1CC 8013CDCC DDE3030C */  jal        func_800F8F74
    /* 4B1D0 8013CDD0 17F10434 */   ori       $a0, $zero, 0xF117
  .L8013CDD4:
    /* 4B1D4 8013CDD4 5601050C */  jal        func_80140558
    /* 4B1D8 8013CDD8 00000000 */   nop
    /* 4B1DC 8013CDDC C2F3040C */  jal        func_8013CF08
    /* 4B1E0 8013CDE0 00000000 */   nop
    /* 4B1E4 8013CDE4 5B36050C */  jal        func_8014D96C
    /* 4B1E8 8013CDE8 00000000 */   nop
    /* 4B1EC 8013CDEC 59D9030C */  jal        func_800F6564
    /* 4B1F0 8013CDF0 17F10434 */   ori       $a0, $zero, 0xF117
    /* 4B1F4 8013CDF4 C1CE030C */  jal        func_800F3B04
    /* 4B1F8 8013CDF8 18F10434 */   ori       $a0, $zero, 0xF118
    /* 4B1FC 8013CDFC 35D5030C */  jal        func_800F54D4
    /* 4B200 8013CE00 21204000 */   addu      $a0, $v0, $zero
    /* 4B204 8013CE04 F5D4030C */  jal        func_800F53D4
    /* 4B208 8013CE08 00000000 */   nop
    /* 4B20C 8013CE0C 07004014 */  bnez       $v0, .L8013CE2C
    /* 4B210 8013CE10 00000000 */   nop
    /* 4B214 8013CE14 59D9030C */  jal        func_800F6564
    /* 4B218 8013CE18 17F10434 */   ori       $a0, $zero, 0xF117
    /* 4B21C 8013CE1C 9823050C */  jal        func_80148E60
    /* 4B220 8013CE20 00000000 */   nop
    /* 4B224 8013CE24 90D8030C */  jal        func_800F6240
    /* 4B228 8013CE28 17F10434 */   ori       $a0, $zero, 0xF117
  .L8013CE2C:
    /* 4B22C 8013CE2C 59D9030C */  jal        func_800F6564
    /* 4B230 8013CE30 16F10434 */   ori       $a0, $zero, 0xF116
    /* 4B234 8013CE34 0DD9030C */  jal        func_800F6434
    /* 4B238 8013CE38 02020424 */   addiu     $a0, $zero, 0x202
    /* 4B23C 8013CE3C 16004014 */  bnez       $v0, .L8013CE98
    /* 4B240 8013CE40 00000000 */   nop
    /* 4B244 8013CE44 C7E5030C */  jal        func_800F971C
    /* 4B248 8013CE48 00000000 */   nop
    /* 4B24C 8013CE4C 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 4B250 8013CE50 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 4B254 8013CE54 1A80043C */  lui        $a0, %hi(D_8019ED54)
    /* 4B258 8013CE58 54ED848C */  lw         $a0, %lo(D_8019ED54)($a0)
    /* 4B25C 8013CE5C 00004394 */  lhu        $v1, 0x0($v0)
    /* 4B260 8013CE60 00000000 */  nop
    /* 4B264 8013CE64 000083A4 */  sh         $v1, 0x0($a0)
  .L8013CE68:
    /* 4B268 8013CE68 53D9030C */  jal        func_800F654C
    /* 4B26C 8013CE6C 04000424 */   addiu     $a0, $zero, 0x4
    /* 4B270 8013CE70 910F050C */  jal        func_80143E44
    /* 4B274 8013CE74 00000000 */   nop
    /* 4B278 8013CE78 D9D8030C */  jal        func_800F6364
    /* 4B27C 8013CE7C 00000000 */   nop
    /* 4B280 8013CE80 56D6030C */  jal        func_800F5958
    /* 4B284 8013CE84 08000424 */   addiu     $a0, $zero, 0x8
    /* 4B288 8013CE88 F5D4030C */  jal        func_800F53D4
    /* 4B28C 8013CE8C 00000000 */   nop
    /* 4B290 8013CE90 F5FF4010 */  beqz       $v0, .L8013CE68
    /* 4B294 8013CE94 00000000 */   nop
  .L8013CE98:
    /* 4B298 8013CE98 90D8030C */  jal        func_800F6240
    /* 4B29C 8013CE9C 14F10434 */   ori       $a0, $zero, 0xF114
    /* 4B2A0 8013CEA0 59D9030C */  jal        func_800F6564
    /* 4B2A4 8013CEA4 14F10434 */   ori       $a0, $zero, 0xF114
    /* 4B2A8 8013CEA8 A0D0030C */  jal        func_800F4280
    /* 4B2AC 8013CEAC 1BF10434 */   ori       $a0, $zero, 0xF11B
    /* 4B2B0 8013CEB0 48D0030C */  jal        func_800F4120
    /* 4B2B4 8013CEB4 02020424 */   addiu     $a0, $zero, 0x202
    /* 4B2B8 8013CEB8 03004014 */  bnez       $v0, .L8013CEC8
    /* 4B2BC 8013CEBC 00000000 */   nop
    /* 4B2C0 8013CEC0 90D8030C */  jal        func_800F6240
    /* 4B2C4 8013CEC4 15F10434 */   ori       $a0, $zero, 0xF115
  .L8013CEC8:
    /* 4B2C8 8013CEC8 59D9030C */  jal        func_800F6564
    /* 4B2CC 8013CECC 15F10434 */   ori       $a0, $zero, 0xF115
    /* 4B2D0 8013CED0 C1CE030C */  jal        func_800F3B04
    /* 4B2D4 8013CED4 1CF10434 */   ori       $a0, $zero, 0xF11C
    /* 4B2D8 8013CED8 35D5030C */  jal        func_800F54D4
    /* 4B2DC 8013CEDC 21204000 */   addu      $a0, $v0, $zero
    /* 4B2E0 8013CEE0 F5D4030C */  jal        func_800F53D4
    /* 4B2E4 8013CEE4 00000000 */   nop
    /* 4B2E8 8013CEE8 BAFF4010 */  beqz       $v0, .L8013CDD4
    /* 4B2EC 8013CEEC 00000000 */   nop
    /* 4B2F0 8013CEF0 4BF4040C */  jal        func_8013D12C
    /* 4B2F4 8013CEF4 00000000 */   nop
  .L8013CEF8:
    /* 4B2F8 8013CEF8 1000BF8F */  lw         $ra, 0x10($sp)
    /* 4B2FC 8013CEFC 00000000 */  nop
    /* 4B300 8013CF00 0800E003 */  jr         $ra
    /* 4B304 8013CF04 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8013CBF0
