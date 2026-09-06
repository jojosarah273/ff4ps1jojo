nonmatching func_801888BC, 0x84

glabel func_801888BC
    /* 96CBC 801888BC E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 96CC0 801888C0 21200000 */  addu       $a0, $zero, $zero
    /* 96CC4 801888C4 21280000 */  addu       $a1, $zero, $zero
    /* 96CC8 801888C8 1F80063C */  lui        $a2, %hi(D_801F6678)
    /* 96CCC 801888CC 7866C0AC */  sw         $zero, %lo(D_801F6678)($a2)
    /* 96CD0 801888D0 7866C624 */  addiu      $a2, $a2, %lo(D_801F6678)
    /* 96CD4 801888D4 02000724 */  addiu      $a3, $zero, 0x2
    /* 96CD8 801888D8 1000BFAF */  sw         $ra, 0x10($sp)
    /* 96CDC 801888DC 1900C290 */  lbu        $v0, 0x19($a2)
    /* 96CE0 801888E0 6002838F */  lw         $v1, %gp_rel(D_8019EF5C)($gp)
    /* 96CE4 801888E4 00110200 */  sll        $v0, $v0, 4
    /* 96CE8 801888E8 21186200 */  addu       $v1, $v1, $v0
    /* 96CEC 801888EC 080067A0 */  sb         $a3, 0x8($v1)
    /* 96CF0 801888F0 1800C290 */  lbu        $v0, 0x18($a2)
    /* 96CF4 801888F4 6002838F */  lw         $v1, %gp_rel(D_8019EF5C)($gp)
    /* 96CF8 801888F8 00110200 */  sll        $v0, $v0, 4
    /* 96CFC 801888FC 21186200 */  addu       $v1, $v1, $v0
    /* 96D00 80188900 AD21060C */  jal        func_801886B4
    /* 96D04 80188904 080067A0 */   sb        $a3, 0x8($v1)
    /* 96D08 80188908 EE45060C */  jal        func_801917B8
    /* 96D0C 8018890C 00000000 */   nop
    /* 96D10 80188910 D245060C */  jal        func_80191748
    /* 96D14 80188914 21200000 */   addu      $a0, $zero, $zero
    /* 96D18 80188918 D425060C */  jal        func_80189750
    /* 96D1C 8018891C 00000000 */   nop
    /* 96D20 80188920 40000424 */  addiu      $a0, $zero, 0x40
    /* 96D24 80188924 1F80053C */  lui        $a1, %hi(D_801F6260)
    /* 96D28 80188928 B025060C */  jal        func_801896C0
    /* 96D2C 8018892C 6062A524 */   addiu     $a1, $a1, %lo(D_801F6260)
    /* 96D30 80188930 1000BF8F */  lw         $ra, 0x10($sp)
    /* 96D34 80188934 00000000 */  nop
    /* 96D38 80188938 0800E003 */  jr         $ra
    /* 96D3C 8018893C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_801888BC
