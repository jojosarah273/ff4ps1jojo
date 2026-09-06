nonmatching func_800FD718, 0xEC

glabel func_800FD718
    /* BB18 800FD718 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* BB1C 800FD71C 1000BFAF */  sw         $ra, 0x10($sp)
    /* BB20 800FD720 59D9030C */  jal        func_800F6564
    /* BB24 800FD724 04170424 */   addiu     $a0, $zero, 0x1704
    /* BB28 800FD728 0DD9030C */  jal        func_800F6434
    /* BB2C 800FD72C 02000424 */   addiu     $a0, $zero, 0x2
    /* BB30 800FD730 13004014 */  bnez       $v0, .L800FD780
    /* BB34 800FD734 00000000 */   nop
    /* BB38 800FD738 59D9030C */  jal        func_800F6564
    /* BB3C 800FD73C 04170424 */   addiu     $a0, $zero, 0x1704
    /* BB40 800FD740 A4E5030C */  jal        func_800F9690
    /* BB44 800FD744 00000000 */   nop
    /* BB48 800FD748 1A80023C */  lui        $v0, %hi(D_80198A8C)
    /* BB4C 800FD74C 5800848F */  lw         $a0, %gp_rel(D_8019ED54)($gp)
    /* BB50 800FD750 8C8A4224 */  addiu      $v0, $v0, %lo(D_80198A8C)
    /* BB54 800FD754 00008394 */  lhu        $v1, 0x0($a0)
    /* BB58 800FD758 4400858F */  lw         $a1, %gp_rel(D_8019ED40)($gp)
    /* BB5C 800FD75C 21186200 */  addu       $v1, $v1, $v0
    /* BB60 800FD760 00006290 */  lbu        $v0, 0x0($v1)
    /* BB64 800FD764 011E0424 */  addiu      $a0, $zero, 0x1E01
    /* BB68 800FD768 62E0030C */  jal        func_800F8188
    /* BB6C 800FD76C 0000A2A0 */   sb        $v0, 0x0($a1)
    /* BB70 800FD770 53D9030C */  jal        func_800F654C
    /* BB74 800FD774 03000424 */   addiu     $a0, $zero, 0x3
    /* BB78 800FD778 F9F50308 */  j          .L800FD7E4
    /* BB7C 800FD77C 00000000 */   nop
  .L800FD780:
    /* BB80 800FD780 59D9030C */  jal        func_800F6564
    /* BB84 800FD784 00170424 */   addiu     $a0, $zero, 0x1700
    /* BB88 800FD788 5DD5030C */  jal        func_800F5574
    /* BB8C 800FD78C 03000424 */   addiu     $a0, $zero, 0x3
    /* BB90 800FD790 F5D4030C */  jal        func_800F53D4
    /* BB94 800FD794 00000000 */   nop
    /* BB98 800FD798 0C004014 */  bnez       $v0, .L800FD7CC
    /* BB9C 800FD79C 00000000 */   nop
    /* BBA0 800FD7A0 A4E5030C */  jal        func_800F9690
    /* BBA4 800FD7A4 00000000 */   nop
    /* BBA8 800FD7A8 1A80023C */  lui        $v0, %hi(D_80198A88)
    /* BBAC 800FD7AC 5800848F */  lw         $a0, %gp_rel(D_8019ED54)($gp)
    /* BBB0 800FD7B0 888A4224 */  addiu      $v0, $v0, %lo(D_80198A88)
    /* BBB4 800FD7B4 00008394 */  lhu        $v1, 0x0($a0)
    /* BBB8 800FD7B8 4400848F */  lw         $a0, %gp_rel(D_8019ED40)($gp)
    /* BBBC 800FD7BC 21186200 */  addu       $v1, $v1, $v0
    /* BBC0 800FD7C0 00006290 */  lbu        $v0, 0x0($v1)
    /* BBC4 800FD7C4 F5F50308 */  j          .L800FD7D4
    /* BBC8 800FD7C8 000082A0 */   sb        $v0, 0x0($a0)
  .L800FD7CC:
    /* BBCC 800FD7CC 59D9030C */  jal        func_800F6564
    /* BBD0 800FD7D0 E20F0424 */   addiu     $a0, $zero, 0xFE2
  .L800FD7D4:
    /* BBD4 800FD7D4 62E0030C */  jal        func_800F8188
    /* BBD8 800FD7D8 011E0424 */   addiu     $a0, $zero, 0x1E01
    /* BBDC 800FD7DC 53D9030C */  jal        func_800F654C
    /* BBE0 800FD7E0 01000424 */   addiu     $a0, $zero, 0x1
  .L800FD7E4:
    /* BBE4 800FD7E4 62E0030C */  jal        func_800F8188
    /* BBE8 800FD7E8 001E0424 */   addiu     $a0, $zero, 0x1E00
    /* BBEC 800FD7EC 4AA4050C */  jal        func_80169128
    /* BBF0 800FD7F0 00000000 */   nop
    /* BBF4 800FD7F4 1000BF8F */  lw         $ra, 0x10($sp)
    /* BBF8 800FD7F8 00000000 */  nop
    /* BBFC 800FD7FC 0800E003 */  jr         $ra
    /* BC00 800FD800 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800FD718
