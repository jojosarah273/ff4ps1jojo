nonmatching func_8017DB7C, 0xAC

glabel func_8017DB7C
    /* 8BF7C 8017DB7C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 8BF80 8017DB80 03008430 */  andi       $a0, $a0, 0x3
    /* 8BF84 8017DB84 01000224 */  addiu      $v0, $zero, 0x1
    /* 8BF88 8017DB88 14008210 */  beq        $a0, $v0, .L8017DBDC
    /* 8BF8C 8017DB8C 1000BFAF */   sw        $ra, 0x10($sp)
    /* 8BF90 8017DB90 02008228 */  slti       $v0, $a0, 0x2
    /* 8BF94 8017DB94 05004010 */  beqz       $v0, .L8017DBAC
    /* 8BF98 8017DB98 00000000 */   nop
    /* 8BF9C 8017DB9C 0A008010 */  beqz       $a0, .L8017DBC8
    /* 8BFA0 8017DBA0 2120A000 */   addu      $a0, $a1, $zero
    /* 8BFA4 8017DBA4 06F70508 */  j          .L8017DC18
    /* 8BFA8 8017DBA8 00000000 */   nop
  .L8017DBAC:
    /* 8BFAC 8017DBAC 02000224 */  addiu      $v0, $zero, 0x2
    /* 8BFB0 8017DBB0 10008210 */  beq        $a0, $v0, .L8017DBF4
    /* 8BFB4 8017DBB4 03000224 */   addiu     $v0, $zero, 0x3
    /* 8BFB8 8017DBB8 14008210 */  beq        $a0, $v0, .L8017DC0C
    /* 8BFBC 8017DBBC 2120A000 */   addu      $a0, $a1, $zero
    /* 8BFC0 8017DBC0 06F70508 */  j          .L8017DC18
    /* 8BFC4 8017DBC4 00000000 */   nop
  .L8017DBC8:
    /* 8BFC8 8017DBC8 2128C000 */  addu       $a1, $a2, $zero
    /* 8BFCC 8017DBCC F6F5050C */  jal        func_8017D7D8
    /* 8BFD0 8017DBD0 2130E000 */   addu      $a2, $a3, $zero
    /* 8BFD4 8017DBD4 06F70508 */  j          .L8017DC18
    /* 8BFD8 8017DBD8 00000000 */   nop
  .L8017DBDC:
    /* 8BFDC 8017DBDC 2120A000 */  addu       $a0, $a1, $zero
    /* 8BFE0 8017DBE0 2128C000 */  addu       $a1, $a2, $zero
    /* 8BFE4 8017DBE4 26F6050C */  jal        func_8017D898
    /* 8BFE8 8017DBE8 2130E000 */   addu      $a2, $a3, $zero
    /* 8BFEC 8017DBEC 06F70508 */  j          .L8017DC18
    /* 8BFF0 8017DBF0 00000000 */   nop
  .L8017DBF4:
    /* 8BFF4 8017DBF4 2120A000 */  addu       $a0, $a1, $zero
    /* 8BFF8 8017DBF8 2128C000 */  addu       $a1, $a2, $zero
    /* 8BFFC 8017DBFC 60F6050C */  jal        func_8017D980
    /* 8C000 8017DC00 2130E000 */   addu      $a2, $a3, $zero
    /* 8C004 8017DC04 06F70508 */  j          .L8017DC18
    /* 8C008 8017DC08 00000000 */   nop
  .L8017DC0C:
    /* 8C00C 8017DC0C 2128C000 */  addu       $a1, $a2, $zero
    /* 8C010 8017DC10 99F6050C */  jal        func_8017DA64
    /* 8C014 8017DC14 2130E000 */   addu      $a2, $a3, $zero
  .L8017DC18:
    /* 8C018 8017DC18 1000BF8F */  lw         $ra, 0x10($sp)
    /* 8C01C 8017DC1C 00000000 */  nop
    /* 8C020 8017DC20 0800E003 */  jr         $ra
    /* 8C024 8017DC24 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8017DB7C
