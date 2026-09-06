nonmatching func_8014B044, 0x94

glabel func_8014B044
    /* 59444 8014B044 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 59448 8014B048 1000BFAF */  sw         $ra, 0x10($sp)
    /* 5944C 8014B04C 77DC030C */  jal        func_800F71DC
    /* 59450 8014B050 21200000 */   addu      $a0, $zero, $zero
    /* 59454 8014B054 1600043C */  lui        $a0, (0x16FC7E >> 16)
  .L8014B058:
    /* 59458 8014B058 1ADB030C */  jal        func_800F6C68
    /* 5945C 8014B05C 7EFC8434 */   ori       $a0, $a0, (0x16FC7E & 0xFFFF)
    /* 59460 8014B060 C1CE030C */  jal        func_800F3B04
    /* 59464 8014B064 23350424 */   addiu     $a0, $zero, 0x3523
    /* 59468 8014B068 35D5030C */  jal        func_800F54D4
    /* 5946C 8014B06C 21204000 */   addu      $a0, $v0, $zero
    /* 59470 8014B070 F5D4030C */  jal        func_800F53D4
    /* 59474 8014B074 00000000 */   nop
    /* 59478 8014B078 0B004014 */  bnez       $v0, .L8014B0A8
    /* 5947C 8014B07C 00000000 */   nop
    /* 59480 8014B080 D9D8030C */  jal        func_800F6364
    /* 59484 8014B084 00000000 */   nop
    /* 59488 8014B088 56D6030C */  jal        func_800F5958
    /* 5948C 8014B08C 08000424 */   addiu     $a0, $zero, 0x8
    /* 59490 8014B090 F5D4030C */  jal        func_800F53D4
    /* 59494 8014B094 00000000 */   nop
    /* 59498 8014B098 EFFF4010 */  beqz       $v0, .L8014B058
    /* 5949C 8014B09C 1600043C */   lui       $a0, (0x16FC7E >> 16)
    /* 594A0 8014B0A0 77DC030C */  jal        func_800F71DC
    /* 594A4 8014B0A4 21200000 */   addu      $a0, $zero, $zero
  .L8014B0A8:
    /* 594A8 8014B0A8 1A80023C */  lui        $v0, %hi(D_8019ED5C)
    /* 594AC 8014B0AC 5CED428C */  lw         $v0, %lo(D_8019ED5C)($v0)
    /* 594B0 8014B0B0 1A80053C */  lui        $a1, %hi(D_8019ED40)
    /* 594B4 8014B0B4 40EDA58C */  lw         $a1, %lo(D_8019ED40)($a1)
    /* 594B8 8014B0B8 00004390 */  lbu        $v1, 0x0($v0)
    /* 594BC 8014B0BC 49000424 */  addiu      $a0, $zero, 0x49
    /* 594C0 8014B0C0 62E0030C */  jal        func_800F8188
    /* 594C4 8014B0C4 0000A3A0 */   sb        $v1, 0x0($a1)
    /* 594C8 8014B0C8 1000BF8F */  lw         $ra, 0x10($sp)
    /* 594CC 8014B0CC 00000000 */  nop
    /* 594D0 8014B0D0 0800E003 */  jr         $ra
    /* 594D4 8014B0D4 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8014B044
