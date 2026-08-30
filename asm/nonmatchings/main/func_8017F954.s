nonmatching func_8017F954, 0x54

glabel func_8017F954
    /* 8DD54 8017F954 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 8DD58 8017F958 FFFFA530 */  andi       $a1, $a1, 0xFFFF
    /* 8DD5C 8017F95C FFFFC630 */  andi       $a2, $a2, 0xFFFF
    /* 8DD60 8017F960 003C0700 */  sll        $a3, $a3, 16
    /* 8DD64 8017F964 1000BFAF */  sw         $ra, 0x10($sp)
    /* 8DD68 8017F968 0D80023C */  lui        $v0, %hi(D_800D2105)
    /* 8DD6C 8017F96C 05214290 */  lbu        $v0, %lo(D_800D2105)($v0)
    /* 8DD70 8017F970 07000324 */  addiu      $v1, $zero, 0x7
    /* 8DD74 8017F974 07004230 */  andi       $v0, $v0, 0x7
    /* 8DD78 8017F978 05004310 */  beq        $v0, $v1, .L8017F990
    /* 8DD7C 8017F97C 033C0700 */   sra       $a3, $a3, 16
    /* 8DD80 8017F980 0807060C */  jal        func_80181C20
    /* 8DD84 8017F984 00000000 */   nop
    /* 8DD88 8017F988 66FE0508 */  j          .L8017F998
    /* 8DD8C 8017F98C 00000000 */   nop
  .L8017F990:
    /* 8DD90 8017F990 FAFF050C */  jal        func_8017FFE8
    /* 8DD94 8017F994 00000000 */   nop
  .L8017F998:
    /* 8DD98 8017F998 1000BF8F */  lw         $ra, 0x10($sp)
    /* 8DD9C 8017F99C 00000000 */  nop
    /* 8DDA0 8017F9A0 0800E003 */  jr         $ra
    /* 8DDA4 8017F9A4 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8017F954
