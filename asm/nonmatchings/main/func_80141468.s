nonmatching func_80141468, 0xC8

glabel func_80141468
    /* 4F868 80141468 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 4F86C 8014146C 1000BFAF */  sw         $ra, 0x10($sp)
    /* 4F870 80141470 59D9030C */  jal        func_800F6564
    /* 4F874 80141474 0FF40434 */   ori       $a0, $zero, 0xF40F
    /* 4F878 80141478 0DD9030C */  jal        func_800F6434
    /* 4F87C 8014147C 02020424 */   addiu     $a0, $zero, 0x202
    /* 4F880 80141480 59D9030C */  jal        func_800F6564
    /* 4F884 80141484 10F40434 */   ori       $a0, $zero, 0xF410
    /* 4F888 80141488 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 4F88C 8014148C 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 4F890 80141490 00000000 */  nop
    /* 4F894 80141494 00006290 */  lbu        $v0, 0x0($v1)
    /* 4F898 80141498 00000000 */  nop
    /* 4F89C 8014149C C0100200 */  sll        $v0, $v0, 3
    /* 4F8A0 801414A0 000062A0 */  sb         $v0, 0x0($v1)
    /* 4F8A4 801414A4 1A80043C */  lui        $a0, %hi(D_8019ED44)
    /* 4F8A8 801414A8 44ED848C */  lw         $a0, %lo(D_8019ED44)($a0)
    /* 4F8AC 801414AC 1A80033C */  lui        $v1, %hi(D_8019ED54)
    /* 4F8B0 801414B0 54ED638C */  lw         $v1, %lo(D_8019ED54)($v1)
    /* 4F8B4 801414B4 00008294 */  lhu        $v0, 0x0($a0)
    /* 4F8B8 801414B8 C7E5030C */  jal        func_800F971C
    /* 4F8BC 801414BC 000062A4 */   sh        $v0, 0x0($v1)
    /* 4F8C0 801414C0 1A80033C */  lui        $v1, %hi(D_8019ED44)
    /* 4F8C4 801414C4 44ED638C */  lw         $v1, %lo(D_8019ED44)($v1)
    /* 4F8C8 801414C8 1A80043C */  lui        $a0, %hi(D_8019ED58)
    /* 4F8CC 801414CC 58ED848C */  lw         $a0, %lo(D_8019ED58)($a0)
    /* 4F8D0 801414D0 00006294 */  lhu        $v0, 0x0($v1)
    /* 4F8D4 801414D4 00000000 */  nop
    /* 4F8D8 801414D8 000082A4 */  sh         $v0, 0x0($a0)
    /* 4F8DC 801414DC 0D00043C */  lui        $a0, (0xDFD4C >> 16)
  .L801414E0:
    /* 4F8E0 801414E0 1ADB030C */  jal        func_800F6C68
    /* 4F8E4 801414E4 4CFD8434 */   ori       $a0, $a0, (0xDFD4C & 0xFFFF)
    /* 4F8E8 801414E8 58E2030C */  jal        func_800F8960
    /* 4F8EC 801414EC CAF00434 */   ori       $a0, $zero, 0xF0CA
    /* 4F8F0 801414F0 D9D8030C */  jal        func_800F6364
    /* 4F8F4 801414F4 00000000 */   nop
    /* 4F8F8 801414F8 EFD8030C */  jal        func_800F63BC
    /* 4F8FC 801414FC 00000000 */   nop
    /* 4F900 80141500 A4D6030C */  jal        func_800F5A90
    /* 4F904 80141504 06000424 */   addiu     $a0, $zero, 0x6
    /* 4F908 80141508 F5D4030C */  jal        func_800F53D4
    /* 4F90C 8014150C 00000000 */   nop
    /* 4F910 80141510 F3FF4010 */  beqz       $v0, .L801414E0
    /* 4F914 80141514 0D00043C */   lui       $a0, (0xDFD4C >> 16)
    /* 4F918 80141518 90D8030C */  jal        func_800F6240
    /* 4F91C 8014151C C9F00434 */   ori       $a0, $zero, 0xF0C9
    /* 4F920 80141520 1000BF8F */  lw         $ra, 0x10($sp)
    /* 4F924 80141524 00000000 */  nop
    /* 4F928 80141528 0800E003 */  jr         $ra
    /* 4F92C 8014152C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80141468
