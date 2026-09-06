nonmatching func_80132CFC, 0x3FC

glabel func_80132CFC
    /* 410FC 80132CFC E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 41100 80132D00 1000BFAF */  sw         $ra, 0x10($sp)
    /* 41104 80132D04 90D8030C */  jal        func_800F6240
    /* 41108 80132D08 1F1B0424 */   addiu     $a0, $zero, 0x1B1F
    /* 4110C 80132D0C DDE3030C */  jal        func_800F8F74
    /* 41110 80132D10 271B0424 */   addiu     $a0, $zero, 0x1B27
    /* 41114 80132D14 FD8B040C */  jal        func_80122FF4
    /* 41118 80132D18 00000000 */   nop
    /* 4111C 80132D1C 8CD9030C */  jal        func_800F6630
    /* 41120 80132D20 E8000424 */   addiu     $a0, $zero, 0xE8
    /* 41124 80132D24 0DD9030C */  jal        func_800F6434
    /* 41128 80132D28 80800434 */   ori       $a0, $zero, 0x8080
    /* 4112C 80132D2C 05004014 */  bnez       $v0, .L80132D44
    /* 41130 80132D30 00000000 */   nop
    /* 41134 80132D34 DDE3030C */  jal        func_800F8F74
    /* 41138 80132D38 1F1B0424 */   addiu     $a0, $zero, 0x1B1F
    /* 4113C 80132D3C 3ACC0408 */  j          .L801330E8
    /* 41140 80132D40 00000000 */   nop
  .L80132D44:
    /* 41144 80132D44 DDE3030C */  jal        func_800F8F74
    /* 41148 80132D48 AD1B0424 */   addiu     $a0, $zero, 0x1BAD
    /* 4114C 80132D4C 6E90040C */  jal        func_801241B8
    /* 41150 80132D50 00000000 */   nop
    /* 41154 80132D54 BC99040C */  jal        func_801266F0
    /* 41158 80132D58 00000000 */   nop
    /* 4115C 80132D5C 53D9030C */  jal        func_800F654C
    /* 41160 80132D60 30000424 */   addiu     $a0, $zero, 0x30
    /* 41164 80132D64 93E0030C */  jal        func_800F824C
    /* 41168 80132D68 C1000424 */   addiu     $a0, $zero, 0xC1
    /* 4116C 80132D6C 93E0030C */  jal        func_800F824C
    /* 41170 80132D70 3F000424 */   addiu     $a0, $zero, 0x3F
    /* 41174 80132D74 8CD9030C */  jal        func_800F6630
    /* 41178 80132D78 E8000424 */   addiu     $a0, $zero, 0xE8
    /* 4117C 80132D7C 93E0030C */  jal        func_800F824C
    /* 41180 80132D80 D3000424 */   addiu     $a0, $zero, 0xD3
    /* 41184 80132D84 3C8B040C */  jal        func_80122CF0
    /* 41188 80132D88 00000000 */   nop
    /* 4118C 80132D8C A17D040C */  jal        func_8011F684
    /* 41190 80132D90 00000000 */   nop
    /* 41194 80132D94 8CD9030C */  jal        func_800F6630
    /* 41198 80132D98 E8000424 */   addiu     $a0, $zero, 0xE8
    /* 4119C 80132D9C D58A040C */  jal        func_80122B54
    /* 411A0 80132DA0 00000000 */   nop
    /* 411A4 80132DA4 91E5030C */  jal        func_800F9644
    /* 411A8 80132DA8 20000424 */   addiu     $a0, $zero, 0x20
    /* 411AC 80132DAC 1A80033C */  lui        $v1, %hi(D_8019ED58)
    /* 411B0 80132DB0 58ED638C */  lw         $v1, %lo(D_8019ED58)($v1)
    /* 411B4 80132DB4 1A80053C */  lui        $a1, %hi(D_8019ED44)
    /* 411B8 80132DB8 44EDA58C */  lw         $a1, %lo(D_8019ED44)($a1)
    /* 411BC 80132DBC 00006294 */  lhu        $v0, 0x0($v1)
    /* 411C0 80132DC0 20000424 */  addiu      $a0, $zero, 0x20
    /* 411C4 80132DC4 98E5030C */  jal        func_800F9660
    /* 411C8 80132DC8 0000A2A4 */   sh        $v0, 0x0($a1)
    /* 411CC 80132DCC 93E0030C */  jal        func_800F824C
    /* 411D0 80132DD0 BA000424 */   addiu     $a0, $zero, 0xBA
    /* 411D4 80132DD4 52CF030C */  jal        func_800F3D48
    /* 411D8 80132DD8 00000000 */   nop
    /* 411DC 80132DDC 93E0030C */  jal        func_800F824C
    /* 411E0 80132DE0 BC000424 */   addiu     $a0, $zero, 0xBC
    /* 411E4 80132DE4 EEE3030C */  jal        func_800F8FB8
    /* 411E8 80132DE8 B9000424 */   addiu     $a0, $zero, 0xB9
    /* 411EC 80132DEC EEE3030C */  jal        func_800F8FB8
    /* 411F0 80132DF0 BB000424 */   addiu     $a0, $zero, 0xBB
    /* 411F4 80132DF4 53D9030C */  jal        func_800F654C
    /* 411F8 80132DF8 79000424 */   addiu     $a0, $zero, 0x79
    /* 411FC 80132DFC 7AE0030C */  jal        func_800F81E8
    /* 41200 80132E00 0A210424 */   addiu     $a0, $zero, 0x210A
    /* 41204 80132E04 53D9030C */  jal        func_800F654C
    /* 41208 80132E08 82000424 */   addiu     $a0, $zero, 0x82
    /* 4120C 80132E0C 93E0030C */  jal        func_800F824C
    /* 41210 80132E10 AE000424 */   addiu     $a0, $zero, 0xAE
    /* 41214 80132E14 53D9030C */  jal        func_800F654C
    /* 41218 80132E18 28000424 */   addiu     $a0, $zero, 0x28
    /* 4121C 80132E1C 93E0030C */  jal        func_800F824C
    /* 41220 80132E20 C2000424 */   addiu     $a0, $zero, 0xC2
    /* 41224 80132E24 93E0030C */  jal        func_800F824C
    /* 41228 80132E28 D2000424 */   addiu     $a0, $zero, 0xD2
    /* 4122C 80132E2C 8CD9030C */  jal        func_800F6630
    /* 41230 80132E30 E7000424 */   addiu     $a0, $zero, 0xE7
    /* 41234 80132E34 93E0030C */  jal        func_800F824C
    /* 41238 80132E38 B7000424 */   addiu     $a0, $zero, 0xB7
    /* 4123C 80132E3C 93E0030C */  jal        func_800F824C
    /* 41240 80132E40 C0000424 */   addiu     $a0, $zero, 0xC0
    /* 41244 80132E44 77DC030C */  jal        func_800F71DC
    /* 41248 80132E48 2E950434 */   ori       $a0, $zero, 0x952E
    /* 4124C 80132E4C 5BE3030C */  jal        func_800F8D6C
    /* 41250 80132E50 D0000424 */   addiu     $a0, $zero, 0xD0
    /* 41254 80132E54 77DC030C */  jal        func_800F71DC
    /* 41258 80132E58 4F820434 */   ori       $a0, $zero, 0x824F
    /* 4125C 80132E5C 5BE3030C */  jal        func_800F8D6C
    /* 41260 80132E60 CD000424 */   addiu     $a0, $zero, 0xCD
    /* 41264 80132E64 6D83040C */  jal        func_80120DB4
    /* 41268 80132E68 00000000 */   nop
    /* 4126C 80132E6C 2D8A040C */  jal        func_801228B4
    /* 41270 80132E70 00000000 */   nop
    /* 41274 80132E74 4A99040C */  jal        func_80126528
    /* 41278 80132E78 00000000 */   nop
    /* 4127C 80132E7C 8CD9030C */  jal        func_800F6630
    /* 41280 80132E80 E7000424 */   addiu     $a0, $zero, 0xE7
    /* 41284 80132E84 50D4030C */  jal        func_800F5140
    /* 41288 80132E88 00000000 */   nop
    /* 4128C 80132E8C 93E0030C */  jal        func_800F824C
    /* 41290 80132E90 43000424 */   addiu     $a0, $zero, 0x43
    /* 41294 80132E94 9CDC030C */  jal        func_800F7270
    /* 41298 80132E98 43000424 */   addiu     $a0, $zero, 0x43
    /* 4129C 80132E9C 91E5030C */  jal        func_800F9644
    /* 412A0 80132EA0 20000424 */   addiu     $a0, $zero, 0x20
    /* 412A4 80132EA4 1A80053C */  lui        $a1, %hi(D_80199E30)
    /* 412A8 80132EA8 1A80033C */  lui        $v1, %hi(D_8019ED54)
    /* 412AC 80132EAC 54ED638C */  lw         $v1, %lo(D_8019ED54)($v1)
    /* 412B0 80132EB0 309EA524 */  addiu      $a1, $a1, %lo(D_80199E30)
    /* 412B4 80132EB4 00006294 */  lhu        $v0, 0x0($v1)
    /* 412B8 80132EB8 1A80063C */  lui        $a2, %hi(D_8019ED40)
    /* 412BC 80132EBC 40EDC68C */  lw         $a2, %lo(D_8019ED40)($a2)
    /* 412C0 80132EC0 21104500 */  addu       $v0, $v0, $a1
    /* 412C4 80132EC4 00004390 */  lbu        $v1, 0x0($v0)
    /* 412C8 80132EC8 00000000 */  nop
    /* 412CC 80132ECC 0000C3A0 */  sb         $v1, 0x0($a2)
    /* 412D0 80132ED0 1A80043C */  lui        $a0, %hi(D_8019ED54)
    /* 412D4 80132ED4 54ED848C */  lw         $a0, %lo(D_8019ED54)($a0)
    /* 412D8 80132ED8 00000000 */  nop
    /* 412DC 80132EDC 00008294 */  lhu        $v0, 0x0($a0)
    /* 412E0 80132EE0 1A80043C */  lui        $a0, %hi(D_8019ED40)
    /* 412E4 80132EE4 40ED848C */  lw         $a0, %lo(D_8019ED40)($a0)
    /* 412E8 80132EE8 21104500 */  addu       $v0, $v0, $a1
    /* 412EC 80132EEC 01004390 */  lbu        $v1, 0x1($v0)
    /* 412F0 80132EF0 00000000 */  nop
    /* 412F4 80132EF4 010083A0 */  sb         $v1, 0x1($a0)
    /* 412F8 80132EF8 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 412FC 80132EFC 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 41300 80132F00 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 41304 80132F04 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 41308 80132F08 00004394 */  lhu        $v1, 0x0($v0)
    /* 4130C 80132F0C 20000424 */  addiu      $a0, $zero, 0x20
    /* 41310 80132F10 98E5030C */  jal        func_800F9660
    /* 41314 80132F14 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 41318 80132F18 1A80033C */  lui        $v1, %hi(D_80199198)
    /* 4131C 80132F1C 98916494 */  lhu        $a0, %lo(D_80199198)($v1)
    /* 41320 80132F20 40DD030C */  jal        func_800F7500
    /* 41324 80132F24 00000000 */   nop
    /* 41328 80132F28 CCE4030C */  jal        func_800F9330
    /* 4132C 80132F2C 00000000 */   nop
    /* 41330 80132F30 E7E4030C */  jal        func_800F939C
    /* 41334 80132F34 00000000 */   nop
    /* 41338 80132F38 4984040C */  jal        func_80121124
    /* 4133C 80132F3C 00000000 */   nop
    /* 41340 80132F40 9FCC040C */  jal        func_8013327C
    /* 41344 80132F44 00000000 */   nop
    /* 41348 80132F48 8CD9030C */  jal        func_800F6630
    /* 4134C 80132F4C E8000424 */   addiu     $a0, $zero, 0xE8
    /* 41350 80132F50 8C42050C */  jal        func_80150A30
    /* 41354 80132F54 00000000 */   nop
    /* 41358 80132F58 36AC040C */  jal        func_8012B0D8
    /* 4135C 80132F5C 00000000 */   nop
    /* 41360 80132F60 4C90040C */  jal        func_80124130
    /* 41364 80132F64 00000000 */   nop
    /* 41368 80132F68 3099040C */  jal        func_801264C0
    /* 4136C 80132F6C 00000000 */   nop
    /* 41370 80132F70 91E5030C */  jal        func_800F9644
    /* 41374 80132F74 20000424 */   addiu     $a0, $zero, 0x20
    /* 41378 80132F78 77DC030C */  jal        func_800F71DC
    /* 4137C 80132F7C 00F60434 */   ori       $a0, $zero, 0xF600
    /* 41380 80132F80 40DD030C */  jal        func_800F7500
    /* 41384 80132F84 00C60434 */   ori       $a0, $zero, 0xC600
    /* 41388 80132F88 56D9030C */  jal        func_800F6558
    /* 4138C 80132F8C FF070424 */   addiu     $a0, $zero, 0x7FF
    /* 41390 80132F90 59CF030C */  jal        func_800F3D64
    /* 41394 80132F94 7E7E0424 */   addiu     $a0, $zero, 0x7E7E
    /* 41398 80132F98 98E5030C */  jal        func_800F9660
    /* 4139C 80132F9C 20000424 */   addiu     $a0, $zero, 0x20
    /* 413A0 80132FA0 53D9030C */  jal        func_800F654C
    /* 413A4 80132FA4 79000424 */   addiu     $a0, $zero, 0x79
    /* 413A8 80132FA8 7AE0030C */  jal        func_800F81E8
    /* 413AC 80132FAC 0A210424 */   addiu     $a0, $zero, 0x210A
    /* 413B0 80132FB0 8B83040C */  jal        func_80120E2C
    /* 413B4 80132FB4 00000000 */   nop
    /* 413B8 80132FB8 2A90040C */  jal        func_801240A8
    /* 413BC 80132FBC 00000000 */   nop
    /* 413C0 80132FC0 3490040C */  jal        func_801240D0
    /* 413C4 80132FC4 00000000 */   nop
    /* 413C8 80132FC8 77DC030C */  jal        func_800F71DC
    /* 413CC 80132FCC B0FF0434 */   ori       $a0, $zero, 0xFFB0
    /* 413D0 80132FD0 5BE3030C */  jal        func_800F8D6C
    /* 413D4 80132FD4 96000424 */   addiu     $a0, $zero, 0x96
    /* 413D8 80132FD8 9CDC030C */  jal        func_800F7270
    /* 413DC 80132FDC 41000424 */   addiu     $a0, $zero, 0x41
    /* 413E0 80132FE0 5BE3030C */  jal        func_800F8D6C
    /* 413E4 80132FE4 99000424 */   addiu     $a0, $zero, 0x99
    /* 413E8 80132FE8 3099040C */  jal        func_801264C0
    /* 413EC 80132FEC 00000000 */   nop
    /* 413F0 80132FF0 9FBA050C */  jal        func_8016EA7C
    /* 413F4 80132FF4 00000000 */   nop
    /* 413F8 80132FF8 77DC030C */  jal        func_800F71DC
    /* 413FC 80132FFC 00080424 */   addiu     $a0, $zero, 0x800
    /* 41400 80133000 5BE3030C */  jal        func_800F8D6C
    /* 41404 80133004 DE000424 */   addiu     $a0, $zero, 0xDE
    /* 41408 80133008 FC98040C */  jal        func_801263F0
    /* 4140C 8013300C 00000000 */   nop
    /* 41410 80133010 2099040C */  jal        func_80126480
    /* 41414 80133014 00000000 */   nop
    /* 41418 80133018 77DC030C */  jal        func_800F71DC
    /* 4141C 8013301C 00100424 */   addiu     $a0, $zero, 0x1000
    /* 41420 80133020 5BE3030C */  jal        func_800F8D6C
    /* 41424 80133024 DE000424 */   addiu     $a0, $zero, 0xDE
    /* 41428 80133028 53D9030C */  jal        func_800F654C
    /* 4142C 8013302C 02000424 */   addiu     $a0, $zero, 0x2
    /* 41430 80133030 93E0030C */  jal        func_800F824C
    /* 41434 80133034 AE000424 */   addiu     $a0, $zero, 0xAE
    /* 41438 80133038 8CD9030C */  jal        func_800F6630
    /* 4143C 8013303C E7000424 */   addiu     $a0, $zero, 0xE7
    /* 41440 80133040 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 41444 80133044 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 41448 80133048 00000000 */  nop
    /* 4144C 8013304C 00006290 */  lbu        $v0, 0x0($v1)
    /* 41450 80133050 B7000424 */  addiu      $a0, $zero, 0xB7
    /* 41454 80133054 80004234 */  ori        $v0, $v0, 0x80
    /* 41458 80133058 93E0030C */  jal        func_800F824C
    /* 4145C 8013305C 000062A0 */   sb        $v0, 0x0($v1)
    /* 41460 80133060 93E0030C */  jal        func_800F824C
    /* 41464 80133064 C0000424 */   addiu     $a0, $zero, 0xC0
    /* 41468 80133068 53D9030C */  jal        func_800F654C
    /* 4146C 8013306C 28000424 */   addiu     $a0, $zero, 0x28
    /* 41470 80133070 93E0030C */  jal        func_800F824C
    /* 41474 80133074 C2000424 */   addiu     $a0, $zero, 0xC2
    /* 41478 80133078 93E0030C */  jal        func_800F824C
    /* 4147C 8013307C D2000424 */   addiu     $a0, $zero, 0xD2
    /* 41480 80133080 77DC030C */  jal        func_800F71DC
    /* 41484 80133084 2E950434 */   ori       $a0, $zero, 0x952E
    /* 41488 80133088 5BE3030C */  jal        func_800F8D6C
    /* 4148C 8013308C D0000424 */   addiu     $a0, $zero, 0xD0
    /* 41490 80133090 77DC030C */  jal        func_800F71DC
    /* 41494 80133094 4F820434 */   ori       $a0, $zero, 0x824F
    /* 41498 80133098 5BE3030C */  jal        func_800F8D6C
    /* 4149C 8013309C CD000424 */   addiu     $a0, $zero, 0xCD
    /* 414A0 801330A0 5AAC040C */  jal        func_8012B168
    /* 414A4 801330A4 00000000 */   nop
    /* 414A8 801330A8 68E5030C */  jal        func_800F95A0
    /* 414AC 801330AC 00000000 */   nop
    /* 414B0 801330B0 83E5030C */  jal        func_800F960C
    /* 414B4 801330B4 00000000 */   nop
    /* 414B8 801330B8 4984040C */  jal        func_80121124
    /* 414BC 801330BC 00000000 */   nop
    /* 414C0 801330C0 53D9030C */  jal        func_800F654C
    /* 414C4 801330C4 7A000424 */   addiu     $a0, $zero, 0x7A
    /* 414C8 801330C8 7AE0030C */  jal        func_800F81E8
    /* 414CC 801330CC 0A210424 */   addiu     $a0, $zero, 0x210A
    /* 414D0 801330D0 A78A040C */  jal        func_80122A9C
    /* 414D4 801330D4 00000000 */   nop
    /* 414D8 801330D8 4A99040C */  jal        func_80126528
    /* 414DC 801330DC 00000000 */   nop
    /* 414E0 801330E0 DDE3030C */  jal        func_800F8F74
    /* 414E4 801330E4 1F1B0424 */   addiu     $a0, $zero, 0x1B1F
  .L801330E8:
    /* 414E8 801330E8 1000BF8F */  lw         $ra, 0x10($sp)
    /* 414EC 801330EC 00000000 */  nop
    /* 414F0 801330F0 0800E003 */  jr         $ra
    /* 414F4 801330F4 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80132CFC
