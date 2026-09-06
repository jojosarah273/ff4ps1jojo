nonmatching func_80167DD4, 0x70

glabel func_80167DD4
    /* 761D4 80167DD4 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 761D8 80167DD8 1000BFAF */  sw         $ra, 0x10($sp)
    /* 761DC 80167DDC D29E050C */  jal        func_80167B48
    /* 761E0 80167DE0 00000000 */   nop
    /* 761E4 80167DE4 92D0030C */  jal        func_800F4248
    /* 761E8 80167DE8 7F000424 */   addiu     $a0, $zero, 0x7F
    /* 761EC 80167DEC 04D5030C */  jal        func_800F5410
    /* 761F0 80167DF0 00000000 */   nop
    /* 761F4 80167DF4 DAE1030C */  jal        func_800F8768
    /* 761F8 80167DF8 98F30434 */   ori       $a0, $zero, 0xF398
    /* 761FC 80167DFC D9D8030C */  jal        func_800F6364
    /* 76200 80167E00 00000000 */   nop
    /* 76204 80167E04 D29E050C */  jal        func_80167B48
    /* 76208 80167E08 00000000 */   nop
    /* 7620C 80167E0C 92D0030C */  jal        func_800F4248
    /* 76210 80167E10 3F000424 */   addiu     $a0, $zero, 0x3F
    /* 76214 80167E14 04D5030C */  jal        func_800F5410
    /* 76218 80167E18 00000000 */   nop
    /* 7621C 80167E1C 02D0030C */  jal        func_800F4008
    /* 76220 80167E20 20000424 */   addiu     $a0, $zero, 0x20
    /* 76224 80167E24 DAE1030C */  jal        func_800F8768
    /* 76228 80167E28 98F30434 */   ori       $a0, $zero, 0xF398
    /* 7622C 80167E2C D9D8030C */  jal        func_800F6364
    /* 76230 80167E30 00000000 */   nop
    /* 76234 80167E34 1000BF8F */  lw         $ra, 0x10($sp)
    /* 76238 80167E38 00000000 */  nop
    /* 7623C 80167E3C 0800E003 */  jr         $ra
    /* 76240 80167E40 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80167DD4
