nonmatching func_80111134, 0x48

glabel func_80111134
    /* 1F534 80111134 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 1F538 80111138 1000BFAF */  sw         $ra, 0x10($sp)
    /* 1F53C 8011113C 77DC030C */  jal        func_800F71DC
    /* 1F540 80111140 00010424 */   addiu     $a0, $zero, 0x100
    /* 1F544 80111144 5BE3030C */  jal        func_800F8D6C
    /* 1F548 80111148 5E000424 */   addiu     $a0, $zero, 0x5E
    /* 1F54C 8011114C 77DC030C */  jal        func_800F71DC
    /* 1F550 80111150 E0020424 */   addiu     $a0, $zero, 0x2E0
    /* 1F554 80111154 5BE3030C */  jal        func_800F8D6C
    /* 1F558 80111158 60000424 */   addiu     $a0, $zero, 0x60
    /* 1F55C 8011115C 7144040C */  jal        func_801111C4
    /* 1F560 80111160 00000000 */   nop
    /* 1F564 80111164 977A040C */  jal        func_8011EA5C
    /* 1F568 80111168 00000000 */   nop
    /* 1F56C 8011116C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 1F570 80111170 00000000 */  nop
    /* 1F574 80111174 0800E003 */  jr         $ra
    /* 1F578 80111178 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80111134
