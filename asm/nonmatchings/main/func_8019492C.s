nonmatching func_8019492C, 0x5C

glabel func_8019492C
    /* A2D2C 8019492C E0FFBD27 */  addiu      $sp, $sp, -0x20
    /* A2D30 80194930 1000B0AF */  sw         $s0, 0x10($sp)
    /* A2D34 80194934 21808000 */  addu       $s0, $a0, $zero
    /* A2D38 80194938 1A80023C */  lui        $v0, %hi(D_8019DB4C)
    /* A2D3C 8019493C 4CDB428C */  lw         $v0, %lo(D_8019DB4C)($v0)
    /* A2D40 80194940 1800BFAF */  sw         $ra, 0x18($sp)
    /* A2D44 80194944 1400B1AF */  sw         $s1, 0x14($sp)
    /* A2D48 80194948 3C00428C */  lw         $v0, 0x3C($v0)
    /* A2D4C 8019494C 03001192 */  lbu        $s1, 0x3($s0)
    /* A2D50 80194950 09F84000 */  jalr       $v0
    /* A2D54 80194954 21200000 */   addu      $a0, $zero, $zero
    /* A2D58 80194958 1A80023C */  lui        $v0, %hi(D_8019DB4C)
    /* A2D5C 8019495C 4CDB428C */  lw         $v0, %lo(D_8019DB4C)($v0)
    /* A2D60 80194960 04000426 */  addiu      $a0, $s0, 0x4
    /* A2D64 80194964 1400428C */  lw         $v0, 0x14($v0)
    /* A2D68 80194968 00000000 */  nop
    /* A2D6C 8019496C 09F84000 */  jalr       $v0
    /* A2D70 80194970 21282002 */   addu      $a1, $s1, $zero
    /* A2D74 80194974 1800BF8F */  lw         $ra, 0x18($sp)
    /* A2D78 80194978 1400B18F */  lw         $s1, 0x14($sp)
    /* A2D7C 8019497C 1000B08F */  lw         $s0, 0x10($sp)
    /* A2D80 80194980 0800E003 */  jr         $ra
    /* A2D84 80194984 2000BD27 */   addiu     $sp, $sp, 0x20
endlabel func_8019492C
