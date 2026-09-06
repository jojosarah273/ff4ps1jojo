nonmatching func_801605D0, 0xDC

glabel func_801605D0
    /* 6E9D0 801605D0 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 6E9D4 801605D4 1000BFAF */  sw         $ra, 0x10($sp)
    /* 6E9D8 801605D8 77DC030C */  jal        func_800F71DC
    /* 6E9DC 801605DC 80020424 */   addiu     $a0, $zero, 0x280
    /* 6E9E0 801605E0 C7E5030C */  jal        func_800F971C
    /* 6E9E4 801605E4 00000000 */   nop
    /* 6E9E8 801605E8 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 6E9EC 801605EC 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 6E9F0 801605F0 1A80043C */  lui        $a0, %hi(D_8019ED58)
    /* 6E9F4 801605F4 58ED848C */  lw         $a0, %lo(D_8019ED58)($a0)
    /* 6E9F8 801605F8 00004394 */  lhu        $v1, 0x0($v0)
    /* 6E9FC 801605FC 00000000 */  nop
    /* 6EA00 80160600 000083A4 */  sh         $v1, 0x0($a0)
  .L80160604:
    /* 6EA04 80160604 5CDB030C */  jal        func_800F6D70
    /* 6EA08 80160608 B5290424 */   addiu     $a0, $zero, 0x29B5
    /* 6EA0C 8016060C 0FCF030C */  jal        func_800F3C3C
    /* 6EA10 80160610 B1000424 */   addiu     $a0, $zero, 0xB1
    /* 6EA14 80160614 35D5030C */  jal        func_800F54D4
    /* 6EA18 80160618 21204000 */   addu      $a0, $v0, $zero
    /* 6EA1C 8016061C F5D4030C */  jal        func_800F53D4
    /* 6EA20 80160620 00000000 */   nop
    /* 6EA24 80160624 09004014 */  bnez       $v0, .L8016064C
    /* 6EA28 80160628 00000000 */   nop
    /* 6EA2C 8016062C 0FCF030C */  jal        func_800F3C3C
    /* 6EA30 80160630 B2000424 */   addiu     $a0, $zero, 0xB2
    /* 6EA34 80160634 35D5030C */  jal        func_800F54D4
    /* 6EA38 80160638 21204000 */   addu      $a0, $v0, $zero
    /* 6EA3C 8016063C F5D4030C */  jal        func_800F53D4
    /* 6EA40 80160640 00000000 */   nop
    /* 6EA44 80160644 0B004010 */  beqz       $v0, .L80160674
    /* 6EA48 80160648 00000000 */   nop
  .L8016064C:
    /* 6EA4C 8016064C DADA030C */  jal        func_800F6B68
    /* 6EA50 80160650 03200424 */   addiu     $a0, $zero, 0x2003
    /* 6EA54 80160654 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 6EA58 80160658 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 6EA5C 8016065C 00000000 */  nop
    /* 6EA60 80160660 00006290 */  lbu        $v0, 0x0($v1)
    /* 6EA64 80160664 03200424 */  addiu      $a0, $zero, 0x2003
    /* 6EA68 80160668 80004234 */  ori        $v0, $v0, 0x80
    /* 6EA6C 8016066C DAE1030C */  jal        func_800F8768
    /* 6EA70 80160670 000062A0 */   sb        $v0, 0x0($v1)
  .L80160674:
    /* 6EA74 80160674 C34C050C */  jal        func_8015330C
    /* 6EA78 80160678 00000000 */   nop
    /* 6EA7C 8016067C EFD8030C */  jal        func_800F63BC
    /* 6EA80 80160680 00000000 */   nop
    /* 6EA84 80160684 A4D6030C */  jal        func_800F5A90
    /* 6EA88 80160688 08000424 */   addiu     $a0, $zero, 0x8
    /* 6EA8C 8016068C F5D4030C */  jal        func_800F53D4
    /* 6EA90 80160690 00000000 */   nop
    /* 6EA94 80160694 DBFF4010 */  beqz       $v0, .L80160604
    /* 6EA98 80160698 00000000 */   nop
    /* 6EA9C 8016069C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 6EAA0 801606A0 00000000 */  nop
    /* 6EAA4 801606A4 0800E003 */  jr         $ra
    /* 6EAA8 801606A8 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_801605D0
