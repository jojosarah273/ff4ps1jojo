nonmatching func_80197A94, 0x90

glabel func_80197A94
    /* A5E94 80197A94 D8FFBD27 */  addiu      $sp, $sp, -0x28
    /* A5E98 80197A98 1000B0AF */  sw         $s0, 0x10($sp)
    /* A5E9C 80197A9C 21808000 */  addu       $s0, $a0, $zero
    /* A5EA0 80197AA0 1400B1AF */  sw         $s1, 0x14($sp)
    /* A5EA4 80197AA4 2188A000 */  addu       $s1, $a1, $zero
    /* A5EA8 80197AA8 1800B2AF */  sw         $s2, 0x18($sp)
    /* A5EAC 80197AAC 2190C000 */  addu       $s2, $a2, $zero
    /* A5EB0 80197AB0 1C00B3AF */  sw         $s3, 0x1C($sp)
    /* A5EB4 80197AB4 2000BFAF */  sw         $ra, 0x20($sp)
    /* A5EB8 80197AB8 9E5F060C */  jal        func_80197E78
    /* A5EBC 80197ABC 2198E000 */   addu      $s3, $a3, $zero
    /* A5EC0 80197AC0 BA5D060C */  jal        func_801976E8
    /* A5EC4 80197AC4 00000000 */   nop
    /* A5EC8 80197AC8 605F060C */  jal        func_80197D80
    /* A5ECC 80197ACC 00000000 */   nop
    /* A5ED0 80197AD0 BE5D060C */  jal        func_801976F8
    /* A5ED4 80197AD4 00000000 */   nop
    /* A5ED8 80197AD8 E65D060C */  jal        func_80197798
    /* A5EDC 80197ADC 21200000 */   addu      $a0, $zero, $zero
    /* A5EE0 80197AE0 F95E060C */  jal        func_80197BE4
    /* A5EE4 80197AE4 00000000 */   nop
    /* A5EE8 80197AE8 21200002 */  addu       $a0, $s0, $zero
    /* A5EEC 80197AEC 21282002 */  addu       $a1, $s1, $zero
    /* A5EF0 80197AF0 21304002 */  addu       $a2, $s2, $zero
    /* A5EF4 80197AF4 4A5F060C */  jal        func_80197D28
    /* A5EF8 80197AF8 21386002 */   addu      $a3, $s3, $zero
    /* A5EFC 80197AFC 01000224 */  addiu      $v0, $zero, 0x1
    /* A5F00 80197B00 1A80013C */  lui        $at, %hi(D_8019DCB4)
    /* A5F04 80197B04 B4DC22AC */  sw         $v0, %lo(D_8019DCB4)($at)
    /* A5F08 80197B08 2000BF8F */  lw         $ra, 0x20($sp)
    /* A5F0C 80197B0C 1C00B38F */  lw         $s3, 0x1C($sp)
    /* A5F10 80197B10 1800B28F */  lw         $s2, 0x18($sp)
    /* A5F14 80197B14 1400B18F */  lw         $s1, 0x14($sp)
    /* A5F18 80197B18 1000B08F */  lw         $s0, 0x10($sp)
    /* A5F1C 80197B1C 0800E003 */  jr         $ra
    /* A5F20 80197B20 2800BD27 */   addiu     $sp, $sp, 0x28
endlabel func_80197A94
