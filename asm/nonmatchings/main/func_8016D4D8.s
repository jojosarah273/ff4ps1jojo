nonmatching func_8016D4D8, 0x128

glabel func_8016D4D8
    /* 7B8D8 8016D4D8 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 7B8DC 8016D4DC 1000BFAF */  sw         $ra, 0x10($sp)
    /* 7B8E0 8016D4E0 84DC030C */  jal        func_800F7210
    /* 7B8E4 8016D4E4 197D0424 */   addiu     $a0, $zero, 0x7D19
    /* 7B8E8 8016D4E8 5BE3030C */  jal        func_800F8D6C
    /* 7B8EC 8016D4EC 36000424 */   addiu     $a0, $zero, 0x36
    /* 7B8F0 8016D4F0 59D9030C */  jal        func_800F6564
    /* 7B8F4 8016D4F4 1E7D0424 */   addiu     $a0, $zero, 0x7D1E
    /* 7B8F8 8016D4F8 93E0030C */  jal        func_800F824C
    /* 7B8FC 8016D4FC 38000424 */   addiu     $a0, $zero, 0x38
    /* 7B900 8016D500 84DC030C */  jal        func_800F7210
    /* 7B904 8016D504 1B7D0424 */   addiu     $a0, $zero, 0x7D1B
    /* 7B908 8016D508 5BE3030C */  jal        func_800F8D6C
    /* 7B90C 8016D50C 39000424 */   addiu     $a0, $zero, 0x39
    /* 7B910 8016D510 8CD9030C */  jal        func_800F6630
    /* 7B914 8016D514 39000424 */   addiu     $a0, $zero, 0x39
    /* 7B918 8016D518 04D5030C */  jal        func_800F5410
    /* 7B91C 8016D51C 00000000 */   nop
    /* 7B920 8016D520 C1CE030C */  jal        func_800F3B04
    /* 7B924 8016D524 1D7D0424 */   addiu     $a0, $zero, 0x7D1D
    /* 7B928 8016D528 CECF030C */  jal        func_800F3F38
    /* 7B92C 8016D52C 21204000 */   addu      $a0, $v0, $zero
    /* 7B930 8016D530 93E0030C */  jal        func_800F824C
    /* 7B934 8016D534 3C000424 */   addiu     $a0, $zero, 0x3C
    /* 7B938 8016D538 8CD9030C */  jal        func_800F6630
    /* 7B93C 8016D53C 3A000424 */   addiu     $a0, $zero, 0x3A
    /* 7B940 8016D540 02D0030C */  jal        func_800F4008
    /* 7B944 8016D544 21200000 */   addu      $a0, $zero, $zero
    /* 7B948 8016D548 93E0030C */  jal        func_800F824C
    /* 7B94C 8016D54C 3D000424 */   addiu     $a0, $zero, 0x3D
    /* 7B950 8016D550 C7E5030C */  jal        func_800F971C
    /* 7B954 8016D554 00000000 */   nop
    /* 7B958 8016D558 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 7B95C 8016D55C 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 7B960 8016D560 1A80043C */  lui        $a0, %hi(D_8019ED58)
    /* 7B964 8016D564 58ED848C */  lw         $a0, %lo(D_8019ED58)($a0)
    /* 7B968 8016D568 00004394 */  lhu        $v1, 0x0($v0)
    /* 7B96C 8016D56C 00000000 */  nop
    /* 7B970 8016D570 000083A4 */  sh         $v1, 0x0($a0)
  .L8016D574:
    /* 7B974 8016D574 0D80033C */  lui        $v1, %hi(D_800D0036)
    /* 7B978 8016D578 36006394 */  lhu        $v1, %lo(D_800D0036)($v1)
    /* 7B97C 8016D57C C5EA0234 */  ori        $v0, $zero, 0xEAC5
    /* 7B980 8016D580 03006214 */  bne        $v1, $v0, .L8016D590
    /* 7B984 8016D584 20F80234 */   ori       $v0, $zero, 0xF820
    /* 7B988 8016D588 0D80013C */  lui        $at, %hi(D_800D0036)
    /* 7B98C 8016D58C 360022A4 */  sh         $v0, %lo(D_800D0036)($at)
  .L8016D590:
    /* 7B990 8016D590 AADB030C */  jal        func_800F6EA8
    /* 7B994 8016D594 36000424 */   addiu     $a0, $zero, 0x36
    /* 7B998 8016D598 0DD9030C */  jal        func_800F6434
    /* 7B99C 8016D59C 02000424 */   addiu     $a0, $zero, 0x2
    /* 7B9A0 8016D5A0 13004014 */  bnez       $v0, .L8016D5F0
    /* 7B9A4 8016D5A4 00000000 */   nop
    /* 7B9A8 8016D5A8 5DD5030C */  jal        func_800F5574
    /* 7B9AC 8016D5AC 0F000424 */   addiu     $a0, $zero, 0xF
    /* 7B9B0 8016D5B0 F0D4030C */  jal        func_800F53C0
    /* 7B9B4 8016D5B4 00000000 */   nop
    /* 7B9B8 8016D5B8 07004010 */  beqz       $v0, .L8016D5D8
    /* 7B9BC 8016D5BC 00000000 */   nop
    /* 7B9C0 8016D5C0 E6B5050C */  jal        func_8016D798
    /* 7B9C4 8016D5C4 00000000 */   nop
    /* 7B9C8 8016D5C8 DAB5050C */  jal        func_8016D768
    /* 7B9CC 8016D5CC 00000000 */   nop
    /* 7B9D0 8016D5D0 5DB50508 */  j          .L8016D574
    /* 7B9D4 8016D5D4 00000000 */   nop
  .L8016D5D8:
    /* 7B9D8 8016D5D8 80B5050C */  jal        func_8016D600
    /* 7B9DC 8016D5DC 00000000 */   nop
    /* 7B9E0 8016D5E0 DAB5050C */  jal        func_8016D768
    /* 7B9E4 8016D5E4 00000000 */   nop
    /* 7B9E8 8016D5E8 5DB50508 */  j          .L8016D574
    /* 7B9EC 8016D5EC 00000000 */   nop
  .L8016D5F0:
    /* 7B9F0 8016D5F0 1000BF8F */  lw         $ra, 0x10($sp)
    /* 7B9F4 8016D5F4 00000000 */  nop
    /* 7B9F8 8016D5F8 0800E003 */  jr         $ra
    /* 7B9FC 8016D5FC 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8016D4D8
