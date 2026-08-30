nonmatching func_800FC548, 0x60

glabel func_800FC548
    /* A948 800FC548 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* A94C 800FC54C 1000BFAF */  sw         $ra, 0x10($sp)
    /* A950 800FC550 53D9030C */  jal        func_800F654C
    /* A954 800FC554 5C000424 */   addiu     $a0, $zero, 0x5C
    /* A958 800FC558 62E0030C */  jal        func_800F8188
    /* A95C 800FC55C 00020424 */   addiu     $a0, $zero, 0x200
    /* A960 800FC560 62E0030C */  jal        func_800F8188
    /* A964 800FC564 04020424 */   addiu     $a0, $zero, 0x204
    /* A968 800FC568 77DC030C */  jal        func_800F71DC
    /* A96C 800FC56C A5920434 */   ori       $a0, $zero, 0x92A5
    /* A970 800FC570 40E3030C */  jal        func_800F8D00
    /* A974 800FC574 01020424 */   addiu     $a0, $zero, 0x201
    /* A978 800FC578 DDE3030C */  jal        func_800F8F74
    /* A97C 800FC57C 03020424 */   addiu     $a0, $zero, 0x203
    /* A980 800FC580 77DC030C */  jal        func_800F71DC
    /* A984 800FC584 80940434 */   ori       $a0, $zero, 0x9480
    /* A988 800FC588 40E3030C */  jal        func_800F8D00
    /* A98C 800FC58C 05020424 */   addiu     $a0, $zero, 0x205
    /* A990 800FC590 DDE3030C */  jal        func_800F8F74
    /* A994 800FC594 07020424 */   addiu     $a0, $zero, 0x207
    /* A998 800FC598 1000BF8F */  lw         $ra, 0x10($sp)
    /* A99C 800FC59C 00000000 */  nop
    /* A9A0 800FC5A0 0800E003 */  jr         $ra
    /* A9A4 800FC5A4 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800FC548
