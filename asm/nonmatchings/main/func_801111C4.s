nonmatching func_801111C4, 0x88

glabel func_801111C4
    /* 1F5C4 801111C4 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 1F5C8 801111C8 1000BFAF */  sw         $ra, 0x10($sp)
    /* 1F5CC 801111CC ECF9030C */  jal        func_800FE7B0
    /* 1F5D0 801111D0 00000000 */   nop
    /* 1F5D4 801111D4 8CD9030C */  jal        func_800F6630
    /* 1F5D8 801111D8 60000424 */   addiu     $a0, $zero, 0x60
    /* 1F5DC 801111DC 20D5030C */  jal        func_800F5480
    /* 1F5E0 801111E0 00000000 */   nop
    /* 1F5E4 801111E4 16E0030C */  jal        func_800F8058
    /* 1F5E8 801111E8 10000424 */   addiu     $a0, $zero, 0x10
    /* 1F5EC 801111EC 1A80023C */  lui        $v0, %hi(D_8019ED40)
    /* 1F5F0 801111F0 40ED428C */  lw         $v0, %lo(D_8019ED40)($v0)
    /* 1F5F4 801111F4 00000000 */  nop
    /* 1F5F8 801111F8 00004390 */  lbu        $v1, 0x0($v0)
    /* 1F5FC 801111FC 1A80013C */  lui        $at, %hi(D_8019EE6A)
    /* 1F600 80111200 6AEE23A4 */  sh         $v1, %lo(D_8019EE6A)($at)
    /* 1F604 80111204 8CD9030C */  jal        func_800F6630
    /* 1F608 80111208 61000424 */   addiu     $a0, $zero, 0x61
    /* 1F60C 8011120C 16E0030C */  jal        func_800F8058
    /* 1F610 80111210 21200000 */   addu      $a0, $zero, $zero
    /* 1F614 80111214 1A80023C */  lui        $v0, %hi(D_8019ED40)
    /* 1F618 80111218 40ED428C */  lw         $v0, %lo(D_8019ED40)($v0)
    /* 1F61C 8011121C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 1F620 80111220 00004490 */  lbu        $a0, 0x0($v0)
    /* 1F624 80111224 1A80023C */  lui        $v0, %hi(D_8019EE6A)
    /* 1F628 80111228 6AEE4294 */  lhu        $v0, %lo(D_8019EE6A)($v0)
    /* 1F62C 8011122C 01000324 */  addiu      $v1, $zero, 0x1
    /* 1F630 80111230 020083A3 */  sb         $v1, %gp_rel(D_8019ECFE)($gp)
    /* 1F634 80111234 00220400 */  sll        $a0, $a0, 8
    /* 1F638 80111238 25104400 */  or         $v0, $v0, $a0
    /* 1F63C 8011123C 1A80013C */  lui        $at, %hi(D_8019EE6A)
    /* 1F640 80111240 6AEE22A4 */  sh         $v0, %lo(D_8019EE6A)($at)
    /* 1F644 80111244 0800E003 */  jr         $ra
    /* 1F648 80111248 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_801111C4
