nonmatching func_80194880, 0xAC

glabel func_80194880
    /* A2C80 80194880 1A80023C */  lui        $v0, %hi(D_8019DB56)
    /* A2C84 80194884 56DB4290 */  lbu        $v0, %lo(D_8019DB56)($v0)
    /* A2C88 80194888 E0FFBD27 */  addiu      $sp, $sp, -0x20
    /* A2C8C 8019488C 1000B0AF */  sw         $s0, 0x10($sp)
    /* A2C90 80194890 21808000 */  addu       $s0, $a0, $zero
    /* A2C94 80194894 1400B1AF */  sw         $s1, 0x14($sp)
    /* A2C98 80194898 2188A000 */  addu       $s1, $a1, $zero
    /* A2C9C 8019489C 0200422C */  sltiu      $v0, $v0, 0x2
    /* A2CA0 801948A0 09004014 */  bnez       $v0, .L801948C8
    /* A2CA4 801948A4 1800BFAF */   sw        $ra, 0x18($sp)
    /* A2CA8 801948A8 0F80043C */  lui        $a0, %hi(D_800F3988)
    /* A2CAC 801948AC 88398424 */  addiu      $a0, $a0, %lo(D_800F3988)
    /* A2CB0 801948B0 21280002 */  addu       $a1, $s0, $zero
    /* A2CB4 801948B4 1A80023C */  lui        $v0, %hi(D_8019DB50)
    /* A2CB8 801948B8 50DB428C */  lw         $v0, %lo(D_8019DB50)($v0)
    /* A2CBC 801948BC 00000000 */  nop
    /* A2CC0 801948C0 09F84000 */  jalr       $v0
    /* A2CC4 801948C4 21302002 */   addu      $a2, $s1, $zero
  .L801948C8:
    /* A2CC8 801948C8 1A80023C */  lui        $v0, %hi(D_8019DB4C)
    /* A2CCC 801948CC 4CDB428C */  lw         $v0, %lo(D_8019DB4C)($v0)
    /* A2CD0 801948D0 21200002 */  addu       $a0, $s0, $zero
    /* A2CD4 801948D4 2C00428C */  lw         $v0, 0x2C($v0)
    /* A2CD8 801948D8 00000000 */  nop
    /* A2CDC 801948DC 09F84000 */  jalr       $v0
    /* A2CE0 801948E0 21282002 */   addu      $a1, $s1, $zero
    /* A2CE4 801948E4 FF00063C */  lui        $a2, (0xFFFFFF >> 16)
    /* A2CE8 801948E8 FFFFC634 */  ori        $a2, $a2, (0xFFFFFF & 0xFFFF)
    /* A2CEC 801948EC 21100002 */  addu       $v0, $s0, $zero
    /* A2CF0 801948F0 1A80053C */  lui        $a1, %hi(D_8019DC14)
    /* A2CF4 801948F4 14DCA524 */  addiu      $a1, $a1, %lo(D_8019DC14)
    /* A2CF8 801948F8 1A80033C */  lui        $v1, %hi(D_8019DC00)
    /* A2CFC 801948FC 00DC6324 */  addiu      $v1, $v1, %lo(D_8019DC00)
    /* A2D00 80194900 24186600 */  and        $v1, $v1, $a2
    /* A2D04 80194904 0004043C */  lui        $a0, (0x4000000 >> 16)
    /* A2D08 80194908 25186400 */  or         $v1, $v1, $a0
    /* A2D0C 8019490C 0000A3AC */  sw         $v1, 0x0($a1)
    /* A2D10 80194910 2428A600 */  and        $a1, $a1, $a2
    /* A2D14 80194914 000045AC */  sw         $a1, 0x0($v0)
    /* A2D18 80194918 1800BF8F */  lw         $ra, 0x18($sp)
    /* A2D1C 8019491C 1400B18F */  lw         $s1, 0x14($sp)
    /* A2D20 80194920 1000B08F */  lw         $s0, 0x10($sp)
    /* A2D24 80194924 0800E003 */  jr         $ra
    /* A2D28 80194928 2000BD27 */   addiu     $sp, $sp, 0x20
endlabel func_80194880
