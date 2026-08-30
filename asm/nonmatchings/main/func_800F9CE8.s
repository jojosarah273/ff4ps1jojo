nonmatching func_800F9CE8, 0x778

glabel func_800F9CE8
    /* 80E8 800F9CE8 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 80EC 800F9CEC 1000BFAF */  sw         $ra, 0x10($sp)
  .L800F9CF0:
    /* 80F0 800F9CF0 2ED5030C */  jal        func_800F54B8
    /* 80F4 800F9CF4 00000000 */   nop
    /* 80F8 800F9CF8 04D5030C */  jal        func_800F5410
    /* 80FC 800F9CFC 00000000 */   nop
    /* 8100 800F9D00 91E5030C */  jal        func_800F9644
    /* 8104 800F9D04 10000424 */   addiu     $a0, $zero, 0x10
    /* 8108 800F9D08 98E5030C */  jal        func_800F9660
    /* 810C 800F9D0C 20000424 */   addiu     $a0, $zero, 0x20
    /* 8110 800F9D10 DDE3030C */  jal        func_800F8F74
    /* 8114 800F9D14 0D420424 */   addiu     $a0, $zero, 0x420D
    /* 8118 800F9D18 DDE3030C */  jal        func_800F8F74
    /* 811C 800F9D1C 0B420424 */   addiu     $a0, $zero, 0x420B
    /* 8120 800F9D20 DDE3030C */  jal        func_800F8F74
    /* 8124 800F9D24 0C420424 */   addiu     $a0, $zero, 0x420C
    /* 8128 800F9D28 53D9030C */  jal        func_800F654C
    /* 812C 800F9D2C 8F000424 */   addiu     $a0, $zero, 0x8F
    /* 8130 800F9D30 62E0030C */  jal        func_800F8188
    /* 8134 800F9D34 00210424 */   addiu     $a0, $zero, 0x2100
    /* 8138 800F9D38 53D9030C */  jal        func_800F654C
    /* 813C 800F9D3C 21200000 */   addu      $a0, $zero, $zero
    /* 8140 800F9D40 62E0030C */  jal        func_800F8188
    /* 8144 800F9D44 00420424 */   addiu     $a0, $zero, 0x4200
    /* 8148 800F9D48 53D9030C */  jal        func_800F654C
    /* 814C 800F9D4C 21200000 */   addu      $a0, $zero, $zero
    /* 8150 800F9D50 52CF030C */  jal        func_800F3D48
    /* 8154 800F9D54 00000000 */   nop
    /* 8158 800F9D58 53D9030C */  jal        func_800F654C
    /* 815C 800F9D5C 21200000 */   addu      $a0, $zero, $zero
    /* 8160 800F9D60 80E4030C */  jal        func_800F9200
    /* 8164 800F9D64 00000000 */   nop
    /* 8168 800F9D68 12E5030C */  jal        func_800F9448
    /* 816C 800F9D6C 00000000 */   nop
    /* 8170 800F9D70 77DC030C */  jal        func_800F71DC
    /* 8174 800F9D74 00060424 */   addiu     $a0, $zero, 0x600
    /* 8178 800F9D78 CCE4030C */  jal        func_800F9330
    /* 817C 800F9D7C 00000000 */   nop
    /* 8180 800F9D80 2EE5030C */  jal        func_800F94B8
    /* 8184 800F9D84 00000000 */   nop
    /* 8188 800F9D88 77DC030C */  jal        func_800F71DC
    /* 818C 800F9D8C FF020424 */   addiu     $a0, $zero, 0x2FF
    /* 8190 800F9D90 5800828F */  lw         $v0, %gp_rel(D_8019ED54)($gp)
    /* 8194 800F9D94 5000848F */  lw         $a0, %gp_rel(D_8019ED4C)($gp)
    /* 8198 800F9D98 00004394 */  lhu        $v1, 0x0($v0)
    /* 819C 800F9D9C 52F1030C */  jal        func_800FC548
    /* 81A0 800F9DA0 000083A4 */   sh        $v1, 0x0($a0)
    /* 81A4 800F9DA4 18D8050C */  jal        func_80176060
    /* 81A8 800F9DA8 00000000 */   nop
    /* 81AC 800F9DAC B4D8050C */  jal        func_801762D0
    /* 81B0 800F9DB0 00000000 */   nop
    /* 81B4 800F9DB4 3EA4050C */  jal        func_801690F8
    /* 81B8 800F9DB8 00000000 */   nop
    /* 81BC 800F9DBC CF7A040C */  jal        func_8011EB3C
    /* 81C0 800F9DC0 00000000 */   nop
    /* 81C4 800F9DC4 0CED030C */  jal        func_800FB430
    /* 81C8 800F9DC8 00000000 */   nop
    /* 81CC 800F9DCC 09004014 */  bnez       $v0, .L800F9DF4
    /* 81D0 800F9DD0 00000000 */   nop
    /* 81D4 800F9DD4 3CE6050C */  jal        func_801798F0
    /* 81D8 800F9DD8 00000000 */   nop
    /* 81DC 800F9DDC 9CE5050C */  jal        func_80179670
    /* 81E0 800F9DE0 21200000 */   addu      $a0, $zero, $zero
    /* 81E4 800F9DE4 4CE6050C */  jal        func_80179930
    /* 81E8 800F9DE8 00000000 */   nop
    /* 81EC 800F9DEC 3CE70308 */  j          .L800F9CF0
    /* 81F0 800F9DF0 00000000 */   nop
  .L800F9DF4:
    /* 81F4 800F9DF4 EE9A040C */  jal        func_80126BB8
    /* 81F8 800F9DF8 00000000 */   nop
    /* 81FC 800F9DFC 59D9030C */  jal        func_800F6564
    /* 8200 800F9E00 EF170424 */   addiu     $a0, $zero, 0x17EF
    /* 8204 800F9E04 04D5030C */  jal        func_800F5410
    /* 8208 800F9E08 00000000 */   nop
    /* 820C 800F9E0C C1CE030C */  jal        func_800F3B04
    /* 8210 800F9E10 FF0F0424 */   addiu     $a0, $zero, 0xFFF
    /* 8214 800F9E14 CECF030C */  jal        func_800F3F38
    /* 8218 800F9E18 21204000 */   addu      $a0, $v0, $zero
    /* 821C 800F9E1C 62E0030C */  jal        func_800F8188
    /* 8220 800F9E20 EF170424 */   addiu     $a0, $zero, 0x17EF
    /* 8224 800F9E24 50D4030C */  jal        func_800F5140
    /* 8228 800F9E28 00000000 */   nop
    /* 822C 800F9E2C 62E0030C */  jal        func_800F8188
    /* 8230 800F9E30 EE170424 */   addiu     $a0, $zero, 0x17EE
    /* 8234 800F9E34 59D9030C */  jal        func_800F6564
    /* 8238 800F9E38 FB170424 */   addiu     $a0, $zero, 0x17FB
    /* 823C 800F9E3C 5DD5030C */  jal        func_800F5574
    /* 8240 800F9E40 21200000 */   addu      $a0, $zero, $zero
    /* 8244 800F9E44 F5D4030C */  jal        func_800F53D4
    /* 8248 800F9E48 00000000 */   nop
    /* 824C 800F9E4C 29004010 */  beqz       $v0, .L800F9EF4
    /* 8250 800F9E50 00000000 */   nop
    /* 8254 800F9E54 0DEA030C */  jal        func_800FA834
    /* 8258 800F9E58 00000000 */   nop
    /* 825C 800F9E5C 2BFC030C */  jal        func_800FF0AC
    /* 8260 800F9E60 00000000 */   nop
    /* 8264 800F9E64 DFD1050C */  jal        func_8017477C
    /* 8268 800F9E68 00000000 */   nop
    /* 826C 800F9E6C 18D8050C */  jal        func_80176060
    /* 8270 800F9E70 00000000 */   nop
    /* 8274 800F9E74 6DEA030C */  jal        func_800FA9B4
    /* 8278 800F9E78 00000000 */   nop
    /* 827C 800F9E7C 1D6E040C */  jal        func_8011B874
    /* 8280 800F9E80 00000000 */   nop
    /* 8284 800F9E84 53D9030C */  jal        func_800F654C
    /* 8288 800F9E88 01000424 */   addiu     $a0, $zero, 0x1
    /* 828C 800F9E8C 93E0030C */  jal        func_800F824C
    /* 8290 800F9E90 B1000424 */   addiu     $a0, $zero, 0xB1
    /* 8294 800F9E94 53D9030C */  jal        func_800F654C
    /* 8298 800F9E98 01000424 */   addiu     $a0, $zero, 0x1
    /* 829C 800F9E9C 93E0030C */  jal        func_800F824C
    /* 82A0 800F9EA0 7D000424 */   addiu     $a0, $zero, 0x7D
    /* 82A4 800F9EA4 53D9030C */  jal        func_800F654C
    /* 82A8 800F9EA8 0F000424 */   addiu     $a0, $zero, 0xF
    /* 82AC 800F9EAC 93E0030C */  jal        func_800F824C
    /* 82B0 800F9EB0 80000424 */   addiu     $a0, $zero, 0x80
    /* 82B4 800F9EB4 53D9030C */  jal        func_800F654C
    /* 82B8 800F9EB8 81000424 */   addiu     $a0, $zero, 0x81
    /* 82BC 800F9EBC 62E0030C */  jal        func_800F8188
    /* 82C0 800F9EC0 00420424 */   addiu     $a0, $zero, 0x4200
    /* 82C4 800F9EC4 12D5030C */  jal        func_800F5448
    /* 82C8 800F9EC8 00000000 */   nop
    /* 82CC 800F9ECC EEE3030C */  jal        func_800F8FB8
    /* 82D0 800F9ED0 AB000424 */   addiu     $a0, $zero, 0xAB
    /* 82D4 800F9ED4 53D9030C */  jal        func_800F654C
    /* 82D8 800F9ED8 10000424 */   addiu     $a0, $zero, 0x10
    /* 82DC 800F9EDC FA58040C */  jal        func_801163E8
    /* 82E0 800F9EE0 00000000 */   nop
    /* 82E4 800F9EE4 EEE3030C */  jal        func_800F8FB8
    /* 82E8 800F9EE8 B1000424 */   addiu     $a0, $zero, 0xB1
    /* 82EC 800F9EEC DDE70308 */  j          .L800F9F74
    /* 82F0 800F9EF0 00000000 */   nop
  .L800F9EF4:
    /* 82F4 800F9EF4 1D6E040C */  jal        func_8011B874
    /* 82F8 800F9EF8 00000000 */   nop
  .L800F9EFC:
    /* 82FC 800F9EFC 18D8050C */  jal        func_80176060
    /* 8300 800F9F00 00000000 */   nop
    /* 8304 800F9F04 6DEA030C */  jal        func_800FA9B4
    /* 8308 800F9F08 00000000 */   nop
    /* 830C 800F9F0C 53D9030C */  jal        func_800F654C
    /* 8310 800F9F10 01000424 */   addiu     $a0, $zero, 0x1
    /* 8314 800F9F14 93E0030C */  jal        func_800F824C
    /* 8318 800F9F18 7D000424 */   addiu     $a0, $zero, 0x7D
    /* 831C 800F9F1C EEE3030C */  jal        func_800F8FB8
    /* 8320 800F9F20 DF000424 */   addiu     $a0, $zero, 0xDF
    /* 8324 800F9F24 EEE3030C */  jal        func_800F8FB8
    /* 8328 800F9F28 B1000424 */   addiu     $a0, $zero, 0xB1
    /* 832C 800F9F2C EAE80308 */  j          .L800FA3A8
    /* 8330 800F9F30 00000000 */   nop
  .L800F9F34:
    /* 8334 800F9F34 1A80013C */  lui        $at, %hi(D_8019EE6C)
    /* 8338 800F9F38 6CEE20A4 */  sh         $zero, %lo(D_8019EE6C)($at)
    /* 833C 800F9F3C EEE3030C */  jal        func_800F8FB8
    /* 8340 800F9F40 79000424 */   addiu     $a0, $zero, 0x79
    /* 8344 800F9F44 EEE3030C */  jal        func_800F8FB8
    /* 8348 800F9F48 7A000424 */   addiu     $a0, $zero, 0x7A
    /* 834C 800F9F4C EEE3030C */  jal        func_800F8FB8
    /* 8350 800F9F50 7B000424 */   addiu     $a0, $zero, 0x7B
    /* 8354 800F9F54 53D9030C */  jal        func_800F654C
    /* 8358 800F9F58 81000424 */   addiu     $a0, $zero, 0x81
    /* 835C 800F9F5C 62E0030C */  jal        func_800F8188
    /* 8360 800F9F60 00420424 */   addiu     $a0, $zero, 0x4200
    /* 8364 800F9F64 F6F9030C */  jal        func_800FE7D8
    /* 8368 800F9F68 00000000 */   nop
    /* 836C 800F9F6C 12D5030C */  jal        func_800F5448
    /* 8370 800F9F70 00000000 */   nop
  .L800F9F74:
    /* 8374 800F9F74 DEF9030C */  jal        func_800FE778
    /* 8378 800F9F78 00000000 */   nop
    /* 837C 800F9F7C EEE3030C */  jal        func_800F8FB8
    /* 8380 800F9F80 E0000424 */   addiu     $a0, $zero, 0xE0
    /* 8384 800F9F84 37D9050C */  jal        func_801764DC
    /* 8388 800F9F88 00000000 */   nop
    /* 838C 800F9F8C 6EE9030C */  jal        func_800FA5B8
    /* 8390 800F9F90 00000000 */   nop
    /* 8394 800F9F94 8CD9030C */  jal        func_800F6630
    /* 8398 800F9F98 E0000424 */   addiu     $a0, $zero, 0xE0
    /* 839C 800F9F9C 0DD9030C */  jal        func_800F6434
    /* 83A0 800F9FA0 02000424 */   addiu     $a0, $zero, 0x2
    /* 83A4 800F9FA4 F3FF4010 */  beqz       $v0, .L800F9F74
    /* 83A8 800F9FA8 00000000 */   nop
    /* 83AC 800F9FAC 59D9030C */  jal        func_800F6564
    /* 83B0 800F9FB0 00170424 */   addiu     $a0, $zero, 0x1700
    /* 83B4 800F9FB4 5DD5030C */  jal        func_800F5574
    /* 83B8 800F9FB8 03000424 */   addiu     $a0, $zero, 0x3
    /* 83BC 800F9FBC F5D4030C */  jal        func_800F53D4
    /* 83C0 800F9FC0 00000000 */   nop
    /* 83C4 800F9FC4 5F004014 */  bnez       $v0, .L800FA144
    /* 83C8 800F9FC8 00000000 */   nop
    /* 83CC 800F9FCC 53D9030C */  jal        func_800F654C
    /* 83D0 800F9FD0 07000424 */   addiu     $a0, $zero, 0x7
    /* 83D4 800F9FD4 62E0030C */  jal        func_800F8188
    /* 83D8 800F9FD8 05210424 */   addiu     $a0, $zero, 0x2105
    /* 83DC 800F9FDC D404040C */  jal        func_80101350
    /* 83E0 800F9FE0 00000000 */   nop
    /* 83E4 800F9FE4 8CD9030C */  jal        func_800F6630
    /* 83E8 800F9FE8 E0000424 */   addiu     $a0, $zero, 0xE0
    /* 83EC 800F9FEC 0DD9030C */  jal        func_800F6434
    /* 83F0 800F9FF0 02000424 */   addiu     $a0, $zero, 0x2
    /* 83F4 800F9FF4 DFFF4010 */  beqz       $v0, .L800F9F74
    /* 83F8 800F9FF8 00000000 */   nop
    /* 83FC 800F9FFC 8CD9030C */  jal        func_800F6630
    /* 8400 800FA000 CD000424 */   addiu     $a0, $zero, 0xCD
    /* 8404 800FA004 0DD9030C */  jal        func_800F6434
    /* 8408 800FA008 02000424 */   addiu     $a0, $zero, 0x2
    /* 840C 800FA00C E6004010 */  beqz       $v0, .L800FA3A8
    /* 8410 800FA010 00000000 */   nop
    /* 8414 800FA014 37F3030C */  jal        func_800FCCDC
    /* 8418 800FA018 00000000 */   nop
    /* 841C 800FA01C 8CD9030C */  jal        func_800F6630
    /* 8420 800FA020 85000424 */   addiu     $a0, $zero, 0x85
    /* 8424 800FA024 0DD9030C */  jal        func_800F6434
    /* 8428 800FA028 02000424 */   addiu     $a0, $zero, 0x2
    /* 842C 800FA02C 07004014 */  bnez       $v0, .L800FA04C
    /* 8430 800FA030 00000000 */   nop
    /* 8434 800FA034 44F0030C */  jal        func_800FC110
    /* 8438 800FA038 00000000 */   nop
    /* 843C 800FA03C 6DFF4014 */  bnez       $v0, .L800F9DF4
    /* 8440 800FA040 00000000 */   nop
    /* 8444 800FA044 BFE70308 */  j          .L800F9EFC
    /* 8448 800FA048 00000000 */   nop
  .L800FA04C:
    /* 844C 800FA04C 8CD9030C */  jal        func_800F6630
    /* 8450 800FA050 E0000424 */   addiu     $a0, $zero, 0xE0
    /* 8454 800FA054 0DD9030C */  jal        func_800F6434
    /* 8458 800FA058 02000424 */   addiu     $a0, $zero, 0x2
    /* 845C 800FA05C C5FF4010 */  beqz       $v0, .L800F9F74
    /* 8460 800FA060 00000000 */   nop
    /* 8464 800FA064 0F15040C */  jal        func_8010543C
    /* 8468 800FA068 00000000 */   nop
    /* 846C 800FA06C 8CD9030C */  jal        func_800F6630
    /* 8470 800FA070 E0000424 */   addiu     $a0, $zero, 0xE0
    /* 8474 800FA074 0DD9030C */  jal        func_800F6434
    /* 8478 800FA078 02000424 */   addiu     $a0, $zero, 0x2
    /* 847C 800FA07C 05004014 */  bnez       $v0, .L800FA094
    /* 8480 800FA080 00000000 */   nop
    /* 8484 800FA084 DDE3030C */  jal        func_800F8F74
    /* 8488 800FA088 AB060424 */   addiu     $a0, $zero, 0x6AB
    /* 848C 800FA08C DDE70308 */  j          .L800F9F74
    /* 8490 800FA090 00000000 */   nop
  .L800FA094:
    /* 8494 800FA094 DC09040C */  jal        func_80102770
    /* 8498 800FA098 00000000 */   nop
    /* 849C 800FA09C 1CFA030C */  jal        func_800FE870
    /* 84A0 800FA0A0 00000000 */   nop
    /* 84A4 800FA0A4 09FC030C */  jal        func_800FF024
    /* 84A8 800FA0A8 00000000 */   nop
    /* 84AC 800FA0AC BFF6030C */  jal        func_800FDAFC
    /* 84B0 800FA0B0 00000000 */   nop
    /* 84B4 800FA0B4 64D7050C */  jal        func_80175D90
    /* 84B8 800FA0B8 00000000 */   nop
    /* 84BC 800FA0BC 8CD9030C */  jal        func_800F6630
    /* 84C0 800FA0C0 CE000424 */   addiu     $a0, $zero, 0xCE
    /* 84C4 800FA0C4 0DD9030C */  jal        func_800F6434
    /* 84C8 800FA0C8 02020424 */   addiu     $a0, $zero, 0x202
    /* 84CC 800FA0CC A9FF4010 */  beqz       $v0, .L800F9F74
    /* 84D0 800FA0D0 00000000 */   nop
    /* 84D4 800FA0D4 EEE3030C */  jal        func_800F8FB8
    /* 84D8 800FA0D8 CE000424 */   addiu     $a0, $zero, 0xCE
    /* 84DC 800FA0DC 59D9030C */  jal        func_800F6564
    /* 84E0 800FA0E0 00170424 */   addiu     $a0, $zero, 0x1700
    /* 84E4 800FA0E4 0DD9030C */  jal        func_800F6434
    /* 84E8 800FA0E8 02020424 */   addiu     $a0, $zero, 0x202
    /* 84EC 800FA0EC 05004014 */  bnez       $v0, .L800FA104
    /* 84F0 800FA0F0 00000000 */   nop
    /* 84F4 800FA0F4 70FC030C */  jal        func_800FF1C0
    /* 84F8 800FA0F8 00000000 */   nop
    /* 84FC 800FA0FC CDE70308 */  j          .L800F9F34
    /* 8500 800FA100 00000000 */   nop
  .L800FA104:
    /* 8504 800FA104 5DD5030C */  jal        func_800F5574
    /* 8508 800FA108 01000424 */   addiu     $a0, $zero, 0x1
    /* 850C 800FA10C F5D4030C */  jal        func_800F53D4
    /* 8510 800FA110 00000000 */   nop
    /* 8514 800FA114 05004010 */  beqz       $v0, .L800FA12C
    /* 8518 800FA118 00000000 */   nop
    /* 851C 800FA11C 53FD030C */  jal        func_800FF54C
    /* 8520 800FA120 00000000 */   nop
    /* 8524 800FA124 CDE70308 */  j          .L800F9F34
    /* 8528 800FA128 00000000 */   nop
  .L800FA12C:
    /* 852C 800FA12C 5DD5030C */  jal        func_800F5574
    /* 8530 800FA130 02000424 */   addiu     $a0, $zero, 0x2
    /* 8534 800FA134 F5D4030C */  jal        func_800F53D4
    /* 8538 800FA138 00000000 */   nop
    /* 853C 800FA13C DDE70308 */  j          .L800F9F74
    /* 8540 800FA140 00000000 */   nop
  .L800FA144:
    /* 8544 800FA144 5403040C */  jal        func_80100D50
    /* 8548 800FA148 00000000 */   nop
    /* 854C 800FA14C 29FF4014 */  bnez       $v0, .L800F9DF4
    /* 8550 800FA150 00000000 */   nop
    /* 8554 800FA154 8CD9030C */  jal        func_800F6630
    /* 8558 800FA158 CD000424 */   addiu     $a0, $zero, 0xCD
    /* 855C 800FA15C 0DD9030C */  jal        func_800F6434
    /* 8560 800FA160 02000424 */   addiu     $a0, $zero, 0x2
    /* 8564 800FA164 90004010 */  beqz       $v0, .L800FA3A8
    /* 8568 800FA168 00000000 */   nop
    /* 856C 800FA16C 37F3030C */  jal        func_800FCCDC
    /* 8570 800FA170 00000000 */   nop
    /* 8574 800FA174 8CD9030C */  jal        func_800F6630
    /* 8578 800FA178 85000424 */   addiu     $a0, $zero, 0x85
    /* 857C 800FA17C 0DD9030C */  jal        func_800F6434
    /* 8580 800FA180 02000424 */   addiu     $a0, $zero, 0x2
    /* 8584 800FA184 0B004010 */  beqz       $v0, .L800FA1B4
    /* 8588 800FA188 00000000 */   nop
    /* 858C 800FA18C 83FF030C */  jal        func_800FFE0C
    /* 8590 800FA190 00000000 */   nop
    /* 8594 800FA194 17FF4014 */  bnez       $v0, .L800F9DF4
    /* 8598 800FA198 00000000 */   nop
    /* 859C 800FA19C 8CD9030C */  jal        func_800F6630
    /* 85A0 800FA1A0 85000424 */   addiu     $a0, $zero, 0x85
    /* 85A4 800FA1A4 0DD9030C */  jal        func_800F6434
    /* 85A8 800FA1A8 02000424 */   addiu     $a0, $zero, 0x2
    /* 85AC 800FA1AC 07004014 */  bnez       $v0, .L800FA1CC
    /* 85B0 800FA1B0 00000000 */   nop
  .L800FA1B4:
    /* 85B4 800FA1B4 73F0030C */  jal        func_800FC1CC
    /* 85B8 800FA1B8 00000000 */   nop
    /* 85BC 800FA1BC 0DFF4014 */  bnez       $v0, .L800F9DF4
    /* 85C0 800FA1C0 00000000 */   nop
    /* 85C4 800FA1C4 BFE70308 */  j          .L800F9EFC
    /* 85C8 800FA1C8 00000000 */   nop
  .L800FA1CC:
    /* 85CC 800FA1CC 8CD9030C */  jal        func_800F6630
    /* 85D0 800FA1D0 E0000424 */   addiu     $a0, $zero, 0xE0
    /* 85D4 800FA1D4 0DD9030C */  jal        func_800F6434
    /* 85D8 800FA1D8 02000424 */   addiu     $a0, $zero, 0x2
    /* 85DC 800FA1DC 65FF4010 */  beqz       $v0, .L800F9F74
    /* 85E0 800FA1E0 00000000 */   nop
    /* 85E4 800FA1E4 4D12040C */  jal        func_80104934
    /* 85E8 800FA1E8 00000000 */   nop
    /* 85EC 800FA1EC BB2D040C */  jal        func_8010B6EC
    /* 85F0 800FA1F0 00000000 */   nop
    /* 85F4 800FA1F4 DC09040C */  jal        func_80102770
    /* 85F8 800FA1F8 00000000 */   nop
    /* 85FC 800FA1FC DA30040C */  jal        func_8010C368
    /* 8600 800FA200 00000000 */   nop
    /* 8604 800FA204 1CFA030C */  jal        func_800FE870
    /* 8608 800FA208 00000000 */   nop
    /* 860C 800FA20C 05C3050C */  jal        func_80170C14
    /* 8610 800FA210 00000000 */   nop
    /* 8614 800FA214 042C040C */  jal        func_8010B010
    /* 8618 800FA218 00000000 */   nop
    /* 861C 800FA21C 64D7050C */  jal        func_80175D90
    /* 8620 800FA220 00000000 */   nop
    /* 8624 800FA224 AEF2030C */  jal        func_800FCAB8
    /* 8628 800FA228 00000000 */   nop
    /* 862C 800FA22C 8CD9030C */  jal        func_800F6630
    /* 8630 800FA230 D1000424 */   addiu     $a0, $zero, 0xD1
    /* 8634 800FA234 0DD9030C */  jal        func_800F6434
    /* 8638 800FA238 02000424 */   addiu     $a0, $zero, 0x2
    /* 863C 800FA23C 4DFF4014 */  bnez       $v0, .L800F9F74
    /* 8640 800FA240 00000000 */   nop
    /* 8644 800FA244 84DC030C */  jal        func_800F7210
    /* 8648 800FA248 2C170424 */   addiu     $a0, $zero, 0x172C
    /* 864C 800FA24C 92D7030C */  jal        func_800F5E48
    /* 8650 800FA250 00000000 */   nop
    /* 8654 800FA254 92D7030C */  jal        func_800F5E48
    /* 8658 800FA258 00000000 */   nop
    /* 865C 800FA25C 92D7030C */  jal        func_800F5E48
    /* 8660 800FA260 00000000 */   nop
    /* 8664 800FA264 40E3030C */  jal        func_800F8D00
    /* 8668 800FA268 2C170424 */   addiu     $a0, $zero, 0x172C
    /* 866C 800FA26C DADA030C */  jal        func_800F6B68
    /* 8670 800FA270 2E170424 */   addiu     $a0, $zero, 0x172E
    /* 8674 800FA274 5DD5030C */  jal        func_800F5574
    /* 8678 800FA278 FB000424 */   addiu     $a0, $zero, 0xFB
    /* 867C 800FA27C F0D4030C */  jal        func_800F53C0
    /* 8680 800FA280 00000000 */   nop
    /* 8684 800FA284 03004010 */  beqz       $v0, .L800FA294
    /* 8688 800FA288 00000000 */   nop
    /* 868C 800FA28C AEF5030C */  jal        func_800FD6B8
    /* 8690 800FA290 00000000 */   nop
  .L800FA294:
    /* 8694 800FA294 1DFB030C */  jal        func_800FEC74
    /* 8698 800FA298 00000000 */   nop
    /* 869C 800FA29C EEE3030C */  jal        func_800F8FB8
    /* 86A0 800FA2A0 D6000424 */   addiu     $a0, $zero, 0xD6
    /* 86A4 800FA2A4 DADA030C */  jal        func_800F6B68
    /* 86A8 800FA2A8 2E170424 */   addiu     $a0, $zero, 0x172E
    /* 86AC 800FA2AC 20D5030C */  jal        func_800F5480
    /* 86B0 800FA2B0 00000000 */   nop
    /* 86B4 800FA2B4 16E0030C */  jal        func_800F8058
    /* 86B8 800FA2B8 FB000424 */   addiu     $a0, $zero, 0xFB
    /* 86BC 800FA2BC F0D4030C */  jal        func_800F53C0
    /* 86C0 800FA2C0 00000000 */   nop
    /* 86C4 800FA2C4 17004010 */  beqz       $v0, .L800FA324
    /* 86C8 800FA2C8 00000000 */   nop
    /* 86CC 800FA2CC 62E0030C */  jal        func_800F8188
    /* 86D0 800FA2D0 00170424 */   addiu     $a0, $zero, 0x1700
    /* 86D4 800FA2D4 DADA030C */  jal        func_800F6B68
    /* 86D8 800FA2D8 2F170424 */   addiu     $a0, $zero, 0x172F
    /* 86DC 800FA2DC 62E0030C */  jal        func_800F8188
    /* 86E0 800FA2E0 06170424 */   addiu     $a0, $zero, 0x1706
    /* 86E4 800FA2E4 53D9030C */  jal        func_800F654C
    /* 86E8 800FA2E8 02000424 */   addiu     $a0, $zero, 0x2
    /* 86EC 800FA2EC 62E0030C */  jal        func_800F8188
    /* 86F0 800FA2F0 05170424 */   addiu     $a0, $zero, 0x1705
    /* 86F4 800FA2F4 DADA030C */  jal        func_800F6B68
    /* 86F8 800FA2F8 30170424 */   addiu     $a0, $zero, 0x1730
    /* 86FC 800FA2FC 62E0030C */  jal        func_800F8188
    /* 8700 800FA300 07170424 */   addiu     $a0, $zero, 0x1707
    /* 8704 800FA304 77DC030C */  jal        func_800F71DC
    /* 8708 800FA308 21200000 */   addu      $a0, $zero, $zero
    /* 870C 800FA30C 40E3030C */  jal        func_800F8D00
    /* 8710 800FA310 2C170424 */   addiu     $a0, $zero, 0x172C
    /* 8714 800FA314 AEF5030C */  jal        func_800FD6B8
    /* 8718 800FA318 00000000 */   nop
    /* 871C 800FA31C EAE80308 */  j          .L800FA3A8
    /* 8720 800FA320 00000000 */   nop
  .L800FA324:
    /* 8724 800FA324 53D9030C */  jal        func_800F654C
    /* 8728 800FA328 03000424 */   addiu     $a0, $zero, 0x3
    /* 872C 800FA32C 62E0030C */  jal        func_800F8188
    /* 8730 800FA330 00170424 */   addiu     $a0, $zero, 0x1700
    /* 8734 800FA334 DADA030C */  jal        func_800F6B68
    /* 8738 800FA338 2E170424 */   addiu     $a0, $zero, 0x172E
    /* 873C 800FA33C 62E0030C */  jal        func_800F8188
    /* 8740 800FA340 02170424 */   addiu     $a0, $zero, 0x1702
    /* 8744 800FA344 DADA030C */  jal        func_800F6B68
    /* 8748 800FA348 2F170424 */   addiu     $a0, $zero, 0x172F
    /* 874C 800FA34C 92D0030C */  jal        func_800F4248
    /* 8750 800FA350 3F000424 */   addiu     $a0, $zero, 0x3F
    /* 8754 800FA354 62E0030C */  jal        func_800F8188
    /* 8758 800FA358 06170424 */   addiu     $a0, $zero, 0x1706
    /* 875C 800FA35C DADA030C */  jal        func_800F6B68
    /* 8760 800FA360 2F170424 */   addiu     $a0, $zero, 0x172F
    /* 8764 800FA364 4400838F */  lw         $v1, %gp_rel(D_8019ED40)($gp)
    /* 8768 800FA368 00000000 */  nop
    /* 876C 800FA36C 00006290 */  lbu        $v0, 0x0($v1)
    /* 8770 800FA370 00000000 */  nop
    /* 8774 800FA374 82110200 */  srl        $v0, $v0, 6
    /* 8778 800FA378 04D5030C */  jal        func_800F5410
    /* 877C 800FA37C 000062A0 */   sb        $v0, 0x0($v1)
    /* 8780 800FA380 02D0030C */  jal        func_800F4008
    /* 8784 800FA384 02000424 */   addiu     $a0, $zero, 0x2
    /* 8788 800FA388 92D0030C */  jal        func_800F4248
    /* 878C 800FA38C 03000424 */   addiu     $a0, $zero, 0x3
    /* 8790 800FA390 62E0030C */  jal        func_800F8188
    /* 8794 800FA394 05170424 */   addiu     $a0, $zero, 0x1705
    /* 8798 800FA398 DADA030C */  jal        func_800F6B68
    /* 879C 800FA39C 30170424 */   addiu     $a0, $zero, 0x1730
    /* 87A0 800FA3A0 62E0030C */  jal        func_800F8188
    /* 87A4 800FA3A4 07170424 */   addiu     $a0, $zero, 0x1707
  .L800FA3A8:
    /* 87A8 800FA3A8 59D9030C */  jal        func_800F6564
    /* 87AC 800FA3AC 00170424 */   addiu     $a0, $zero, 0x1700
    /* 87B0 800FA3B0 0DD9030C */  jal        func_800F6434
    /* 87B4 800FA3B4 02020424 */   addiu     $a0, $zero, 0x202
    /* 87B8 800FA3B8 07004014 */  bnez       $v0, .L800FA3D8
    /* 87BC 800FA3BC 00000000 */   nop
    /* 87C0 800FA3C0 27EC030C */  jal        func_800FB09C
    /* 87C4 800FA3C4 00000000 */   nop
  .L800FA3C8:
    /* 87C8 800FA3C8 4FFB030C */  jal        func_800FED3C
    /* 87CC 800FA3CC 00000000 */   nop
    /* 87D0 800FA3D0 CDE70308 */  j          .L800F9F34
    /* 87D4 800FA3D4 00000000 */   nop
  .L800FA3D8:
    /* 87D8 800FA3D8 5DD5030C */  jal        func_800F5574
    /* 87DC 800FA3DC 01000424 */   addiu     $a0, $zero, 0x1
    /* 87E0 800FA3E0 F5D4030C */  jal        func_800F53D4
    /* 87E4 800FA3E4 00000000 */   nop
    /* 87E8 800FA3E8 05004010 */  beqz       $v0, .L800FA400
    /* 87EC 800FA3EC 00000000 */   nop
    /* 87F0 800FA3F0 58EC030C */  jal        func_800FB160
    /* 87F4 800FA3F4 00000000 */   nop
    /* 87F8 800FA3F8 F2E80308 */  j          .L800FA3C8
    /* 87FC 800FA3FC 00000000 */   nop
  .L800FA400:
    /* 8800 800FA400 5DD5030C */  jal        func_800F5574
    /* 8804 800FA404 02000424 */   addiu     $a0, $zero, 0x2
    /* 8808 800FA408 F5D4030C */  jal        func_800F53D4
    /* 880C 800FA40C 00000000 */   nop
    /* 8810 800FA410 05004010 */  beqz       $v0, .L800FA428
    /* 8814 800FA414 00000000 */   nop
    /* 8818 800FA418 89EC030C */  jal        func_800FB224
    /* 881C 800FA41C 00000000 */   nop
    /* 8820 800FA420 F2E80308 */  j          .L800FA3C8
    /* 8824 800FA424 00000000 */   nop
  .L800FA428:
    /* 8828 800FA428 8CD9030C */  jal        func_800F6630
    /* 882C 800FA42C 85000424 */   addiu     $a0, $zero, 0x85
    /* 8830 800FA430 0DD9030C */  jal        func_800F6434
    /* 8834 800FA434 02000424 */   addiu     $a0, $zero, 0x2
    /* 8838 800FA438 05004014 */  bnez       $v0, .L800FA450
    /* 883C 800FA43C 00000000 */   nop
    /* 8840 800FA440 52EB030C */  jal        func_800FAD48
    /* 8844 800FA444 00000000 */   nop
    /* 8848 800FA448 F2E80308 */  j          .L800FA3C8
    /* 884C 800FA44C 00000000 */   nop
  .L800FA450:
    /* 8850 800FA450 81EA030C */  jal        func_800FAA04
    /* 8854 800FA454 00000000 */   nop
    /* 8858 800FA458 F2E80308 */  j          .L800FA3C8
    /* 885C 800FA45C 00000000 */   nop
endlabel func_800F9CE8
