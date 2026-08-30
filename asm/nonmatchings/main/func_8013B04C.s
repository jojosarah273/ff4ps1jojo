nonmatching func_8013B04C, 0x78

glabel func_8013B04C
    /* 4944C 8013B04C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 49450 8013B050 1000BFAF */  sw         $ra, 0x10($sp)
    /* 49454 8013B054 84DC030C */  jal        func_800F7210
    /* 49458 8013B058 AE160424 */   addiu     $a0, $zero, 0x16AE
    /* 4945C 8013B05C 40E3030C */  jal        func_800F8D00
    /* 49460 8013B060 371A0424 */   addiu     $a0, $zero, 0x1A37
    /* 49464 8013B064 84DC030C */  jal        func_800F7210
    /* 49468 8013B068 B0160424 */   addiu     $a0, $zero, 0x16B0
    /* 4946C 8013B06C 40E3030C */  jal        func_800F8D00
    /* 49470 8013B070 391A0424 */   addiu     $a0, $zero, 0x1A39
    /* 49474 8013B074 59D9030C */  jal        func_800F6564
    /* 49478 8013B078 B2160424 */   addiu     $a0, $zero, 0x16B2
    /* 4947C 8013B07C 62E0030C */  jal        func_800F8188
    /* 49480 8013B080 3B1A0424 */   addiu     $a0, $zero, 0x1A3B
    /* 49484 8013B084 1A80033C */  lui        $v1, %hi(D_8019ED54)
    /* 49488 8013B088 54ED638C */  lw         $v1, %lo(D_8019ED54)($v1)
    /* 4948C 8013B08C 00000000 */  nop
    /* 49490 8013B090 00006294 */  lhu        $v0, 0x0($v1)
    /* 49494 8013B094 00000000 */  nop
    /* 49498 8013B098 02130200 */  srl        $v0, $v0, 12
    /* 4949C 8013B09C 1A80013C */  lui        $at, %hi(D_8019EE42)
    /* 494A0 8013B0A0 42EE22A0 */  sb         $v0, %lo(D_8019EE42)($at)
    /* 494A4 8013B0A4 D5D6040C */  jal        func_80135B54
    /* 494A8 8013B0A8 00000000 */   nop
    /* 494AC 8013B0AC 197E040C */  jal        func_8011F864
    /* 494B0 8013B0B0 00000000 */   nop
    /* 494B4 8013B0B4 1000BF8F */  lw         $ra, 0x10($sp)
    /* 494B8 8013B0B8 00000000 */  nop
    /* 494BC 8013B0BC 0800E003 */  jr         $ra
    /* 494C0 8013B0C0 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8013B04C
