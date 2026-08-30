nonmatching func_800FDBBC, 0x16C

glabel func_800FDBBC
    /* BFBC 800FDBBC E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* BFC0 800FDBC0 80000424 */  addiu      $a0, $zero, 0x80
    /* BFC4 800FDBC4 1400BFAF */  sw         $ra, 0x14($sp)
    /* BFC8 800FDBC8 53D9030C */  jal        func_800F654C
    /* BFCC 800FDBCC 1000B0AF */   sw        $s0, 0x10($sp)
    /* BFD0 800FDBD0 62E0030C */  jal        func_800F8188
    /* BFD4 800FDBD4 15210424 */   addiu     $a0, $zero, 0x2115
    /* BFD8 800FDBD8 8CD9030C */  jal        func_800F6630
    /* BFDC 800FDBDC 7C000424 */   addiu     $a0, $zero, 0x7C
    /* BFE0 800FDBE0 19DE030C */  jal        func_800F7864
    /* BFE4 800FDBE4 1A80103C */   lui       $s0, %hi(D_80198AA4)
    /* BFE8 800FDBE8 92D0030C */  jal        func_800F4248
    /* BFEC 800FDBEC 0F000424 */   addiu     $a0, $zero, 0xF
    /* BFF0 800FDBF0 A4E5030C */  jal        func_800F9690
    /* BFF4 800FDBF4 A48A1026 */   addiu     $s0, $s0, %lo(D_80198AA4)
    /* BFF8 800FDBF8 5800838F */  lw         $v1, %gp_rel(D_8019ED54)($gp)
    /* BFFC 800FDBFC 00000000 */  nop
    /* C000 800FDC00 00006294 */  lhu        $v0, 0x0($v1)
    /* C004 800FDC04 4400848F */  lw         $a0, %gp_rel(D_8019ED40)($gp)
    /* C008 800FDC08 21105000 */  addu       $v0, $v0, $s0
    /* C00C 800FDC0C 00004390 */  lbu        $v1, 0x0($v0)
    /* C010 800FDC10 A4E5030C */  jal        func_800F9690
    /* C014 800FDC14 000083A0 */   sb        $v1, 0x0($a0)
    /* C018 800FDC18 4400828F */  lw         $v0, %gp_rel(D_8019ED40)($gp)
    /* C01C 800FDC1C 00000000 */  nop
    /* C020 800FDC20 00004490 */  lbu        $a0, 0x0($v0)
    /* C024 800FDC24 A7F6030C */  jal        func_800FDA9C
    /* C028 800FDC28 00208434 */   ori       $a0, $a0, 0x2000
    /* C02C 800FDC2C 8CD9030C */  jal        func_800F6630
    /* C030 800FDC30 7C000424 */   addiu     $a0, $zero, 0x7C
    /* C034 800FDC34 19DE030C */  jal        func_800F7864
    /* C038 800FDC38 00000000 */   nop
    /* C03C 800FDC3C 92D0030C */  jal        func_800F4248
    /* C040 800FDC40 0F000424 */   addiu     $a0, $zero, 0xF
    /* C044 800FDC44 A4E5030C */  jal        func_800F9690
    /* C048 800FDC48 00000000 */   nop
    /* C04C 800FDC4C 5800838F */  lw         $v1, %gp_rel(D_8019ED54)($gp)
    /* C050 800FDC50 00000000 */  nop
    /* C054 800FDC54 00006294 */  lhu        $v0, 0x0($v1)
    /* C058 800FDC58 4400848F */  lw         $a0, %gp_rel(D_8019ED40)($gp)
    /* C05C 800FDC5C 21105000 */  addu       $v0, $v0, $s0
    /* C060 800FDC60 00004390 */  lbu        $v1, 0x0($v0)
    /* C064 800FDC64 04D5030C */  jal        func_800F5410
    /* C068 800FDC68 000083A0 */   sb        $v1, 0x0($a0)
    /* C06C 800FDC6C 02D0030C */  jal        func_800F4008
    /* C070 800FDC70 40000424 */   addiu     $a0, $zero, 0x40
    /* C074 800FDC74 A4E5030C */  jal        func_800F9690
    /* C078 800FDC78 00000000 */   nop
    /* C07C 800FDC7C 4400828F */  lw         $v0, %gp_rel(D_8019ED40)($gp)
    /* C080 800FDC80 00000000 */  nop
    /* C084 800FDC84 00004490 */  lbu        $a0, 0x0($v0)
    /* C088 800FDC88 A7F6030C */  jal        func_800FDA9C
    /* C08C 800FDC8C 00208434 */   ori       $a0, $a0, 0x2000
    /* C090 800FDC90 9B08060C */  jal        func_8018226C
    /* C094 800FDC94 00200424 */   addiu     $a0, $zero, 0x2000
    /* C098 800FDC98 53D9030C */  jal        func_800F654C
    /* C09C 800FDC9C 80000424 */   addiu     $a0, $zero, 0x80
    /* C0A0 800FDCA0 62E0030C */  jal        func_800F8188
    /* C0A4 800FDCA4 15210424 */   addiu     $a0, $zero, 0x2115
    /* C0A8 800FDCA8 77DC030C */  jal        func_800F71DC
    /* C0AC 800FDCAC 801E0424 */   addiu     $a0, $zero, 0x1E80
    /* C0B0 800FDCB0 40E3030C */  jal        func_800F8D00
    /* C0B4 800FDCB4 16210424 */   addiu     $a0, $zero, 0x2116
    /* C0B8 800FDCB8 DDE3030C */  jal        func_800F8F74
    /* C0BC 800FDCBC 0B420424 */   addiu     $a0, $zero, 0x420B
    /* C0C0 800FDCC0 DDE3030C */  jal        func_800F8F74
    /* C0C4 800FDCC4 00430424 */   addiu     $a0, $zero, 0x4300
    /* C0C8 800FDCC8 53D9030C */  jal        func_800F654C
    /* C0CC 800FDCCC 19000424 */   addiu     $a0, $zero, 0x19
    /* C0D0 800FDCD0 62E0030C */  jal        func_800F8188
    /* C0D4 800FDCD4 01430424 */   addiu     $a0, $zero, 0x4301
    /* C0D8 800FDCD8 77DC030C */  jal        func_800F71DC
    /* C0DC 800FDCDC 00590424 */   addiu     $a0, $zero, 0x5900
    /* C0E0 800FDCE0 40E3030C */  jal        func_800F8D00
    /* C0E4 800FDCE4 02430424 */   addiu     $a0, $zero, 0x4302
    /* C0E8 800FDCE8 53D9030C */  jal        func_800F654C
    /* C0EC 800FDCEC 7F000424 */   addiu     $a0, $zero, 0x7F
    /* C0F0 800FDCF0 62E0030C */  jal        func_800F8188
    /* C0F4 800FDCF4 04430424 */   addiu     $a0, $zero, 0x4304
    /* C0F8 800FDCF8 77DC030C */  jal        func_800F71DC
    /* C0FC 800FDCFC 00010424 */   addiu     $a0, $zero, 0x100
    /* C100 800FDD00 40E3030C */  jal        func_800F8D00
    /* C104 800FDD04 05430424 */   addiu     $a0, $zero, 0x4305
    /* C108 800FDD08 2FF3030C */  jal        func_800FCCBC
    /* C10C 800FDD0C 00000000 */   nop
    /* C110 800FDD10 3D08060C */  jal        func_801820F4
    /* C114 800FDD14 00000000 */   nop
    /* C118 800FDD18 1400BF8F */  lw         $ra, 0x14($sp)
    /* C11C 800FDD1C 1000B08F */  lw         $s0, 0x10($sp)
    /* C120 800FDD20 0800E003 */  jr         $ra
    /* C124 800FDD24 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800FDBBC
