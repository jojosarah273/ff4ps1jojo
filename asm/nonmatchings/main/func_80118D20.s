nonmatching func_80118D20, 0x1A0

glabel func_80118D20
    /* 27120 80118D20 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 27124 80118D24 1000BFAF */  sw         $ra, 0x10($sp)
    /* 27128 80118D28 655D040C */  jal        func_80117594
    /* 2712C 80118D2C 00000000 */   nop
    /* 27130 80118D30 5DD5030C */  jal        func_800F5574
    /* 27134 80118D34 FE000424 */   addiu     $a0, $zero, 0xFE
    /* 27138 80118D38 F5D4030C */  jal        func_800F53D4
    /* 2713C 80118D3C 00000000 */   nop
    /* 27140 80118D40 3F004014 */  bnez       $v0, .L80118E40
    /* 27144 80118D44 00000000 */   nop
    /* 27148 80118D48 93E0030C */  jal        func_800F824C
    /* 2714C 80118D4C 18000424 */   addiu     $a0, $zero, 0x18
    /* 27150 80118D50 EEE3030C */  jal        func_800F8FB8
    /* 27154 80118D54 19000424 */   addiu     $a0, $zero, 0x19
    /* 27158 80118D58 53D9030C */  jal        func_800F654C
    /* 2715C 80118D5C 0A000424 */   addiu     $a0, $zero, 0xA
    /* 27160 80118D60 93E0030C */  jal        func_800F824C
    /* 27164 80118D64 1A000424 */   addiu     $a0, $zero, 0x1A
    /* 27168 80118D68 EEE3030C */  jal        func_800F8FB8
    /* 2716C 80118D6C 1B000424 */   addiu     $a0, $zero, 0x1B
    /* 27170 80118D70 C3D3050C */  jal        func_80174F0C
    /* 27174 80118D74 00000000 */   nop
    /* 27178 80118D78 77DC030C */  jal        func_800F71DC
    /* 2717C 80118D7C 21200000 */   addu      $a0, $zero, $zero
  .L80118D80:
    /* 27180 80118D80 DADA030C */  jal        func_800F6B68
    /* 27184 80118D84 03100424 */   addiu     $a0, $zero, 0x1003
    /* 27188 80118D88 0DD9030C */  jal        func_800F6434
    /* 2718C 80118D8C 80000424 */   addiu     $a0, $zero, 0x80
    /* 27190 80118D90 1F004014 */  bnez       $v0, .L80118E10
    /* 27194 80118D94 00000000 */   nop
    /* 27198 80118D98 91E5030C */  jal        func_800F9644
    /* 2719C 80118D9C 20000424 */   addiu     $a0, $zero, 0x20
    /* 271A0 80118DA0 F8DA030C */  jal        func_800F6BE0
    /* 271A4 80118DA4 0B100424 */   addiu     $a0, $zero, 0x100B
    /* 271A8 80118DA8 04D5030C */  jal        func_800F5410
    /* 271AC 80118DAC 00000000 */   nop
    /* 271B0 80118DB0 0FCF030C */  jal        func_800F3C3C
    /* 271B4 80118DB4 30000424 */   addiu     $a0, $zero, 0x30
    /* 271B8 80118DB8 E5CF030C */  jal        func_800F3F94
    /* 271BC 80118DBC 21204000 */   addu      $a0, $v0, $zero
    /* 271C0 80118DC0 1A80023C */  lui        $v0, %hi(D_8019ED54)
    /* 271C4 80118DC4 54ED428C */  lw         $v0, %lo(D_8019ED54)($v0)
    /* 271C8 80118DC8 00000000 */  nop
    /* 271CC 80118DCC 00004494 */  lhu        $a0, 0x0($v0)
    /* 271D0 80118DD0 C1CE030C */  jal        func_800F3B04
    /* 271D4 80118DD4 0D108424 */   addiu     $a0, $a0, 0x100D
    /* 271D8 80118DD8 48D5030C */  jal        func_800F5520
    /* 271DC 80118DDC 21204000 */   addu      $a0, $v0, $zero
    /* 271E0 80118DE0 F0D4030C */  jal        func_800F53C0
    /* 271E4 80118DE4 00000000 */   nop
    /* 271E8 80118DE8 03004010 */  beqz       $v0, .L80118DF8
    /* 271EC 80118DEC 00000000 */   nop
    /* 271F0 80118DF0 F8DA030C */  jal        func_800F6BE0
    /* 271F4 80118DF4 0D100424 */   addiu     $a0, $zero, 0x100D
  .L80118DF8:
    /* 271F8 80118DF8 F7E1030C */  jal        func_800F87DC
    /* 271FC 80118DFC 0B100424 */   addiu     $a0, $zero, 0x100B
    /* 27200 80118E00 56D9030C */  jal        func_800F6558
    /* 27204 80118E04 21200000 */   addu      $a0, $zero, $zero
    /* 27208 80118E08 98E5030C */  jal        func_800F9660
    /* 2720C 80118E0C 20000424 */   addiu     $a0, $zero, 0x20
  .L80118E10:
    /* 27210 80118E10 7E5F040C */  jal        func_80117DF8
    /* 27214 80118E14 00000000 */   nop
    /* 27218 80118E18 56D6030C */  jal        func_800F5958
    /* 2721C 80118E1C 40010424 */   addiu     $a0, $zero, 0x140
    /* 27220 80118E20 F5D4030C */  jal        func_800F53D4
    /* 27224 80118E24 00000000 */   nop
    /* 27228 80118E28 D5FF4010 */  beqz       $v0, .L80118D80
    /* 2722C 80118E2C 00000000 */   nop
    /* 27230 80118E30 977A040C */  jal        func_8011EA5C
    /* 27234 80118E34 00000000 */   nop
    /* 27238 80118E38 AC630408 */  j          .L80118EB0
    /* 2723C 80118E3C 00000000 */   nop
  .L80118E40:
    /* 27240 80118E40 77DC030C */  jal        func_800F71DC
    /* 27244 80118E44 21200000 */   addu      $a0, $zero, $zero
  .L80118E48:
    /* 27248 80118E48 DADA030C */  jal        func_800F6B68
    /* 2724C 80118E4C 03100424 */   addiu     $a0, $zero, 0x1003
    /* 27250 80118E50 0DD9030C */  jal        func_800F6434
    /* 27254 80118E54 80000424 */   addiu     $a0, $zero, 0x80
    /* 27258 80118E58 0B004014 */  bnez       $v0, .L80118E88
    /* 2725C 80118E5C 00000000 */   nop
    /* 27260 80118E60 91E5030C */  jal        func_800F9644
    /* 27264 80118E64 20000424 */   addiu     $a0, $zero, 0x20
    /* 27268 80118E68 F8DA030C */  jal        func_800F6BE0
    /* 2726C 80118E6C 0D100424 */   addiu     $a0, $zero, 0x100D
    /* 27270 80118E70 F7E1030C */  jal        func_800F87DC
    /* 27274 80118E74 0B100424 */   addiu     $a0, $zero, 0x100B
    /* 27278 80118E78 56D9030C */  jal        func_800F6558
    /* 2727C 80118E7C 21200000 */   addu      $a0, $zero, $zero
    /* 27280 80118E80 98E5030C */  jal        func_800F9660
    /* 27284 80118E84 20000424 */   addiu     $a0, $zero, 0x20
  .L80118E88:
    /* 27288 80118E88 7E5F040C */  jal        func_80117DF8
    /* 2728C 80118E8C 00000000 */   nop
    /* 27290 80118E90 56D6030C */  jal        func_800F5958
    /* 27294 80118E94 40010424 */   addiu     $a0, $zero, 0x140
    /* 27298 80118E98 F5D4030C */  jal        func_800F53D4
    /* 2729C 80118E9C 00000000 */   nop
    /* 272A0 80118EA0 E9FF4010 */  beqz       $v0, .L80118E48
    /* 272A4 80118EA4 00000000 */   nop
    /* 272A8 80118EA8 977A040C */  jal        func_8011EA5C
    /* 272AC 80118EAC 00000000 */   nop
  .L80118EB0:
    /* 272B0 80118EB0 1000BF8F */  lw         $ra, 0x10($sp)
    /* 272B4 80118EB4 00000000 */  nop
    /* 272B8 80118EB8 0800E003 */  jr         $ra
    /* 272BC 80118EBC 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80118D20
