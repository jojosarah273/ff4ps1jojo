nonmatching func_8015E910, 0xF0

glabel func_8015E910
    /* 6CD10 8015E910 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 6CD14 8015E914 1000BFAF */  sw         $ra, 0x10($sp)
    /* 6CD18 8015E918 59D9030C */  jal        func_800F6564
    /* 6CD1C 8015E91C 03270424 */   addiu     $a0, $zero, 0x2703
    /* 6CD20 8015E920 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 6CD24 8015E924 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 6CD28 8015E928 00000000 */  nop
    /* 6CD2C 8015E92C 00006290 */  lbu        $v0, 0x0($v1)
    /* 6CD30 8015E930 03270424 */  addiu      $a0, $zero, 0x2703
    /* 6CD34 8015E934 01004234 */  ori        $v0, $v0, 0x1
    /* 6CD38 8015E938 62E0030C */  jal        func_800F8188
    /* 6CD3C 8015E93C 000062A0 */   sb        $v0, 0x0($v1)
    /* 6CD40 8015E940 53D9030C */  jal        func_800F654C
    /* 6CD44 8015E944 06000424 */   addiu     $a0, $zero, 0x6
    /* 6CD48 8015E948 93E0030C */  jal        func_800F824C
    /* 6CD4C 8015E94C D6000424 */   addiu     $a0, $zero, 0xD6
    /* 6CD50 8015E950 8CD9030C */  jal        func_800F6630
    /* 6CD54 8015E954 CF000424 */   addiu     $a0, $zero, 0xCF
    /* 6CD58 8015E958 DD68050C */  jal        func_8015A374
    /* 6CD5C 8015E95C 00000000 */   nop
    /* 6CD60 8015E960 53D9030C */  jal        func_800F654C
    /* 6CD64 8015E964 09000424 */   addiu     $a0, $zero, 0x9
    /* 6CD68 8015E968 DD4C050C */  jal        func_80153374
    /* 6CD6C 8015E96C 00000000 */   nop
    /* 6CD70 8015E970 53D9030C */  jal        func_800F654C
    /* 6CD74 8015E974 40000424 */   addiu     $a0, $zero, 0x40
    /* 6CD78 8015E978 DAE1030C */  jal        func_800F8768
    /* 6CD7C 8015E97C 062A0424 */   addiu     $a0, $zero, 0x2A06
    /* 6CD80 8015E980 8CD9030C */  jal        func_800F6630
    /* 6CD84 8015E984 CF000424 */   addiu     $a0, $zero, 0xCF
    /* 6CD88 8015E988 50D4030C */  jal        func_800F5140
    /* 6CD8C 8015E98C 00000000 */   nop
    /* 6CD90 8015E990 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 6CD94 8015E994 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 6CD98 8015E998 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 6CD9C 8015E99C 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 6CDA0 8015E9A0 00004394 */  lhu        $v1, 0x0($v0)
    /* 6CDA4 8015E9A4 EB290424 */  addiu      $a0, $zero, 0x29EB
    /* 6CDA8 8015E9A8 DADA030C */  jal        func_800F6B68
    /* 6CDAC 8015E9AC 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 6CDB0 8015E9B0 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 6CDB4 8015E9B4 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 6CDB8 8015E9B8 00000000 */  nop
    /* 6CDBC 8015E9BC 00006290 */  lbu        $v0, 0x0($v1)
    /* 6CDC0 8015E9C0 EB290424 */  addiu      $a0, $zero, 0x29EB
    /* 6CDC4 8015E9C4 10004234 */  ori        $v0, $v0, 0x10
    /* 6CDC8 8015E9C8 DAE1030C */  jal        func_800F8768
    /* 6CDCC 8015E9CC 000062A0 */   sb        $v0, 0x0($v1)
    /* 6CDD0 8015E9D0 8CD9030C */  jal        func_800F6630
    /* 6CDD4 8015E9D4 D4000424 */   addiu     $a0, $zero, 0xD4
    /* 6CDD8 8015E9D8 DAE1030C */  jal        func_800F8768
    /* 6CDDC 8015E9DC 2A2B0424 */   addiu     $a0, $zero, 0x2B2A
    /* 6CDE0 8015E9E0 8CD9030C */  jal        func_800F6630
    /* 6CDE4 8015E9E4 D5000424 */   addiu     $a0, $zero, 0xD5
    /* 6CDE8 8015E9E8 DAE1030C */  jal        func_800F8768
    /* 6CDEC 8015E9EC 2B2B0424 */   addiu     $a0, $zero, 0x2B2B
    /* 6CDF0 8015E9F0 1000BF8F */  lw         $ra, 0x10($sp)
    /* 6CDF4 8015E9F4 00000000 */  nop
    /* 6CDF8 8015E9F8 0800E003 */  jr         $ra
    /* 6CDFC 8015E9FC 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8015E910
