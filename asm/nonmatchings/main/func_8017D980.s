nonmatching func_8017D980, 0xE4

glabel func_8017D980
    /* 8BD80 8017D980 0400C78C */  lw         $a3, 0x4($a2)
    /* 8BD84 8017D984 00000000 */  nop
    /* 8BD88 8017D988 0600E294 */  lhu        $v0, 0x6($a3)
    /* 8BD8C 8017D98C 0A00E384 */  lh         $v1, 0xA($a3)
    /* 8BD90 8017D990 00140200 */  sll        $v0, $v0, 16
    /* 8BD94 8017D994 C3440200 */  sra        $t0, $v0, 19
    /* 8BD98 8017D998 03140200 */  sra        $v0, $v0, 16
    /* 8BD9C 8017D99C 21104300 */  addu       $v0, $v0, $v1
    /* 8BDA0 8017D9A0 10004A24 */  addiu      $t2, $v0, 0x10
    /* 8BDA4 8017D9A4 F9004229 */  slti       $v0, $t2, 0xF9
    /* 8BDA8 8017D9A8 02004014 */  bnez       $v0, .L8017D9B4
    /* 8BDAC 8017D9AC 21C08000 */   addu      $t8, $a0, $zero
    /* 8BDB0 8017D9B0 F8000A24 */  addiu      $t2, $zero, 0xF8
  .L8017D9B4:
    /* 8BDB4 8017D9B4 C3500A00 */  sra        $t2, $t2, 3
    /* 8BDB8 8017D9B8 0200E394 */  lhu        $v1, 0x2($a3)
    /* 8BDBC 8017D9BC 40210800 */  sll        $a0, $t0, 5
    /* 8BDC0 8017D9C0 001C0300 */  sll        $v1, $v1, 16
    /* 8BDC4 8017D9C4 83130300 */  sra        $v0, $v1, 14
    /* 8BDC8 8017D9C8 E0034630 */  andi       $a2, $v0, 0x3E0
    /* 8BDCC 8017D9CC 2130C400 */  addu       $a2, $a2, $a0
    /* 8BDD0 8017D9D0 031E0300 */  sra        $v1, $v1, 24
    /* 8BDD4 8017D9D4 0000E290 */  lbu        $v0, 0x0($a3)
    /* 8BDD8 8017D9D8 00000000 */  nop
    /* 8BDDC 8017D9DC C2780200 */  srl        $t7, $v0, 3
    /* 8BDE0 8017D9E0 2A100A01 */  slt        $v0, $t0, $t2
    /* 8BDE4 8017D9E4 1D004010 */  beqz       $v0, .L8017DA5C
    /* 8BDE8 8017D9E8 01006E30 */   andi      $t6, $v1, 0x1
  .L8017D9EC:
    /* 8BDEC 8017D9EC 2138E001 */  addu       $a3, $t7, $zero
    /* 8BDF0 8017D9F0 01000C25 */  addiu      $t4, $t0, 0x1
    /* 8BDF4 8017D9F4 2000CD24 */  addiu      $t5, $a2, 0x20
    /* 8BDF8 8017D9F8 E003CB30 */  andi       $t3, $a2, 0x3E0
    /* 8BDFC 8017D9FC 83120600 */  sra        $v0, $a2, 10
    /* 8BE00 8017DA00 21104E00 */  addu       $v0, $v0, $t6
    /* 8BE04 8017DA04 01004230 */  andi       $v0, $v0, 0x1
    /* 8BE08 8017DA08 C0120200 */  sll        $v0, $v0, 11
    /* 8BE0C 8017DA0C 21484500 */  addu       $t1, $v0, $a1
    /* 8BE10 8017DA10 40190800 */  sll        $v1, $t0, 5
    /* 8BE14 8017DA14 21186800 */  addu       $v1, $v1, $t0
    /* 8BE18 8017DA18 40180300 */  sll        $v1, $v1, 1
    /* 8BE1C 8017DA1C 21207800 */  addu       $a0, $v1, $t8
    /* 8BE20 8017DA20 20000624 */  addiu      $a2, $zero, 0x20
  .L8017DA24:
    /* 8BE24 8017DA24 FFFFC624 */  addiu      $a2, $a2, -0x1
    /* 8BE28 8017DA28 1F00E230 */  andi       $v0, $a3, 0x1F
    /* 8BE2C 8017DA2C 25104B00 */  or         $v0, $v0, $t3
    /* 8BE30 8017DA30 40100200 */  sll        $v0, $v0, 1
    /* 8BE34 8017DA34 21104900 */  addu       $v0, $v0, $t1
    /* 8BE38 8017DA38 00004394 */  lhu        $v1, 0x0($v0)
    /* 8BE3C 8017DA3C 0100E724 */  addiu      $a3, $a3, 0x1
    /* 8BE40 8017DA40 000083A4 */  sh         $v1, 0x0($a0)
    /* 8BE44 8017DA44 F7FFC104 */  bgez       $a2, .L8017DA24
    /* 8BE48 8017DA48 02008424 */   addiu     $a0, $a0, 0x2
    /* 8BE4C 8017DA4C 21408001 */  addu       $t0, $t4, $zero
    /* 8BE50 8017DA50 2A100A01 */  slt        $v0, $t0, $t2
    /* 8BE54 8017DA54 E5FF4014 */  bnez       $v0, .L8017D9EC
    /* 8BE58 8017DA58 2130A001 */   addu      $a2, $t5, $zero
  .L8017DA5C:
    /* 8BE5C 8017DA5C 0800E003 */  jr         $ra
    /* 8BE60 8017DA60 00000000 */   nop
endlabel func_8017D980
