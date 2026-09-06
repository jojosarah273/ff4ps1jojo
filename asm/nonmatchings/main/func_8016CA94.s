nonmatching func_8016CA94, 0x594

glabel func_8016CA94
    /* 7AE94 8016CA94 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 7AE98 8016CA98 1A80033C */  lui        $v1, %hi(D_8019ED4C)
    /* 7AE9C 8016CA9C 4CED638C */  lw         $v1, %lo(D_8019ED4C)($v1)
    /* 7AEA0 8016CAA0 1A80043C */  lui        $a0, %hi(D_8019ED68)
    /* 7AEA4 8016CAA4 68ED848C */  lw         $a0, %lo(D_8019ED68)($a0)
    /* 7AEA8 8016CAA8 0D80063C */  lui        $a2, %hi(D_800D0000)
    /* 7AEAC 8016CAAC 1000BFAF */  sw         $ra, 0x10($sp)
    /* 7AEB0 8016CAB0 00006294 */  lhu        $v0, 0x0($v1)
    /* 7AEB4 8016CAB4 00008590 */  lbu        $a1, 0x0($a0)
    /* 7AEB8 8016CAB8 21104600 */  addu       $v0, $v0, $a2
    /* 7AEBC 8016CABC 000045A0 */  sb         $a1, %lo(D_800D0000)($v0)
    /* 7AEC0 8016CAC0 1A80033C */  lui        $v1, %hi(D_8019ED4C)
    /* 7AEC4 8016CAC4 4CED638C */  lw         $v1, %lo(D_8019ED4C)($v1)
    /* 7AEC8 8016CAC8 00000000 */  nop
    /* 7AECC 8016CACC 00006294 */  lhu        $v0, 0x0($v1)
    /* 7AED0 8016CAD0 30000424 */  addiu      $a0, $zero, 0x30
    /* 7AED4 8016CAD4 FFFF4224 */  addiu      $v0, $v0, -0x1
    /* 7AED8 8016CAD8 91E5030C */  jal        func_800F9644
    /* 7AEDC 8016CADC 000062A4 */   sh        $v0, 0x0($v1)
    /* 7AEE0 8016CAE0 8BE4030C */  jal        func_800F922C
    /* 7AEE4 8016CAE4 00000000 */   nop
    /* 7AEE8 8016CAE8 CCE4030C */  jal        func_800F9330
    /* 7AEEC 8016CAEC 00000000 */   nop
    /* 7AEF0 8016CAF0 E7E4030C */  jal        func_800F939C
    /* 7AEF4 8016CAF4 00000000 */   nop
    /* 7AEF8 8016CAF8 9BE4030C */  jal        func_800F926C
    /* 7AEFC 8016CAFC 00000000 */   nop
    /* 7AF00 8016CB00 A6E4030C */  jal        func_800F9298
    /* 7AF04 8016CB04 00000000 */   nop
    /* 7AF08 8016CB08 77DC030C */  jal        func_800F71DC
    /* 7AF0C 8016CB0C 21200000 */   addu      $a0, $zero, $zero
    /* 7AF10 8016CB10 CCE4030C */  jal        func_800F9330
    /* 7AF14 8016CB14 00000000 */   nop
    /* 7AF18 8016CB18 2EE5030C */  jal        func_800F94B8
    /* 7AF1C 8016CB1C 00000000 */   nop
    /* 7AF20 8016CB20 C7E5030C */  jal        func_800F971C
    /* 7AF24 8016CB24 00000000 */   nop
    /* 7AF28 8016CB28 98E5030C */  jal        func_800F9660
    /* 7AF2C 8016CB2C 20000424 */   addiu     $a0, $zero, 0x20
    /* 7AF30 8016CB30 53D9030C */  jal        func_800F654C
    /* 7AF34 8016CB34 7E000424 */   addiu     $a0, $zero, 0x7E
    /* 7AF38 8016CB38 80E4030C */  jal        func_800F9200
    /* 7AF3C 8016CB3C 00000000 */   nop
    /* 7AF40 8016CB40 12E5030C */  jal        func_800F9448
    /* 7AF44 8016CB44 00000000 */   nop
    /* 7AF48 8016CB48 8CD9030C */  jal        func_800F6630
    /* 7AF4C 8016CB4C 40000424 */   addiu     $a0, $zero, 0x40
    /* 7AF50 8016CB50 0DD9030C */  jal        func_800F6434
    /* 7AF54 8016CB54 02000424 */   addiu     $a0, $zero, 0x2
    /* 7AF58 8016CB58 14014010 */  beqz       $v0, .L8016CFAC
    /* 7AF5C 8016CB5C 00000000 */   nop
    /* 7AF60 8016CB60 AFD8030C */  jal        func_800F62BC
    /* 7AF64 8016CB64 40000424 */   addiu     $a0, $zero, 0x40
    /* 7AF68 8016CB68 59D9030C */  jal        func_800F6564
    /* 7AF6C 8016CB6C 03330424 */   addiu     $a0, $zero, 0x3303
    /* 7AF70 8016CB70 7AE0030C */  jal        func_800F81E8
    /* 7AF74 8016CB74 00210424 */   addiu     $a0, $zero, 0x2100
    /* 7AF78 8016CB78 8CD9030C */  jal        func_800F6630
    /* 7AF7C 8016CB7C A0000424 */   addiu     $a0, $zero, 0xA0
    /* 7AF80 8016CB80 7AE0030C */  jal        func_800F81E8
    /* 7AF84 8016CB84 1A210424 */   addiu     $a0, $zero, 0x211A
    /* 7AF88 8016CB88 59D9030C */  jal        func_800F6564
    /* 7AF8C 8016CB8C 287D0424 */   addiu     $a0, $zero, 0x7D28
    /* 7AF90 8016CB90 7AE0030C */  jal        func_800F81E8
    /* 7AF94 8016CB94 2C210424 */   addiu     $a0, $zero, 0x212C
    /* 7AF98 8016CB98 8CD9030C */  jal        func_800F6630
    /* 7AF9C 8016CB9C 64000424 */   addiu     $a0, $zero, 0x64
    /* 7AFA0 8016CBA0 5DD5030C */  jal        func_800F5574
    /* 7AFA4 8016CBA4 01000424 */   addiu     $a0, $zero, 0x1
    /* 7AFA8 8016CBA8 F5D4030C */  jal        func_800F53D4
    /* 7AFAC 8016CBAC 00000000 */   nop
    /* 7AFB0 8016CBB0 65004014 */  bnez       $v0, .L8016CD48
    /* 7AFB4 8016CBB4 00000000 */   nop
    /* 7AFB8 8016CBB8 8CD9030C */  jal        func_800F6630
    /* 7AFBC 8016CBBC 4A000424 */   addiu     $a0, $zero, 0x4A
    /* 7AFC0 8016CBC0 92D0030C */  jal        func_800F4248
    /* 7AFC4 8016CBC4 03000424 */   addiu     $a0, $zero, 0x3
    /* 7AFC8 8016CBC8 48D0030C */  jal        func_800F4120
    /* 7AFCC 8016CBCC 02000424 */   addiu     $a0, $zero, 0x2
    /* 7AFD0 8016CBD0 A5004010 */  beqz       $v0, .L8016CE68
    /* 7AFD4 8016CBD4 00000000 */   nop
    /* 7AFD8 8016CBD8 8CD9030C */  jal        func_800F6630
    /* 7AFDC 8016CBDC 66000424 */   addiu     $a0, $zero, 0x66
    /* 7AFE0 8016CBE0 1A80023C */  lui        $v0, %hi(D_8019ED40)
    /* 7AFE4 8016CBE4 40ED428C */  lw         $v0, %lo(D_8019ED40)($v0)
    /* 7AFE8 8016CBE8 00000000 */  nop
    /* 7AFEC 8016CBEC 00004390 */  lbu        $v1, 0x0($v0)
    /* 7AFF0 8016CBF0 1A80013C */  lui        $at, %hi(D_8019EE68)
    /* 7AFF4 8016CBF4 68EE23A4 */  sh         $v1, %lo(D_8019EE68)($at)
    /* 7AFF8 8016CBF8 8CD9030C */  jal        func_800F6630
    /* 7AFFC 8016CBFC 67000424 */   addiu     $a0, $zero, 0x67
    /* 7B000 8016CC00 1A80053C */  lui        $a1, %hi(D_8019ED40)
    /* 7B004 8016CC04 40EDA58C */  lw         $a1, %lo(D_8019ED40)($a1)
    /* 7B008 8016CC08 00000000 */  nop
    /* 7B00C 8016CC0C 0000A290 */  lbu        $v0, 0x0($a1)
    /* 7B010 8016CC10 1A80033C */  lui        $v1, %hi(D_8019EE68)
    /* 7B014 8016CC14 68EE6394 */  lhu        $v1, %lo(D_8019EE68)($v1)
    /* 7B018 8016CC18 00120200 */  sll        $v0, $v0, 8
    /* 7B01C 8016CC1C 25186200 */  or         $v1, $v1, $v0
    /* 7B020 8016CC20 1A80013C */  lui        $at, %hi(D_8019EE68)
    /* 7B024 8016CC24 68EE23A4 */  sh         $v1, %lo(D_8019EE68)($at)
    /* 7B028 8016CC28 8CD9030C */  jal        func_800F6630
    /* 7B02C 8016CC2C 8C000424 */   addiu     $a0, $zero, 0x8C
    /* 7B030 8016CC30 7AE0030C */  jal        func_800F81E8
    /* 7B034 8016CC34 1F210424 */   addiu     $a0, $zero, 0x211F
    /* 7B038 8016CC38 8CD9030C */  jal        func_800F6630
    /* 7B03C 8016CC3C 8D000424 */   addiu     $a0, $zero, 0x8D
    /* 7B040 8016CC40 7AE0030C */  jal        func_800F81E8
    /* 7B044 8016CC44 1F210424 */   addiu     $a0, $zero, 0x211F
    /* 7B048 8016CC48 8CD9030C */  jal        func_800F6630
    /* 7B04C 8016CC4C 8E000424 */   addiu     $a0, $zero, 0x8E
    /* 7B050 8016CC50 7AE0030C */  jal        func_800F81E8
    /* 7B054 8016CC54 20210424 */   addiu     $a0, $zero, 0x2120
    /* 7B058 8016CC58 8CD9030C */  jal        func_800F6630
    /* 7B05C 8016CC5C 8F000424 */   addiu     $a0, $zero, 0x8F
    /* 7B060 8016CC60 7AE0030C */  jal        func_800F81E8
    /* 7B064 8016CC64 20210424 */   addiu     $a0, $zero, 0x2120
    /* 7B068 8016CC68 59D9030C */  jal        func_800F6564
    /* 7B06C 8016CC6C 1F7D0424 */   addiu     $a0, $zero, 0x7D1F
    /* 7B070 8016CC70 0DD9030C */  jal        func_800F6434
    /* 7B074 8016CC74 02020424 */   addiu     $a0, $zero, 0x202
    /* 7B078 8016CC78 7B004014 */  bnez       $v0, .L8016CE68
    /* 7B07C 8016CC7C 00000000 */   nop
    /* 7B080 8016CC80 8CD9030C */  jal        func_800F6630
    /* 7B084 8016CC84 64000424 */   addiu     $a0, $zero, 0x64
    /* 7B088 8016CC88 0DD9030C */  jal        func_800F6434
    /* 7B08C 8016CC8C 02000424 */   addiu     $a0, $zero, 0x2
    /* 7B090 8016CC90 11004014 */  bnez       $v0, .L8016CCD8
    /* 7B094 8016CC94 00000000 */   nop
    /* 7B098 8016CC98 91E5030C */  jal        func_800F9644
    /* 7B09C 8016CC9C 20000424 */   addiu     $a0, $zero, 0x20
    /* 7B0A0 8016CCA0 96D9030C */  jal        func_800F6658
    /* 7B0A4 8016CCA4 66000424 */   addiu     $a0, $zero, 0x66
    /* 7B0A8 8016CCA8 85D8030C */  jal        func_800F6214
    /* 7B0AC 8016CCAC 00000000 */   nop
    /* 7B0B0 8016CCB0 70D5030C */  jal        func_800F55C0
    /* 7B0B4 8016CCB4 00040424 */   addiu     $a0, $zero, 0x400
    /* 7B0B8 8016CCB8 F5D4030C */  jal        func_800F53D4
    /* 7B0BC 8016CCBC 00000000 */   nop
    /* 7B0C0 8016CCC0 13004010 */  beqz       $v0, .L8016CD10
    /* 7B0C4 8016CCC4 00000000 */   nop
    /* 7B0C8 8016CCC8 C7E5030C */  jal        func_800F971C
    /* 7B0CC 8016CCCC 00000000 */   nop
    /* 7B0D0 8016CCD0 44B30508 */  j          .L8016CD10
    /* 7B0D4 8016CCD4 00000000 */   nop
  .L8016CCD8:
    /* 7B0D8 8016CCD8 91E5030C */  jal        func_800F9644
    /* 7B0DC 8016CCDC 20000424 */   addiu     $a0, $zero, 0x20
    /* 7B0E0 8016CCE0 96D9030C */  jal        func_800F6658
    /* 7B0E4 8016CCE4 66000424 */   addiu     $a0, $zero, 0x66
    /* 7B0E8 8016CCE8 85D8030C */  jal        func_800F6214
    /* 7B0EC 8016CCEC 00000000 */   nop
    /* 7B0F0 8016CCF0 70D5030C */  jal        func_800F55C0
    /* 7B0F4 8016CCF4 00040424 */   addiu     $a0, $zero, 0x400
    /* 7B0F8 8016CCF8 F5D4030C */  jal        func_800F53D4
    /* 7B0FC 8016CCFC 00000000 */   nop
    /* 7B100 8016CD00 03004010 */  beqz       $v0, .L8016CD10
    /* 7B104 8016CD04 00000000 */   nop
    /* 7B108 8016CD08 3ED7030C */  jal        func_800F5CF8
    /* 7B10C 8016CD0C 00000000 */   nop
  .L8016CD10:
    /* 7B110 8016CD10 9DE0030C */  jal        func_800F8274
    /* 7B114 8016CD14 66000424 */   addiu     $a0, $zero, 0x66
    /* 7B118 8016CD18 04D5030C */  jal        func_800F5410
    /* 7B11C 8016CD1C 00000000 */   nop
    /* 7B120 8016CD20 19D0030C */  jal        func_800F4064
    /* 7B124 8016CD24 80000424 */   addiu     $a0, $zero, 0x80
    /* 7B128 8016CD28 9DE0030C */  jal        func_800F8274
    /* 7B12C 8016CD2C 8E000424 */   addiu     $a0, $zero, 0x8E
    /* 7B130 8016CD30 C7E5030C */  jal        func_800F971C
    /* 7B134 8016CD34 00000000 */   nop
    /* 7B138 8016CD38 98E5030C */  jal        func_800F9660
    /* 7B13C 8016CD3C 20000424 */   addiu     $a0, $zero, 0x20
    /* 7B140 8016CD40 9AB30508 */  j          .L8016CE68
    /* 7B144 8016CD44 00000000 */   nop
  .L8016CD48:
    /* 7B148 8016CD48 59D9030C */  jal        func_800F6564
    /* 7B14C 8016CD4C 61000424 */   addiu     $a0, $zero, 0x61
    /* 7B150 8016CD50 7AE0030C */  jal        func_800F81E8
    /* 7B154 8016CD54 1B210424 */   addiu     $a0, $zero, 0x211B
    /* 7B158 8016CD58 59D9030C */  jal        func_800F6564
    /* 7B15C 8016CD5C 62000424 */   addiu     $a0, $zero, 0x62
    /* 7B160 8016CD60 7AE0030C */  jal        func_800F81E8
    /* 7B164 8016CD64 1B210424 */   addiu     $a0, $zero, 0x211B
    /* 7B168 8016CD68 59D9030C */  jal        func_800F6564
    /* 7B16C 8016CD6C 61000424 */   addiu     $a0, $zero, 0x61
    /* 7B170 8016CD70 7AE0030C */  jal        func_800F81E8
    /* 7B174 8016CD74 1E210424 */   addiu     $a0, $zero, 0x211E
    /* 7B178 8016CD78 59D9030C */  jal        func_800F6564
    /* 7B17C 8016CD7C 62000424 */   addiu     $a0, $zero, 0x62
    /* 7B180 8016CD80 7AE0030C */  jal        func_800F81E8
    /* 7B184 8016CD84 1E210424 */   addiu     $a0, $zero, 0x211E
    /* 7B188 8016CD88 8CD9030C */  jal        func_800F6630
    /* 7B18C 8016CD8C 5D000424 */   addiu     $a0, $zero, 0x5D
    /* 7B190 8016CD90 1A80023C */  lui        $v0, %hi(D_8019ED40)
    /* 7B194 8016CD94 40ED428C */  lw         $v0, %lo(D_8019ED40)($v0)
    /* 7B198 8016CD98 00000000 */  nop
    /* 7B19C 8016CD9C 00004390 */  lbu        $v1, 0x0($v0)
    /* 7B1A0 8016CDA0 1A80013C */  lui        $at, %hi(D_8019EE60)
    /* 7B1A4 8016CDA4 60EE23A4 */  sh         $v1, %lo(D_8019EE60)($at)
    /* 7B1A8 8016CDA8 8CD9030C */  jal        func_800F6630
    /* 7B1AC 8016CDAC 5E000424 */   addiu     $a0, $zero, 0x5E
    /* 7B1B0 8016CDB0 1A80053C */  lui        $a1, %hi(D_8019ED40)
    /* 7B1B4 8016CDB4 40EDA58C */  lw         $a1, %lo(D_8019ED40)($a1)
    /* 7B1B8 8016CDB8 00000000 */  nop
    /* 7B1BC 8016CDBC 0000A290 */  lbu        $v0, 0x0($a1)
    /* 7B1C0 8016CDC0 1A80033C */  lui        $v1, %hi(D_8019EE60)
    /* 7B1C4 8016CDC4 60EE6394 */  lhu        $v1, %lo(D_8019EE60)($v1)
    /* 7B1C8 8016CDC8 00120200 */  sll        $v0, $v0, 8
    /* 7B1CC 8016CDCC 25186200 */  or         $v1, $v1, $v0
    /* 7B1D0 8016CDD0 1A80013C */  lui        $at, %hi(D_8019EE60)
    /* 7B1D4 8016CDD4 60EE23A4 */  sh         $v1, %lo(D_8019EE60)($at)
    /* 7B1D8 8016CDD8 8CD9030C */  jal        func_800F6630
    /* 7B1DC 8016CDDC 5F000424 */   addiu     $a0, $zero, 0x5F
    /* 7B1E0 8016CDE0 1A80023C */  lui        $v0, %hi(D_8019ED40)
    /* 7B1E4 8016CDE4 40ED428C */  lw         $v0, %lo(D_8019ED40)($v0)
    /* 7B1E8 8016CDE8 00000000 */  nop
    /* 7B1EC 8016CDEC 00004390 */  lbu        $v1, 0x0($v0)
    /* 7B1F0 8016CDF0 1A80013C */  lui        $at, %hi(D_8019EE68)
    /* 7B1F4 8016CDF4 68EE23A4 */  sh         $v1, %lo(D_8019EE68)($at)
    /* 7B1F8 8016CDF8 8CD9030C */  jal        func_800F6630
    /* 7B1FC 8016CDFC 60000424 */   addiu     $a0, $zero, 0x60
    /* 7B200 8016CE00 1A80053C */  lui        $a1, %hi(D_8019ED40)
    /* 7B204 8016CE04 40EDA58C */  lw         $a1, %lo(D_8019ED40)($a1)
    /* 7B208 8016CE08 00000000 */  nop
    /* 7B20C 8016CE0C 0000A290 */  lbu        $v0, 0x0($a1)
    /* 7B210 8016CE10 1A80033C */  lui        $v1, %hi(D_8019EE68)
    /* 7B214 8016CE14 68EE6394 */  lhu        $v1, %lo(D_8019EE68)($v1)
    /* 7B218 8016CE18 00120200 */  sll        $v0, $v0, 8
    /* 7B21C 8016CE1C 25186200 */  or         $v1, $v1, $v0
    /* 7B220 8016CE20 1A80013C */  lui        $at, %hi(D_8019EE68)
    /* 7B224 8016CE24 68EE23A4 */  sh         $v1, %lo(D_8019EE68)($at)
    /* 7B228 8016CE28 8CD9030C */  jal        func_800F6630
    /* 7B22C 8016CE2C 8C000424 */   addiu     $a0, $zero, 0x8C
    /* 7B230 8016CE30 7AE0030C */  jal        func_800F81E8
    /* 7B234 8016CE34 1F210424 */   addiu     $a0, $zero, 0x211F
    /* 7B238 8016CE38 8CD9030C */  jal        func_800F6630
    /* 7B23C 8016CE3C 8D000424 */   addiu     $a0, $zero, 0x8D
    /* 7B240 8016CE40 7AE0030C */  jal        func_800F81E8
    /* 7B244 8016CE44 1F210424 */   addiu     $a0, $zero, 0x211F
    /* 7B248 8016CE48 8CD9030C */  jal        func_800F6630
    /* 7B24C 8016CE4C 8E000424 */   addiu     $a0, $zero, 0x8E
    /* 7B250 8016CE50 7AE0030C */  jal        func_800F81E8
    /* 7B254 8016CE54 20210424 */   addiu     $a0, $zero, 0x2120
    /* 7B258 8016CE58 8CD9030C */  jal        func_800F6630
    /* 7B25C 8016CE5C 8F000424 */   addiu     $a0, $zero, 0x8F
    /* 7B260 8016CE60 7AE0030C */  jal        func_800F81E8
    /* 7B264 8016CE64 20210424 */   addiu     $a0, $zero, 0x2120
  .L8016CE68:
    /* 7B268 8016CE68 4BAF050C */  jal        func_8016BD2C
    /* 7B26C 8016CE6C 00000000 */   nop
    /* 7B270 8016CE70 8CD9030C */  jal        func_800F6630
    /* 7B274 8016CE74 64000424 */   addiu     $a0, $zero, 0x64
    /* 7B278 8016CE78 5DD5030C */  jal        func_800F5574
    /* 7B27C 8016CE7C 02000424 */   addiu     $a0, $zero, 0x2
    /* 7B280 8016CE80 F5D4030C */  jal        func_800F53D4
    /* 7B284 8016CE84 00000000 */   nop
    /* 7B288 8016CE88 07004010 */  beqz       $v0, .L8016CEA8
    /* 7B28C 8016CE8C 00000000 */   nop
    /* 7B290 8016CE90 6CB6050C */  jal        func_8016D9B0
    /* 7B294 8016CE94 00000000 */   nop
    /* 7B298 8016CE98 3EB8050C */  jal        func_8016E0F8
    /* 7B29C 8016CE9C 00000000 */   nop
    /* 7B2A0 8016CEA0 C9B30508 */  j          .L8016CF24
    /* 7B2A4 8016CEA4 00000000 */   nop
  .L8016CEA8:
    /* 7B2A8 8016CEA8 1BAF050C */  jal        func_8016BC6C
    /* 7B2AC 8016CEAC 00000000 */   nop
    /* 7B2B0 8016CEB0 1D80043C */  lui        $a0, %hi(D_801D7D68)
    /* 7B2B4 8016CEB4 687D8424 */  addiu      $a0, $a0, %lo(D_801D7D68)
    /* 7B2B8 8016CEB8 00030524 */  addiu      $a1, $zero, 0x300
    /* 7B2BC 8016CEBC 2605060C */  jal        func_80181498
    /* 7B2C0 8016CEC0 21300000 */   addu      $a2, $zero, $zero
    /* 7B2C4 8016CEC4 A3AD050C */  jal        func_8016B68C
    /* 7B2C8 8016CEC8 00000000 */   nop
    /* 7B2CC 8016CECC 1FAB050C */  jal        func_8016AC7C
    /* 7B2D0 8016CED0 00000000 */   nop
    /* 7B2D4 8016CED4 16B2050C */  jal        func_8016C858
    /* 7B2D8 8016CED8 00000000 */   nop
    /* 7B2DC 8016CEDC 8CD9030C */  jal        func_800F6630
    /* 7B2E0 8016CEE0 64000424 */   addiu     $a0, $zero, 0x64
    /* 7B2E4 8016CEE4 0DD9030C */  jal        func_800F6434
    /* 7B2E8 8016CEE8 02000424 */   addiu     $a0, $zero, 0x2
    /* 7B2EC 8016CEEC 0D004014 */  bnez       $v0, .L8016CF24
    /* 7B2F0 8016CEF0 00000000 */   nop
    /* 7B2F4 8016CEF4 84DC030C */  jal        func_800F7210
    /* 7B2F8 8016CEF8 04200424 */   addiu     $a0, $zero, 0x2004
    /* 7B2FC 8016CEFC 56D6030C */  jal        func_800F5958
    /* 7B300 8016CF00 80FF0434 */   ori       $a0, $zero, 0xFF80
    /* 7B304 8016CF04 F5D4030C */  jal        func_800F53D4
    /* 7B308 8016CF08 00000000 */   nop
    /* 7B30C 8016CF0C 05004010 */  beqz       $v0, .L8016CF24
    /* 7B310 8016CF10 00000000 */   nop
    /* 7B314 8016CF14 53D9030C */  jal        func_800F654C
    /* 7B318 8016CF18 01000424 */   addiu     $a0, $zero, 0x1
    /* 7B31C 8016CF1C 62E0030C */  jal        func_800F8188
    /* 7B320 8016CF20 5B000424 */   addiu     $a0, $zero, 0x5B
  .L8016CF24:
    /* 7B324 8016CF24 59D9030C */  jal        func_800F6564
    /* 7B328 8016CF28 5B000424 */   addiu     $a0, $zero, 0x5B
    /* 7B32C 8016CF2C 0DD9030C */  jal        func_800F6434
    /* 7B330 8016CF30 02000424 */   addiu     $a0, $zero, 0x2
    /* 7B334 8016CF34 0F004014 */  bnez       $v0, .L8016CF74
    /* 7B338 8016CF38 00000000 */   nop
    /* 7B33C 8016CF3C 8CD9030C */  jal        func_800F6630
    /* 7B340 8016CF40 4A000424 */   addiu     $a0, $zero, 0x4A
    /* 7B344 8016CF44 92D0030C */  jal        func_800F4248
    /* 7B348 8016CF48 03000424 */   addiu     $a0, $zero, 0x3
    /* 7B34C 8016CF4C 48D0030C */  jal        func_800F4120
    /* 7B350 8016CF50 02020424 */   addiu     $a0, $zero, 0x202
    /* 7B354 8016CF54 07004014 */  bnez       $v0, .L8016CF74
    /* 7B358 8016CF58 00000000 */   nop
    /* 7B35C 8016CF5C 77DC030C */  jal        func_800F71DC
    /* 7B360 8016CF60 0A000424 */   addiu     $a0, $zero, 0xA
    /* 7B364 8016CF64 40DD030C */  jal        func_800F7500
    /* 7B368 8016CF68 01000424 */   addiu     $a0, $zero, 0x1
    /* 7B36C 8016CF6C 87AF050C */  jal        func_8016BE1C
    /* 7B370 8016CF70 00000000 */   nop
  .L8016CF74:
    /* 7B374 8016CF74 59D9030C */  jal        func_800F6564
    /* 7B378 8016CF78 257D0424 */   addiu     $a0, $zero, 0x7D25
    /* 7B37C 8016CF7C 0DD9030C */  jal        func_800F6434
    /* 7B380 8016CF80 02000424 */   addiu     $a0, $zero, 0x2
    /* 7B384 8016CF84 03004014 */  bnez       $v0, .L8016CF94
    /* 7B388 8016CF88 00000000 */   nop
    /* 7B38C 8016CF8C D6B8050C */  jal        func_8016E358
    /* 7B390 8016CF90 00000000 */   nop
  .L8016CF94:
    /* 7B394 8016CF94 EEE3030C */  jal        func_800F8FB8
    /* 7B398 8016CF98 40000424 */   addiu     $a0, $zero, 0x40
    /* 7B39C 8016CF9C EEE3030C */  jal        func_800F8FB8
    /* 7B3A0 8016CFA0 41000424 */   addiu     $a0, $zero, 0x41
    /* 7B3A4 8016CFA4 AFD8030C */  jal        func_800F62BC
    /* 7B3A8 8016CFA8 4A000424 */   addiu     $a0, $zero, 0x4A
  .L8016CFAC:
    /* 7B3AC 8016CFAC 91E5030C */  jal        func_800F9644
    /* 7B3B0 8016CFB0 30000424 */   addiu     $a0, $zero, 0x30
    /* 7B3B4 8016CFB4 2EE5030C */  jal        func_800F94B8
    /* 7B3B8 8016CFB8 00000000 */   nop
    /* 7B3BC 8016CFBC 12E5030C */  jal        func_800F9448
    /* 7B3C0 8016CFC0 00000000 */   nop
    /* 7B3C4 8016CFC4 83E5030C */  jal        func_800F960C
    /* 7B3C8 8016CFC8 00000000 */   nop
    /* 7B3CC 8016CFCC 68E5030C */  jal        func_800F95A0
    /* 7B3D0 8016CFD0 00000000 */   nop
    /* 7B3D4 8016CFD4 04E5030C */  jal        func_800F9410
    /* 7B3D8 8016CFD8 00000000 */   nop
    /* 7B3DC 8016CFDC 1A80043C */  lui        $a0, %hi(D_8019ED4C)
    /* 7B3E0 8016CFE0 4CED848C */  lw         $a0, %lo(D_8019ED4C)($a0)
    /* 7B3E4 8016CFE4 00000000 */  nop
    /* 7B3E8 8016CFE8 00008294 */  lhu        $v0, 0x0($a0)
    /* 7B3EC 8016CFEC 1000BF8F */  lw         $ra, 0x10($sp)
    /* 7B3F0 8016CFF0 01004224 */  addiu      $v0, $v0, 0x1
    /* 7B3F4 8016CFF4 000082A4 */  sh         $v0, 0x0($a0)
    /* 7B3F8 8016CFF8 1A80033C */  lui        $v1, %hi(D_8019ED4C)
    /* 7B3FC 8016CFFC 4CED638C */  lw         $v1, %lo(D_8019ED4C)($v1)
    /* 7B400 8016D000 0D80043C */  lui        $a0, %hi(D_800D0000)
    /* 7B404 8016D004 00006294 */  lhu        $v0, 0x0($v1)
    /* 7B408 8016D008 1A80053C */  lui        $a1, %hi(D_8019ED68)
    /* 7B40C 8016D00C 68EDA58C */  lw         $a1, %lo(D_8019ED68)($a1)
    /* 7B410 8016D010 21104400 */  addu       $v0, $v0, $a0
    /* 7B414 8016D014 00004390 */  lbu        $v1, %lo(D_800D0000)($v0)
    /* 7B418 8016D018 00000000 */  nop
    /* 7B41C 8016D01C 0000A3A0 */  sb         $v1, 0x0($a1)
    /* 7B420 8016D020 0800E003 */  jr         $ra
    /* 7B424 8016D024 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8016CA94
