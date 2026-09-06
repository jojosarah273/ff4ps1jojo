nonmatching func_80103790, 0x144

glabel func_80103790
    /* 11B90 80103790 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 11B94 80103794 1000BFAF */  sw         $ra, 0x10($sp)
    /* 11B98 80103798 84DC030C */  jal        func_800F7210
    /* 11B9C 8010379C 06170424 */   addiu     $a0, $zero, 0x1706
    /* 11BA0 801037A0 40E3030C */  jal        func_800F8D00
    /* 11BA4 801037A4 08170424 */   addiu     $a0, $zero, 0x1708
    /* 11BA8 801037A8 8A0E040C */  jal        func_80103A28
    /* 11BAC 801037AC 00000000 */   nop
    /* 11BB0 801037B0 77DC030C */  jal        func_800F71DC
    /* 11BB4 801037B4 98FF0434 */   ori       $a0, $zero, 0xFF98
    /* 11BB8 801037B8 5BE3030C */  jal        func_800F8D6C
    /* 11BBC 801037BC 5A000424 */   addiu     $a0, $zero, 0x5A
    /* 11BC0 801037C0 D00F040C */  jal        func_80103F40
    /* 11BC4 801037C4 00000000 */   nop
    /* 11BC8 801037C8 1D80043C */  lui        $a0, %hi(D_801CFD68)
    /* 11BCC 801037CC 68FD8424 */  addiu      $a0, $a0, %lo(D_801CFD68)
    /* 11BD0 801037D0 00020524 */  addiu      $a1, $zero, 0x200
    /* 11BD4 801037D4 21300000 */  addu       $a2, $zero, $zero
    /* 11BD8 801037D8 3EFE050C */  jal        func_8017F8F8
    /* 11BDC 801037DC 21380000 */   addu      $a3, $zero, $zero
    /* 11BE0 801037E0 1D80043C */  lui        $a0, %hi(D_801D7D68)
    /* 11BE4 801037E4 687D8424 */  addiu      $a0, $a0, %lo(D_801D7D68)
    /* 11BE8 801037E8 00030524 */  addiu      $a1, $zero, 0x300
    /* 11BEC 801037EC 21300000 */  addu       $a2, $zero, $zero
    /* 11BF0 801037F0 3EFE050C */  jal        func_8017F8F8
    /* 11BF4 801037F4 FFFF0724 */   addiu     $a3, $zero, -0x1
    /* 11BF8 801037F8 00010224 */  addiu      $v0, $zero, 0x100
    /* 11BFC 801037FC FFFF0334 */  ori        $v1, $zero, 0xFFFF
    /* 11C00 80103800 1A80013C */  lui        $at, %hi(D_8019EE2C)
    /* 11C04 80103804 2CEE22A4 */  sh         $v0, %lo(D_8019EE2C)($at)
    /* 11C08 80103808 1A80013C */  lui        $at, %hi(D_8019EE2E)
    /* 11C0C 8010380C 2EEE23A4 */  sh         $v1, %lo(D_8019EE2E)($at)
    /* 11C10 80103810 E60E040C */  jal        func_80103B98
    /* 11C14 80103814 00000000 */   nop
    /* 11C18 80103818 77DC030C */  jal        func_800F71DC
    /* 11C1C 8010381C 98010424 */   addiu     $a0, $zero, 0x198
    /* 11C20 80103820 5BE3030C */  jal        func_800F8D6C
    /* 11C24 80103824 5A000424 */   addiu     $a0, $zero, 0x5A
    /* 11C28 80103828 D00F040C */  jal        func_80103F40
    /* 11C2C 8010382C 00000000 */   nop
    /* 11C30 80103830 760F040C */  jal        func_80103DD8
    /* 11C34 80103834 00000000 */   nop
    /* 11C38 80103838 53D9030C */  jal        func_800F654C
    /* 11C3C 8010383C 02000424 */   addiu     $a0, $zero, 0x2
    /* 11C40 80103840 62E0030C */  jal        func_800F8188
    /* 11C44 80103844 00170424 */   addiu     $a0, $zero, 0x1700
    /* 11C48 80103848 62E0030C */  jal        func_800F8188
    /* 11C4C 8010384C 27170424 */   addiu     $a0, $zero, 0x1727
    /* 11C50 80103850 53D9030C */  jal        func_800F654C
    /* 11C54 80103854 01000424 */   addiu     $a0, $zero, 0x1
    /* 11C58 80103858 62E0030C */  jal        func_800F8188
    /* 11C5C 8010385C 01170424 */   addiu     $a0, $zero, 0x1701
    /* 11C60 80103860 84DC030C */  jal        func_800F7210
    /* 11C64 80103864 0C170424 */   addiu     $a0, $zero, 0x170C
    /* 11C68 80103868 40E3030C */  jal        func_800F8D00
    /* 11C6C 8010386C 06170424 */   addiu     $a0, $zero, 0x1706
    /* 11C70 80103870 89EC030C */  jal        func_800FB224
    /* 11C74 80103874 00000000 */   nop
    /* 11C78 80103878 53D9030C */  jal        func_800F654C
    /* 11C7C 8010387C 10000424 */   addiu     $a0, $zero, 0x10
    /* 11C80 80103880 67D5050C */  jal        func_8017559C
    /* 11C84 80103884 00000000 */   nop
    /* 11C88 80103888 53D9030C */  jal        func_800F654C
    /* 11C8C 8010388C 81000424 */   addiu     $a0, $zero, 0x81
    /* 11C90 80103890 62E0030C */  jal        func_800F8188
    /* 11C94 80103894 00420424 */   addiu     $a0, $zero, 0x4200
    /* 11C98 80103898 53D9030C */  jal        func_800F654C
    /* 11C9C 8010389C 30000424 */   addiu     $a0, $zero, 0x30
    /* 11CA0 801038A0 93E0030C */  jal        func_800F824C
    /* 11CA4 801038A4 AD000424 */   addiu     $a0, $zero, 0xAD
    /* 11CA8 801038A8 B20E040C */  jal        func_80103AC8
    /* 11CAC 801038AC 00000000 */   nop
    /* 11CB0 801038B0 77DC030C */  jal        func_800F71DC
    /* 11CB4 801038B4 21200000 */   addu      $a0, $zero, $zero
    /* 11CB8 801038B8 40E3030C */  jal        func_800F8D00
    /* 11CBC 801038BC 2C170424 */   addiu     $a0, $zero, 0x172C
    /* 11CC0 801038C0 1000BF8F */  lw         $ra, 0x10($sp)
    /* 11CC4 801038C4 1A80013C */  lui        $at, %hi(D_8019EE2E)
    /* 11CC8 801038C8 2EEE20A4 */  sh         $zero, %lo(D_8019EE2E)($at)
    /* 11CCC 801038CC 0800E003 */  jr         $ra
    /* 11CD0 801038D0 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80103790
