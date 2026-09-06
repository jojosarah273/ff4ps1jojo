nonmatching func_80117E9C, 0x74

glabel func_80117E9C
    /* 2629C 80117E9C 1A80023C */  lui        $v0, %hi(D_8019ED30)
    /* 262A0 80117EA0 30ED4290 */  lbu        $v0, %lo(D_8019ED30)($v0)
    /* 262A4 80117EA4 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 262A8 80117EA8 05004010 */  beqz       $v0, .L80117EC0
    /* 262AC 80117EAC 1000BFAF */   sw        $ra, 0x10($sp)
    /* 262B0 80117EB0 1A80013C */  lui        $at, %hi(D_8019ED30)
    /* 262B4 80117EB4 30ED20A0 */  sb         $zero, %lo(D_8019ED30)($at)
    /* 262B8 80117EB8 EEE3030C */  jal        func_800F8FB8
    /* 262BC 80117EBC AC000424 */   addiu     $a0, $zero, 0xAC
  .L80117EC0:
    /* 262C0 80117EC0 8CD9030C */  jal        func_800F6630
    /* 262C4 80117EC4 AC000424 */   addiu     $a0, $zero, 0xAC
    /* 262C8 80117EC8 0DD9030C */  jal        func_800F6434
    /* 262CC 80117ECC 02020424 */   addiu     $a0, $zero, 0x202
    /* 262D0 80117ED0 07004014 */  bnez       $v0, .L80117EF0
    /* 262D4 80117ED4 00000000 */   nop
    /* 262D8 80117ED8 AFD8030C */  jal        func_800F62BC
    /* 262DC 80117EDC AC000424 */   addiu     $a0, $zero, 0xAC
    /* 262E0 80117EE0 977A040C */  jal        func_8011EA5C
    /* 262E4 80117EE4 00000000 */   nop
    /* 262E8 80117EE8 C05F0408 */  j          .L80117F00
    /* 262EC 80117EEC 00000000 */   nop
  .L80117EF0:
    /* 262F0 80117EF0 EEE3030C */  jal        func_800F8FB8
    /* 262F4 80117EF4 AC000424 */   addiu     $a0, $zero, 0xAC
    /* 262F8 80117EF8 977A040C */  jal        func_8011EA5C
    /* 262FC 80117EFC 00000000 */   nop
  .L80117F00:
    /* 26300 80117F00 1000BF8F */  lw         $ra, 0x10($sp)
    /* 26304 80117F04 00000000 */  nop
    /* 26308 80117F08 0800E003 */  jr         $ra
    /* 2630C 80117F0C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80117E9C
