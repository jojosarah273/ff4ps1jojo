nonmatching func_80197C5C, 0x68

glabel func_80197C5C
    /* A605C 80197C5C 1A80023C */  lui        $v0, %hi(D_8019DCB8)
    /* A6060 80197C60 B8DC428C */  lw         $v0, %lo(D_8019DCB8)($v0)
    /* A6064 80197C64 F0FFBD27 */  addiu      $sp, $sp, -0x10
    /* A6068 80197C68 0A0040A4 */  sh         $zero, 0xA($v0)
    /* A606C 80197C6C 0A000224 */  addiu      $v0, $zero, 0xA
    /* A6070 80197C70 0000A2AF */  sw         $v0, 0x0($sp)
    /* A6074 80197C74 0000A28F */  lw         $v0, 0x0($sp)
    /* A6078 80197C78 00000000 */  nop
    /* A607C 80197C7C FFFF4224 */  addiu      $v0, $v0, -0x1
    /* A6080 80197C80 0000A2AF */  sw         $v0, 0x0($sp)
    /* A6084 80197C84 0000A38F */  lw         $v1, 0x0($sp)
    /* A6088 80197C88 FFFF0224 */  addiu      $v0, $zero, -0x1
    /* A608C 80197C8C 0A006210 */  beq        $v1, $v0, .L80197CB8
    /* A6090 80197C90 21100000 */   addu      $v0, $zero, $zero
    /* A6094 80197C94 FFFF0324 */  addiu      $v1, $zero, -0x1
  .L80197C98:
    /* A6098 80197C98 0000A28F */  lw         $v0, 0x0($sp)
    /* A609C 80197C9C 00000000 */  nop
    /* A60A0 80197CA0 FFFF4224 */  addiu      $v0, $v0, -0x1
    /* A60A4 80197CA4 0000A2AF */  sw         $v0, 0x0($sp)
    /* A60A8 80197CA8 0000A28F */  lw         $v0, 0x0($sp)
    /* A60AC 80197CAC 00000000 */  nop
    /* A60B0 80197CB0 F9FF4314 */  bne        $v0, $v1, .L80197C98
    /* A60B4 80197CB4 21100000 */   addu      $v0, $zero, $zero
  .L80197CB8:
    /* A60B8 80197CB8 1000BD27 */  addiu      $sp, $sp, 0x10
    /* A60BC 80197CBC 0800E003 */  jr         $ra
    /* A60C0 80197CC0 00000000 */   nop
endlabel func_80197C5C
