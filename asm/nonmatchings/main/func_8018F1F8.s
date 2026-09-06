nonmatching func_8018F1F8, 0x48

glabel func_8018F1F8
    /* 9D5F8 8018F1F8 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 9D5FC 8018F1FC 1400BFAF */  sw         $ra, 0x14($sp)
    /* 9D600 8018F200 BA5D060C */  jal        func_801976E8
    /* 9D604 8018F204 1000B0AF */   sw        $s0, 0x10($sp)
    /* 9D608 8018F208 9E3C060C */  jal        func_8018F278
    /* 9D60C 8018F20C 21804000 */   addu      $s0, $v0, $zero
    /* 9D610 8018F210 E65D060C */  jal        func_80197798
    /* 9D614 8018F214 21200000 */   addu      $a0, $zero, $zero
    /* 9D618 8018F218 01000224 */  addiu      $v0, $zero, 0x1
    /* 9D61C 8018F21C 04000216 */  bne        $s0, $v0, .L8018F230
    /* 9D620 8018F220 21100000 */   addu      $v0, $zero, $zero
    /* 9D624 8018F224 BE5D060C */  jal        func_801976F8
    /* 9D628 8018F228 00000000 */   nop
    /* 9D62C 8018F22C 21100000 */  addu       $v0, $zero, $zero
  .L8018F230:
    /* 9D630 8018F230 1400BF8F */  lw         $ra, 0x14($sp)
    /* 9D634 8018F234 1000B08F */  lw         $s0, 0x10($sp)
    /* 9D638 8018F238 0800E003 */  jr         $ra
    /* 9D63C 8018F23C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8018F1F8
