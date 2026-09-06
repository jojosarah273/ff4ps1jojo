nonmatching func_8016BD78, 0xA4

glabel func_8016BD78
    /* 7A178 8016BD78 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 7A17C 8016BD7C 1400BFAF */  sw         $ra, 0x14($sp)
    /* 7A180 8016BD80 CCE4030C */  jal        func_800F9330
    /* 7A184 8016BD84 1000B0AF */   sw        $s0, 0x10($sp)
    /* 7A188 8016BD88 8CD9030C */  jal        func_800F6630
    /* 7A18C 8016BD8C 18000424 */   addiu     $a0, $zero, 0x18
    /* 7A190 8016BD90 1A80023C */  lui        $v0, %hi(D_8019ED40)
    /* 7A194 8016BD94 40ED428C */  lw         $v0, %lo(D_8019ED40)($v0)
    /* 7A198 8016BD98 00000000 */  nop
    /* 7A19C 8016BD9C 00005090 */  lbu        $s0, 0x0($v0)
    /* 7A1A0 8016BDA0 8CD9030C */  jal        func_800F6630
    /* 7A1A4 8016BDA4 1A000424 */   addiu     $a0, $zero, 0x1A
    /* 7A1A8 8016BDA8 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 7A1AC 8016BDAC 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 7A1B0 8016BDB0 00000000 */  nop
    /* 7A1B4 8016BDB4 00006290 */  lbu        $v0, 0x0($v1)
    /* 7A1B8 8016BDB8 00000000 */  nop
    /* 7A1BC 8016BDBC 18005000 */  mult       $v0, $s0
    /* 7A1C0 8016BDC0 12100000 */  mflo       $v0
    /* 7A1C4 8016BDC4 0D80013C */  lui        $at, %hi(D_800D4216)
    /* 7A1C8 8016BDC8 164222A4 */  sh         $v0, %lo(D_800D4216)($at)
    /* 7A1CC 8016BDCC 9BE4030C */  jal        func_800F926C
    /* 7A1D0 8016BDD0 00000000 */   nop
    /* 7A1D4 8016BDD4 C7E5030C */  jal        func_800F971C
    /* 7A1D8 8016BDD8 00000000 */   nop
    /* 7A1DC 8016BDDC 80E4030C */  jal        func_800F9200
    /* 7A1E0 8016BDE0 00000000 */   nop
    /* 7A1E4 8016BDE4 12E5030C */  jal        func_800F9448
    /* 7A1E8 8016BDE8 00000000 */   nop
    /* 7A1EC 8016BDEC 84DC030C */  jal        func_800F7210
    /* 7A1F0 8016BDF0 16420424 */   addiu     $a0, $zero, 0x4216
    /* 7A1F4 8016BDF4 5BE3030C */  jal        func_800F8D6C
    /* 7A1F8 8016BDF8 1C000424 */   addiu     $a0, $zero, 0x1C
    /* 7A1FC 8016BDFC 12E5030C */  jal        func_800F9448
    /* 7A200 8016BE00 00000000 */   nop
    /* 7A204 8016BE04 68E5030C */  jal        func_800F95A0
    /* 7A208 8016BE08 00000000 */   nop
    /* 7A20C 8016BE0C 1400BF8F */  lw         $ra, 0x14($sp)
    /* 7A210 8016BE10 1000B08F */  lw         $s0, 0x10($sp)
    /* 7A214 8016BE14 0800E003 */  jr         $ra
    /* 7A218 8016BE18 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8016BD78
