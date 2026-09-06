nonmatching func_80162A70, 0x160

glabel func_80162A70
    /* 70E70 80162A70 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 70E74 80162A74 1000BFAF */  sw         $ra, 0x10($sp)
    /* 70E78 80162A78 8CD9030C */  jal        func_800F6630
    /* 70E7C 80162A7C CD000424 */   addiu     $a0, $zero, 0xCD
    /* 70E80 80162A80 0DD9030C */  jal        func_800F6434
    /* 70E84 80162A84 80000424 */   addiu     $a0, $zero, 0x80
    /* 70E88 80162A88 13004014 */  bnez       $v0, .L80162AD8
    /* 70E8C 80162A8C 00000000 */   nop
    /* 70E90 80162A90 8CD9030C */  jal        func_800F6630
    /* 70E94 80162A94 CE000424 */   addiu     $a0, $zero, 0xCE
    /* 70E98 80162A98 0DD9030C */  jal        func_800F6434
    /* 70E9C 80162A9C 80000424 */   addiu     $a0, $zero, 0x80
    /* 70EA0 80162AA0 0D004014 */  bnez       $v0, .L80162AD8
    /* 70EA4 80162AA4 00000000 */   nop
    /* 70EA8 80162AA8 53D9030C */  jal        func_800F654C
    /* 70EAC 80162AAC D3000424 */   addiu     $a0, $zero, 0xD3
    /* 70EB0 80162AB0 62E0030C */  jal        func_800F8188
    /* 70EB4 80162AB4 C4330424 */   addiu     $a0, $zero, 0x33C4
    /* 70EB8 80162AB8 53D9030C */  jal        func_800F654C
    /* 70EBC 80162ABC 21200000 */   addu      $a0, $zero, $zero
    /* 70EC0 80162AC0 62E0030C */  jal        func_800F8188
    /* 70EC4 80162AC4 CA340424 */   addiu     $a0, $zero, 0x34CA
    /* 70EC8 80162AC8 A74C050C */  jal        func_8015329C
    /* 70ECC 80162ACC 00000000 */   nop
    /* 70ED0 80162AD0 F08A0508 */  j          .L80162BC0
    /* 70ED4 80162AD4 00000000 */   nop
  .L80162AD8:
    /* 70ED8 80162AD8 90D8030C */  jal        func_800F6240
    /* 70EDC 80162ADC 0A390424 */   addiu     $a0, $zero, 0x390A
    /* 70EE0 80162AE0 77DC030C */  jal        func_800F71DC
    /* 70EE4 80162AE4 04000424 */   addiu     $a0, $zero, 0x4
    /* 70EE8 80162AE8 5BE3030C */  jal        func_800F8D6C
    /* 70EEC 80162AEC D4000424 */   addiu     $a0, $zero, 0xD4
    /* 70EF0 80162AF0 53D9030C */  jal        func_800F654C
    /* 70EF4 80162AF4 03000424 */   addiu     $a0, $zero, 0x3
    /* 70EF8 80162AF8 DD4C050C */  jal        func_80153374
    /* 70EFC 80162AFC 00000000 */   nop
    /* 70F00 80162B00 53D9030C */  jal        func_800F654C
    /* 70F04 80162B04 08000424 */   addiu     $a0, $zero, 0x8
    /* 70F08 80162B08 DAE1030C */  jal        func_800F8768
    /* 70F0C 80162B0C 062A0424 */   addiu     $a0, $zero, 0x2A06
    /* 70F10 80162B10 9CDC030C */  jal        func_800F7270
    /* 70F14 80162B14 A6000424 */   addiu     $a0, $zero, 0xA6
    /* 70F18 80162B18 DADA030C */  jal        func_800F6B68
    /* 70F1C 80162B1C 05200424 */   addiu     $a0, $zero, 0x2005
    /* 70F20 80162B20 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 70F24 80162B24 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 70F28 80162B28 00000000 */  nop
    /* 70F2C 80162B2C 00006290 */  lbu        $v0, 0x0($v1)
    /* 70F30 80162B30 05200424 */  addiu      $a0, $zero, 0x2005
    /* 70F34 80162B34 02004234 */  ori        $v0, $v0, 0x2
    /* 70F38 80162B38 DAE1030C */  jal        func_800F8768
    /* 70F3C 80162B3C 000062A0 */   sb        $v0, 0x0($v1)
    /* 70F40 80162B40 8CD9030C */  jal        func_800F6630
    /* 70F44 80162B44 CD000424 */   addiu     $a0, $zero, 0xCD
    /* 70F48 80162B48 0DD9030C */  jal        func_800F6434
    /* 70F4C 80162B4C 80800434 */   ori       $a0, $zero, 0x8080
    /* 70F50 80162B50 05004014 */  bnez       $v0, .L80162B68
    /* 70F54 80162B54 00000000 */   nop
    /* 70F58 80162B58 53D9030C */  jal        func_800F654C
    /* 70F5C 80162B5C DE000424 */   addiu     $a0, $zero, 0xDE
    /* 70F60 80162B60 DC8A0508 */  j          .L80162B70
    /* 70F64 80162B64 00000000 */   nop
  .L80162B68:
    /* 70F68 80162B68 53D9030C */  jal        func_800F654C
    /* 70F6C 80162B6C 1E000424 */   addiu     $a0, $zero, 0x1E
  .L80162B70:
    /* 70F70 80162B70 DAE1030C */  jal        func_800F8768
    /* 70F74 80162B74 51200424 */   addiu     $a0, $zero, 0x2051
    /* 70F78 80162B78 8CD9030C */  jal        func_800F6630
    /* 70F7C 80162B7C CD000424 */   addiu     $a0, $zero, 0xCD
    /* 70F80 80162B80 50D4030C */  jal        func_800F5140
    /* 70F84 80162B84 00000000 */   nop
    /* 70F88 80162B88 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 70F8C 80162B8C 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 70F90 80162B90 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 70F94 80162B94 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 70F98 80162B98 00004394 */  lhu        $v1, 0x0($v0)
    /* 70F9C 80162B9C EA290424 */  addiu      $a0, $zero, 0x29EA
    /* 70FA0 80162BA0 DADA030C */  jal        func_800F6B68
    /* 70FA4 80162BA4 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 70FA8 80162BA8 62E0030C */  jal        func_800F8188
    /* 70FAC 80162BAC 7F350424 */   addiu     $a0, $zero, 0x357F
    /* 70FB0 80162BB0 53D9030C */  jal        func_800F654C
    /* 70FB4 80162BB4 40000424 */   addiu     $a0, $zero, 0x40
    /* 70FB8 80162BB8 DAE1030C */  jal        func_800F8768
    /* 70FBC 80162BBC EA290424 */   addiu     $a0, $zero, 0x29EA
  .L80162BC0:
    /* 70FC0 80162BC0 1000BF8F */  lw         $ra, 0x10($sp)
    /* 70FC4 80162BC4 00000000 */  nop
    /* 70FC8 80162BC8 0800E003 */  jr         $ra
    /* 70FCC 80162BCC 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80162A70
