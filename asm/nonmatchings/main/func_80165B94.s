nonmatching func_80165B94, 0xE8

glabel func_80165B94
    /* 73F94 80165B94 D8FFBD27 */  addiu      $sp, $sp, -0x28
    /* 73F98 80165B98 00800434 */  ori        $a0, $zero, 0x8000
    /* 73F9C 80165B9C 2400BFAF */  sw         $ra, 0x24($sp)
    /* 73FA0 80165BA0 2000B4AF */  sw         $s4, 0x20($sp)
    /* 73FA4 80165BA4 1C00B3AF */  sw         $s3, 0x1C($sp)
    /* 73FA8 80165BA8 1800B2AF */  sw         $s2, 0x18($sp)
    /* 73FAC 80165BAC 1400B1AF */  sw         $s1, 0x14($sp)
    /* 73FB0 80165BB0 C1CE030C */  jal        func_800F3B04
    /* 73FB4 80165BB4 1000B0AF */   sw        $s0, 0x10($sp)
    /* 73FB8 80165BB8 21200000 */  addu       $a0, $zero, $zero
    /* 73FBC 80165BBC 0FCF030C */  jal        func_800F3C3C
    /* 73FC0 80165BC0 21904000 */   addu      $s2, $v0, $zero
    /* 73FC4 80165BC4 21884000 */  addu       $s1, $v0, $zero
    /* 73FC8 80165BC8 21800000 */  addu       $s0, $zero, $zero
    /* 73FCC 80165BCC 08000424 */  addiu      $a0, $zero, 0x8
  .L80165BD0:
    /* 73FD0 80165BD0 21101202 */  addu       $v0, $s0, $s2
    /* 73FD4 80165BD4 01000326 */  addiu      $v1, $s0, 0x1
    /* 73FD8 80165BD8 FFFF7030 */  andi       $s0, $v1, 0xFFFF
    /* 73FDC 80165BDC FCFF0416 */  bne        $s0, $a0, .L80165BD0
    /* 73FE0 80165BE0 AD7440A0 */   sb        $zero, 0x74AD($v0)
    /* 73FE4 80165BE4 21800000 */  addu       $s0, $zero, $zero
    /* 73FE8 80165BE8 1A80023C */  lui        $v0, %hi(D_8019A0EC)
    /* 73FEC 80165BEC ECA05324 */  addiu      $s3, $v0, %lo(D_8019A0EC)
    /* 73FF0 80165BF0 07001424 */  addiu      $s4, $zero, 0x7
  .L80165BF4:
    /* 73FF4 80165BF4 80201000 */  sll        $a0, $s0, 2
    /* 73FF8 80165BF8 FFFF8430 */  andi       $a0, $a0, 0xFFFF
    /* 73FFC 80165BFC 21109300 */  addu       $v0, $a0, $s3
    /* 74000 80165C00 00004390 */  lbu        $v1, 0x0($v0)
    /* 74004 80165C04 01008224 */  addiu      $v0, $a0, 0x1
    /* 74008 80165C08 21105300 */  addu       $v0, $v0, $s3
    /* 7400C 80165C0C 02008424 */  addiu      $a0, $a0, 0x2
    /* 74010 80165C10 040023A2 */  sb         $v1, 0x4($s1)
    /* 74014 80165C14 00004390 */  lbu        $v1, 0x0($v0)
    /* 74018 80165C18 21209300 */  addu       $a0, $a0, $s3
    /* 7401C 80165C1C 050023A2 */  sb         $v1, 0x5($s1)
    /* 74020 80165C20 00008290 */  lbu        $v0, 0x0($a0)
    /* 74024 80165C24 1F97050C */  jal        func_80165C7C
    /* 74028 80165C28 060022A2 */   sb        $v0, 0x6($s1)
    /* 7402C 80165C2C 21201202 */  addu       $a0, $s0, $s2
    /* 74030 80165C30 01000326 */  addiu      $v1, $s0, 0x1
    /* 74034 80165C34 08002292 */  lbu        $v0, 0x8($s1)
    /* 74038 80165C38 FFFF7030 */  andi       $s0, $v1, 0xFFFF
    /* 7403C 80165C3C 80004224 */  addiu      $v0, $v0, 0x80
    /* 74040 80165C40 ECFF1416 */  bne        $s0, $s4, .L80165BF4
    /* 74044 80165C44 AD7482A0 */   sb        $v0, 0x74AD($a0)
    /* 74048 80165C48 04D5030C */  jal        func_800F5410
    /* 7404C 80165C4C 00000000 */   nop
    /* 74050 80165C50 00002292 */  lbu        $v0, 0x0($s1)
    /* 74054 80165C54 2400BF8F */  lw         $ra, 0x24($sp)
    /* 74058 80165C58 2000B48F */  lw         $s4, 0x20($sp)
    /* 7405C 80165C5C 1C00B38F */  lw         $s3, 0x1C($sp)
    /* 74060 80165C60 1400B18F */  lw         $s1, 0x14($sp)
    /* 74064 80165C64 1000B08F */  lw         $s0, 0x10($sp)
    /* 74068 80165C68 80004224 */  addiu      $v0, $v0, 0x80
    /* 7406C 80165C6C B47442A2 */  sb         $v0, 0x74B4($s2)
    /* 74070 80165C70 1800B28F */  lw         $s2, 0x18($sp)
    /* 74074 80165C74 0800E003 */  jr         $ra
    /* 74078 80165C78 2800BD27 */   addiu     $sp, $sp, 0x28
endlabel func_80165B94
