nonmatching func_80196EF0, 0x24

glabel func_80196EF0
    /* A52F0 80196EF0 0600C010 */  beqz       $a2, .L80196F0C
    /* A52F4 80196EF4 FFFFC224 */   addiu     $v0, $a2, -0x1
    /* A52F8 80196EF8 FFFF0324 */  addiu      $v1, $zero, -0x1
  .L80196EFC:
    /* A52FC 80196EFC 000085A0 */  sb         $a1, 0x0($a0)
    /* A5300 80196F00 FFFF4224 */  addiu      $v0, $v0, -0x1
    /* A5304 80196F04 FDFF4314 */  bne        $v0, $v1, .L80196EFC
    /* A5308 80196F08 01008424 */   addiu     $a0, $a0, 0x1
  .L80196F0C:
    /* A530C 80196F0C 0800E003 */  jr         $ra
    /* A5310 80196F10 00000000 */   nop
endlabel func_80196EF0
    /* A5314 80196F14 00000000 */  nop
