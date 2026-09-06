nonmatching func_80122B54, 0x19C

glabel func_80122B54
    /* 30F54 80122B54 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 30F58 80122B58 1000BFAF */  sw         $ra, 0x10($sp)
    /* 30F5C 80122B5C 93E0030C */  jal        func_800F824C
    /* 30F60 80122B60 60000424 */   addiu     $a0, $zero, 0x60
    /* 30F64 80122B64 EEE3030C */  jal        func_800F8FB8
    /* 30F68 80122B68 61000424 */   addiu     $a0, $zero, 0x61
    /* 30F6C 80122B6C 91E5030C */  jal        func_800F9644
    /* 30F70 80122B70 20000424 */   addiu     $a0, $zero, 0x20
    /* 30F74 80122B74 96D9030C */  jal        func_800F6658
    /* 30F78 80122B78 60000424 */   addiu     $a0, $zero, 0x60
    /* 30F7C 80122B7C 1A80033C */  lui        $v1, %hi(D_8019ED44)
    /* 30F80 80122B80 44ED638C */  lw         $v1, %lo(D_8019ED44)($v1)
    /* 30F84 80122B84 00000000 */  nop
    /* 30F88 80122B88 00006294 */  lhu        $v0, 0x0($v1)
    /* 30F8C 80122B8C 00000000 */  nop
    /* 30F90 80122B90 40110200 */  sll        $v0, $v0, 5
    /* 30F94 80122B94 5BD4030C */  jal        func_800F516C
    /* 30F98 80122B98 000062A4 */   sh        $v0, 0x0($v1)
    /* 30F9C 80122B9C 14D4030C */  jal        func_800F5050
    /* 30FA0 80122BA0 00000000 */   nop
    /* 30FA4 80122BA4 19D0030C */  jal        func_800F4064
    /* 30FA8 80122BA8 00100424 */   addiu     $a0, $zero, 0x1000
    /* 30FAC 80122BAC 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 30FB0 80122BB0 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 30FB4 80122BB4 1A80053C */  lui        $a1, %hi(D_8019ED58)
    /* 30FB8 80122BB8 58EDA58C */  lw         $a1, %lo(D_8019ED58)($a1)
    /* 30FBC 80122BBC 00004394 */  lhu        $v1, 0x0($v0)
    /* 30FC0 80122BC0 20000424 */  addiu      $a0, $zero, 0x20
    /* 30FC4 80122BC4 98E5030C */  jal        func_800F9660
    /* 30FC8 80122BC8 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 30FCC 80122BCC 8CD9030C */  jal        func_800F6630
    /* 30FD0 80122BD0 60000424 */   addiu     $a0, $zero, 0x60
    /* 30FD4 80122BD4 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 30FD8 80122BD8 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 30FDC 80122BDC 00000000 */  nop
    /* 30FE0 80122BE0 00006290 */  lbu        $v0, 0x0($v1)
    /* 30FE4 80122BE4 48000424 */  addiu      $a0, $zero, 0x48
    /* 30FE8 80122BE8 00110200 */  sll        $v0, $v0, 4
    /* 30FEC 80122BEC 93E0030C */  jal        func_800F824C
    /* 30FF0 80122BF0 000062A0 */   sb        $v0, 0x0($v1)
    /* 30FF4 80122BF4 5CDB030C */  jal        func_800F6D70
    /* 30FF8 80122BF8 21200000 */   addu      $a0, $zero, $zero
    /* 30FFC 80122BFC 92D0030C */  jal        func_800F4248
    /* 31000 80122C00 3F000424 */   addiu     $a0, $zero, 0x3F
    /* 31004 80122C04 48D0030C */  jal        func_800F4120
    /* 31008 80122C08 02020424 */   addiu     $a0, $zero, 0x202
    /* 3100C 80122C0C 34004010 */  beqz       $v0, .L80122CE0
    /* 31010 80122C10 00000000 */   nop
    /* 31014 80122C14 0FCF030C */  jal        func_800F3C3C
    /* 31018 80122C18 48000424 */   addiu     $a0, $zero, 0x48
    /* 3101C 80122C1C 31DE030C */  jal        func_800F78C4
    /* 31020 80122C20 21204000 */   addu      $a0, $v0, $zero
    /* 31024 80122C24 93E0030C */  jal        func_800F824C
    /* 31028 80122C28 48000424 */   addiu     $a0, $zero, 0x48
    /* 3102C 80122C2C 59D9030C */  jal        func_800F6564
    /* 31030 80122C30 A8160424 */   addiu     $a0, $zero, 0x16A8
    /* 31034 80122C34 0DD9030C */  jal        func_800F6434
    /* 31038 80122C38 02000424 */   addiu     $a0, $zero, 0x2
    /* 3103C 80122C3C 05004014 */  bnez       $v0, .L80122C54
    /* 31040 80122C40 00000000 */   nop
    /* 31044 80122C44 77DC030C */  jal        func_800F71DC
    /* 31048 80122C48 0A000424 */   addiu     $a0, $zero, 0xA
    /* 3104C 80122C4C 178B0408 */  j          .L80122C5C
    /* 31050 80122C50 00000000 */   nop
  .L80122C54:
    /* 31054 80122C54 9CDC030C */  jal        func_800F7270
    /* 31058 80122C58 41000424 */   addiu     $a0, $zero, 0x41
  .L80122C5C:
    /* 3105C 80122C5C 5BE3030C */  jal        func_800F8D6C
    /* 31060 80122C60 45000424 */   addiu     $a0, $zero, 0x45
    /* 31064 80122C64 8CD9030C */  jal        func_800F6630
    /* 31068 80122C68 60000424 */   addiu     $a0, $zero, 0x60
    /* 3106C 80122C6C 50D4030C */  jal        func_800F5140
    /* 31070 80122C70 00000000 */   nop
    /* 31074 80122C74 93E0030C */  jal        func_800F824C
    /* 31078 80122C78 43000424 */   addiu     $a0, $zero, 0x43
    /* 3107C 80122C7C 91E5030C */  jal        func_800F9644
    /* 31080 80122C80 20000424 */   addiu     $a0, $zero, 0x20
    /* 31084 80122C84 96D9030C */  jal        func_800F6658
    /* 31088 80122C88 43000424 */   addiu     $a0, $zero, 0x43
    /* 3108C 80122C8C 0FCF030C */  jal        func_800F3C3C
    /* 31090 80122C90 45000424 */   addiu     $a0, $zero, 0x45
    /* 31094 80122C94 E5CF030C */  jal        func_800F3F94
    /* 31098 80122C98 21204000 */   addu      $a0, $v0, $zero
    /* 3109C 80122C9C 1E00043C */  lui        $a0, (0x1EFE0A >> 16)
    /* 310A0 80122CA0 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 310A4 80122CA4 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 310A8 80122CA8 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 310AC 80122CAC 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 310B0 80122CB0 00004394 */  lhu        $v1, 0x0($v0)
    /* 310B4 80122CB4 0AFE8434 */  ori        $a0, $a0, (0x1EFE0A & 0xFFFF)
    /* 310B8 80122CB8 3DDB030C */  jal        func_800F6CF4
    /* 310BC 80122CBC 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 310C0 80122CC0 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 310C4 80122CC4 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 310C8 80122CC8 1A80053C */  lui        $a1, %hi(D_8019ED58)
    /* 310CC 80122CCC 58EDA58C */  lw         $a1, %lo(D_8019ED58)($a1)
    /* 310D0 80122CD0 00004394 */  lhu        $v1, 0x0($v0)
    /* 310D4 80122CD4 20000424 */  addiu      $a0, $zero, 0x20
    /* 310D8 80122CD8 98E5030C */  jal        func_800F9660
    /* 310DC 80122CDC 0000A3A4 */   sh        $v1, 0x0($a1)
  .L80122CE0:
    /* 310E0 80122CE0 1000BF8F */  lw         $ra, 0x10($sp)
    /* 310E4 80122CE4 00000000 */  nop
    /* 310E8 80122CE8 0800E003 */  jr         $ra
    /* 310EC 80122CEC 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80122B54
