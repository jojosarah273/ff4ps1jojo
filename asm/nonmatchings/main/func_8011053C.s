nonmatching func_8011053C, 0x68

glabel func_8011053C
    /* 1E93C 8011053C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 1E940 80110540 1000BFAF */  sw         $ra, 0x10($sp)
    /* 1E944 80110544 77DC030C */  jal        func_800F71DC
    /* 1E948 80110548 21200000 */   addu      $a0, $zero, $zero
    /* 1E94C 8011054C 0D00043C */  lui        $a0, (0xD8230 >> 16)
  .L80110550:
    /* 1E950 80110550 1ADB030C */  jal        func_800F6C68
    /* 1E954 80110554 30828434 */   ori       $a0, $a0, (0xD8230 & 0xFFFF)
    /* 1E958 80110558 DAE1030C */  jal        func_800F8768
    /* 1E95C 8011055C 1B0E0424 */   addiu     $a0, $zero, 0xE1B
    /* 1E960 80110560 0D00043C */  lui        $a0, (0xD8240 >> 16)
    /* 1E964 80110564 1ADB030C */  jal        func_800F6C68
    /* 1E968 80110568 40828434 */   ori       $a0, $a0, (0xD8240 & 0xFFFF)
    /* 1E96C 8011056C DAE1030C */  jal        func_800F8768
    /* 1E970 80110570 3B0E0424 */   addiu     $a0, $zero, 0xE3B
    /* 1E974 80110574 D9D8030C */  jal        func_800F6364
    /* 1E978 80110578 00000000 */   nop
    /* 1E97C 8011057C 56D6030C */  jal        func_800F5958
    /* 1E980 80110580 10000424 */   addiu     $a0, $zero, 0x10
    /* 1E984 80110584 F5D4030C */  jal        func_800F53D4
    /* 1E988 80110588 00000000 */   nop
    /* 1E98C 8011058C F0FF4010 */  beqz       $v0, .L80110550
    /* 1E990 80110590 0D00043C */   lui       $a0, (0xD8230 >> 16)
    /* 1E994 80110594 1000BF8F */  lw         $ra, 0x10($sp)
    /* 1E998 80110598 00000000 */  nop
    /* 1E99C 8011059C 0800E003 */  jr         $ra
    /* 1E9A0 801105A0 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8011053C
