nonmatching func_80160DF8, 0x90

glabel func_80160DF8
    /* 6F1F8 80160DF8 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 6F1FC 80160DFC 1000BFAF */  sw         $ra, 0x10($sp)
    /* 6F200 80160E00 53D9030C */  jal        func_800F654C
    /* 6F204 80160E04 04000424 */   addiu     $a0, $zero, 0x4
    /* 6F208 80160E08 62E0030C */  jal        func_800F8188
    /* 6F20C 80160E0C E6380424 */   addiu     $a0, $zero, 0x38E6
    /* 6F210 80160E10 9CDC030C */  jal        func_800F7270
    /* 6F214 80160E14 A6000424 */   addiu     $a0, $zero, 0xA6
    /* 6F218 80160E18 DADA030C */  jal        func_800F6B68
    /* 6F21C 80160E1C 03200424 */   addiu     $a0, $zero, 0x2003
    /* 6F220 80160E20 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 6F224 80160E24 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 6F228 80160E28 00000000 */  nop
    /* 6F22C 80160E2C 00006290 */  lbu        $v0, 0x0($v1)
    /* 6F230 80160E30 03200424 */  addiu      $a0, $zero, 0x2003
    /* 6F234 80160E34 80004234 */  ori        $v0, $v0, 0x80
    /* 6F238 80160E38 DAE1030C */  jal        func_800F8768
    /* 6F23C 80160E3C 000062A0 */   sb        $v0, 0x0($v1)
    /* 6F240 80160E40 53D9030C */  jal        func_800F654C
    /* 6F244 80160E44 05000424 */   addiu     $a0, $zero, 0x5
    /* 6F248 80160E48 62E0030C */  jal        func_800F8188
    /* 6F24C 80160E4C CA340424 */   addiu     $a0, $zero, 0x34CA
    /* 6F250 80160E50 90D8030C */  jal        func_800F6240
    /* 6F254 80160E54 0A390424 */   addiu     $a0, $zero, 0x390A
    /* 6F258 80160E58 53D9030C */  jal        func_800F654C
    /* 6F25C 80160E5C F8000424 */   addiu     $a0, $zero, 0xF8
    /* 6F260 80160E60 62E0030C */  jal        func_800F8188
    /* 6F264 80160E64 C2330424 */   addiu     $a0, $zero, 0x33C2
    /* 6F268 80160E68 53D9030C */  jal        func_800F654C
    /* 6F26C 80160E6C 03000424 */   addiu     $a0, $zero, 0x3
    /* 6F270 80160E70 62E0030C */  jal        func_800F8188
    /* 6F274 80160E74 C3330424 */   addiu     $a0, $zero, 0x33C3
    /* 6F278 80160E78 1000BF8F */  lw         $ra, 0x10($sp)
    /* 6F27C 80160E7C 00000000 */  nop
    /* 6F280 80160E80 0800E003 */  jr         $ra
    /* 6F284 80160E84 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80160DF8
