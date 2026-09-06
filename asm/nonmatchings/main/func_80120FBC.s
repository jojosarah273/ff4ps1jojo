nonmatching func_80120FBC, 0x70

glabel func_80120FBC
    /* 2F3BC 80120FBC E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 2F3C0 80120FC0 1000BFAF */  sw         $ra, 0x10($sp)
    /* 2F3C4 80120FC4 80E4030C */  jal        func_800F9200
    /* 2F3C8 80120FC8 00000000 */   nop
    /* 2F3CC 80120FCC CCE4030C */  jal        func_800F9330
    /* 2F3D0 80120FD0 00000000 */   nop
    /* 2F3D4 80120FD4 77DC030C */  jal        func_800F71DC
    /* 2F3D8 80120FD8 00B60434 */   ori       $a0, $zero, 0xB600
    /* 2F3DC 80120FDC 5BE3030C */  jal        func_800F8D6C
    /* 2F3E0 80120FE0 29000424 */   addiu     $a0, $zero, 0x29
    /* 2F3E4 80120FE4 77DC030C */  jal        func_800F71DC
    /* 2F3E8 80120FE8 00600424 */   addiu     $a0, $zero, 0x6000
    /* 2F3EC 80120FEC 5BE3030C */  jal        func_800F8D6C
    /* 2F3F0 80120FF0 35000424 */   addiu     $a0, $zero, 0x35
    /* 2F3F4 80120FF4 53D9030C */  jal        func_800F654C
    /* 2F3F8 80120FF8 01000424 */   addiu     $a0, $zero, 0x1
    /* 2F3FC 80120FFC 93E0030C */  jal        func_800F824C
    /* 2F400 80121000 C3000424 */   addiu     $a0, $zero, 0xC3
    /* 2F404 80121004 EEE3030C */  jal        func_800F8FB8
    /* 2F408 80121008 34000424 */   addiu     $a0, $zero, 0x34
    /* 2F40C 8012100C 68E5030C */  jal        func_800F95A0
    /* 2F410 80121010 00000000 */   nop
    /* 2F414 80121014 F7E4030C */  jal        func_800F93DC
    /* 2F418 80121018 00000000 */   nop
    /* 2F41C 8012101C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 2F420 80121020 00000000 */  nop
    /* 2F424 80121024 0800E003 */  jr         $ra
    /* 2F428 80121028 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80120FBC
