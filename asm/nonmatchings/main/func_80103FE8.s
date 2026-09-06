nonmatching func_80103FE8, 0xA4

glabel func_80103FE8
    /* 123E8 80103FE8 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 123EC 80103FEC 1000BFAF */  sw         $ra, 0x10($sp)
    /* 123F0 80103FF0 77DC030C */  jal        func_800F71DC
    /* 123F4 80103FF4 00400424 */   addiu     $a0, $zero, 0x4000
    /* 123F8 80103FF8 5BE3030C */  jal        func_800F8D6C
    /* 123FC 80103FFC 47000424 */   addiu     $a0, $zero, 0x47
    /* 12400 80104000 77DC030C */  jal        func_800F71DC
    /* 12404 80104004 00010424 */   addiu     $a0, $zero, 0x100
    /* 12408 80104008 5BE3030C */  jal        func_800F8D6C
    /* 1240C 8010400C 45000424 */   addiu     $a0, $zero, 0x45
    /* 12410 80104010 53D9030C */  jal        func_800F654C
    /* 12414 80104014 1E000424 */   addiu     $a0, $zero, 0x1E
    /* 12418 80104018 93E0030C */  jal        func_800F824C
    /* 1241C 8010401C 3C000424 */   addiu     $a0, $zero, 0x3C
    /* 12420 80104020 77DC030C */  jal        func_800F71DC
    /* 12424 80104024 E0FE0434 */   ori       $a0, $zero, 0xFEE0
    /* 12428 80104028 5BE3030C */  jal        func_800F8D6C
    /* 1242C 8010402C 3D000424 */   addiu     $a0, $zero, 0x3D
    /* 12430 80104030 ACD9050C */  jal        func_801766B0
    /* 12434 80104034 00000000 */   nop
    /* 12438 80104038 77DC030C */  jal        func_800F71DC
    /* 1243C 8010403C 21200000 */   addu      $a0, $zero, $zero
    /* 12440 80104040 1E00043C */  lui        $a0, (0x1EFFE0 >> 16)
  .L80104044:
    /* 12444 80104044 1ADB030C */  jal        func_800F6C68
    /* 12448 80104048 E0FF8434 */   ori       $a0, $a0, (0x1EFFE0 & 0xFFFF)
    /* 1244C 8010404C DAE1030C */  jal        func_800F8768
    /* 12450 80104050 DB0C0424 */   addiu     $a0, $zero, 0xCDB
    /* 12454 80104054 DAE1030C */  jal        func_800F8768
    /* 12458 80104058 DB0D0424 */   addiu     $a0, $zero, 0xDDB
    /* 1245C 8010405C D9D8030C */  jal        func_800F6364
    /* 12460 80104060 00000000 */   nop
    /* 12464 80104064 56D6030C */  jal        func_800F5958
    /* 12468 80104068 20000424 */   addiu     $a0, $zero, 0x20
    /* 1246C 8010406C F5D4030C */  jal        func_800F53D4
    /* 12470 80104070 00000000 */   nop
    /* 12474 80104074 F3FF4010 */  beqz       $v0, .L80104044
    /* 12478 80104078 1E00043C */   lui       $a0, (0x1EFFE0 >> 16)
    /* 1247C 8010407C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 12480 80104080 00000000 */  nop
    /* 12484 80104084 0800E003 */  jr         $ra
    /* 12488 80104088 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80103FE8
