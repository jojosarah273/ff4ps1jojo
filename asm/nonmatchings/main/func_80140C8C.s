nonmatching func_80140C8C, 0x70

glabel func_80140C8C
    /* 4F08C 80140C8C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 4F090 80140C90 1000BFAF */  sw         $ra, 0x10($sp)
    /* 4F094 80140C94 B002050C */  jal        func_80140AC0
    /* 4F098 80140C98 00000000 */   nop
    /* 4F09C 80140C9C C7E5030C */  jal        func_800F971C
    /* 4F0A0 80140CA0 00000000 */   nop
    /* 4F0A4 80140CA4 DAE1030C */  jal        func_800F8768
    /* 4F0A8 80140CA8 03200424 */   addiu     $a0, $zero, 0x2003
    /* 4F0AC 80140CAC DAE1030C */  jal        func_800F8768
    /* 4F0B0 80140CB0 04200424 */   addiu     $a0, $zero, 0x2004
    /* 4F0B4 80140CB4 DAE1030C */  jal        func_800F8768
    /* 4F0B8 80140CB8 05200424 */   addiu     $a0, $zero, 0x2005
    /* 4F0BC 80140CBC DAE1030C */  jal        func_800F8768
    /* 4F0C0 80140CC0 06200424 */   addiu     $a0, $zero, 0x2006
    /* 4F0C4 80140CC4 1A80023C */  lui        $v0, %hi(D_8019ED60)
    /* 4F0C8 80140CC8 60ED428C */  lw         $v0, %lo(D_8019ED60)($v0)
    /* 4F0CC 80140CCC 1A80053C */  lui        $a1, %hi(D_8019ED40)
    /* 4F0D0 80140CD0 40EDA58C */  lw         $a1, %lo(D_8019ED40)($a1)
    /* 4F0D4 80140CD4 00004390 */  lbu        $v1, 0x0($v0)
    /* 4F0D8 80140CD8 75F40434 */  ori        $a0, $zero, 0xF475
    /* 4F0DC 80140CDC 62E0030C */  jal        func_800F8188
    /* 4F0E0 80140CE0 0000A3A0 */   sb        $v1, 0x0($a1)
    /* 4F0E4 80140CE4 90D8030C */  jal        func_800F6240
    /* 4F0E8 80140CE8 74F40434 */   ori       $a0, $zero, 0xF474
    /* 4F0EC 80140CEC 1000BF8F */  lw         $ra, 0x10($sp)
    /* 4F0F0 80140CF0 00000000 */  nop
    /* 4F0F4 80140CF4 0800E003 */  jr         $ra
    /* 4F0F8 80140CF8 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80140C8C
