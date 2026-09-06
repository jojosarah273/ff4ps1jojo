nonmatching func_80194B90, 0x34

glabel func_80194B90
    /* A2F90 80194B90 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* A2F94 80194B94 1000B0AF */  sw         $s0, 0x10($sp)
    /* A2F98 80194B98 21808000 */  addu       $s0, $a0, $zero
    /* A2F9C 80194B9C 1A80053C */  lui        $a1, %hi(D_8019DB64)
    /* A2FA0 80194BA0 64DBA524 */  addiu      $a1, $a1, %lo(D_8019DB64)
    /* A2FA4 80194BA4 1400BFAF */  sw         $ra, 0x14($sp)
    /* A2FA8 80194BA8 2240060C */  jal        func_80190088
    /* A2FAC 80194BAC 5C000624 */   addiu     $a2, $zero, 0x5C
    /* A2FB0 80194BB0 21100002 */  addu       $v0, $s0, $zero
    /* A2FB4 80194BB4 1400BF8F */  lw         $ra, 0x14($sp)
    /* A2FB8 80194BB8 1000B08F */  lw         $s0, 0x10($sp)
    /* A2FBC 80194BBC 0800E003 */  jr         $ra
    /* A2FC0 80194BC0 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80194B90
