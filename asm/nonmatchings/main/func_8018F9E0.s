nonmatching func_8018F9E0, 0x20

glabel func_8018F9E0
    /* 9DDE0 8018F9E0 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 9DDE4 8018F9E4 1000BFAF */  sw         $ra, 0x10($sp)
    /* 9DDE8 8018F9E8 1E40060C */  jal        func_80190078
    /* 9DDEC 8018F9EC 0C000624 */   addiu     $a2, $zero, 0xC
    /* 9DDF0 8018F9F0 1000BF8F */  lw         $ra, 0x10($sp)
    /* 9DDF4 8018F9F4 0100422C */  sltiu      $v0, $v0, 0x1
    /* 9DDF8 8018F9F8 0800E003 */  jr         $ra
    /* 9DDFC 8018F9FC 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8018F9E0
