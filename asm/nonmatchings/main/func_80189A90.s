nonmatching func_80189A90, 0x58

glabel func_80189A90
    /* 97E90 80189A90 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 97E94 80189A94 00240400 */  sll        $a0, $a0, 16
    /* 97E98 80189A98 03240400 */  sra        $a0, $a0, 16
    /* 97E9C 80189A9C 1F80033C */  lui        $v1, %hi(D_801F66E8)
    /* 97EA0 80189AA0 E8666524 */  addiu      $a1, $v1, %lo(D_801F66E8)
    /* 97EA4 80189AA4 80100400 */  sll        $v0, $a0, 2
    /* 97EA8 80189AA8 21104400 */  addu       $v0, $v0, $a0
    /* 97EAC 80189AAC 80180200 */  sll        $v1, $v0, 2
    /* 97EB0 80189AB0 21206500 */  addu       $a0, $v1, $a1
    /* 97EB4 80189AB4 1000BFAF */  sw         $ra, 0x10($sp)
    /* 97EB8 80189AB8 0000828C */  lw         $v0, 0x0($a0)
    /* 97EBC 80189ABC 00000000 */  nop
    /* 97EC0 80189AC0 05004010 */  beqz       $v0, .L80189AD8
    /* 97EC4 80189AC4 2110A300 */   addu      $v0, $a1, $v1
    /* 97EC8 80189AC8 000080AC */  sw         $zero, 0x0($a0)
    /* 97ECC 80189ACC 0400448C */  lw         $a0, 0x4($v0)
    /* 97ED0 80189AD0 322D060C */  jal        func_8018B4C8
    /* 97ED4 80189AD4 00000000 */   nop
  .L80189AD8:
    /* 97ED8 80189AD8 1000BF8F */  lw         $ra, 0x10($sp)
    /* 97EDC 80189ADC 00000000 */  nop
    /* 97EE0 80189AE0 0800E003 */  jr         $ra
    /* 97EE4 80189AE4 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80189A90
