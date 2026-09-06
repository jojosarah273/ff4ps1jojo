nonmatching func_800FE6E4, 0x94

glabel func_800FE6E4
    /* CAE4 800FE6E4 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* CAE8 800FE6E8 1000BFAF */  sw         $ra, 0x10($sp)
    /* CAEC 800FE6EC 0FCF030C */  jal        func_800F3C3C
    /* CAF0 800FE6F0 21200000 */   addu      $a0, $zero, $zero
    /* CAF4 800FE6F4 6E004590 */  lbu        $a1, 0x6E($v0)
    /* CAF8 800FE6F8 1A80013C */  lui        $at, %hi(D_8019EE28)
    /* CAFC 800FE6FC 28EE25AC */  sw         $a1, %lo(D_8019EE28)($at)
    /* CB00 800FE700 6F004390 */  lbu        $v1, 0x6F($v0)
    /* CB04 800FE704 00000000 */  nop
    /* CB08 800FE708 001A0300 */  sll        $v1, $v1, 8
    /* CB0C 800FE70C 2528A300 */  or         $a1, $a1, $v1
    /* CB10 800FE710 1A80013C */  lui        $at, %hi(D_8019EE28)
    /* CB14 800FE714 28EE25AC */  sw         $a1, %lo(D_8019EE28)($at)
    /* CB18 800FE718 1A80013C */  lui        $at, %hi(D_8019EE5C)
    /* CB1C 800FE71C 5CEE25AC */  sw         $a1, %lo(D_8019EE5C)($at)
    /* CB20 800FE720 70004490 */  lbu        $a0, 0x70($v0)
    /* CB24 800FE724 00000000 */  nop
    /* CB28 800FE728 00240400 */  sll        $a0, $a0, 16
    /* CB2C 800FE72C 2520A400 */  or         $a0, $a1, $a0
    /* CB30 800FE730 1A80013C */  lui        $at, %hi(D_8019EE5C)
    /* CB34 800FE734 5CEE24AC */  sw         $a0, %lo(D_8019EE5C)($at)
    /* CB38 800FE738 71004390 */  lbu        $v1, 0x71($v0)
    /* CB3C 800FE73C F7000224 */  addiu      $v0, $zero, 0xF7
    /* CB40 800FE740 001E0300 */  sll        $v1, $v1, 24
    /* CB44 800FE744 25208300 */  or         $a0, $a0, $v1
    /* CB48 800FE748 1A80013C */  lui        $at, %hi(D_8019EE5C)
    /* CB4C 800FE74C 5CEE24AC */  sw         $a0, %lo(D_8019EE5C)($at)
    /* CB50 800FE750 0500A214 */  bne        $a1, $v0, .L800FE768
    /* CB54 800FE754 00010224 */   addiu     $v0, $zero, 0x100
    /* CB58 800FE758 1A80013C */  lui        $at, %hi(D_8019EE28)
    /* CB5C 800FE75C 28EE22AC */  sw         $v0, %lo(D_8019EE28)($at)
    /* CB60 800FE760 1A80013C */  lui        $at, %hi(D_8019EE5C)
    /* CB64 800FE764 5CEE22AC */  sw         $v0, %lo(D_8019EE5C)($at)
  .L800FE768:
    /* CB68 800FE768 1000BF8F */  lw         $ra, 0x10($sp)
    /* CB6C 800FE76C 00000000 */  nop
    /* CB70 800FE770 0800E003 */  jr         $ra
    /* CB74 800FE774 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800FE6E4
