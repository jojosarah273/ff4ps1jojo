nonmatching func_801757A4, 0x98

glabel func_801757A4
    /* 83BA4 801757A4 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 83BA8 801757A8 1000BFAF */  sw         $ra, 0x10($sp)
    /* 83BAC 801757AC 91E5030C */  jal        func_800F9644
    /* 83BB0 801757B0 20000424 */   addiu     $a0, $zero, 0x20
    /* 83BB4 801757B4 77DC030C */  jal        func_800F71DC
    /* 83BB8 801757B8 21200000 */   addu      $a0, $zero, $zero
  .L801757BC:
    /* 83BBC 801757BC F8DA030C */  jal        func_800F6BE0
    /* 83BC0 801757C0 DB0C0424 */   addiu     $a0, $zero, 0xCDB
    /* 83BC4 801757C4 1A80033C */  lui        $v1, %hi(D_8019ED44)
    /* 83BC8 801757C8 44ED638C */  lw         $v1, %lo(D_8019ED44)($v1)
    /* 83BCC 801757CC 00000000 */  nop
    /* 83BD0 801757D0 00006294 */  lhu        $v0, 0x0($v1)
    /* 83BD4 801757D4 DE7B0424 */  addiu      $a0, $zero, 0x7BDE
    /* 83BD8 801757D8 FF7F4238 */  xori       $v0, $v0, 0x7FFF
    /* 83BDC 801757DC 99D0030C */  jal        func_800F4264
    /* 83BE0 801757E0 000062A4 */   sh        $v0, 0x0($v1)
    /* 83BE4 801757E4 25DE030C */  jal        func_800F7894
    /* 83BE8 801757E8 00000000 */   nop
    /* 83BEC 801757EC F7E1030C */  jal        func_800F87DC
    /* 83BF0 801757F0 DB0B0424 */   addiu     $a0, $zero, 0xBDB
    /* 83BF4 801757F4 D9D8030C */  jal        func_800F6364
    /* 83BF8 801757F8 00000000 */   nop
    /* 83BFC 801757FC D9D8030C */  jal        func_800F6364
    /* 83C00 80175800 00000000 */   nop
    /* 83C04 80175804 56D6030C */  jal        func_800F5958
    /* 83C08 80175808 00010424 */   addiu     $a0, $zero, 0x100
    /* 83C0C 8017580C F5D4030C */  jal        func_800F53D4
    /* 83C10 80175810 00000000 */   nop
    /* 83C14 80175814 E9FF4010 */  beqz       $v0, .L801757BC
    /* 83C18 80175818 00000000 */   nop
    /* 83C1C 8017581C 56D9030C */  jal        func_800F6558
    /* 83C20 80175820 21200000 */   addu      $a0, $zero, $zero
    /* 83C24 80175824 98E5030C */  jal        func_800F9660
    /* 83C28 80175828 20000424 */   addiu     $a0, $zero, 0x20
    /* 83C2C 8017582C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 83C30 80175830 00000000 */  nop
    /* 83C34 80175834 0800E003 */  jr         $ra
    /* 83C38 80175838 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_801757A4
