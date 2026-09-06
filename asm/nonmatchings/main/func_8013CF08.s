nonmatching func_8013CF08, 0x138

glabel func_8013CF08
    /* 4B308 8013CF08 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 4B30C 8013CF0C 1000BFAF */  sw         $ra, 0x10($sp)
    /* 4B310 8013CF10 C7E5030C */  jal        func_800F971C
    /* 4B314 8013CF14 00000000 */   nop
    /* 4B318 8013CF18 1A80033C */  lui        $v1, %hi(D_8019ED44)
    /* 4B31C 8013CF1C 44ED638C */  lw         $v1, %lo(D_8019ED44)($v1)
    /* 4B320 8013CF20 1A80043C */  lui        $a0, %hi(D_8019ED54)
    /* 4B324 8013CF24 54ED848C */  lw         $a0, %lo(D_8019ED54)($a0)
    /* 4B328 8013CF28 00006294 */  lhu        $v0, 0x0($v1)
    /* 4B32C 8013CF2C 00000000 */  nop
    /* 4B330 8013CF30 000082A4 */  sh         $v0, 0x0($a0)
    /* 4B334 8013CF34 1A80033C */  lui        $v1, %hi(D_8019ED44)
    /* 4B338 8013CF38 44ED638C */  lw         $v1, %lo(D_8019ED44)($v1)
    /* 4B33C 8013CF3C 1A80043C */  lui        $a0, %hi(D_8019ED58)
    /* 4B340 8013CF40 58ED848C */  lw         $a0, %lo(D_8019ED58)($a0)
    /* 4B344 8013CF44 00006294 */  lhu        $v0, 0x0($v1)
    /* 4B348 8013CF48 00000000 */  nop
    /* 4B34C 8013CF4C 000082A4 */  sh         $v0, 0x0($a0)
  .L8013CF50:
    /* 4B350 8013CF50 590F050C */  jal        func_80143D64
    /* 4B354 8013CF54 00000000 */   nop
    /* 4B358 8013CF58 04D5030C */  jal        func_800F5410
    /* 4B35C 8013CF5C 00000000 */   nop
    /* 4B360 8013CF60 C1CE030C */  jal        func_800F3B04
    /* 4B364 8013CF64 11F10434 */   ori       $a0, $zero, 0xF111
    /* 4B368 8013CF68 CECF030C */  jal        func_800F3F38
    /* 4B36C 8013CF6C 21204000 */   addu      $a0, $v0, $zero
    /* 4B370 8013CF70 93E0030C */  jal        func_800F824C
    /* 4B374 8013CF74 21200000 */   addu      $a0, $zero, $zero
    /* 4B378 8013CF78 450F050C */  jal        func_80143D14
    /* 4B37C 8013CF7C 00000000 */   nop
    /* 4B380 8013CF80 04D5030C */  jal        func_800F5410
    /* 4B384 8013CF84 00000000 */   nop
    /* 4B388 8013CF88 C1CE030C */  jal        func_800F3B04
    /* 4B38C 8013CF8C 12F10434 */   ori       $a0, $zero, 0xF112
    /* 4B390 8013CF90 CECF030C */  jal        func_800F3F38
    /* 4B394 8013CF94 21204000 */   addu      $a0, $v0, $zero
    /* 4B398 8013CF98 93E0030C */  jal        func_800F824C
    /* 4B39C 8013CF9C 02000424 */   addiu     $a0, $zero, 0x2
    /* 4B3A0 8013CFA0 CCE4030C */  jal        func_800F9330
    /* 4B3A4 8013CFA4 00000000 */   nop
    /* 4B3A8 8013CFA8 59D9030C */  jal        func_800F6564
    /* 4B3AC 8013CFAC 15F10434 */   ori       $a0, $zero, 0xF115
    /* 4B3B0 8013CFB0 04D5030C */  jal        func_800F5410
    /* 4B3B4 8013CFB4 00000000 */   nop
    /* 4B3B8 8013CFB8 C1CE030C */  jal        func_800F3B04
    /* 4B3BC 8013CFBC 16F10434 */   ori       $a0, $zero, 0xF116
    /* 4B3C0 8013CFC0 CECF030C */  jal        func_800F3F38
    /* 4B3C4 8013CFC4 21204000 */   addu      $a0, $v0, $zero
    /* 4B3C8 8013CFC8 0D00043C */  lui        $a0, (0xDF81C >> 16)
    /* 4B3CC 8013CFCC 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 4B3D0 8013CFD0 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 4B3D4 8013CFD4 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 4B3D8 8013CFD8 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 4B3DC 8013CFDC 00004394 */  lhu        $v1, 0x0($v0)
    /* 4B3E0 8013CFE0 1CF88434 */  ori        $a0, $a0, (0xDF81C & 0xFFFF)
    /* 4B3E4 8013CFE4 1ADB030C */  jal        func_800F6C68
    /* 4B3E8 8013CFE8 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 4B3EC 8013CFEC 93E0030C */  jal        func_800F824C
    /* 4B3F0 8013CFF0 04000424 */   addiu     $a0, $zero, 0x4
    /* 4B3F4 8013CFF4 0D00043C */  lui        $a0, (0xDF80C >> 16)
    /* 4B3F8 8013CFF8 1ADB030C */  jal        func_800F6C68
    /* 4B3FC 8013CFFC 0CF88434 */   ori       $a0, $a0, (0xDF80C & 0xFFFF)
    /* 4B400 8013D000 68E5030C */  jal        func_800F95A0
    /* 4B404 8013D004 00000000 */   nop
    /* 4B408 8013D008 10F4040C */  jal        func_8013D040
    /* 4B40C 8013D00C 00000000 */   nop
    /* 4B410 8013D010 D9D8030C */  jal        func_800F6364
    /* 4B414 8013D014 00000000 */   nop
    /* 4B418 8013D018 56D6030C */  jal        func_800F5958
    /* 4B41C 8013D01C 08000424 */   addiu     $a0, $zero, 0x8
    /* 4B420 8013D020 F5D4030C */  jal        func_800F53D4
    /* 4B424 8013D024 00000000 */   nop
    /* 4B428 8013D028 C9FF4010 */  beqz       $v0, .L8013CF50
    /* 4B42C 8013D02C 00000000 */   nop
    /* 4B430 8013D030 1000BF8F */  lw         $ra, 0x10($sp)
    /* 4B434 8013D034 00000000 */  nop
    /* 4B438 8013D038 0800E003 */  jr         $ra
    /* 4B43C 8013D03C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8013CF08
