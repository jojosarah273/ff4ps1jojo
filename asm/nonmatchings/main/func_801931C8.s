nonmatching func_801931C8, 0x58

glabel func_801931C8
    /* A15C8 801931C8 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* A15CC 801931CC 1A80043C */  lui        $a0, %hi(D_8019CF14)
    /* A15D0 801931D0 14CF8424 */  addiu      $a0, $a0, %lo(D_8019CF14)
    /* A15D4 801931D4 1A80033C */  lui        $v1, %hi(D_8019CF38)
    /* A15D8 801931D8 38CF638C */  lw         $v1, %lo(D_8019CF38)($v1)
    /* A15DC 801931DC 00010224 */  addiu      $v0, $zero, 0x100
    /* A15E0 801931E0 1000BFAF */  sw         $ra, 0x10($sp)
    /* A15E4 801931E4 000062AC */  sw         $v0, 0x0($v1)
    /* A15E8 801931E8 1A80013C */  lui        $at, %hi(D_8019CF34)
    /* A15EC 801931EC 34CF20AC */  sw         $zero, %lo(D_8019CF34)($at)
    /* A15F0 801931F0 AE4C060C */  jal        func_801932B8
    /* A15F4 801931F4 08000524 */   addiu     $a1, $zero, 0x8
    /* A15F8 801931F8 1980053C */  lui        $a1, %hi(func_80193220)
    /* A15FC 801931FC 2032A524 */  addiu      $a1, $a1, %lo(func_80193220)
    /* A1600 80193200 CA4A060C */  jal        func_80192B28
    /* A1604 80193204 21200000 */   addu      $a0, $zero, $zero
    /* A1608 80193208 1980023C */  lui        $v0, %hi(func_8019328C)
    /* A160C 8019320C 8C324224 */  addiu      $v0, $v0, %lo(func_8019328C)
    /* A1610 80193210 1000BF8F */  lw         $ra, 0x10($sp)
    /* A1614 80193214 1800BD27 */  addiu      $sp, $sp, 0x18
    /* A1618 80193218 0800E003 */  jr         $ra
    /* A161C 8019321C 00000000 */   nop
endlabel func_801931C8
