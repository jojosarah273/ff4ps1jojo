nonmatching func_8015F1D0, 0xE0

glabel func_8015F1D0
    /* 6D5D0 8015F1D0 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 6D5D4 8015F1D4 1000BFAF */  sw         $ra, 0x10($sp)
    /* 6D5D8 8015F1D8 59D9030C */  jal        func_800F6564
    /* 6D5DC 8015F1DC 05270424 */   addiu     $a0, $zero, 0x2705
    /* 6D5E0 8015F1E0 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 6D5E4 8015F1E4 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 6D5E8 8015F1E8 00000000 */  nop
    /* 6D5EC 8015F1EC 00006290 */  lbu        $v0, 0x0($v1)
    /* 6D5F0 8015F1F0 05270424 */  addiu      $a0, $zero, 0x2705
    /* 6D5F4 8015F1F4 01004234 */  ori        $v0, $v0, 0x1
    /* 6D5F8 8015F1F8 62E0030C */  jal        func_800F8188
    /* 6D5FC 8015F1FC 000062A0 */   sb        $v0, 0x0($v1)
    /* 6D600 8015F200 8CD9030C */  jal        func_800F6630
    /* 6D604 8015F204 CF000424 */   addiu     $a0, $zero, 0xCF
    /* 6D608 8015F208 374B050C */  jal        func_80152CDC
    /* 6D60C 8015F20C 00000000 */   nop
    /* 6D610 8015F210 53D9030C */  jal        func_800F654C
    /* 6D614 8015F214 12000424 */   addiu     $a0, $zero, 0x12
    /* 6D618 8015F218 434C050C */  jal        func_8015310C
    /* 6D61C 8015F21C 00000000 */   nop
    /* 6D620 8015F220 84DC030C */  jal        func_800F7210
    /* 6D624 8015F224 98350424 */   addiu     $a0, $zero, 0x3598
    /* 6D628 8015F228 59D9030C */  jal        func_800F6564
    /* 6D62C 8015F22C 9D280424 */   addiu     $a0, $zero, 0x289D
    /* 6D630 8015F230 DAE1030C */  jal        func_800F8768
    /* 6D634 8015F234 042A0424 */   addiu     $a0, $zero, 0x2A04
    /* 6D638 8015F238 3BE4030C */  jal        func_800F90EC
    /* 6D63C 8015F23C 052A0424 */   addiu     $a0, $zero, 0x2A05
    /* 6D640 8015F240 53D9030C */  jal        func_800F654C
    /* 6D644 8015F244 40000424 */   addiu     $a0, $zero, 0x40
    /* 6D648 8015F248 DAE1030C */  jal        func_800F8768
    /* 6D64C 8015F24C 062A0424 */   addiu     $a0, $zero, 0x2A06
    /* 6D650 8015F250 8CD9030C */  jal        func_800F6630
    /* 6D654 8015F254 CF000424 */   addiu     $a0, $zero, 0xCF
    /* 6D658 8015F258 50D4030C */  jal        func_800F5140
    /* 6D65C 8015F25C 00000000 */   nop
    /* 6D660 8015F260 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 6D664 8015F264 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 6D668 8015F268 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 6D66C 8015F26C 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 6D670 8015F270 00004394 */  lhu        $v1, 0x0($v0)
    /* 6D674 8015F274 EB290424 */  addiu      $a0, $zero, 0x29EB
    /* 6D678 8015F278 DADA030C */  jal        func_800F6B68
    /* 6D67C 8015F27C 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 6D680 8015F280 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 6D684 8015F284 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 6D688 8015F288 00000000 */  nop
    /* 6D68C 8015F28C 00006290 */  lbu        $v0, 0x0($v1)
    /* 6D690 8015F290 EB290424 */  addiu      $a0, $zero, 0x29EB
    /* 6D694 8015F294 02004234 */  ori        $v0, $v0, 0x2
    /* 6D698 8015F298 DAE1030C */  jal        func_800F8768
    /* 6D69C 8015F29C 000062A0 */   sb        $v0, 0x0($v1)
    /* 6D6A0 8015F2A0 1000BF8F */  lw         $ra, 0x10($sp)
    /* 6D6A4 8015F2A4 00000000 */  nop
    /* 6D6A8 8015F2A8 0800E003 */  jr         $ra
    /* 6D6AC 8015F2AC 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8015F1D0
