nonmatching func_80152DE4, 0x70

glabel func_80152DE4
    /* 611E4 80152DE4 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 611E8 80152DE8 1000BFAF */  sw         $ra, 0x10($sp)
    /* 611EC 80152DEC 91E5030C */  jal        func_800F9644
    /* 611F0 80152DF0 20000424 */   addiu     $a0, $zero, 0x20
    /* 611F4 80152DF4 04D5030C */  jal        func_800F5410
    /* 611F8 80152DF8 00000000 */   nop
    /* 611FC 80152DFC 63D9030C */  jal        func_800F658C
    /* 61200 80152E00 56390424 */   addiu     $a0, $zero, 0x3956
    /* 61204 80152E04 C1CE030C */  jal        func_800F3B04
    /* 61208 80152E08 58390424 */   addiu     $a0, $zero, 0x3958
    /* 6120C 80152E0C E5CF030C */  jal        func_800F3F94
    /* 61210 80152E10 21204000 */   addu      $a0, $v0, $zero
    /* 61214 80152E14 6CE0030C */  jal        func_800F81B0
    /* 61218 80152E18 5A390424 */   addiu     $a0, $zero, 0x395A
    /* 6121C 80152E1C 56D9030C */  jal        func_800F6558
    /* 61220 80152E20 21200000 */   addu      $a0, $zero, $zero
    /* 61224 80152E24 19D0030C */  jal        func_800F4064
    /* 61228 80152E28 21200000 */   addu      $a0, $zero, $zero
    /* 6122C 80152E2C 6CE0030C */  jal        func_800F81B0
    /* 61230 80152E30 5C390424 */   addiu     $a0, $zero, 0x395C
    /* 61234 80152E34 C7E5030C */  jal        func_800F971C
    /* 61238 80152E38 00000000 */   nop
    /* 6123C 80152E3C 98E5030C */  jal        func_800F9660
    /* 61240 80152E40 20000424 */   addiu     $a0, $zero, 0x20
    /* 61244 80152E44 1000BF8F */  lw         $ra, 0x10($sp)
    /* 61248 80152E48 00000000 */  nop
    /* 6124C 80152E4C 0800E003 */  jr         $ra
    /* 61250 80152E50 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80152DE4
