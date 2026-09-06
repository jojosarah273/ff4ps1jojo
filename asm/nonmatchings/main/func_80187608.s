nonmatching func_80187608, 0x74

glabel func_80187608
    /* 95A08 80187608 C0FFBD27 */  addiu      $sp, $sp, -0x40
    /* 95A0C 8018760C 3800BFAF */  sw         $ra, 0x38($sp)
    /* 95A10 80187610 1623060C */  jal        func_80188C58
    /* 95A14 80187614 01000424 */   addiu     $a0, $zero, 0x1
    /* 95A18 80187618 1000A427 */  addiu      $a0, $sp, 0x10
    /* 95A1C 8018761C CF030224 */  addiu      $v0, $zero, 0x3CF
    /* 95A20 80187620 803F0324 */  addiu      $v1, $zero, 0x3F80
    /* 95A24 80187624 1000A2AF */  sw         $v0, 0x10($sp)
    /* 95A28 80187628 01000224 */  addiu      $v0, $zero, 0x1
    /* 95A2C 8018762C 1400A3A7 */  sh         $v1, 0x14($sp)
    /* 95A30 80187630 1600A3A7 */  sh         $v1, 0x16($sp)
    /* 95A34 80187634 1800A0A7 */  sh         $zero, 0x18($sp)
    /* 95A38 80187638 1A00A0A7 */  sh         $zero, 0x1A($sp)
    /* 95A3C 8018763C 2000A3A7 */  sh         $v1, 0x20($sp)
    /* 95A40 80187640 2200A3A7 */  sh         $v1, 0x22($sp)
    /* 95A44 80187644 2400A0AF */  sw         $zero, 0x24($sp)
    /* 95A48 80187648 3A3B060C */  jal        func_8018ECE8
    /* 95A4C 8018764C 2800A2AF */   sw        $v0, 0x28($sp)
    /* 95A50 80187650 1623060C */  jal        func_80188C58
    /* 95A54 80187654 21200000 */   addu      $a0, $zero, $zero
    /* 95A58 80187658 FF000424 */  addiu      $a0, $zero, 0xFF
    /* 95A5C 8018765C 21280000 */  addu       $a1, $zero, $zero
    /* 95A60 80187660 FF000624 */  addiu      $a2, $zero, 0xFF
    /* 95A64 80187664 BE23060C */  jal        func_80188EF8
    /* 95A68 80187668 21380000 */   addu      $a3, $zero, $zero
    /* 95A6C 8018766C 3800BF8F */  lw         $ra, 0x38($sp)
    /* 95A70 80187670 00000000 */  nop
    /* 95A74 80187674 0800E003 */  jr         $ra
    /* 95A78 80187678 4000BD27 */   addiu     $sp, $sp, 0x40
endlabel func_80187608
