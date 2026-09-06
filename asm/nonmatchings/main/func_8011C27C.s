nonmatching func_8011C27C, 0x4C

glabel func_8011C27C
    /* 2A67C 8011C27C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 2A680 8011C280 1000BFAF */  sw         $ra, 0x10($sp)
    /* 2A684 8011C284 77DC030C */  jal        func_800F71DC
    /* 2A688 8011C288 21200000 */   addu      $a0, $zero, $zero
    /* 2A68C 8011C28C 7F00043C */  lui        $a0, (0x7F5C71 >> 16)
  .L8011C290:
    /* 2A690 8011C290 17E2030C */  jal        func_800F885C
    /* 2A694 8011C294 715C8434 */   ori       $a0, $a0, (0x7F5C71 & 0xFFFF)
    /* 2A698 8011C298 D9D8030C */  jal        func_800F6364
    /* 2A69C 8011C29C 00000000 */   nop
    /* 2A6A0 8011C2A0 56D6030C */  jal        func_800F5958
    /* 2A6A4 8011C2A4 00400424 */   addiu     $a0, $zero, 0x4000
    /* 2A6A8 8011C2A8 F5D4030C */  jal        func_800F53D4
    /* 2A6AC 8011C2AC 00000000 */   nop
    /* 2A6B0 8011C2B0 F7FF4010 */  beqz       $v0, .L8011C290
    /* 2A6B4 8011C2B4 7F00043C */   lui       $a0, (0x7F5C71 >> 16)
    /* 2A6B8 8011C2B8 1000BF8F */  lw         $ra, 0x10($sp)
    /* 2A6BC 8011C2BC 00000000 */  nop
    /* 2A6C0 8011C2C0 0800E003 */  jr         $ra
    /* 2A6C4 8011C2C4 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8011C27C
