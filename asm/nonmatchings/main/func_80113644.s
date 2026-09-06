nonmatching func_80113644, 0x48

glabel func_80113644
    /* 21A44 80113644 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 21A48 80113648 1000BFAF */  sw         $ra, 0x10($sp)
    /* 21A4C 8011364C 53D9030C */  jal        func_800F654C
    /* 21A50 80113650 70000424 */   addiu     $a0, $zero, 0x70
    /* 21A54 80113654 62E0030C */  jal        func_800F8188
    /* 21A58 80113658 D40A0424 */   addiu     $a0, $zero, 0xAD4
    /* 21A5C 8011365C 53D9030C */  jal        func_800F654C
    /* 21A60 80113660 10000424 */   addiu     $a0, $zero, 0x10
    /* 21A64 80113664 62E0030C */  jal        func_800F8188
    /* 21A68 80113668 D50A0424 */   addiu     $a0, $zero, 0xAD5
    /* 21A6C 8011366C 5B4D040C */  jal        func_8011356C
    /* 21A70 80113670 00000000 */   nop
    /* 21A74 80113674 977A040C */  jal        func_8011EA5C
    /* 21A78 80113678 00000000 */   nop
    /* 21A7C 8011367C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 21A80 80113680 00000000 */  nop
    /* 21A84 80113684 0800E003 */  jr         $ra
    /* 21A88 80113688 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80113644
