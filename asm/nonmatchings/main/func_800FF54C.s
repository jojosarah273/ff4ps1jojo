nonmatching func_800FF54C, 0xA0

glabel func_800FF54C
    /* D94C 800FF54C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* D950 800FF550 1000BFAF */  sw         $ra, 0x10($sp)
    /* D954 800FF554 7BFD030C */  jal        func_800FF5EC
    /* D958 800FF558 00000000 */   nop
    /* D95C 800FF55C 53D9030C */  jal        func_800F654C
    /* D960 800FF560 30000424 */   addiu     $a0, $zero, 0x30
    /* D964 800FF564 AD6D040C */  jal        func_8011B6B4
    /* D968 800FF568 00000000 */   nop
    /* D96C 800FF56C 5DD5030C */  jal        func_800F5574
    /* D970 800FF570 21200000 */   addu      $a0, $zero, $zero
    /* D974 800FF574 F5D4030C */  jal        func_800F53D4
    /* D978 800FF578 00000000 */   nop
    /* D97C 800FF57C 15004010 */  beqz       $v0, .L800FF5D4
    /* D980 800FF580 00000000 */   nop
    /* D984 800FF584 53D9030C */  jal        func_800F654C
    /* D988 800FF588 3D000424 */   addiu     $a0, $zero, 0x3D
    /* D98C 800FF58C AD6D040C */  jal        func_8011B6B4
    /* D990 800FF590 00000000 */   nop
    /* D994 800FF594 5DD5030C */  jal        func_800F5574
    /* D998 800FF598 21200000 */   addu      $a0, $zero, $zero
    /* D99C 800FF59C F5D4030C */  jal        func_800F53D4
    /* D9A0 800FF5A0 00000000 */   nop
    /* D9A4 800FF5A4 0B004014 */  bnez       $v0, .L800FF5D4
    /* D9A8 800FF5A8 00000000 */   nop
    /* D9AC 800FF5AC 53D9030C */  jal        func_800F654C
    /* D9B0 800FF5B0 01000424 */   addiu     $a0, $zero, 0x1
    /* D9B4 800FF5B4 93E0030C */  jal        func_800F824C
    /* D9B8 800FF5B8 B1000424 */   addiu     $a0, $zero, 0xB1
    /* D9BC 800FF5BC 53D9030C */  jal        func_800F654C
    /* D9C0 800FF5C0 C6000424 */   addiu     $a0, $zero, 0xC6
    /* D9C4 800FF5C4 FA58040C */  jal        func_801163E8
    /* D9C8 800FF5C8 00000000 */   nop
    /* D9CC 800FF5CC EEE3030C */  jal        func_800F8FB8
    /* D9D0 800FF5D0 B1000424 */   addiu     $a0, $zero, 0xB1
  .L800FF5D4:
    /* D9D4 800FF5D4 C1FD030C */  jal        func_800FF704
    /* D9D8 800FF5D8 00000000 */   nop
    /* D9DC 800FF5DC 1000BF8F */  lw         $ra, 0x10($sp)
    /* D9E0 800FF5E0 00000000 */  nop
    /* D9E4 800FF5E4 0800E003 */  jr         $ra
    /* D9E8 800FF5E8 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800FF54C
