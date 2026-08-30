nonmatching func_80134A50, 0x60

glabel func_80134A50
    /* 42E50 80134A50 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 42E54 80134A54 1000BFAF */  sw         $ra, 0x10($sp)
    /* 42E58 80134A58 5DD5030C */  jal        func_800F5574
    /* 42E5C 80134A5C 54000424 */   addiu     $a0, $zero, 0x54
    /* 42E60 80134A60 F0D4030C */  jal        func_800F53C0
    /* 42E64 80134A64 00000000 */   nop
    /* 42E68 80134A68 0B004010 */  beqz       $v0, .L80134A98
    /* 42E6C 80134A6C 00000000 */   nop
    /* 42E70 80134A70 5DD5030C */  jal        func_800F5574
    /* 42E74 80134A74 60000424 */   addiu     $a0, $zero, 0x60
    /* 42E78 80134A78 F0D4030C */  jal        func_800F53C0
    /* 42E7C 80134A7C 00000000 */   nop
    /* 42E80 80134A80 05004014 */  bnez       $v0, .L80134A98
    /* 42E84 80134A84 00000000 */   nop
    /* 42E88 80134A88 20D5030C */  jal        func_800F5480
    /* 42E8C 80134A8C 00000000 */   nop
    /* 42E90 80134A90 A8D20408 */  j          .L80134AA0
    /* 42E94 80134A94 00000000 */   nop
  .L80134A98:
    /* 42E98 80134A98 04D5030C */  jal        func_800F5410
    /* 42E9C 80134A9C 00000000 */   nop
  .L80134AA0:
    /* 42EA0 80134AA0 1000BF8F */  lw         $ra, 0x10($sp)
    /* 42EA4 80134AA4 00000000 */  nop
    /* 42EA8 80134AA8 0800E003 */  jr         $ra
    /* 42EAC 80134AAC 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80134A50
