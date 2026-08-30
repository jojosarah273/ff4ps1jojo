nonmatching func_8012F9A0, 0x30

glabel func_8012F9A0
    /* 3DDA0 8012F9A0 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 3DDA4 8012F9A4 1000BFAF */  sw         $ra, 0x10($sp)
    /* 3DDA8 8012F9A8 EF83040C */  jal        func_80120FBC
    /* 3DDAC 8012F9AC 00000000 */   nop
    /* 3DDB0 8012F9B0 74BE040C */  jal        func_8012F9D0
    /* 3DDB4 8012F9B4 00000000 */   nop
    /* 3DDB8 8012F9B8 1699040C */  jal        func_80126458
    /* 3DDBC 8012F9BC 00000000 */   nop
    /* 3DDC0 8012F9C0 1000BF8F */  lw         $ra, 0x10($sp)
    /* 3DDC4 8012F9C4 00000000 */  nop
    /* 3DDC8 8012F9C8 0800E003 */  jr         $ra
    /* 3DDCC 8012F9CC 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8012F9A0
