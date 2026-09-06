nonmatching func_8016BED4, 0x90

glabel func_8016BED4
    /* 7A2D4 8016BED4 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 7A2D8 8016BED8 1000BFAF */  sw         $ra, 0x10($sp)
    /* 7A2DC 8016BEDC C7E5030C */  jal        func_800F971C
    /* 7A2E0 8016BEE0 00000000 */   nop
    /* 7A2E4 8016BEE4 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 7A2E8 8016BEE8 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 7A2EC 8016BEEC 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 7A2F0 8016BEF0 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 7A2F4 8016BEF4 00004394 */  lhu        $v1, 0x0($v0)
    /* 7A2F8 8016BEF8 80000424 */  addiu      $a0, $zero, 0x80
    /* 7A2FC 8016BEFC 53D9030C */  jal        func_800F654C
    /* 7A300 8016BF00 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 7A304 8016BF04 91E5030C */  jal        func_800F9644
    /* 7A308 8016BF08 20000424 */   addiu     $a0, $zero, 0x20
  .L8016BF0C:
    /* 7A30C 8016BF0C 50E4030C */  jal        func_800F9140
    /* 7A310 8016BF10 00200424 */   addiu     $a0, $zero, 0x2000
    /* 7A314 8016BF14 F7E1030C */  jal        func_800F87DC
    /* 7A318 8016BF18 40200424 */   addiu     $a0, $zero, 0x2040
    /* 7A31C 8016BF1C D9D8030C */  jal        func_800F6364
    /* 7A320 8016BF20 00000000 */   nop
    /* 7A324 8016BF24 D9D8030C */  jal        func_800F6364
    /* 7A328 8016BF28 00000000 */   nop
    /* 7A32C 8016BF2C 56D6030C */  jal        func_800F5958
    /* 7A330 8016BF30 40000424 */   addiu     $a0, $zero, 0x40
    /* 7A334 8016BF34 F5D4030C */  jal        func_800F53D4
    /* 7A338 8016BF38 00000000 */   nop
    /* 7A33C 8016BF3C F3FF4010 */  beqz       $v0, .L8016BF0C
    /* 7A340 8016BF40 00000000 */   nop
    /* 7A344 8016BF44 C7E5030C */  jal        func_800F971C
    /* 7A348 8016BF48 00000000 */   nop
    /* 7A34C 8016BF4C 98E5030C */  jal        func_800F9660
    /* 7A350 8016BF50 20000424 */   addiu     $a0, $zero, 0x20
    /* 7A354 8016BF54 1000BF8F */  lw         $ra, 0x10($sp)
    /* 7A358 8016BF58 00000000 */  nop
    /* 7A35C 8016BF5C 0800E003 */  jr         $ra
    /* 7A360 8016BF60 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8016BED4
