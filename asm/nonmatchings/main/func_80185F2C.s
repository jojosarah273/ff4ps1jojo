nonmatching func_80185F2C, 0x74

glabel func_80185F2C
    /* 9432C 80185F2C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 94330 80185F30 1000BFAF */  sw         $ra, 0x10($sp)
    /* 94334 80185F34 0826060C */  jal        func_80189820
    /* 94338 80185F38 0180043C */   lui       $a0, (0x80010000 >> 16)
    /* 9433C 80185F3C 0280043C */  lui        $a0, (0x80028000 >> 16)
    /* 94340 80185F40 00808434 */  ori        $a0, $a0, (0x80028000 & 0xFFFF)
    /* 94344 80185F44 20100524 */  addiu      $a1, $zero, 0x1020
    /* 94348 80185F48 0C0282A7 */  sh         $v0, %gp_rel(D_8019EF08)($gp)
    /* 9434C 80185F4C 00140200 */  sll        $v0, $v0, 16
    /* 94350 80185F50 2126060C */  jal        func_80189884
    /* 94354 80185F54 03340200 */   sra       $a2, $v0, 16
    /* 94358 80185F58 0C0282A7 */  sh         $v0, %gp_rel(D_8019EF08)($gp)
    /* 9435C 80185F5C B632060C */  jal        func_8018CAD8
    /* 94360 80185F60 01000424 */   addiu     $a0, $zero, 0x1
    /* 94364 80185F64 5028060C */  jal        func_8018A140
    /* 94368 80185F68 00000000 */   nop
    /* 9436C 80185F6C 7F000424 */  addiu      $a0, $zero, 0x7F
    /* 94370 80185F70 BA26060C */  jal        func_80189AE8
    /* 94374 80185F74 7F000524 */   addiu     $a1, $zero, 0x7F
    /* 94378 80185F78 21200000 */  addu       $a0, $zero, $zero
    /* 9437C 80185F7C FF00053C */  lui        $a1, (0xFFFFFF >> 16)
    /* 94380 80185F80 E20180A7 */  sh         $zero, %gp_rel(D_8019EEDE)($gp)
    /* 94384 80185F84 100280A7 */  sh         $zero, %gp_rel(D_8019EF0C)($gp)
    /* 94388 80185F88 8231060C */  jal        func_8018C608
    /* 9438C 80185F8C FFFFA534 */   ori       $a1, $a1, (0xFFFFFF & 0xFFFF)
    /* 94390 80185F90 1000BF8F */  lw         $ra, 0x10($sp)
    /* 94394 80185F94 1E0280A7 */  sh         $zero, %gp_rel(D_8019EF1A)($gp)
    /* 94398 80185F98 0800E003 */  jr         $ra
    /* 9439C 80185F9C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80185F2C
