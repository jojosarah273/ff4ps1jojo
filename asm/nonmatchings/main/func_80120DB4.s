nonmatching func_80120DB4, 0x78

glabel func_80120DB4
    /* 2F1B4 80120DB4 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 2F1B8 80120DB8 1000BFAF */  sw         $ra, 0x10($sp)
    /* 2F1BC 80120DBC 5690040C */  jal        func_80124158
    /* 2F1C0 80120DC0 00000000 */   nop
    /* 2F1C4 80120DC4 80E4030C */  jal        func_800F9200
    /* 2F1C8 80120DC8 00000000 */   nop
    /* 2F1CC 80120DCC CCE4030C */  jal        func_800F9330
    /* 2F1D0 80120DD0 00000000 */   nop
    /* 2F1D4 80120DD4 77DC030C */  jal        func_800F71DC
    /* 2F1D8 80120DD8 00D60434 */   ori       $a0, $zero, 0xD600
    /* 2F1DC 80120DDC 5BE3030C */  jal        func_800F8D6C
    /* 2F1E0 80120DE0 29000424 */   addiu     $a0, $zero, 0x29
    /* 2F1E4 80120DE4 77DC030C */  jal        func_800F71DC
    /* 2F1E8 80120DE8 00700424 */   addiu     $a0, $zero, 0x7000
    /* 2F1EC 80120DEC 5BE3030C */  jal        func_800F8D6C
    /* 2F1F0 80120DF0 35000424 */   addiu     $a0, $zero, 0x35
    /* 2F1F4 80120DF4 53D9030C */  jal        func_800F654C
    /* 2F1F8 80120DF8 03000424 */   addiu     $a0, $zero, 0x3
    /* 2F1FC 80120DFC 93E0030C */  jal        func_800F824C
    /* 2F200 80120E00 C3000424 */   addiu     $a0, $zero, 0xC3
    /* 2F204 80120E04 EEE3030C */  jal        func_800F8FB8
    /* 2F208 80120E08 34000424 */   addiu     $a0, $zero, 0x34
    /* 2F20C 80120E0C 68E5030C */  jal        func_800F95A0
    /* 2F210 80120E10 00000000 */   nop
    /* 2F214 80120E14 F7E4030C */  jal        func_800F93DC
    /* 2F218 80120E18 00000000 */   nop
    /* 2F21C 80120E1C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 2F220 80120E20 00000000 */  nop
    /* 2F224 80120E24 0800E003 */  jr         $ra
    /* 2F228 80120E28 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80120DB4
