nonmatching func_801947B8, 0xC8

glabel func_801947B8
    /* A2BB8 801947B8 1A80023C */  lui        $v0, %hi(D_8019DB56)
    /* A2BBC 801947BC 56DB4290 */  lbu        $v0, %lo(D_8019DB56)($v0)
    /* A2BC0 801947C0 E0FFBD27 */  addiu      $sp, $sp, -0x20
    /* A2BC4 801947C4 1000B0AF */  sw         $s0, 0x10($sp)
    /* A2BC8 801947C8 21808000 */  addu       $s0, $a0, $zero
    /* A2BCC 801947CC 1400B1AF */  sw         $s1, 0x14($sp)
    /* A2BD0 801947D0 2188A000 */  addu       $s1, $a1, $zero
    /* A2BD4 801947D4 0200422C */  sltiu      $v0, $v0, 0x2
    /* A2BD8 801947D8 08004014 */  bnez       $v0, .L801947FC
    /* A2BDC 801947DC 1800BFAF */   sw        $ra, 0x18($sp)
    /* A2BE0 801947E0 1A80023C */  lui        $v0, %hi(D_8019DB50)
    /* A2BE4 801947E4 50DB428C */  lw         $v0, %lo(D_8019DB50)($v0)
    /* A2BE8 801947E8 0F80043C */  lui        $a0, %hi(D_800F3970)
    /* A2BEC 801947EC 70398424 */  addiu      $a0, $a0, %lo(D_800F3970)
    /* A2BF0 801947F0 21280002 */  addu       $a1, $s0, $zero
    /* A2BF4 801947F4 09F84000 */  jalr       $v0
    /* A2BF8 801947F8 21302002 */   addu      $a2, $s1, $zero
  .L801947FC:
    /* A2BFC 801947FC FFFF3126 */  addiu      $s1, $s1, -0x1
    /* A2C00 80194800 0D002012 */  beqz       $s1, .L80194838
    /* A2C04 80194804 FF00053C */   lui       $a1, (0xFFFFFF >> 16)
    /* A2C08 80194808 FFFFA534 */  ori        $a1, $a1, (0xFFFFFF & 0xFFFF)
    /* A2C0C 8019480C 00FF063C */  lui        $a2, (0xFF000000 >> 16)
  .L80194810:
    /* A2C10 80194810 FFFF3126 */  addiu      $s1, $s1, -0x1
    /* A2C14 80194814 04000426 */  addiu      $a0, $s0, 0x4
    /* A2C18 80194818 030000A2 */  sb         $zero, 0x3($s0)
    /* A2C1C 8019481C 0000028E */  lw         $v0, 0x0($s0)
    /* A2C20 80194820 24188500 */  and        $v1, $a0, $a1
    /* A2C24 80194824 24104600 */  and        $v0, $v0, $a2
    /* A2C28 80194828 25104300 */  or         $v0, $v0, $v1
    /* A2C2C 8019482C 000002AE */  sw         $v0, 0x0($s0)
    /* A2C30 80194830 F7FF2016 */  bnez       $s1, .L80194810
    /* A2C34 80194834 21808000 */   addu      $s0, $a0, $zero
  .L80194838:
    /* A2C38 80194838 FF00063C */  lui        $a2, (0xFFFFFF >> 16)
    /* A2C3C 8019483C FFFFC634 */  ori        $a2, $a2, (0xFFFFFF & 0xFFFF)
    /* A2C40 80194840 21100002 */  addu       $v0, $s0, $zero
    /* A2C44 80194844 1A80053C */  lui        $a1, %hi(D_8019DC14)
    /* A2C48 80194848 14DCA524 */  addiu      $a1, $a1, %lo(D_8019DC14)
    /* A2C4C 8019484C 1A80033C */  lui        $v1, %hi(D_8019DC00)
    /* A2C50 80194850 00DC6324 */  addiu      $v1, $v1, %lo(D_8019DC00)
    /* A2C54 80194854 24186600 */  and        $v1, $v1, $a2
    /* A2C58 80194858 0004043C */  lui        $a0, (0x4000000 >> 16)
    /* A2C5C 8019485C 25186400 */  or         $v1, $v1, $a0
    /* A2C60 80194860 0000A3AC */  sw         $v1, 0x0($a1)
    /* A2C64 80194864 2428A600 */  and        $a1, $a1, $a2
    /* A2C68 80194868 000045AC */  sw         $a1, 0x0($v0)
    /* A2C6C 8019486C 1800BF8F */  lw         $ra, 0x18($sp)
    /* A2C70 80194870 1400B18F */  lw         $s1, 0x14($sp)
    /* A2C74 80194874 1000B08F */  lw         $s0, 0x10($sp)
    /* A2C78 80194878 0800E003 */  jr         $ra
    /* A2C7C 8019487C 2000BD27 */   addiu     $sp, $sp, 0x20
endlabel func_801947B8
