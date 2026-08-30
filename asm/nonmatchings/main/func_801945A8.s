nonmatching func_801945A8, 0x98

glabel func_801945A8
    /* A29A8 801945A8 D8FFBD27 */  addiu      $sp, $sp, -0x28
    /* A29AC 801945AC 1C00B3AF */  sw         $s3, 0x1C($sp)
    /* A29B0 801945B0 21988000 */  addu       $s3, $a0, $zero
    /* A29B4 801945B4 0F80043C */  lui        $a0, %hi(D_800F3940)
    /* A29B8 801945B8 40398424 */  addiu      $a0, $a0, %lo(D_800F3940)
    /* A29BC 801945BC 1800B2AF */  sw         $s2, 0x18($sp)
    /* A29C0 801945C0 2190A000 */  addu       $s2, $a1, $zero
    /* A29C4 801945C4 21286002 */  addu       $a1, $s3, $zero
    /* A29C8 801945C8 1000B0AF */  sw         $s0, 0x10($sp)
    /* A29CC 801945CC 2180C000 */  addu       $s0, $a2, $zero
    /* A29D0 801945D0 1400B1AF */  sw         $s1, 0x14($sp)
    /* A29D4 801945D4 2000BFAF */  sw         $ra, 0x20($sp)
    /* A29D8 801945D8 FF50060C */  jal        func_801943FC
    /* A29DC 801945DC 2188E000 */   addu      $s1, $a3, $zero
    /* A29E0 801945E0 21286002 */  addu       $a1, $s3, $zero
    /* A29E4 801945E4 FF003132 */  andi       $s1, $s1, 0xFF
    /* A29E8 801945E8 008C1100 */  sll        $s1, $s1, 16
    /* A29EC 801945EC FF001032 */  andi       $s0, $s0, 0xFF
    /* A29F0 801945F0 00821000 */  sll        $s0, $s0, 8
    /* A29F4 801945F4 0080023C */  lui        $v0, (0x80000000 >> 16)
    /* A29F8 801945F8 25800202 */  or         $s0, $s0, $v0
    /* A29FC 801945FC 25883002 */  or         $s1, $s1, $s0
    /* A2A00 80194600 FF005232 */  andi       $s2, $s2, 0xFF
    /* A2A04 80194604 1A80033C */  lui        $v1, %hi(D_8019DB4C)
    /* A2A08 80194608 4CDB638C */  lw         $v1, %lo(D_8019DB4C)($v1)
    /* A2A0C 8019460C 08000624 */  addiu      $a2, $zero, 0x8
    /* A2A10 80194610 0C00648C */  lw         $a0, 0xC($v1)
    /* A2A14 80194614 0800628C */  lw         $v0, 0x8($v1)
    /* A2A18 80194618 00000000 */  nop
    /* A2A1C 8019461C 09F84000 */  jalr       $v0
    /* A2A20 80194620 25383202 */   or        $a3, $s1, $s2
    /* A2A24 80194624 2000BF8F */  lw         $ra, 0x20($sp)
    /* A2A28 80194628 1C00B38F */  lw         $s3, 0x1C($sp)
    /* A2A2C 8019462C 1800B28F */  lw         $s2, 0x18($sp)
    /* A2A30 80194630 1400B18F */  lw         $s1, 0x14($sp)
    /* A2A34 80194634 1000B08F */  lw         $s0, 0x10($sp)
    /* A2A38 80194638 0800E003 */  jr         $ra
    /* A2A3C 8019463C 2800BD27 */   addiu     $sp, $sp, 0x28
endlabel func_801945A8
