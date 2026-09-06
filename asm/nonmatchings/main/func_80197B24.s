nonmatching func_80197B24, 0x90

glabel func_80197B24
    /* A5F24 80197B24 D8FFBD27 */  addiu      $sp, $sp, -0x28
    /* A5F28 80197B28 1000B0AF */  sw         $s0, 0x10($sp)
    /* A5F2C 80197B2C 21808000 */  addu       $s0, $a0, $zero
    /* A5F30 80197B30 1400B1AF */  sw         $s1, 0x14($sp)
    /* A5F34 80197B34 2188A000 */  addu       $s1, $a1, $zero
    /* A5F38 80197B38 1800B2AF */  sw         $s2, 0x18($sp)
    /* A5F3C 80197B3C 2190C000 */  addu       $s2, $a2, $zero
    /* A5F40 80197B40 1C00B3AF */  sw         $s3, 0x1C($sp)
    /* A5F44 80197B44 2000BFAF */  sw         $ra, 0x20($sp)
    /* A5F48 80197B48 9E5F060C */  jal        func_80197E78
    /* A5F4C 80197B4C 2198E000 */   addu      $s3, $a3, $zero
    /* A5F50 80197B50 BA5D060C */  jal        func_801976E8
    /* A5F54 80197B54 00000000 */   nop
    /* A5F58 80197B58 605F060C */  jal        func_80197D80
    /* A5F5C 80197B5C 00000000 */   nop
    /* A5F60 80197B60 BE5D060C */  jal        func_801976F8
    /* A5F64 80197B64 00000000 */   nop
    /* A5F68 80197B68 E65D060C */  jal        func_80197798
    /* A5F6C 80197B6C 21200000 */   addu      $a0, $zero, $zero
    /* A5F70 80197B70 F95E060C */  jal        func_80197BE4
    /* A5F74 80197B74 00000000 */   nop
    /* A5F78 80197B78 21200002 */  addu       $a0, $s0, $zero
    /* A5F7C 80197B7C 21282002 */  addu       $a1, $s1, $zero
    /* A5F80 80197B80 21304002 */  addu       $a2, $s2, $zero
    /* A5F84 80197B84 425F060C */  jal        func_80197D08
    /* A5F88 80197B88 21386002 */   addu      $a3, $s3, $zero
    /* A5F8C 80197B8C 01000224 */  addiu      $v0, $zero, 0x1
    /* A5F90 80197B90 1A80013C */  lui        $at, %hi(D_8019DCB4)
    /* A5F94 80197B94 B4DC22AC */  sw         $v0, %lo(D_8019DCB4)($at)
    /* A5F98 80197B98 2000BF8F */  lw         $ra, 0x20($sp)
    /* A5F9C 80197B9C 1C00B38F */  lw         $s3, 0x1C($sp)
    /* A5FA0 80197BA0 1800B28F */  lw         $s2, 0x18($sp)
    /* A5FA4 80197BA4 1400B18F */  lw         $s1, 0x14($sp)
    /* A5FA8 80197BA8 1000B08F */  lw         $s0, 0x10($sp)
    /* A5FAC 80197BAC 0800E003 */  jr         $ra
    /* A5FB0 80197BB0 2800BD27 */   addiu     $sp, $sp, 0x28
endlabel func_80197B24
