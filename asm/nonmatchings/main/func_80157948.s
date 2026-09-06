nonmatching func_80157948, 0x188

glabel func_80157948
    /* 65D48 80157948 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 65D4C 8015794C 1000BFAF */  sw         $ra, 0x10($sp)
    /* 65D50 80157950 C7E5030C */  jal        func_800F971C
    /* 65D54 80157954 00000000 */   nop
    /* 65D58 80157958 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 65D5C 8015795C 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 65D60 80157960 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 65D64 80157964 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 65D68 80157968 00004394 */  lhu        $v1, 0x0($v0)
    /* 65D6C 8015796C CD000424 */  addiu      $a0, $zero, 0xCD
    /* 65D70 80157970 5BE3030C */  jal        func_800F8D6C
    /* 65D74 80157974 0000A3A4 */   sh        $v1, 0x0($a1)
  .L80157978:
    /* 65D78 80157978 9CDC030C */  jal        func_800F7270
    /* 65D7C 8015797C CD000424 */   addiu     $a0, $zero, 0xCD
    /* 65D80 80157980 DADA030C */  jal        func_800F6B68
    /* 65D84 80157984 40350424 */   addiu     $a0, $zero, 0x3540
    /* 65D88 80157988 0DD9030C */  jal        func_800F6434
    /* 65D8C 8015798C 02020424 */   addiu     $a0, $zero, 0x202
    /* 65D90 80157990 41004014 */  bnez       $v0, .L80157A98
    /* 65D94 80157994 00000000 */   nop
    /* 65D98 80157998 9CDC030C */  jal        func_800F7270
    /* 65D9C 8015799C CD000424 */   addiu     $a0, $zero, 0xCD
    /* 65DA0 801579A0 5BE3030C */  jal        func_800F8D6C
    /* 65DA4 801579A4 DF000424 */   addiu     $a0, $zero, 0xDF
    /* 65DA8 801579A8 77DC030C */  jal        func_800F71DC
    /* 65DAC 801579AC 80000424 */   addiu     $a0, $zero, 0x80
    /* 65DB0 801579B0 5BE3030C */  jal        func_800F8D6C
    /* 65DB4 801579B4 E1000424 */   addiu     $a0, $zero, 0xE1
    /* 65DB8 801579B8 0349050C */  jal        func_8015240C
    /* 65DBC 801579BC 00000000 */   nop
    /* 65DC0 801579C0 9CDC030C */  jal        func_800F7270
    /* 65DC4 801579C4 E3000424 */   addiu     $a0, $zero, 0xE3
    /* 65DC8 801579C8 DADA030C */  jal        func_800F6B68
    /* 65DCC 801579CC 03200424 */   addiu     $a0, $zero, 0x2003
    /* 65DD0 801579D0 92D0030C */  jal        func_800F4248
    /* 65DD4 801579D4 01000424 */   addiu     $a0, $zero, 0x1
    /* 65DD8 801579D8 48D0030C */  jal        func_800F4120
    /* 65DDC 801579DC 02000424 */   addiu     $a0, $zero, 0x2
    /* 65DE0 801579E0 2D004014 */  bnez       $v0, .L80157A98
    /* 65DE4 801579E4 00000000 */   nop
    /* 65DE8 801579E8 53D9030C */  jal        func_800F654C
    /* 65DEC 801579EC 06000424 */   addiu     $a0, $zero, 0x6
    /* 65DF0 801579F0 93E0030C */  jal        func_800F824C
    /* 65DF4 801579F4 D6000424 */   addiu     $a0, $zero, 0xD6
    /* 65DF8 801579F8 8CD9030C */  jal        func_800F6630
    /* 65DFC 801579FC CD000424 */   addiu     $a0, $zero, 0xCD
    /* 65E00 80157A00 DD68050C */  jal        func_8015A374
    /* 65E04 80157A04 00000000 */   nop
    /* 65E08 80157A08 53D9030C */  jal        func_800F654C
    /* 65E0C 80157A0C 09000424 */   addiu     $a0, $zero, 0x9
    /* 65E10 80157A10 DD4C050C */  jal        func_80153374
    /* 65E14 80157A14 00000000 */   nop
    /* 65E18 80157A18 53D9030C */  jal        func_800F654C
    /* 65E1C 80157A1C 40000424 */   addiu     $a0, $zero, 0x40
    /* 65E20 80157A20 DAE1030C */  jal        func_800F8768
    /* 65E24 80157A24 062A0424 */   addiu     $a0, $zero, 0x2A06
    /* 65E28 80157A28 8CD9030C */  jal        func_800F6630
    /* 65E2C 80157A2C CD000424 */   addiu     $a0, $zero, 0xCD
    /* 65E30 80157A30 50D4030C */  jal        func_800F5140
    /* 65E34 80157A34 00000000 */   nop
    /* 65E38 80157A38 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 65E3C 80157A3C 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 65E40 80157A40 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 65E44 80157A44 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 65E48 80157A48 00004394 */  lhu        $v1, 0x0($v0)
    /* 65E4C 80157A4C EB290424 */  addiu      $a0, $zero, 0x29EB
    /* 65E50 80157A50 DADA030C */  jal        func_800F6B68
    /* 65E54 80157A54 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 65E58 80157A58 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 65E5C 80157A5C 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 65E60 80157A60 00000000 */  nop
    /* 65E64 80157A64 00006290 */  lbu        $v0, 0x0($v1)
    /* 65E68 80157A68 EB290424 */  addiu      $a0, $zero, 0x29EB
    /* 65E6C 80157A6C 10004234 */  ori        $v0, $v0, 0x10
    /* 65E70 80157A70 DAE1030C */  jal        func_800F8768
    /* 65E74 80157A74 000062A0 */   sb        $v0, 0x0($v1)
    /* 65E78 80157A78 8CD9030C */  jal        func_800F6630
    /* 65E7C 80157A7C D4000424 */   addiu     $a0, $zero, 0xD4
    /* 65E80 80157A80 DAE1030C */  jal        func_800F8768
    /* 65E84 80157A84 2A2B0424 */   addiu     $a0, $zero, 0x2B2A
    /* 65E88 80157A88 8CD9030C */  jal        func_800F6630
    /* 65E8C 80157A8C D5000424 */   addiu     $a0, $zero, 0xD5
    /* 65E90 80157A90 DAE1030C */  jal        func_800F8768
    /* 65E94 80157A94 2B2B0424 */   addiu     $a0, $zero, 0x2B2B
  .L80157A98:
    /* 65E98 80157A98 AFD8030C */  jal        func_800F62BC
    /* 65E9C 80157A9C CD000424 */   addiu     $a0, $zero, 0xCD
    /* 65EA0 80157AA0 8CD9030C */  jal        func_800F6630
    /* 65EA4 80157AA4 CD000424 */   addiu     $a0, $zero, 0xCD
    /* 65EA8 80157AA8 5DD5030C */  jal        func_800F5574
    /* 65EAC 80157AAC 05000424 */   addiu     $a0, $zero, 0x5
    /* 65EB0 80157AB0 F5D4030C */  jal        func_800F53D4
    /* 65EB4 80157AB4 00000000 */   nop
    /* 65EB8 80157AB8 AFFF4010 */  beqz       $v0, .L80157978
    /* 65EBC 80157ABC 00000000 */   nop
    /* 65EC0 80157AC0 1000BF8F */  lw         $ra, 0x10($sp)
    /* 65EC4 80157AC4 00000000 */  nop
    /* 65EC8 80157AC8 0800E003 */  jr         $ra
    /* 65ECC 80157ACC 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80157948
