nonmatching func_8011C1F8, 0x84

glabel func_8011C1F8
    /* 2A5F8 8011C1F8 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 2A5FC 8011C1FC 1000BFAF */  sw         $ra, 0x10($sp)
    /* 2A600 8011C200 80E4030C */  jal        func_800F9200
    /* 2A604 8011C204 00000000 */   nop
    /* 2A608 8011C208 12E5030C */  jal        func_800F9448
    /* 2A60C 8011C20C 00000000 */   nop
    /* 2A610 8011C210 77DC030C */  jal        func_800F71DC
    /* 2A614 8011C214 21200000 */   addu      $a0, $zero, $zero
  .L8011C218:
    /* 2A618 8011C218 5CDB030C */  jal        func_800F6D70
    /* 2A61C 8011C21C 21200000 */   addu      $a0, $zero, $zero
    /* 2A620 8011C220 7F00043C */  lui        $a0, (0x7F4800 >> 16)
    /* 2A624 8011C224 17E2030C */  jal        func_800F885C
    /* 2A628 8011C228 00488434 */   ori       $a0, $a0, (0x7F4800 & 0xFFFF)
    /* 2A62C 8011C22C EFD8030C */  jal        func_800F63BC
    /* 2A630 8011C230 00000000 */   nop
    /* 2A634 8011C234 D9D8030C */  jal        func_800F6364
    /* 2A638 8011C238 00000000 */   nop
    /* 2A63C 8011C23C 56D6030C */  jal        func_800F5958
    /* 2A640 8011C240 00020424 */   addiu     $a0, $zero, 0x200
    /* 2A644 8011C244 F5D4030C */  jal        func_800F53D4
    /* 2A648 8011C248 00000000 */   nop
    /* 2A64C 8011C24C F2FF4010 */  beqz       $v0, .L8011C218
    /* 2A650 8011C250 00000000 */   nop
    /* 2A654 8011C254 53D9030C */  jal        func_800F654C
    /* 2A658 8011C258 21200000 */   addu      $a0, $zero, $zero
    /* 2A65C 8011C25C 80E4030C */  jal        func_800F9200
    /* 2A660 8011C260 00000000 */   nop
    /* 2A664 8011C264 12E5030C */  jal        func_800F9448
    /* 2A668 8011C268 00000000 */   nop
    /* 2A66C 8011C26C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 2A670 8011C270 00000000 */  nop
    /* 2A674 8011C274 0800E003 */  jr         $ra
    /* 2A678 8011C278 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8011C1F8
