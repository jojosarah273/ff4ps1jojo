nonmatching func_80198990, 0x64

glabel func_80198990
    /* A6D90 80198990 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* A6D94 80198994 21000224 */  addiu      $v0, $zero, 0x21
    /* A6D98 80198998 1000BFAF */  sw         $ra, 0x10($sp)
    /* A6D9C 8019899C 1A80013C */  lui        $at, %hi(D_8019ECF4)
    /* A6DA0 801989A0 F4EC24AC */  sw         $a0, %lo(D_8019ECF4)($at)
    /* A6DA4 801989A4 1A80013C */  lui        $at, %hi(D_8019ECF8)
    /* A6DA8 801989A8 06008210 */  beq        $a0, $v0, .L801989C4
    /* A6DAC 801989AC F8EC25AC */   sw        $a1, %lo(D_8019ECF8)($at)
    /* A6DB0 801989B0 22000224 */  addiu      $v0, $zero, 0x22
    /* A6DB4 801989B4 07008210 */  beq        $a0, $v0, .L801989D4
    /* A6DB8 801989B8 00F4043C */   lui       $a0, (0xF4000002 >> 16)
    /* A6DBC 801989BC 79620608 */  j          .L801989E4
    /* A6DC0 801989C0 00000000 */   nop
  .L801989C4:
    /* A6DC4 801989C4 00F4043C */  lui        $a0, (0xF4000002 >> 16)
    /* A6DC8 801989C8 02008434 */  ori        $a0, $a0, (0xF4000002 & 0xFFFF)
    /* A6DCC 801989CC 77620608 */  j          .L801989DC
    /* A6DD0 801989D0 01030524 */   addiu     $a1, $zero, 0x301
  .L801989D4:
    /* A6DD4 801989D4 02008434 */  ori        $a0, $a0, (0xF4000002 & 0xFFFF)
    /* A6DD8 801989D8 02030524 */  addiu      $a1, $zero, 0x302
  .L801989DC:
    /* A6DDC 801989DC 925D060C */  jal        func_80197648
    /* A6DE0 801989E0 00000000 */   nop
  .L801989E4:
    /* A6DE4 801989E4 1000BF8F */  lw         $ra, 0x10($sp)
    /* A6DE8 801989E8 21100000 */  addu       $v0, $zero, $zero
    /* A6DEC 801989EC 0800E003 */  jr         $ra
    /* A6DF0 801989F0 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80198990
    /* A6DF4 801989F4 00000000 */  nop
    /* A6DF8 801989F8 00000000 */  nop
    /* A6DFC 801989FC 00000000 */  nop
