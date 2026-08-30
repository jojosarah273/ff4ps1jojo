nonmatching func_8014CA24, 0x470

glabel func_8014CA24
    /* 5AE24 8014CA24 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 5AE28 8014CA28 1000BFAF */  sw         $ra, 0x10($sp)
    /* 5AE2C 8014CA2C C7E5030C */  jal        func_800F971C
    /* 5AE30 8014CA30 00000000 */   nop
    /* 5AE34 8014CA34 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 5AE38 8014CA38 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 5AE3C 8014CA3C 1A80043C */  lui        $a0, %hi(D_8019ED54)
    /* 5AE40 8014CA40 54ED848C */  lw         $a0, %lo(D_8019ED54)($a0)
    /* 5AE44 8014CA44 00004394 */  lhu        $v1, 0x0($v0)
    /* 5AE48 8014CA48 00000000 */  nop
    /* 5AE4C 8014CA4C 000083A4 */  sh         $v1, 0x0($a0)
  .L8014CA50:
    /* 5AE50 8014CA50 DAE1030C */  jal        func_800F8768
    /* 5AE54 8014CA54 8FF20434 */   ori       $a0, $zero, 0xF28F
    /* 5AE58 8014CA58 D9D8030C */  jal        func_800F6364
    /* 5AE5C 8014CA5C 00000000 */   nop
    /* 5AE60 8014CA60 56D6030C */  jal        func_800F5958
    /* 5AE64 8014CA64 10000424 */   addiu     $a0, $zero, 0x10
    /* 5AE68 8014CA68 F5D4030C */  jal        func_800F53D4
    /* 5AE6C 8014CA6C 00000000 */   nop
    /* 5AE70 8014CA70 F7FF4010 */  beqz       $v0, .L8014CA50
    /* 5AE74 8014CA74 00000000 */   nop
    /* 5AE78 8014CA78 59D9030C */  jal        func_800F6564
    /* 5AE7C 8014CA7C D0F20434 */   ori       $a0, $zero, 0xF2D0
    /* 5AE80 8014CA80 5DD5030C */  jal        func_800F5574
    /* 5AE84 8014CA84 06000424 */   addiu     $a0, $zero, 0x6
    /* 5AE88 8014CA88 F5D4030C */  jal        func_800F53D4
    /* 5AE8C 8014CA8C 00000000 */   nop
    /* 5AE90 8014CA90 13004010 */  beqz       $v0, .L8014CAE0
    /* 5AE94 8014CA94 00000000 */   nop
    /* 5AE98 8014CA98 77DC030C */  jal        func_800F71DC
    /* 5AE9C 8014CA9C 8FF20434 */   ori       $a0, $zero, 0xF28F
    /* 5AEA0 8014CAA0 5BE3030C */  jal        func_800F8D6C
    /* 5AEA4 8014CAA4 08000424 */   addiu     $a0, $zero, 0x8
    /* 5AEA8 8014CAA8 53D9030C */  jal        func_800F654C
    /* 5AEAC 8014CAAC 80000424 */   addiu     $a0, $zero, 0x80
    /* 5AEB0 8014CAB0 62E0030C */  jal        func_800F8188
    /* 5AEB4 8014CAB4 7AF20434 */   ori       $a0, $zero, 0xF27A
    /* 5AEB8 8014CAB8 53D9030C */  jal        func_800F654C
    /* 5AEBC 8014CABC C8000424 */   addiu     $a0, $zero, 0xC8
    /* 5AEC0 8014CAC0 93E0030C */  jal        func_800F824C
    /* 5AEC4 8014CAC4 2C000424 */   addiu     $a0, $zero, 0x2C
    /* 5AEC8 8014CAC8 53D9030C */  jal        func_800F654C
    /* 5AECC 8014CACC 54000424 */   addiu     $a0, $zero, 0x54
    /* 5AED0 8014CAD0 93E0030C */  jal        func_800F824C
    /* 5AED4 8014CAD4 2D000424 */   addiu     $a0, $zero, 0x2D
    /* 5AED8 8014CAD8 A1330508 */  j          .L8014CE84
    /* 5AEDC 8014CADC 00000000 */   nop
  .L8014CAE0:
    /* 5AEE0 8014CAE0 AADB030C */  jal        func_800F6EA8
    /* 5AEE4 8014CAE4 02000424 */   addiu     $a0, $zero, 0x2
    /* 5AEE8 8014CAE8 92D0030C */  jal        func_800F4248
    /* 5AEEC 8014CAEC F0000424 */   addiu     $a0, $zero, 0xF0
    /* 5AEF0 8014CAF0 5DD5030C */  jal        func_800F5574
    /* 5AEF4 8014CAF4 D0000424 */   addiu     $a0, $zero, 0xD0
    /* 5AEF8 8014CAF8 F5D4030C */  jal        func_800F53D4
    /* 5AEFC 8014CAFC 00000000 */   nop
    /* 5AF00 8014CB00 0D004014 */  bnez       $v0, .L8014CB38
    /* 5AF04 8014CB04 00000000 */   nop
    /* 5AF08 8014CB08 5DD5030C */  jal        func_800F5574
    /* 5AF0C 8014CB0C E0000424 */   addiu     $a0, $zero, 0xE0
    /* 5AF10 8014CB10 F5D4030C */  jal        func_800F53D4
    /* 5AF14 8014CB14 00000000 */   nop
    /* 5AF18 8014CB18 07004014 */  bnez       $v0, .L8014CB38
    /* 5AF1C 8014CB1C 00000000 */   nop
    /* 5AF20 8014CB20 5DD5030C */  jal        func_800F5574
    /* 5AF24 8014CB24 30000424 */   addiu     $a0, $zero, 0x30
    /* 5AF28 8014CB28 F5D4030C */  jal        func_800F53D4
    /* 5AF2C 8014CB2C 00000000 */   nop
    /* 5AF30 8014CB30 1A004010 */  beqz       $v0, .L8014CB9C
    /* 5AF34 8014CB34 00000000 */   nop
  .L8014CB38:
    /* 5AF38 8014CB38 53D9030C */  jal        func_800F654C
    /* 5AF3C 8014CB3C 44000424 */   addiu     $a0, $zero, 0x44
    /* 5AF40 8014CB40 93E0030C */  jal        func_800F824C
    /* 5AF44 8014CB44 2D000424 */   addiu     $a0, $zero, 0x2D
    /* 5AF48 8014CB48 77DC030C */  jal        func_800F71DC
    /* 5AF4C 8014CB4C 8FF20434 */   ori       $a0, $zero, 0xF28F
    /* 5AF50 8014CB50 5BE3030C */  jal        func_800F8D6C
    /* 5AF54 8014CB54 08000424 */   addiu     $a0, $zero, 0x8
    /* 5AF58 8014CB58 53D9030C */  jal        func_800F654C
    /* 5AF5C 8014CB5C 80000424 */   addiu     $a0, $zero, 0x80
    /* 5AF60 8014CB60 62E0030C */  jal        func_800F8188
    /* 5AF64 8014CB64 7AF20434 */   ori       $a0, $zero, 0xF27A
    /* 5AF68 8014CB68 8CD9030C */  jal        func_800F6630
    /* 5AF6C 8014CB6C 21200000 */   addu      $a0, $zero, $zero
    /* 5AF70 8014CB70 0DD9030C */  jal        func_800F6434
    /* 5AF74 8014CB74 02020424 */   addiu     $a0, $zero, 0x202
    /* 5AF78 8014CB78 02004014 */  bnez       $v0, .L8014CB84
    /* 5AF7C 8014CB7C 60000424 */   addiu     $a0, $zero, 0x60
    /* 5AF80 8014CB80 D8000424 */  addiu      $a0, $zero, 0xD8
  .L8014CB84:
    /* 5AF84 8014CB84 53D9030C */  jal        func_800F654C
    /* 5AF88 8014CB88 00000000 */   nop
    /* 5AF8C 8014CB8C 93E0030C */  jal        func_800F824C
    /* 5AF90 8014CB90 2C000424 */   addiu     $a0, $zero, 0x2C
    /* 5AF94 8014CB94 A1330508 */  j          .L8014CE84
    /* 5AF98 8014CB98 00000000 */   nop
  .L8014CB9C:
    /* 5AF9C 8014CB9C 5DD5030C */  jal        func_800F5574
    /* 5AFA0 8014CBA0 40000424 */   addiu     $a0, $zero, 0x40
    /* 5AFA4 8014CBA4 F5D4030C */  jal        func_800F53D4
    /* 5AFA8 8014CBA8 00000000 */   nop
    /* 5AFAC 8014CBAC 0B004010 */  beqz       $v0, .L8014CBDC
    /* 5AFB0 8014CBB0 00000000 */   nop
    /* 5AFB4 8014CBB4 59D9030C */  jal        func_800F6564
    /* 5AFB8 8014CBB8 9AF40434 */   ori       $a0, $zero, 0xF49A
    /* 5AFBC 8014CBBC 5DD5030C */  jal        func_800F5574
    /* 5AFC0 8014CBC0 91000424 */   addiu     $a0, $zero, 0x91
    /* 5AFC4 8014CBC4 F5D4030C */  jal        func_800F53D4
    /* 5AFC8 8014CBC8 00000000 */   nop
    /* 5AFCC 8014CBCC 1B004014 */  bnez       $v0, .L8014CC3C
    /* 5AFD0 8014CBD0 60000424 */   addiu     $a0, $zero, 0x60
    /* 5AFD4 8014CBD4 FD320508 */  j          .L8014CBF4
    /* 5AFD8 8014CBD8 00000000 */   nop
  .L8014CBDC:
    /* 5AFDC 8014CBDC 5DD5030C */  jal        func_800F5574
    /* 5AFE0 8014CBE0 50000424 */   addiu     $a0, $zero, 0x50
    /* 5AFE4 8014CBE4 F5D4030C */  jal        func_800F53D4
    /* 5AFE8 8014CBE8 00000000 */   nop
    /* 5AFEC 8014CBEC 13004010 */  beqz       $v0, .L8014CC3C
    /* 5AFF0 8014CBF0 80000424 */   addiu     $a0, $zero, 0x80
  .L8014CBF4:
    /* 5AFF4 8014CBF4 53D9030C */  jal        func_800F654C
    /* 5AFF8 8014CBF8 00000000 */   nop
    /* 5AFFC 8014CBFC 93E0030C */  jal        func_800F824C
    /* 5B000 8014CC00 2C000424 */   addiu     $a0, $zero, 0x2C
    /* 5B004 8014CC04 53D9030C */  jal        func_800F654C
    /* 5B008 8014CC08 44000424 */   addiu     $a0, $zero, 0x44
    /* 5B00C 8014CC0C 93E0030C */  jal        func_800F824C
    /* 5B010 8014CC10 2D000424 */   addiu     $a0, $zero, 0x2D
    /* 5B014 8014CC14 77DC030C */  jal        func_800F71DC
    /* 5B018 8014CC18 8FF20434 */   ori       $a0, $zero, 0xF28F
    /* 5B01C 8014CC1C 5BE3030C */  jal        func_800F8D6C
    /* 5B020 8014CC20 08000424 */   addiu     $a0, $zero, 0x8
    /* 5B024 8014CC24 53D9030C */  jal        func_800F654C
    /* 5B028 8014CC28 80000424 */   addiu     $a0, $zero, 0x80
    /* 5B02C 8014CC2C 62E0030C */  jal        func_800F8188
    /* 5B030 8014CC30 7AF20434 */   ori       $a0, $zero, 0xF27A
    /* 5B034 8014CC34 A1330508 */  j          .L8014CE84
    /* 5B038 8014CC38 00000000 */   nop
  .L8014CC3C:
    /* 5B03C 8014CC3C 40DD030C */  jal        func_800F7500
    /* 5B040 8014CC40 01000424 */   addiu     $a0, $zero, 0x1
    /* 5B044 8014CC44 FFD9030C */  jal        func_800F67FC
    /* 5B048 8014CC48 02000424 */   addiu     $a0, $zero, 0x2
    /* 5B04C 8014CC4C 92D0030C */  jal        func_800F4248
    /* 5B050 8014CC50 60000424 */   addiu     $a0, $zero, 0x60
    /* 5B054 8014CC54 48D0030C */  jal        func_800F4120
    /* 5B058 8014CC58 02020424 */   addiu     $a0, $zero, 0x202
    /* 5B05C 8014CC5C 25004014 */  bnez       $v0, .L8014CCF4
    /* 5B060 8014CC60 00000000 */   nop
    /* 5B064 8014CC64 8CD9030C */  jal        func_800F6630
    /* 5B068 8014CC68 21200000 */   addu      $a0, $zero, $zero
    /* 5B06C 8014CC6C 0DD9030C */  jal        func_800F6434
    /* 5B070 8014CC70 02020424 */   addiu     $a0, $zero, 0x202
    /* 5B074 8014CC74 0F004014 */  bnez       $v0, .L8014CCB4
    /* 5B078 8014CC78 00000000 */   nop
    /* 5B07C 8014CC7C EEE3030C */  jal        func_800F8FB8
    /* 5B080 8014CC80 2D000424 */   addiu     $a0, $zero, 0x2D
    /* 5B084 8014CC84 53D9030C */  jal        func_800F654C
    /* 5B088 8014CC88 18000424 */   addiu     $a0, $zero, 0x18
    /* 5B08C 8014CC8C 93E0030C */  jal        func_800F824C
    /* 5B090 8014CC90 2C000424 */   addiu     $a0, $zero, 0x2C
    /* 5B094 8014CC94 53D9030C */  jal        func_800F654C
    /* 5B098 8014CC98 01000424 */   addiu     $a0, $zero, 0x1
    /* 5B09C 8014CC9C 62E0030C */  jal        func_800F8188
    /* 5B0A0 8014CCA0 61F20434 */   ori       $a0, $zero, 0xF261
    /* 5B0A4 8014CCA4 77DC030C */  jal        func_800F71DC
    /* 5B0A8 8014CCA8 53F00434 */   ori       $a0, $zero, 0xF053
    /* 5B0AC 8014CCAC 9F330508 */  j          .L8014CE7C
    /* 5B0B0 8014CCB0 00000000 */   nop
  .L8014CCB4:
    /* 5B0B4 8014CCB4 C7E5030C */  jal        func_800F971C
    /* 5B0B8 8014CCB8 00000000 */   nop
    /* 5B0BC 8014CCBC 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 5B0C0 8014CCC0 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 5B0C4 8014CCC4 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 5B0C8 8014CCC8 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 5B0CC 8014CCCC 00004394 */  lhu        $v1, 0x0($v0)
    /* 5B0D0 8014CCD0 2C000424 */  addiu      $a0, $zero, 0x2C
    /* 5B0D4 8014CCD4 5BE3030C */  jal        func_800F8D6C
    /* 5B0D8 8014CCD8 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 5B0DC 8014CCDC 62E0030C */  jal        func_800F8188
    /* 5B0E0 8014CCE0 61F20434 */   ori       $a0, $zero, 0xF261
    /* 5B0E4 8014CCE4 77DC030C */  jal        func_800F71DC
    /* 5B0E8 8014CCE8 43F00434 */   ori       $a0, $zero, 0xF043
    /* 5B0EC 8014CCEC 9F330508 */  j          .L8014CE7C
    /* 5B0F0 8014CCF0 00000000 */   nop
  .L8014CCF4:
    /* 5B0F4 8014CCF4 5DD5030C */  jal        func_800F5574
    /* 5B0F8 8014CCF8 40000424 */   addiu     $a0, $zero, 0x40
    /* 5B0FC 8014CCFC F5D4030C */  jal        func_800F53D4
    /* 5B100 8014CD00 00000000 */   nop
    /* 5B104 8014CD04 0D004010 */  beqz       $v0, .L8014CD3C
    /* 5B108 8014CD08 00000000 */   nop
    /* 5B10C 8014CD0C 8CD9030C */  jal        func_800F6630
    /* 5B110 8014CD10 21200000 */   addu      $a0, $zero, $zero
    /* 5B114 8014CD14 0DD9030C */  jal        func_800F6434
    /* 5B118 8014CD18 02020424 */   addiu     $a0, $zero, 0x202
    /* 5B11C 8014CD1C 13004010 */  beqz       $v0, .L8014CD6C
    /* 5B120 8014CD20 F4000424 */   addiu     $a0, $zero, 0xF4
    /* 5B124 8014CD24 77DC030C */  jal        func_800F71DC
    /* 5B128 8014CD28 21200000 */   addu      $a0, $zero, $zero
    /* 5B12C 8014CD2C 5BE3030C */  jal        func_800F8D6C
    /* 5B130 8014CD30 2C000424 */   addiu     $a0, $zero, 0x2C
    /* 5B134 8014CD34 73330508 */  j          .L8014CDCC
    /* 5B138 8014CD38 00000000 */   nop
  .L8014CD3C:
    /* 5B13C 8014CD3C 5DD5030C */  jal        func_800F5574
    /* 5B140 8014CD40 60000424 */   addiu     $a0, $zero, 0x60
    /* 5B144 8014CD44 F5D4030C */  jal        func_800F53D4
    /* 5B148 8014CD48 00000000 */   nop
    /* 5B14C 8014CD4C 29004010 */  beqz       $v0, .L8014CDF4
    /* 5B150 8014CD50 00000000 */   nop
    /* 5B154 8014CD54 8CD9030C */  jal        func_800F6630
    /* 5B158 8014CD58 21200000 */   addu      $a0, $zero, $zero
    /* 5B15C 8014CD5C 0DD9030C */  jal        func_800F6434
    /* 5B160 8014CD60 02020424 */   addiu     $a0, $zero, 0x202
    /* 5B164 8014CD64 13004014 */  bnez       $v0, .L8014CDB4
    /* 5B168 8014CD68 E8000424 */   addiu     $a0, $zero, 0xE8
  .L8014CD6C:
    /* 5B16C 8014CD6C 53D9030C */  jal        func_800F654C
    /* 5B170 8014CD70 00000000 */   nop
    /* 5B174 8014CD74 93E0030C */  jal        func_800F824C
    /* 5B178 8014CD78 2D000424 */   addiu     $a0, $zero, 0x2D
    /* 5B17C 8014CD7C 53D9030C */  jal        func_800F654C
    /* 5B180 8014CD80 17000424 */   addiu     $a0, $zero, 0x17
    /* 5B184 8014CD84 93E0030C */  jal        func_800F824C
    /* 5B188 8014CD88 2C000424 */   addiu     $a0, $zero, 0x2C
    /* 5B18C 8014CD8C 7332050C */  jal        func_8014C9CC
    /* 5B190 8014CD90 00000000 */   nop
    /* 5B194 8014CD94 53D9030C */  jal        func_800F654C
    /* 5B198 8014CD98 01000424 */   addiu     $a0, $zero, 0x1
    /* 5B19C 8014CD9C 62E0030C */  jal        func_800F8188
    /* 5B1A0 8014CDA0 61F20434 */   ori       $a0, $zero, 0xF261
    /* 5B1A4 8014CDA4 77DC030C */  jal        func_800F71DC
    /* 5B1A8 8014CDA8 39F00434 */   ori       $a0, $zero, 0xF039
    /* 5B1AC 8014CDAC 9F330508 */  j          .L8014CE7C
    /* 5B1B0 8014CDB0 00000000 */   nop
  .L8014CDB4:
    /* 5B1B4 8014CDB4 EEE3030C */  jal        func_800F8FB8
    /* 5B1B8 8014CDB8 2C000424 */   addiu     $a0, $zero, 0x2C
    /* 5B1BC 8014CDBC 53D9030C */  jal        func_800F654C
    /* 5B1C0 8014CDC0 F0000424 */   addiu     $a0, $zero, 0xF0
    /* 5B1C4 8014CDC4 93E0030C */  jal        func_800F824C
    /* 5B1C8 8014CDC8 2D000424 */   addiu     $a0, $zero, 0x2D
  .L8014CDCC:
    /* 5B1CC 8014CDCC 7332050C */  jal        func_8014C9CC
    /* 5B1D0 8014CDD0 00000000 */   nop
    /* 5B1D4 8014CDD4 C7E5030C */  jal        func_800F971C
    /* 5B1D8 8014CDD8 00000000 */   nop
    /* 5B1DC 8014CDDC 62E0030C */  jal        func_800F8188
    /* 5B1E0 8014CDE0 61F20434 */   ori       $a0, $zero, 0xF261
    /* 5B1E4 8014CDE4 77DC030C */  jal        func_800F71DC
    /* 5B1E8 8014CDE8 29F00434 */   ori       $a0, $zero, 0xF029
    /* 5B1EC 8014CDEC 9F330508 */  j          .L8014CE7C
    /* 5B1F0 8014CDF0 00000000 */   nop
  .L8014CDF4:
    /* 5B1F4 8014CDF4 8CD9030C */  jal        func_800F6630
    /* 5B1F8 8014CDF8 21200000 */   addu      $a0, $zero, $zero
    /* 5B1FC 8014CDFC 0DD9030C */  jal        func_800F6434
    /* 5B200 8014CE00 02020424 */   addiu     $a0, $zero, 0x202
    /* 5B204 8014CE04 11004014 */  bnez       $v0, .L8014CE4C
    /* 5B208 8014CE08 00000000 */   nop
    /* 5B20C 8014CE0C EEE3030C */  jal        func_800F8FB8
    /* 5B210 8014CE10 2C000424 */   addiu     $a0, $zero, 0x2C
    /* 5B214 8014CE14 53D9030C */  jal        func_800F654C
    /* 5B218 8014CE18 F8000424 */   addiu     $a0, $zero, 0xF8
    /* 5B21C 8014CE1C 93E0030C */  jal        func_800F824C
    /* 5B220 8014CE20 2D000424 */   addiu     $a0, $zero, 0x2D
    /* 5B224 8014CE24 A92E050C */  jal        func_8014BAA4
    /* 5B228 8014CE28 00000000 */   nop
    /* 5B22C 8014CE2C 53D9030C */  jal        func_800F654C
    /* 5B230 8014CE30 01000424 */   addiu     $a0, $zero, 0x1
    /* 5B234 8014CE34 62E0030C */  jal        func_800F8188
    /* 5B238 8014CE38 61F20434 */   ori       $a0, $zero, 0xF261
    /* 5B23C 8014CE3C 77DC030C */  jal        func_800F71DC
    /* 5B240 8014CE40 6DF00434 */   ori       $a0, $zero, 0xF06D
    /* 5B244 8014CE44 9F330508 */  j          .L8014CE7C
    /* 5B248 8014CE48 00000000 */   nop
  .L8014CE4C:
    /* 5B24C 8014CE4C 77DC030C */  jal        func_800F71DC
    /* 5B250 8014CE50 21200000 */   addu      $a0, $zero, $zero
    /* 5B254 8014CE54 5BE3030C */  jal        func_800F8D6C
    /* 5B258 8014CE58 2C000424 */   addiu     $a0, $zero, 0x2C
    /* 5B25C 8014CE5C A92E050C */  jal        func_8014BAA4
    /* 5B260 8014CE60 00000000 */   nop
    /* 5B264 8014CE64 53D9030C */  jal        func_800F654C
    /* 5B268 8014CE68 21200000 */   addu      $a0, $zero, $zero
    /* 5B26C 8014CE6C 62E0030C */  jal        func_800F8188
    /* 5B270 8014CE70 61F20434 */   ori       $a0, $zero, 0xF261
    /* 5B274 8014CE74 77DC030C */  jal        func_800F71DC
    /* 5B278 8014CE78 5DF00434 */   ori       $a0, $zero, 0xF05D
  .L8014CE7C:
    /* 5B27C 8014CE7C 5BE3030C */  jal        func_800F8D6C
    /* 5B280 8014CE80 08000424 */   addiu     $a0, $zero, 0x8
  .L8014CE84:
    /* 5B284 8014CE84 1000BF8F */  lw         $ra, 0x10($sp)
    /* 5B288 8014CE88 00000000 */  nop
    /* 5B28C 8014CE8C 0800E003 */  jr         $ra
    /* 5B290 8014CE90 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8014CA24
