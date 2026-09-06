nonmatching func_8013C2FC, 0x150

glabel func_8013C2FC
    /* 4A6FC 8013C2FC E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 4A700 8013C300 1000BFAF */  sw         $ra, 0x10($sp)
  .L8013C304:
    /* 4A704 8013C304 2B84040C */  jal        func_801210AC
    /* 4A708 8013C308 00000000 */   nop
    /* 4A70C 8013C30C 1A80023C */  lui        $v0, %hi(D_80199266)
    /* 4A710 8013C310 66924494 */  lhu        $a0, %lo(D_80199266)($v0)
    /* 4A714 8013C314 40DD030C */  jal        func_800F7500
    /* 4A718 8013C318 00000000 */   nop
    /* 4A71C 8013C31C E97E040C */  jal        func_8011FBA4
    /* 4A720 8013C320 00000000 */   nop
    /* 4A724 8013C324 13F1040C */  jal        func_8013C44C
    /* 4A728 8013C328 00000000 */   nop
    /* 4A72C 8013C32C A17D040C */  jal        func_8011F684
    /* 4A730 8013C330 00000000 */   nop
    /* 4A734 8013C334 0699040C */  jal        func_80126418
    /* 4A738 8013C338 00000000 */   nop
    /* 4A73C 8013C33C 217E040C */  jal        func_8011F884
    /* 4A740 8013C340 00000000 */   nop
    /* 4A744 8013C344 8CD9030C */  jal        func_800F6630
    /* 4A748 8013C348 01000424 */   addiu     $a0, $zero, 0x1
    /* 4A74C 8013C34C 92D0030C */  jal        func_800F4248
    /* 4A750 8013C350 03000424 */   addiu     $a0, $zero, 0x3
    /* 4A754 8013C354 48D0030C */  jal        func_800F4120
    /* 4A758 8013C358 02000424 */   addiu     $a0, $zero, 0x2
    /* 4A75C 8013C35C 0B004014 */  bnez       $v0, .L8013C38C
    /* 4A760 8013C360 00000000 */   nop
    /* 4A764 8013C364 8CD9030C */  jal        func_800F6630
    /* 4A768 8013C368 60000424 */   addiu     $a0, $zero, 0x60
    /* 4A76C 8013C36C 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 4A770 8013C370 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 4A774 8013C374 00000000 */  nop
    /* 4A778 8013C378 00006290 */  lbu        $v0, 0x0($v1)
    /* 4A77C 8013C37C 60000424 */  addiu      $a0, $zero, 0x60
    /* 4A780 8013C380 27100200 */  nor        $v0, $zero, $v0
    /* 4A784 8013C384 93E0030C */  jal        func_800F824C
    /* 4A788 8013C388 000062A0 */   sb        $v0, 0x0($v1)
  .L8013C38C:
    /* 4A78C 8013C38C 8CD9030C */  jal        func_800F6630
    /* 4A790 8013C390 01000424 */   addiu     $a0, $zero, 0x1
    /* 4A794 8013C394 92D0030C */  jal        func_800F4248
    /* 4A798 8013C398 80000424 */   addiu     $a0, $zero, 0x80
    /* 4A79C 8013C39C 48D0030C */  jal        func_800F4120
    /* 4A7A0 8013C3A0 02000424 */   addiu     $a0, $zero, 0x2
    /* 4A7A4 8013C3A4 0D004014 */  bnez       $v0, .L8013C3DC
    /* 4A7A8 8013C3A8 00000000 */   nop
    /* 4A7AC 8013C3AC 8CD9030C */  jal        func_800F6630
    /* 4A7B0 8013C3B0 60000424 */   addiu     $a0, $zero, 0x60
    /* 4A7B4 8013C3B4 5DD5030C */  jal        func_800F5574
    /* 4A7B8 8013C3B8 FF000424 */   addiu     $a0, $zero, 0xFF
    /* 4A7BC 8013C3BC F5D4030C */  jal        func_800F53D4
    /* 4A7C0 8013C3C0 00000000 */   nop
    /* 4A7C4 8013C3C4 1D004014 */  bnez       $v0, .L8013C43C
    /* 4A7C8 8013C3C8 00000000 */   nop
    /* 4A7CC 8013C3CC 53D9030C */  jal        func_800F654C
    /* 4A7D0 8013C3D0 FF000424 */   addiu     $a0, $zero, 0xFF
    /* 4A7D4 8013C3D4 93E0030C */  jal        func_800F824C
    /* 4A7D8 8013C3D8 60000424 */   addiu     $a0, $zero, 0x60
  .L8013C3DC:
    /* 4A7DC 8013C3DC 8CD9030C */  jal        func_800F6630
    /* 4A7E0 8013C3E0 21200000 */   addu      $a0, $zero, $zero
    /* 4A7E4 8013C3E4 92D0030C */  jal        func_800F4248
    /* 4A7E8 8013C3E8 80000424 */   addiu     $a0, $zero, 0x80
    /* 4A7EC 8013C3EC 48D0030C */  jal        func_800F4120
    /* 4A7F0 8013C3F0 02000424 */   addiu     $a0, $zero, 0x2
    /* 4A7F4 8013C3F4 11004010 */  beqz       $v0, .L8013C43C
    /* 4A7F8 8013C3F8 00000000 */   nop
    /* 4A7FC 8013C3FC 8CD9030C */  jal        func_800F6630
    /* 4A800 8013C400 01000424 */   addiu     $a0, $zero, 0x1
    /* 4A804 8013C404 92D0030C */  jal        func_800F4248
    /* 4A808 8013C408 04000424 */   addiu     $a0, $zero, 0x4
    /* 4A80C 8013C40C 48D0030C */  jal        func_800F4120
    /* 4A810 8013C410 02000424 */   addiu     $a0, $zero, 0x2
    /* 4A814 8013C414 BBFF4014 */  bnez       $v0, .L8013C304
    /* 4A818 8013C418 00000000 */   nop
    /* 4A81C 8013C41C EEE3030C */  jal        func_800F8FB8
    /* 4A820 8013C420 60000424 */   addiu     $a0, $zero, 0x60
    /* 4A824 8013C424 13F1040C */  jal        func_8013C44C
    /* 4A828 8013C428 00000000 */   nop
    /* 4A82C 8013C42C 90D8030C */  jal        func_800F6240
    /* 4A830 8013C430 831A0424 */   addiu     $a0, $zero, 0x1A83
    /* 4A834 8013C434 FFEF040C */  jal        func_8013BFFC
    /* 4A838 8013C438 00000000 */   nop
  .L8013C43C:
    /* 4A83C 8013C43C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 4A840 8013C440 00000000 */  nop
    /* 4A844 8013C444 0800E003 */  jr         $ra
    /* 4A848 8013C448 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8013C2FC
