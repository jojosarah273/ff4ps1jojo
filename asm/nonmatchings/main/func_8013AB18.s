nonmatching func_8013AB18, 0x48C

glabel func_8013AB18
    /* 48F18 8013AB18 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 48F1C 8013AB1C 1400BFAF */  sw         $ra, 0x14($sp)
    /* 48F20 8013AB20 1000B0AF */  sw         $s0, 0x10($sp)
  .L8013AB24:
    /* 48F24 8013AB24 59D9030C */  jal        func_800F6564
    /* 48F28 8013AB28 B91B0424 */   addiu     $a0, $zero, 0x1BB9
    /* 48F2C 8013AB2C 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 48F30 8013AB30 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 48F34 8013AB34 00000000 */  nop
    /* 48F38 8013AB38 00006290 */  lbu        $v0, 0x0($v1)
    /* 48F3C 8013AB3C 00000000 */  nop
    /* 48F40 8013AB40 C0100200 */  sll        $v0, $v0, 3
    /* 48F44 8013AB44 50D4030C */  jal        func_800F5140
    /* 48F48 8013AB48 000062A0 */   sb        $v0, 0x0($v1)
    /* 48F4C 8013AB4C D3D3030C */  jal        func_800F4F4C
    /* 48F50 8013AB50 1A80103C */   lui       $s0, %hi(D_8019A0A0)
    /* 48F54 8013AB54 02D0030C */  jal        func_800F4008
    /* 48F58 8013AB58 4B000424 */   addiu     $a0, $zero, 0x4B
    /* 48F5C 8013AB5C 93E0030C */  jal        func_800F824C
    /* 48F60 8013AB60 46000424 */   addiu     $a0, $zero, 0x46
    /* 48F64 8013AB64 53D9030C */  jal        func_800F654C
    /* 48F68 8013AB68 0A000424 */   addiu     $a0, $zero, 0xA
    /* 48F6C 8013AB6C 93E0030C */  jal        func_800F824C
    /* 48F70 8013AB70 45000424 */   addiu     $a0, $zero, 0x45
    /* 48F74 8013AB74 40DD030C */  jal        func_800F7500
    /* 48F78 8013AB78 14030424 */   addiu     $a0, $zero, 0x314
    /* 48F7C 8013AB7C BF7D040C */  jal        func_8011F6FC
    /* 48F80 8013AB80 A0A01026 */   addiu     $s0, $s0, %lo(D_8019A0A0)
    /* 48F84 8013AB84 59D9030C */  jal        func_800F6564
    /* 48F88 8013AB88 AE160424 */   addiu     $a0, $zero, 0x16AE
    /* 48F8C 8013AB8C 31EC040C */  jal        func_8013B0C4
    /* 48F90 8013AB90 00000000 */   nop
    /* 48F94 8013AB94 53D9030C */  jal        func_800F654C
    /* 48F98 8013AB98 4A000424 */   addiu     $a0, $zero, 0x4A
    /* 48F9C 8013AB9C 93E0030C */  jal        func_800F824C
    /* 48FA0 8013ABA0 46000424 */   addiu     $a0, $zero, 0x46
    /* 48FA4 8013ABA4 B57D040C */  jal        func_8011F6D4
    /* 48FA8 8013ABA8 00000000 */   nop
    /* 48FAC 8013ABAC 59D9030C */  jal        func_800F6564
    /* 48FB0 8013ABB0 AF160424 */   addiu     $a0, $zero, 0x16AF
    /* 48FB4 8013ABB4 31EC040C */  jal        func_8013B0C4
    /* 48FB8 8013ABB8 00000000 */   nop
    /* 48FBC 8013ABBC 53D9030C */  jal        func_800F654C
    /* 48FC0 8013ABC0 5A000424 */   addiu     $a0, $zero, 0x5A
    /* 48FC4 8013ABC4 93E0030C */  jal        func_800F824C
    /* 48FC8 8013ABC8 46000424 */   addiu     $a0, $zero, 0x46
    /* 48FCC 8013ABCC AB7D040C */  jal        func_8011F6AC
    /* 48FD0 8013ABD0 00000000 */   nop
    /* 48FD4 8013ABD4 59D9030C */  jal        func_800F6564
    /* 48FD8 8013ABD8 B0160424 */   addiu     $a0, $zero, 0x16B0
    /* 48FDC 8013ABDC 31EC040C */  jal        func_8013B0C4
    /* 48FE0 8013ABE0 00000000 */   nop
    /* 48FE4 8013ABE4 53D9030C */  jal        func_800F654C
    /* 48FE8 8013ABE8 6A000424 */   addiu     $a0, $zero, 0x6A
    /* 48FEC 8013ABEC 93E0030C */  jal        func_800F824C
    /* 48FF0 8013ABF0 46000424 */   addiu     $a0, $zero, 0x46
    /* 48FF4 8013ABF4 40DD030C */  jal        func_800F7500
    /* 48FF8 8013ABF8 0C030424 */   addiu     $a0, $zero, 0x30C
    /* 48FFC 8013ABFC BF7D040C */  jal        func_8011F6FC
    /* 49000 8013AC00 00000000 */   nop
    /* 49004 8013AC04 59D9030C */  jal        func_800F6564
    /* 49008 8013AC08 B1160424 */   addiu     $a0, $zero, 0x16B1
    /* 4900C 8013AC0C 1A80043C */  lui        $a0, %hi(D_8019ED40)
    /* 49010 8013AC10 40ED848C */  lw         $a0, %lo(D_8019ED40)($a0)
    /* 49014 8013AC14 00000000 */  nop
    /* 49018 8013AC18 00008390 */  lbu        $v1, 0x0($a0)
    /* 4901C 8013AC1C 00000000 */  nop
    /* 49020 8013AC20 02190300 */  srl        $v1, $v1, 4
    /* 49024 8013AC24 1A80013C */  lui        $at, %hi(D_8019EE42)
    /* 49028 8013AC28 42EE23A0 */  sb         $v1, %lo(D_8019EE42)($at)
    /* 4902C 8013AC2C 1A80013C */  lui        $at, %hi(D_8019EE4C)
    /* 49030 8013AC30 4CEE23A0 */  sb         $v1, %lo(D_8019EE4C)($at)
    /* 49034 8013AC34 00008290 */  lbu        $v0, 0x0($a0)
    /* 49038 8013AC38 00000000 */  nop
    /* 4903C 8013AC3C 0F004230 */  andi       $v0, $v0, 0xF
    /* 49040 8013AC40 3489040C */  jal        func_801224D0
    /* 49044 8013AC44 000082A0 */   sb        $v0, 0x0($a0)
    /* 49048 8013AC48 1A80033C */  lui        $v1, %hi(D_8019ED54)
    /* 4904C 8013AC4C 54ED638C */  lw         $v1, %lo(D_8019ED54)($v1)
    /* 49050 8013AC50 00000000 */  nop
    /* 49054 8013AC54 00006294 */  lhu        $v0, 0x0($v1)
    /* 49058 8013AC58 1A80053C */  lui        $a1, %hi(D_8019ED40)
    /* 4905C 8013AC5C 40EDA58C */  lw         $a1, %lo(D_8019ED40)($a1)
    /* 49060 8013AC60 21105000 */  addu       $v0, $v0, $s0
    /* 49064 8013AC64 00004390 */  lbu        $v1, 0x0($v0)
    /* 49068 8013AC68 45000424 */  addiu      $a0, $zero, 0x45
    /* 4906C 8013AC6C 93E0030C */  jal        func_800F824C
    /* 49070 8013AC70 0000A3A0 */   sb        $v1, 0x0($a1)
    /* 49074 8013AC74 53D9030C */  jal        func_800F654C
    /* 49078 8013AC78 7A000424 */   addiu     $a0, $zero, 0x7A
    /* 4907C 8013AC7C 93E0030C */  jal        func_800F824C
    /* 49080 8013AC80 46000424 */   addiu     $a0, $zero, 0x46
    /* 49084 8013AC84 40DD030C */  jal        func_800F7500
    /* 49088 8013AC88 08030424 */   addiu     $a0, $zero, 0x308
    /* 4908C 8013AC8C BF7D040C */  jal        func_8011F6FC
    /* 49090 8013AC90 00000000 */   nop
    /* 49094 8013AC94 59D9030C */  jal        func_800F6564
    /* 49098 8013AC98 B2160424 */   addiu     $a0, $zero, 0x16B2
    /* 4909C 8013AC9C 3489040C */  jal        func_801224D0
    /* 490A0 8013ACA0 00000000 */   nop
    /* 490A4 8013ACA4 1A80033C */  lui        $v1, %hi(D_8019ED54)
    /* 490A8 8013ACA8 54ED638C */  lw         $v1, %lo(D_8019ED54)($v1)
    /* 490AC 8013ACAC 00000000 */  nop
    /* 490B0 8013ACB0 00006294 */  lhu        $v0, 0x0($v1)
    /* 490B4 8013ACB4 1A80053C */  lui        $a1, %hi(D_8019ED40)
    /* 490B8 8013ACB8 40EDA58C */  lw         $a1, %lo(D_8019ED40)($a1)
    /* 490BC 8013ACBC 21105000 */  addu       $v0, $v0, $s0
    /* 490C0 8013ACC0 00004390 */  lbu        $v1, 0x0($v0)
    /* 490C4 8013ACC4 45000424 */  addiu      $a0, $zero, 0x45
    /* 490C8 8013ACC8 93E0030C */  jal        func_800F824C
    /* 490CC 8013ACCC 0000A3A0 */   sb        $v1, 0x0($a1)
    /* 490D0 8013ACD0 53D9030C */  jal        func_800F654C
    /* 490D4 8013ACD4 8A000424 */   addiu     $a0, $zero, 0x8A
    /* 490D8 8013ACD8 93E0030C */  jal        func_800F824C
    /* 490DC 8013ACDC 46000424 */   addiu     $a0, $zero, 0x46
    /* 490E0 8013ACE0 40DD030C */  jal        func_800F7500
    /* 490E4 8013ACE4 18030424 */   addiu     $a0, $zero, 0x318
    /* 490E8 8013ACE8 BF7D040C */  jal        func_8011F6FC
    /* 490EC 8013ACEC 00000000 */   nop
    /* 490F0 8013ACF0 A17D040C */  jal        func_8011F684
    /* 490F4 8013ACF4 00000000 */   nop
    /* 490F8 8013ACF8 217E040C */  jal        func_8011F884
    /* 490FC 8013ACFC 00000000 */   nop
    /* 49100 8013AD00 8CD9030C */  jal        func_800F6630
    /* 49104 8013AD04 01000424 */   addiu     $a0, $zero, 0x1
    /* 49108 8013AD08 92D0030C */  jal        func_800F4248
    /* 4910C 8013AD0C 80000424 */   addiu     $a0, $zero, 0x80
    /* 49110 8013AD10 48D0030C */  jal        func_800F4120
    /* 49114 8013AD14 02000424 */   addiu     $a0, $zero, 0x2
    /* 49118 8013AD18 05004014 */  bnez       $v0, .L8013AD30
    /* 4911C 8013AD1C 00000000 */   nop
    /* 49120 8013AD20 53D9030C */  jal        func_800F654C
    /* 49124 8013AD24 05000424 */   addiu     $a0, $zero, 0x5
    /* 49128 8013AD28 62E0030C */  jal        func_800F8188
    /* 4912C 8013AD2C B91B0424 */   addiu     $a0, $zero, 0x1BB9
  .L8013AD30:
    /* 49130 8013AD30 8CD9030C */  jal        func_800F6630
    /* 49134 8013AD34 01000424 */   addiu     $a0, $zero, 0x1
    /* 49138 8013AD38 92D0030C */  jal        func_800F4248
    /* 4913C 8013AD3C 08000424 */   addiu     $a0, $zero, 0x8
    /* 49140 8013AD40 48D0030C */  jal        func_800F4120
    /* 49144 8013AD44 02000424 */   addiu     $a0, $zero, 0x2
    /* 49148 8013AD48 0D004014 */  bnez       $v0, .L8013AD80
    /* 4914C 8013AD4C 00000000 */   nop
    /* 49150 8013AD50 59D9030C */  jal        func_800F6564
    /* 49154 8013AD54 B91B0424 */   addiu     $a0, $zero, 0x1BB9
    /* 49158 8013AD58 33D7030C */  jal        func_800F5CCC
    /* 4915C 8013AD5C 00000000 */   nop
    /* 49160 8013AD60 E3D6030C */  jal        func_800F5B8C
    /* 49164 8013AD64 80800434 */   ori       $a0, $zero, 0x8080
    /* 49168 8013AD68 03004014 */  bnez       $v0, .L8013AD78
    /* 4916C 8013AD6C 00000000 */   nop
    /* 49170 8013AD70 53D9030C */  jal        func_800F654C
    /* 49174 8013AD74 05000424 */   addiu     $a0, $zero, 0x5
  .L8013AD78:
    /* 49178 8013AD78 62E0030C */  jal        func_800F8188
    /* 4917C 8013AD7C B91B0424 */   addiu     $a0, $zero, 0x1BB9
  .L8013AD80:
    /* 49180 8013AD80 8CD9030C */  jal        func_800F6630
    /* 49184 8013AD84 01000424 */   addiu     $a0, $zero, 0x1
    /* 49188 8013AD88 92D0030C */  jal        func_800F4248
    /* 4918C 8013AD8C 04000424 */   addiu     $a0, $zero, 0x4
    /* 49190 8013AD90 48D0030C */  jal        func_800F4120
    /* 49194 8013AD94 02000424 */   addiu     $a0, $zero, 0x2
    /* 49198 8013AD98 0F004014 */  bnez       $v0, .L8013ADD8
    /* 4919C 8013AD9C 00000000 */   nop
    /* 491A0 8013ADA0 59D9030C */  jal        func_800F6564
    /* 491A4 8013ADA4 B91B0424 */   addiu     $a0, $zero, 0x1BB9
    /* 491A8 8013ADA8 7AD8030C */  jal        func_800F61E8
    /* 491AC 8013ADAC 00000000 */   nop
    /* 491B0 8013ADB0 5DD5030C */  jal        func_800F5574
    /* 491B4 8013ADB4 06000424 */   addiu     $a0, $zero, 0x6
    /* 491B8 8013ADB8 F5D4030C */  jal        func_800F53D4
    /* 491BC 8013ADBC 00000000 */   nop
    /* 491C0 8013ADC0 03004010 */  beqz       $v0, .L8013ADD0
    /* 491C4 8013ADC4 00000000 */   nop
    /* 491C8 8013ADC8 53D9030C */  jal        func_800F654C
    /* 491CC 8013ADCC 21200000 */   addu      $a0, $zero, $zero
  .L8013ADD0:
    /* 491D0 8013ADD0 62E0030C */  jal        func_800F8188
    /* 491D4 8013ADD4 B91B0424 */   addiu     $a0, $zero, 0x1BB9
  .L8013ADD8:
    /* 491D8 8013ADD8 8CD9030C */  jal        func_800F6630
    /* 491DC 8013ADDC 01000424 */   addiu     $a0, $zero, 0x1
    /* 491E0 8013ADE0 92D0030C */  jal        func_800F4248
    /* 491E4 8013ADE4 01000424 */   addiu     $a0, $zero, 0x1
    /* 491E8 8013ADE8 48D0030C */  jal        func_800F4120
    /* 491EC 8013ADEC 02000424 */   addiu     $a0, $zero, 0x2
    /* 491F0 8013ADF0 20004014 */  bnez       $v0, .L8013AE74
    /* 491F4 8013ADF4 00000000 */   nop
    /* 491F8 8013ADF8 59D9030C */  jal        func_800F6564
    /* 491FC 8013ADFC B91B0424 */   addiu     $a0, $zero, 0x1BB9
    /* 49200 8013AE00 5DD5030C */  jal        func_800F5574
    /* 49204 8013AE04 05000424 */   addiu     $a0, $zero, 0x5
    /* 49208 8013AE08 F5D4030C */  jal        func_800F53D4
    /* 4920C 8013AE0C 00000000 */   nop
    /* 49210 8013AE10 3E004014 */  bnez       $v0, .L8013AF0C
    /* 49214 8013AE14 00000000 */   nop
    /* 49218 8013AE18 3489040C */  jal        func_801224D0
    /* 4921C 8013AE1C 00000000 */   nop
    /* 49220 8013AE20 DADA030C */  jal        func_800F6B68
    /* 49224 8013AE24 AE160424 */   addiu     $a0, $zero, 0x16AE
    /* 49228 8013AE28 7AD8030C */  jal        func_800F61E8
    /* 4922C 8013AE2C 00000000 */   nop
    /* 49230 8013AE30 1A80023C */  lui        $v0, %hi(D_8019ED54)
    /* 49234 8013AE34 54ED428C */  lw         $v0, %lo(D_8019ED54)($v0)
    /* 49238 8013AE38 1A80033C */  lui        $v1, %hi(D_8019A0A4)
    /* 4923C 8013AE3C 00004594 */  lhu        $a1, 0x0($v0)
    /* 49240 8013AE40 A4A06324 */  addiu      $v1, $v1, %lo(D_8019A0A4)
    /* 49244 8013AE44 2128A300 */  addu       $a1, $a1, $v1
    /* 49248 8013AE48 0000A490 */  lbu        $a0, 0x0($a1)
    /* 4924C 8013AE4C 5DD5030C */  jal        func_800F5574
    /* 49250 8013AE50 00000000 */   nop
    /* 49254 8013AE54 F5D4030C */  jal        func_800F53D4
    /* 49258 8013AE58 00000000 */   nop
    /* 4925C 8013AE5C 03004010 */  beqz       $v0, .L8013AE6C
    /* 49260 8013AE60 00000000 */   nop
    /* 49264 8013AE64 53D9030C */  jal        func_800F654C
    /* 49268 8013AE68 21200000 */   addu      $a0, $zero, $zero
  .L8013AE6C:
    /* 4926C 8013AE6C DAE1030C */  jal        func_800F8768
    /* 49270 8013AE70 AE160424 */   addiu     $a0, $zero, 0x16AE
  .L8013AE74:
    /* 49274 8013AE74 8CD9030C */  jal        func_800F6630
    /* 49278 8013AE78 01000424 */   addiu     $a0, $zero, 0x1
    /* 4927C 8013AE7C 92D0030C */  jal        func_800F4248
    /* 49280 8013AE80 02000424 */   addiu     $a0, $zero, 0x2
    /* 49284 8013AE84 48D0030C */  jal        func_800F4120
    /* 49288 8013AE88 02000424 */   addiu     $a0, $zero, 0x2
    /* 4928C 8013AE8C 1F004014 */  bnez       $v0, .L8013AF0C
    /* 49290 8013AE90 00000000 */   nop
    /* 49294 8013AE94 59D9030C */  jal        func_800F6564
    /* 49298 8013AE98 B91B0424 */   addiu     $a0, $zero, 0x1BB9
    /* 4929C 8013AE9C 5DD5030C */  jal        func_800F5574
    /* 492A0 8013AEA0 05000424 */   addiu     $a0, $zero, 0x5
    /* 492A4 8013AEA4 F5D4030C */  jal        func_800F53D4
    /* 492A8 8013AEA8 00000000 */   nop
    /* 492AC 8013AEAC 17004014 */  bnez       $v0, .L8013AF0C
    /* 492B0 8013AEB0 00000000 */   nop
    /* 492B4 8013AEB4 3489040C */  jal        func_801224D0
    /* 492B8 8013AEB8 00000000 */   nop
    /* 492BC 8013AEBC DADA030C */  jal        func_800F6B68
    /* 492C0 8013AEC0 AE160424 */   addiu     $a0, $zero, 0x16AE
    /* 492C4 8013AEC4 33D7030C */  jal        func_800F5CCC
    /* 492C8 8013AEC8 00000000 */   nop
    /* 492CC 8013AECC E3D6030C */  jal        func_800F5B8C
    /* 492D0 8013AED0 80800434 */   ori       $a0, $zero, 0x8080
    /* 492D4 8013AED4 0B004014 */  bnez       $v0, .L8013AF04
    /* 492D8 8013AED8 1A80023C */   lui       $v0, %hi(D_8019A0A4)
    /* 492DC 8013AEDC 1A80043C */  lui        $a0, %hi(D_8019ED54)
    /* 492E0 8013AEE0 54ED848C */  lw         $a0, %lo(D_8019ED54)($a0)
    /* 492E4 8013AEE4 A4A04224 */  addiu      $v0, $v0, %lo(D_8019A0A4)
    /* 492E8 8013AEE8 00008394 */  lhu        $v1, 0x0($a0)
    /* 492EC 8013AEEC 1A80043C */  lui        $a0, %hi(D_8019ED40)
    /* 492F0 8013AEF0 40ED848C */  lw         $a0, %lo(D_8019ED40)($a0)
    /* 492F4 8013AEF4 21186200 */  addu       $v1, $v1, $v0
    /* 492F8 8013AEF8 00006290 */  lbu        $v0, 0x0($v1)
    /* 492FC 8013AEFC 33D7030C */  jal        func_800F5CCC
    /* 49300 8013AF00 000082A0 */   sb        $v0, 0x0($a0)
  .L8013AF04:
    /* 49304 8013AF04 DAE1030C */  jal        func_800F8768
    /* 49308 8013AF08 AE160424 */   addiu     $a0, $zero, 0x16AE
  .L8013AF0C:
    /* 4930C 8013AF0C 8CD9030C */  jal        func_800F6630
    /* 49310 8013AF10 21200000 */   addu      $a0, $zero, $zero
    /* 49314 8013AF14 92D0030C */  jal        func_800F4248
    /* 49318 8013AF18 80000424 */   addiu     $a0, $zero, 0x80
    /* 4931C 8013AF1C 48D0030C */  jal        func_800F4120
    /* 49320 8013AF20 02000424 */   addiu     $a0, $zero, 0x2
    /* 49324 8013AF24 0B004014 */  bnez       $v0, .L8013AF54
    /* 49328 8013AF28 00000000 */   nop
    /* 4932C 8013AF2C 59D9030C */  jal        func_800F6564
    /* 49330 8013AF30 B91B0424 */   addiu     $a0, $zero, 0x1BB9
    /* 49334 8013AF34 5DD5030C */  jal        func_800F5574
    /* 49338 8013AF38 05000424 */   addiu     $a0, $zero, 0x5
    /* 4933C 8013AF3C F5D4030C */  jal        func_800F53D4
    /* 49340 8013AF40 00000000 */   nop
    /* 49344 8013AF44 03004010 */  beqz       $v0, .L8013AF54
    /* 49348 8013AF48 00000000 */   nop
    /* 4934C 8013AF4C E9EB040C */  jal        func_8013AFA4
    /* 49350 8013AF50 00000000 */   nop
  .L8013AF54:
    /* 49354 8013AF54 8CD9030C */  jal        func_800F6630
    /* 49358 8013AF58 01000424 */   addiu     $a0, $zero, 0x1
    /* 4935C 8013AF5C 92D0030C */  jal        func_800F4248
    /* 49360 8013AF60 C0000424 */   addiu     $a0, $zero, 0xC0
    /* 49364 8013AF64 48D0030C */  jal        func_800F4120
    /* 49368 8013AF68 02020424 */   addiu     $a0, $zero, 0x202
    /* 4936C 8013AF6C 09004014 */  bnez       $v0, .L8013AF94
    /* 49370 8013AF70 00000000 */   nop
    /* 49374 8013AF74 8CD9030C */  jal        func_800F6630
    /* 49378 8013AF78 21200000 */   addu      $a0, $zero, $zero
    /* 4937C 8013AF7C 92D0030C */  jal        func_800F4248
    /* 49380 8013AF80 C0000424 */   addiu     $a0, $zero, 0xC0
    /* 49384 8013AF84 48D0030C */  jal        func_800F4120
    /* 49388 8013AF88 02020424 */   addiu     $a0, $zero, 0x202
    /* 4938C 8013AF8C E5FE4010 */  beqz       $v0, .L8013AB24
    /* 49390 8013AF90 00000000 */   nop
  .L8013AF94:
    /* 49394 8013AF94 E9EB040C */  jal        func_8013AFA4
    /* 49398 8013AF98 00000000 */   nop
    /* 4939C 8013AF9C C9EA0408 */  j          .L8013AB24
    /* 493A0 8013AFA0 00000000 */   nop
endlabel func_8013AB18
