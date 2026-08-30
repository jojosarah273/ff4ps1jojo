nonmatching func_80179930, 0x28

glabel func_80179930
    /* 87D30 80179930 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 87D34 80179934 1780043C */  lui        $a0, %hi(func_80177F3C)
    /* 87D38 80179938 1000BFAF */  sw         $ra, 0x10($sp)
    /* 87D3C 8017993C 360180A7 */  sh         $zero, %gp_rel(D_8019EE32)($gp)
    /* 87D40 80179940 E24A060C */  jal        func_80192B88
    /* 87D44 80179944 3C7F8424 */   addiu     $a0, $a0, %lo(func_80177F3C)
    /* 87D48 80179948 1000BF8F */  lw         $ra, 0x10($sp)
    /* 87D4C 8017994C 00000000 */  nop
    /* 87D50 80179950 0800E003 */  jr         $ra
    /* 87D54 80179954 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80179930
