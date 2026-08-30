nonmatching func_80150610, 0xAC

glabel func_80150610
    /* 5EA10 80150610 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 5EA14 80150614 1000BFAF */  sw         $ra, 0x10($sp)
    /* 5EA18 80150618 91E5030C */  jal        func_800F9644
    /* 5EA1C 8015061C 20000424 */   addiu     $a0, $zero, 0x20
    /* 5EA20 80150620 0C00043C */  lui        $a0, (0xCF3C0 >> 16)
    /* 5EA24 80150624 3DDB030C */  jal        func_800F6CF4
    /* 5EA28 80150628 C0F38434 */   ori       $a0, $a0, (0xCF3C0 & 0xFFFF)
    /* 5EA2C 8015062C 99D0030C */  jal        func_800F4264
    /* 5EA30 80150630 FF030424 */   addiu     $a0, $zero, 0x3FF
    /* 5EA34 80150634 5BD4030C */  jal        func_800F516C
    /* 5EA38 80150638 00000000 */   nop
    /* 5EA3C 8015063C 7F00043C */  lui        $a0, (0x7FF000 >> 16)
    /* 5EA40 80150640 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 5EA44 80150644 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 5EA48 80150648 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 5EA4C 8015064C 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 5EA50 80150650 00004394 */  lhu        $v1, 0x0($v0)
    /* 5EA54 80150654 00F08434 */  ori        $a0, $a0, (0x7FF000 & 0xFFFF)
    /* 5EA58 80150658 3DDB030C */  jal        func_800F6CF4
    /* 5EA5C 8015065C 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 5EA60 80150660 1A80033C */  lui        $v1, %hi(D_8019ED44)
    /* 5EA64 80150664 44ED638C */  lw         $v1, %lo(D_8019ED44)($v1)
    /* 5EA68 80150668 1A80043C */  lui        $a0, %hi(D_8019ED58)
    /* 5EA6C 8015066C 58ED848C */  lw         $a0, %lo(D_8019ED58)($a0)
    /* 5EA70 80150670 00006294 */  lhu        $v0, 0x0($v1)
    /* 5EA74 80150674 C7E5030C */  jal        func_800F971C
    /* 5EA78 80150678 000082A4 */   sh        $v0, 0x0($a0)
    /* 5EA7C 8015067C 98E5030C */  jal        func_800F9660
    /* 5EA80 80150680 20000424 */   addiu     $a0, $zero, 0x20
    /* 5EA84 80150684 77DC030C */  jal        func_800F71DC
    /* 5EA88 80150688 02000424 */   addiu     $a0, $zero, 0x2
    /* 5EA8C 8015068C 5BE3030C */  jal        func_800F8D6C
    /* 5EA90 80150690 21200000 */   addu      $a0, $zero, $zero
    /* 5EA94 80150694 77DC030C */  jal        func_800F71DC
    /* 5EA98 80150698 E6DB0434 */   ori       $a0, $zero, 0xDBE6
    /* 5EA9C 8015069C 53D9030C */  jal        func_800F654C
    /* 5EAA0 801506A0 0C000424 */   addiu     $a0, $zero, 0xC
    /* 5EAA4 801506A4 47D0010C */  jal        func_8007411C
    /* 5EAA8 801506A8 00000000 */   nop
    /* 5EAAC 801506AC 1000BF8F */  lw         $ra, 0x10($sp)
    /* 5EAB0 801506B0 00000000 */  nop
    /* 5EAB4 801506B4 0800E003 */  jr         $ra
    /* 5EAB8 801506B8 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80150610
