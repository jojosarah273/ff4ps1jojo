nonmatching func_801932E8, 0x4C

glabel func_801932E8
    /* A16E8 801932E8 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* A16EC 801932EC 1A80043C */  lui        $a0, %hi(D_8019CF48)
    /* A16F0 801932F0 48CF8424 */  addiu      $a0, $a0, %lo(D_8019CF48)
    /* A16F4 801932F4 1000BFAF */  sw         $ra, 0x10($sp)
    /* A16F8 801932F8 584D060C */  jal        func_80193560
    /* A16FC 801932FC 08000524 */   addiu     $a1, $zero, 0x8
    /* A1700 80193300 03000424 */  addiu      $a0, $zero, 0x3
    /* A1704 80193304 1A80023C */  lui        $v0, %hi(D_8019CF44)
    /* A1708 80193308 44CF428C */  lw         $v0, %lo(D_8019CF44)($v0)
    /* A170C 8019330C 1980053C */  lui        $a1, %hi(func_80193334)
    /* A1710 80193310 3433A524 */  addiu      $a1, $a1, %lo(func_80193334)
    /* A1714 80193314 CA4A060C */  jal        func_80192B28
    /* A1718 80193318 000040AC */   sw        $zero, 0x0($v0)
    /* A171C 8019331C 1980023C */  lui        $v0, %hi(func_801934B4)
    /* A1720 80193320 B4344224 */  addiu      $v0, $v0, %lo(func_801934B4)
    /* A1724 80193324 1000BF8F */  lw         $ra, 0x10($sp)
    /* A1728 80193328 1800BD27 */  addiu      $sp, $sp, 0x18
    /* A172C 8019332C 0800E003 */  jr         $ra
    /* A1730 80193330 00000000 */   nop
endlabel func_801932E8
