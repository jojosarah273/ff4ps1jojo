nonmatching func_80196F48, 0xE8

glabel func_80196F48
    /* A5348 80196F48 D0FFBD27 */  addiu      $sp, $sp, -0x30
    /* A534C 80196F4C 2400B3AF */  sw         $s3, 0x24($sp)
    /* A5350 80196F50 4000B38F */  lw         $s3, 0x40($sp)
    /* A5354 80196F54 4400A38F */  lw         $v1, 0x44($sp)
    /* A5358 80196F58 4800A28F */  lw         $v0, 0x48($sp)
    /* A535C 80196F5C 21408000 */  addu       $t0, $a0, $zero
    /* A5360 80196F60 1800B0AF */  sw         $s0, 0x18($sp)
    /* A5364 80196F64 2180A000 */  addu       $s0, $a1, $zero
    /* A5368 80196F68 2000B2AF */  sw         $s2, 0x20($sp)
    /* A536C 80196F6C 2190C000 */  addu       $s2, $a2, $zero
    /* A5370 80196F70 1C00B1AF */  sw         $s1, 0x1C($sp)
    /* A5374 80196F74 2188E000 */  addu       $s1, $a3, $zero
    /* A5378 80196F78 2800BFAF */  sw         $ra, 0x28($sp)
    /* A537C 80196F7C 1000B1A7 */  sh         $s1, 0x10($sp)
    /* A5380 80196F80 1600A2A7 */  sh         $v0, 0x16($sp)
    /* A5384 80196F84 01000224 */  addiu      $v0, $zero, 0x1
    /* A5388 80196F88 13000212 */  beq        $s0, $v0, .L80196FD8
    /* A538C 80196F8C 1200B3A7 */   sh        $s3, 0x12($sp)
    /* A5390 80196F90 0200022A */  slti       $v0, $s0, 0x2
    /* A5394 80196F94 05004010 */  beqz       $v0, .L80196FAC
    /* A5398 80196F98 00000000 */   nop
    /* A539C 80196F9C 08000012 */  beqz       $s0, .L80196FC0
    /* A53A0 80196FA0 1000A427 */   addiu     $a0, $sp, 0x10
    /* A53A4 80196FA4 FD5B0608 */  j          .L80196FF4
    /* A53A8 80196FA8 00000000 */   nop
  .L80196FAC:
    /* A53AC 80196FAC 02000224 */  addiu      $v0, $zero, 0x2
    /* A53B0 80196FB0 0E000212 */  beq        $s0, $v0, .L80196FEC
    /* A53B4 80196FB4 1000A427 */   addiu     $a0, $sp, 0x10
    /* A53B8 80196FB8 FD5B0608 */  j          .L80196FF4
    /* A53BC 80196FBC 00000000 */   nop
  .L80196FC0:
    /* A53C0 80196FC0 02006104 */  bgez       $v1, .L80196FCC
    /* A53C4 80196FC4 21106000 */   addu      $v0, $v1, $zero
    /* A53C8 80196FC8 03006224 */  addiu      $v0, $v1, 0x3
  .L80196FCC:
    /* A53CC 80196FCC 83100200 */  sra        $v0, $v0, 2
    /* A53D0 80196FD0 FC5B0608 */  j          .L80196FF0
    /* A53D4 80196FD4 1400A2A7 */   sh        $v0, 0x14($sp)
  .L80196FD8:
    /* A53D8 80196FD8 C2170300 */  srl        $v0, $v1, 31
    /* A53DC 80196FDC 21106200 */  addu       $v0, $v1, $v0
    /* A53E0 80196FE0 43100200 */  sra        $v0, $v0, 1
    /* A53E4 80196FE4 FC5B0608 */  j          .L80196FF0
    /* A53E8 80196FE8 1400A2A7 */   sh        $v0, 0x14($sp)
  .L80196FEC:
    /* A53EC 80196FEC 1400A3A7 */  sh         $v1, 0x14($sp)
  .L80196FF0:
    /* A53F0 80196FF0 1000A427 */  addiu      $a0, $sp, 0x10
  .L80196FF4:
    /* A53F4 80196FF4 9051060C */  jal        func_80194640
    /* A53F8 80196FF8 21280001 */   addu      $a1, $t0, $zero
    /* A53FC 80196FFC 21200002 */  addu       $a0, $s0, $zero
    /* A5400 80197000 21284002 */  addu       $a1, $s2, $zero
    /* A5404 80197004 21302002 */  addu       $a2, $s1, $zero
    /* A5408 80197008 6A5C060C */  jal        func_801971A8
    /* A540C 8019700C 21386002 */   addu      $a3, $s3, $zero
    /* A5410 80197010 FFFF4230 */  andi       $v0, $v0, 0xFFFF
    /* A5414 80197014 2800BF8F */  lw         $ra, 0x28($sp)
    /* A5418 80197018 2400B38F */  lw         $s3, 0x24($sp)
    /* A541C 8019701C 2000B28F */  lw         $s2, 0x20($sp)
    /* A5420 80197020 1C00B18F */  lw         $s1, 0x1C($sp)
    /* A5424 80197024 1800B08F */  lw         $s0, 0x18($sp)
    /* A5428 80197028 0800E003 */  jr         $ra
    /* A542C 8019702C 3000BD27 */   addiu     $sp, $sp, 0x30
endlabel func_80196F48
    /* A5430 80197030 00000000 */  nop
    /* A5434 80197034 00000000 */  nop
