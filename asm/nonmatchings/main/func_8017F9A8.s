nonmatching func_8017F9A8, 0x54

glabel func_8017F9A8
    /* 8DDA8 8017F9A8 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 8DDAC 8017F9AC 801F023C */  lui        $v0, (0x1F80037C >> 16)
    /* 8DDB0 8017F9B0 7C034234 */  ori        $v0, $v0, (0x1F80037C & 0xFFFF)
    /* 8DDB4 8017F9B4 FFFFA530 */  andi       $a1, $a1, 0xFFFF
    /* 8DDB8 8017F9B8 FFFFC630 */  andi       $a2, $a2, 0xFFFF
    /* 8DDBC 8017F9BC 003C0700 */  sll        $a3, $a3, 16
    /* 8DDC0 8017F9C0 033C0700 */  sra        $a3, $a3, 16
    /* 8DDC4 8017F9C4 1000BFAF */  sw         $ra, 0x10($sp)
    /* 8DDC8 8017F9C8 21404000 */  addu       $t0, $v0, $zero
    /* 8DDCC 8017F9CC 00001DAD */  sw         $sp, 0x0($t0)
    /* 8DDD0 8017F9D0 FCFF0825 */  addiu      $t0, $t0, -0x4
    /* 8DDD4 8017F9D4 21E80001 */  addu       $sp, $t0, $zero
    /* 8DDD8 8017F9D8 55FE050C */  jal        func_8017F954
    /* 8DDDC 8017F9DC 00000000 */   nop
    /* 8DDE0 8017F9E0 0400BD27 */  addiu      $sp, $sp, 0x4
    /* 8DDE4 8017F9E4 0000BD8F */  lw         $sp, 0x0($sp)
    /* 8DDE8 8017F9E8 00000000 */  nop
    /* 8DDEC 8017F9EC 1000BF8F */  lw         $ra, 0x10($sp)
    /* 8DDF0 8017F9F0 00000000 */  nop
    /* 8DDF4 8017F9F4 0800E003 */  jr         $ra
    /* 8DDF8 8017F9F8 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8017F9A8
