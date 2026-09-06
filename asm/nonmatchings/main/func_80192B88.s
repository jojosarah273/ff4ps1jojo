nonmatching func_80192B88, 0x34

glabel func_80192B88
    /* A0F88 80192B88 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* A0F8C 80192B8C 1A80023C */  lui        $v0, %hi(D_8019CEF4)
    /* A0F90 80192B90 F4CE428C */  lw         $v0, %lo(D_8019CEF4)($v0)
    /* A0F94 80192B94 21288000 */  addu       $a1, $a0, $zero
    /* A0F98 80192B98 1000BFAF */  sw         $ra, 0x10($sp)
    /* A0F9C 80192B9C 1400428C */  lw         $v0, 0x14($v0)
    /* A0FA0 80192BA0 00000000 */  nop
    /* A0FA4 80192BA4 09F84000 */  jalr       $v0
    /* A0FA8 80192BA8 04000424 */   addiu     $a0, $zero, 0x4
    /* A0FAC 80192BAC 1000BF8F */  lw         $ra, 0x10($sp)
    /* A0FB0 80192BB0 1800BD27 */  addiu      $sp, $sp, 0x18
    /* A0FB4 80192BB4 0800E003 */  jr         $ra
    /* A0FB8 80192BB8 00000000 */   nop
endlabel func_80192B88
