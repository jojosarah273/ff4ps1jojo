nonmatching func_8017E740, 0x54

glabel func_8017E740
    /* 8CB40 8017E740 E0FFBD27 */  addiu      $sp, $sp, -0x20
    /* 8CB44 8017E744 1400B1AF */  sw         $s1, 0x14($sp)
    /* 8CB48 8017E748 14019124 */  addiu      $s1, $a0, 0x114
    /* 8CB4C 8017E74C 1000B0AF */  sw         $s0, 0x10($sp)
    /* 8CB50 8017E750 70009024 */  addiu      $s0, $a0, 0x70
    /* 8CB54 8017E754 1800B2AF */  sw         $s2, 0x18($sp)
    /* 8CB58 8017E758 28001224 */  addiu      $s2, $zero, 0x28
    /* 8CB5C 8017E75C 1C00BFAF */  sw         $ra, 0x1C($sp)
  .L8017E760:
    /* 8CB60 8017E760 21200002 */  addu       $a0, $s0, $zero
    /* 8CB64 8017E764 825C060C */  jal        func_80197208
    /* 8CB68 8017E768 21282002 */   addu      $a1, $s1, $zero
    /* 8CB6C 8017E76C FFFF5226 */  addiu      $s2, $s2, -0x1
    /* 8CB70 8017E770 04001026 */  addiu      $s0, $s0, 0x4
    /* 8CB74 8017E774 FAFF4106 */  bgez       $s2, .L8017E760
    /* 8CB78 8017E778 0C003126 */   addiu     $s1, $s1, 0xC
    /* 8CB7C 8017E77C 1C00BF8F */  lw         $ra, 0x1C($sp)
    /* 8CB80 8017E780 1800B28F */  lw         $s2, 0x18($sp)
    /* 8CB84 8017E784 1400B18F */  lw         $s1, 0x14($sp)
    /* 8CB88 8017E788 1000B08F */  lw         $s0, 0x10($sp)
    /* 8CB8C 8017E78C 0800E003 */  jr         $ra
    /* 8CB90 8017E790 2000BD27 */   addiu     $sp, $sp, 0x20
endlabel func_8017E740
