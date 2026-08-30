nonmatching func_8018ABE8, 0x58

glabel func_8018ABE8
    /* 98FE8 8018ABE8 1A80053C */  lui        $a1, %hi(D_8019B124)
    /* 98FEC 8018ABEC 24B1A58C */  lw         $a1, %lo(D_8019B124)($a1)
    /* 98FF0 8018ABF0 F8FF033C */  lui        $v1, (0xFFF8FFFF >> 16)
    /* 98FF4 8018ABF4 0000A28C */  lw         $v0, 0x0($a1)
    /* 98FF8 8018ABF8 FFFF6334 */  ori        $v1, $v1, (0xFFF8FFFF & 0xFFFF)
    /* 98FFC 8018ABFC 24104300 */  and        $v0, $v0, $v1
    /* 99000 8018AC00 07008010 */  beqz       $a0, .L8018AC20
    /* 99004 8018AC04 0000A2AC */   sw        $v0, 0x0($a1)
    /* 99008 8018AC08 1A80023C */  lui        $v0, %hi(D_8019B124)
    /* 9900C 8018AC0C 24B1428C */  lw         $v0, %lo(D_8019B124)($v0)
    /* 99010 8018AC10 00000000 */  nop
    /* 99014 8018AC14 0000438C */  lw         $v1, 0x0($v0)
    /* 99018 8018AC18 0D2B0608 */  j          .L8018AC34
    /* 9901C 8018AC1C 0300043C */   lui       $a0, (0x30000 >> 16)
  .L8018AC20:
    /* 99020 8018AC20 1A80023C */  lui        $v0, %hi(D_8019B124)
    /* 99024 8018AC24 24B1428C */  lw         $v0, %lo(D_8019B124)($v0)
    /* 99028 8018AC28 00000000 */  nop
    /* 9902C 8018AC2C 0000438C */  lw         $v1, 0x0($v0)
    /* 99030 8018AC30 0500043C */  lui        $a0, (0x50000 >> 16)
  .L8018AC34:
    /* 99034 8018AC34 25186400 */  or         $v1, $v1, $a0
    /* 99038 8018AC38 0800E003 */  jr         $ra
    /* 9903C 8018AC3C 000043AC */   sw        $v1, 0x0($v0)
endlabel func_8018ABE8
