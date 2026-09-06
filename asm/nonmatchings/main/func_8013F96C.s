nonmatching func_8013F96C, 0x9C

glabel func_8013F96C
    /* 4DD6C 8013F96C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 4DD70 8013F970 1000BFAF */  sw         $ra, 0x10($sp)
    /* 4DD74 8013F974 C7E5030C */  jal        func_800F971C
    /* 4DD78 8013F978 00000000 */   nop
    /* 4DD7C 8013F97C 1A80033C */  lui        $v1, %hi(D_8019ED44)
    /* 4DD80 8013F980 44ED638C */  lw         $v1, %lo(D_8019ED44)($v1)
    /* 4DD84 8013F984 1A80043C */  lui        $a0, %hi(D_8019ED54)
    /* 4DD88 8013F988 54ED848C */  lw         $a0, %lo(D_8019ED54)($a0)
    /* 4DD8C 8013F98C 00006294 */  lhu        $v0, 0x0($v1)
    /* 4DD90 8013F990 00000000 */  nop
    /* 4DD94 8013F994 000082A4 */  sh         $v0, 0x0($a0)
    /* 4DD98 8013F998 1A80033C */  lui        $v1, %hi(D_8019ED44)
    /* 4DD9C 8013F99C 44ED638C */  lw         $v1, %lo(D_8019ED44)($v1)
    /* 4DDA0 8013F9A0 1A80043C */  lui        $a0, %hi(D_8019ED58)
    /* 4DDA4 8013F9A4 58ED848C */  lw         $a0, %lo(D_8019ED58)($a0)
    /* 4DDA8 8013F9A8 00006294 */  lhu        $v0, 0x0($v1)
    /* 4DDAC 8013F9AC 00000000 */  nop
    /* 4DDB0 8013F9B0 000082A4 */  sh         $v0, 0x0($a0)
    /* 4DDB4 8013F9B4 1600043C */  lui        $a0, (0x16FEA8 >> 16)
  .L8013F9B8:
    /* 4DDB8 8013F9B8 1ADB030C */  jal        func_800F6C68
    /* 4DDBC 8013F9BC A8FE8434 */   ori       $a0, $a0, (0x16FEA8 & 0xFFFF)
    /* 4DDC0 8013F9C0 58E2030C */  jal        func_800F8960
    /* 4DDC4 8013F9C4 42DC0434 */   ori       $a0, $zero, 0xDC42
    /* 4DDC8 8013F9C8 D9D8030C */  jal        func_800F6364
    /* 4DDCC 8013F9CC 00000000 */   nop
    /* 4DDD0 8013F9D0 EFD8030C */  jal        func_800F63BC
    /* 4DDD4 8013F9D4 00000000 */   nop
    /* 4DDD8 8013F9D8 EFD8030C */  jal        func_800F63BC
    /* 4DDDC 8013F9DC 00000000 */   nop
    /* 4DDE0 8013F9E0 56D6030C */  jal        func_800F5958
    /* 4DDE4 8013F9E4 05000424 */   addiu     $a0, $zero, 0x5
    /* 4DDE8 8013F9E8 F5D4030C */  jal        func_800F53D4
    /* 4DDEC 8013F9EC 00000000 */   nop
    /* 4DDF0 8013F9F0 F1FF4010 */  beqz       $v0, .L8013F9B8
    /* 4DDF4 8013F9F4 1600043C */   lui       $a0, (0x16FEA8 >> 16)
    /* 4DDF8 8013F9F8 1000BF8F */  lw         $ra, 0x10($sp)
    /* 4DDFC 8013F9FC 00000000 */  nop
    /* 4DE00 8013FA00 0800E003 */  jr         $ra
    /* 4DE04 8013FA04 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8013F96C
