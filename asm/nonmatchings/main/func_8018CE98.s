nonmatching func_8018CE98, 0x160

glabel func_8018CE98
    /* 9B298 8018CE98 E0FFBD27 */  addiu      $sp, $sp, -0x20
    /* 9B29C 8018CE9C 1400B1AF */  sw         $s1, 0x14($sp)
    /* 9B2A0 8018CEA0 1F80113C */  lui        $s1, %hi(D_801F67C0)
    /* 9B2A4 8018CEA4 C067318E */  lw         $s1, %lo(D_801F67C0)($s1)
    /* 9B2A8 8018CEA8 1A80033C */  lui        $v1, %hi(D_8019B594)
    /* 9B2AC 8018CEAC 94B5638C */  lw         $v1, %lo(D_8019B594)($v1)
    /* 9B2B0 8018CEB0 01000224 */  addiu      $v0, $zero, 0x1
    /* 9B2B4 8018CEB4 1800BFAF */  sw         $ra, 0x18($sp)
    /* 9B2B8 8018CEB8 1000B0AF */  sw         $s0, 0x10($sp)
    /* 9B2BC 8018CEBC 04102202 */  sllv       $v0, $v0, $s1
    /* 9B2C0 8018CEC0 27100200 */  nor        $v0, $zero, $v0
    /* 9B2C4 8018CEC4 24186200 */  and        $v1, $v1, $v0
    /* 9B2C8 8018CEC8 1A80013C */  lui        $at, %hi(D_8019B594)
    /* 9B2CC 8018CECC 94B523AC */  sw         $v1, %lo(D_8019B594)($at)
    /* 9B2D0 8018CED0 1C006014 */  bnez       $v1, .L8018CF44
    /* 9B2D4 8018CED4 01002626 */   addiu     $a2, $s1, 0x1
    /* 9B2D8 8018CED8 1F80043C */  lui        $a0, %hi(D_801F67B0)
    /* 9B2DC 8018CEDC B067848C */  lw         $a0, %lo(D_801F67B0)($a0)
    /* 9B2E0 8018CEE0 2E39060C */  jal        func_8018E4B8
    /* 9B2E4 8018CEE4 00000000 */   nop
    /* 9B2E8 8018CEE8 1F80023C */  lui        $v0, %hi(D_801F67D4)
    /* 9B2EC 8018CEEC D467428C */  lw         $v0, %lo(D_801F67D4)($v0)
    /* 9B2F0 8018CEF0 00000000 */  nop
    /* 9B2F4 8018CEF4 03004010 */  beqz       $v0, .L8018CF04
    /* 9B2F8 8018CEF8 00000000 */   nop
    /* 9B2FC 8018CEFC FA2A060C */  jal        func_8018ABE8
    /* 9B300 8018CF00 01000424 */   addiu     $a0, $zero, 0x1
  .L8018CF04:
    /* 9B304 8018CF04 1F80033C */  lui        $v1, %hi(D_801F67A8)
    /* 9B308 8018CF08 A867638C */  lw         $v1, %lo(D_801F67A8)($v1)
    /* 9B30C 8018CF0C 22000224 */  addiu      $v0, $zero, 0x22
    /* 9B310 8018CF10 1A80013C */  lui        $at, %hi(D_8019B584)
    /* 9B314 8018CF14 33006010 */  beqz       $v1, .L8018CFE4
    /* 9B318 8018CF18 84B522AC */   sw        $v0, %lo(D_8019B584)($at)
    /* 9B31C 8018CF1C 1A80043C */  lui        $a0, %hi(D_8019B598)
    /* 9B320 8018CF20 98B5848C */  lw         $a0, %lo(D_8019B598)($a0)
    /* 9B324 8018CF24 1F80023C */  lui        $v0, %hi(D_801F67A8)
    /* 9B328 8018CF28 A867428C */  lw         $v0, %lo(D_801F67A8)($v0)
    /* 9B32C 8018CF2C 00000000 */  nop
    /* 9B330 8018CF30 09F84000 */  jalr       $v0
    /* 9B334 8018CF34 04000524 */   addiu     $a1, $zero, 0x4
    /* 9B338 8018CF38 1A80013C */  lui        $at, %hi(D_8019B598)
    /* 9B33C 8018CF3C F9330608 */  j          .L8018CFE4
    /* 9B340 8018CF40 98B520AC */   sw        $zero, %lo(D_8019B598)($at)
  .L8018CF44:
    /* 9B344 8018CF44 1800C228 */  slti       $v0, $a2, 0x18
    /* 9B348 8018CF48 0A004010 */  beqz       $v0, .L8018CF74
    /* 9B34C 8018CF4C 00000000 */   nop
    /* 9B350 8018CF50 01000424 */  addiu      $a0, $zero, 0x1
    /* 9B354 8018CF54 0410C400 */  sllv       $v0, $a0, $a2
  .L8018CF58:
    /* 9B358 8018CF58 24106200 */  and        $v0, $v1, $v0
    /* 9B35C 8018CF5C 05004014 */  bnez       $v0, .L8018CF74
    /* 9B360 8018CF60 00000000 */   nop
    /* 9B364 8018CF64 0100C624 */  addiu      $a2, $a2, 0x1
    /* 9B368 8018CF68 1800C228 */  slti       $v0, $a2, 0x18
    /* 9B36C 8018CF6C FAFF4014 */  bnez       $v0, .L8018CF58
    /* 9B370 8018CF70 0410C400 */   sllv      $v0, $a0, $a2
  .L8018CF74:
    /* 9B374 8018CF74 00890600 */  sll        $s1, $a2, 4
    /* 9B378 8018CF78 1F80103C */  lui        $s0, %hi(D_801F67D8)
    /* 9B37C 8018CF7C D8671026 */  addiu      $s0, $s0, %lo(D_801F67D8)
    /* 9B380 8018CF80 21803002 */  addu       $s0, $s1, $s0
    /* 9B384 8018CF84 0800058E */  lw         $a1, 0x8($s0)
    /* 9B388 8018CF88 1F80013C */  lui        $at, %hi(D_801F67C0)
    /* 9B38C 8018CF8C C06726AC */  sw         $a2, %lo(D_801F67C0)($at)
    /* 9B390 8018CF90 D729060C */  jal        func_8018A75C
    /* 9B394 8018CF94 02000424 */   addiu     $a0, $zero, 0x2
    /* 9B398 8018CF98 06000324 */  addiu      $v1, $zero, 0x6
    /* 9B39C 8018CF9C 1F80023C */  lui        $v0, %hi(D_801F67E4)
    /* 9B3A0 8018CFA0 21105100 */  addu       $v0, $v0, $s1
    /* 9B3A4 8018CFA4 E467428C */  lw         $v0, %lo(D_801F67E4)($v0)
    /* 9B3A8 8018CFA8 02000524 */  addiu      $a1, $zero, 0x2
    /* 9B3AC 8018CFAC 01004224 */  addiu      $v0, $v0, 0x1
    /* 9B3B0 8018CFB0 000043A0 */  sb         $v1, 0x0($v0)
    /* 9B3B4 8018CFB4 100045A0 */  sb         $a1, 0x10($v0)
    /* 9B3B8 8018CFB8 1F80033C */  lui        $v1, %hi(D_801F6958)
    /* 9B3BC 8018CFBC 5869638C */  lw         $v1, %lo(D_801F6958)($v1)
    /* 9B3C0 8018CFC0 01000424 */  addiu      $a0, $zero, 0x1
    /* 9B3C4 8018CFC4 21104300 */  addu       $v0, $v0, $v1
    /* 9B3C8 8018CFC8 D729060C */  jal        func_8018A75C
    /* 9B3CC 8018CFCC F0FF45A0 */   sb        $a1, -0x10($v0)
    /* 9B3D0 8018CFD0 0C00058E */  lw         $a1, 0xC($s0)
    /* 9B3D4 8018CFD4 1F80063C */  lui        $a2, %hi(D_801F6958)
    /* 9B3D8 8018CFD8 5869C68C */  lw         $a2, %lo(D_801F6958)($a2)
    /* 9B3DC 8018CFDC D729060C */  jal        func_8018A75C
    /* 9B3E0 8018CFE0 03000424 */   addiu     $a0, $zero, 0x3
  .L8018CFE4:
    /* 9B3E4 8018CFE4 1800BF8F */  lw         $ra, 0x18($sp)
    /* 9B3E8 8018CFE8 1400B18F */  lw         $s1, 0x14($sp)
    /* 9B3EC 8018CFEC 1000B08F */  lw         $s0, 0x10($sp)
    /* 9B3F0 8018CFF0 0800E003 */  jr         $ra
    /* 9B3F4 8018CFF4 2000BD27 */   addiu     $sp, $sp, 0x20
endlabel func_8018CE98
