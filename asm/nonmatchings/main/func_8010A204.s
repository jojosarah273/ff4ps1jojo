nonmatching func_8010A204, 0xA8

glabel func_8010A204
    /* 18604 8010A204 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 18608 8010A208 1000BFAF */  sw         $ra, 0x10($sp)
    /* 1860C 8010A20C 8CD9030C */  jal        func_800F6630
    /* 18610 8010A210 EA000424 */   addiu     $a0, $zero, 0xEA
    /* 18614 8010A214 5DD5030C */  jal        func_800F5574
    /* 18618 8010A218 01000424 */   addiu     $a0, $zero, 0x1
    /* 1861C 8010A21C F5D4030C */  jal        func_800F53D4
    /* 18620 8010A220 00000000 */   nop
    /* 18624 8010A224 1D004010 */  beqz       $v0, .L8010A29C
    /* 18628 8010A228 00000000 */   nop
    /* 1862C 8010A22C AFD8030C */  jal        func_800F62BC
    /* 18630 8010A230 EA000424 */   addiu     $a0, $zero, 0xEA
    /* 18634 8010A234 53D9030C */  jal        func_800F654C
    /* 18638 8010A238 80000424 */   addiu     $a0, $zero, 0x80
    /* 1863C 8010A23C 62E0030C */  jal        func_800F8188
    /* 18640 8010A240 15210424 */   addiu     $a0, $zero, 0x2115
    /* 18644 8010A244 21F3030C */  jal        func_800FCC84
    /* 18648 8010A248 00000000 */   nop
    /* 1864C 8010A24C 53D9030C */  jal        func_800F654C
    /* 18650 8010A250 09000424 */   addiu     $a0, $zero, 0x9
    /* 18654 8010A254 62E0030C */  jal        func_800F8188
    /* 18658 8010A258 00430424 */   addiu     $a0, $zero, 0x4300
    /* 1865C 8010A25C 77DC030C */  jal        func_800F71DC
    /* 18660 8010A260 40280424 */   addiu     $a0, $zero, 0x2840
    /* 18664 8010A264 40E3030C */  jal        func_800F8D00
    /* 18668 8010A268 16210424 */   addiu     $a0, $zero, 0x2116
    /* 1866C 8010A26C EEE3030C */  jal        func_800F8FB8
    /* 18670 8010A270 10000424 */   addiu     $a0, $zero, 0x10
    /* 18674 8010A274 77DC030C */  jal        func_800F71DC
    /* 18678 8010A278 10060424 */   addiu     $a0, $zero, 0x610
    /* 1867C 8010A27C 40E3030C */  jal        func_800F8D00
    /* 18680 8010A280 02430424 */   addiu     $a0, $zero, 0x4302
    /* 18684 8010A284 77DC030C */  jal        func_800F71DC
    /* 18688 8010A288 00010424 */   addiu     $a0, $zero, 0x100
    /* 1868C 8010A28C 40E3030C */  jal        func_800F8D00
    /* 18690 8010A290 05430424 */   addiu     $a0, $zero, 0x4305
    /* 18694 8010A294 2FF3030C */  jal        func_800FCCBC
    /* 18698 8010A298 00000000 */   nop
  .L8010A29C:
    /* 1869C 8010A29C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 186A0 8010A2A0 00000000 */  nop
    /* 186A4 8010A2A4 0800E003 */  jr         $ra
    /* 186A8 8010A2A8 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8010A204
