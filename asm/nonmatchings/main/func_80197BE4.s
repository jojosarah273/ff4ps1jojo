nonmatching func_80197BE4, 0x78

glabel func_80197BE4
    /* A5FE4 80197BE4 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* A5FE8 80197BE8 1400BFAF */  sw         $ra, 0x14($sp)
    /* A5FEC 80197BEC BA5D060C */  jal        func_801976E8
    /* A5FF0 80197BF0 1000B0AF */   sw        $s0, 0x10($sp)
    /* A5FF4 80197BF4 01000424 */  addiu      $a0, $zero, 0x1
    /* A5FF8 80197BF8 2080033C */  lui        $v1, %hi(D_801FEBEC)
    /* A5FFC 80197BFC ECEB6324 */  addiu      $v1, $v1, %lo(D_801FEBEC)
    /* A6000 80197C00 FCFF7024 */  addiu      $s0, $v1, -0x4
    /* A6004 80197C04 1980023C */  lui        $v0, %hi(func_80197C5C)
    /* A6008 80197C08 5C7C4224 */  addiu      $v0, $v0, %lo(func_80197C5C)
    /* A600C 80197C0C 000062AC */  sw         $v0, 0x0($v1)
    /* A6010 80197C10 1980023C */  lui        $v0, %hi(func_80197CC4)
    /* A6014 80197C14 C47C4224 */  addiu      $v0, $v0, %lo(func_80197CC4)
    /* A6018 80197C18 040062AC */  sw         $v0, 0x4($v1)
    /* A601C 80197C1C 2080013C */  lui        $at, %hi(D_801FEBE8)
    /* A6020 80197C20 E8EB20AC */  sw         $zero, %lo(D_801FEBE8)($at)
    /* A6024 80197C24 2080013C */  lui        $at, %hi(D_801FEBF4)
    /* A6028 80197C28 F4EB20AC */  sw         $zero, %lo(D_801FEBF4)($at)
    /* A602C 80197C2C 525F060C */  jal        func_80197D48
    /* A6030 80197C30 21280002 */   addu      $a1, $s0, $zero
    /* A6034 80197C34 01000424 */  addiu      $a0, $zero, 0x1
    /* A6038 80197C38 4E5F060C */  jal        func_80197D38
    /* A603C 80197C3C 21280002 */   addu      $a1, $s0, $zero
    /* A6040 80197C40 BE5D060C */  jal        func_801976F8
    /* A6044 80197C44 00000000 */   nop
    /* A6048 80197C48 01000224 */  addiu      $v0, $zero, 0x1
    /* A604C 80197C4C 1400BF8F */  lw         $ra, 0x14($sp)
    /* A6050 80197C50 1000B08F */  lw         $s0, 0x10($sp)
    /* A6054 80197C54 0800E003 */  jr         $ra
    /* A6058 80197C58 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80197BE4
