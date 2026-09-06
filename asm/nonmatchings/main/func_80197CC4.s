nonmatching func_80197CC4, 0x40

glabel func_80197CC4
    /* A60C4 80197CC4 1A80033C */  lui        $v1, %hi(D_8019DCBC)
    /* A60C8 80197CC8 BCDC638C */  lw         $v1, %lo(D_8019DCBC)($v1)
    /* A60CC 80197CCC 00000000 */  nop
    /* A60D0 80197CD0 0400628C */  lw         $v0, 0x4($v1)
    /* A60D4 80197CD4 00000000 */  nop
    /* A60D8 80197CD8 01004230 */  andi       $v0, $v0, 0x1
    /* A60DC 80197CDC 07004010 */  beqz       $v0, .L80197CFC
    /* A60E0 80197CE0 21100000 */   addu      $v0, $zero, $zero
    /* A60E4 80197CE4 0000628C */  lw         $v0, 0x0($v1)
    /* A60E8 80197CE8 00000000 */  nop
    /* A60EC 80197CEC 01004230 */  andi       $v0, $v0, 0x1
    /* A60F0 80197CF0 02004014 */  bnez       $v0, .L80197CFC
    /* A60F4 80197CF4 01000224 */   addiu     $v0, $zero, 0x1
    /* A60F8 80197CF8 21100000 */  addu       $v0, $zero, $zero
  .L80197CFC:
    /* A60FC 80197CFC 0800E003 */  jr         $ra
    /* A6100 80197D00 00000000 */   nop
endlabel func_80197CC4
    /* A6104 80197D04 00000000 */  nop
