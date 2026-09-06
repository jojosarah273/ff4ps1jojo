nonmatching func_8016AB14, 0x168

glabel func_8016AB14
    /* 78F14 8016AB14 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 78F18 8016AB18 1000BFAF */  sw         $ra, 0x10($sp)
    /* 78F1C 8016AB1C C7E5030C */  jal        func_800F971C
    /* 78F20 8016AB20 00000000 */   nop
    /* 78F24 8016AB24 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 78F28 8016AB28 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 78F2C 8016AB2C 1A80043C */  lui        $a0, %hi(D_8019ED54)
    /* 78F30 8016AB30 54ED848C */  lw         $a0, %lo(D_8019ED54)($a0)
    /* 78F34 8016AB34 00004394 */  lhu        $v1, 0x0($v0)
    /* 78F38 8016AB38 00000000 */  nop
    /* 78F3C 8016AB3C 000083A4 */  sh         $v1, 0x0($a0)
    /* 78F40 8016AB40 1300043C */  lui        $a0, (0x13DB36 >> 16)
  .L8016AB44:
    /* 78F44 8016AB44 1ADB030C */  jal        func_800F6C68
    /* 78F48 8016AB48 36DB8434 */   ori       $a0, $a0, (0x13DB36 & 0xFFFF)
    /* 78F4C 8016AB4C DAE1030C */  jal        func_800F8768
    /* 78F50 8016AB50 04330424 */   addiu     $a0, $zero, 0x3304
    /* 78F54 8016AB54 D9D8030C */  jal        func_800F6364
    /* 78F58 8016AB58 00000000 */   nop
    /* 78F5C 8016AB5C 56D6030C */  jal        func_800F5958
    /* 78F60 8016AB60 15000424 */   addiu     $a0, $zero, 0x15
    /* 78F64 8016AB64 F5D4030C */  jal        func_800F53D4
    /* 78F68 8016AB68 00000000 */   nop
    /* 78F6C 8016AB6C F5FF4010 */  beqz       $v0, .L8016AB44
    /* 78F70 8016AB70 1300043C */   lui       $a0, (0x13DB36 >> 16)
    /* 78F74 8016AB74 9BE4030C */  jal        func_800F926C
    /* 78F78 8016AB78 00000000 */   nop
    /* 78F7C 8016AB7C C7E5030C */  jal        func_800F971C
    /* 78F80 8016AB80 00000000 */   nop
    /* 78F84 8016AB84 80E4030C */  jal        func_800F9200
    /* 78F88 8016AB88 00000000 */   nop
    /* 78F8C 8016AB8C 12E5030C */  jal        func_800F9448
    /* 78F90 8016AB90 00000000 */   nop
    /* 78F94 8016AB94 53D9030C */  jal        func_800F654C
    /* 78F98 8016AB98 43000424 */   addiu     $a0, $zero, 0x43
    /* 78F9C 8016AB9C 62E0030C */  jal        func_800F8188
    /* 78FA0 8016ABA0 00430424 */   addiu     $a0, $zero, 0x4300
    /* 78FA4 8016ABA4 62E0030C */  jal        func_800F8188
    /* 78FA8 8016ABA8 10430424 */   addiu     $a0, $zero, 0x4310
    /* 78FAC 8016ABAC 53D9030C */  jal        func_800F654C
    /* 78FB0 8016ABB0 42000424 */   addiu     $a0, $zero, 0x42
    /* 78FB4 8016ABB4 62E0030C */  jal        func_800F8188
    /* 78FB8 8016ABB8 20430424 */   addiu     $a0, $zero, 0x4320
    /* 78FBC 8016ABBC 53D9030C */  jal        func_800F654C
    /* 78FC0 8016ABC0 1B000424 */   addiu     $a0, $zero, 0x1B
    /* 78FC4 8016ABC4 62E0030C */  jal        func_800F8188
    /* 78FC8 8016ABC8 01430424 */   addiu     $a0, $zero, 0x4301
    /* 78FCC 8016ABCC 53D9030C */  jal        func_800F654C
    /* 78FD0 8016ABD0 1D000424 */   addiu     $a0, $zero, 0x1D
    /* 78FD4 8016ABD4 62E0030C */  jal        func_800F8188
    /* 78FD8 8016ABD8 11430424 */   addiu     $a0, $zero, 0x4311
    /* 78FDC 8016ABDC 53D9030C */  jal        func_800F654C
    /* 78FE0 8016ABE0 0E000424 */   addiu     $a0, $zero, 0xE
    /* 78FE4 8016ABE4 62E0030C */  jal        func_800F8188
    /* 78FE8 8016ABE8 21430424 */   addiu     $a0, $zero, 0x4321
    /* 78FEC 8016ABEC 77DC030C */  jal        func_800F71DC
    /* 78FF0 8016ABF0 04330424 */   addiu     $a0, $zero, 0x3304
    /* 78FF4 8016ABF4 40E3030C */  jal        func_800F8D00
    /* 78FF8 8016ABF8 02430424 */   addiu     $a0, $zero, 0x4302
    /* 78FFC 8016ABFC 77DC030C */  jal        func_800F71DC
    /* 79000 8016AC00 0B330424 */   addiu     $a0, $zero, 0x330B
    /* 79004 8016AC04 40E3030C */  jal        func_800F8D00
    /* 79008 8016AC08 12430424 */   addiu     $a0, $zero, 0x4312
    /* 7900C 8016AC0C 77DC030C */  jal        func_800F71DC
    /* 79010 8016AC10 12330424 */   addiu     $a0, $zero, 0x3312
    /* 79014 8016AC14 40E3030C */  jal        func_800F8D00
    /* 79018 8016AC18 22430424 */   addiu     $a0, $zero, 0x4322
    /* 7901C 8016AC1C 53D9030C */  jal        func_800F654C
    /* 79020 8016AC20 7E000424 */   addiu     $a0, $zero, 0x7E
    /* 79024 8016AC24 62E0030C */  jal        func_800F8188
    /* 79028 8016AC28 04430424 */   addiu     $a0, $zero, 0x4304
    /* 7902C 8016AC2C 62E0030C */  jal        func_800F8188
    /* 79030 8016AC30 07430424 */   addiu     $a0, $zero, 0x4307
    /* 79034 8016AC34 62E0030C */  jal        func_800F8188
    /* 79038 8016AC38 14430424 */   addiu     $a0, $zero, 0x4314
    /* 7903C 8016AC3C 62E0030C */  jal        func_800F8188
    /* 79040 8016AC40 17430424 */   addiu     $a0, $zero, 0x4317
    /* 79044 8016AC44 62E0030C */  jal        func_800F8188
    /* 79048 8016AC48 24430424 */   addiu     $a0, $zero, 0x4324
    /* 7904C 8016AC4C 62E0030C */  jal        func_800F8188
    /* 79050 8016AC50 27430424 */   addiu     $a0, $zero, 0x4327
    /* 79054 8016AC54 53D9030C */  jal        func_800F654C
    /* 79058 8016AC58 03000424 */   addiu     $a0, $zero, 0x3
    /* 7905C 8016AC5C 62E0030C */  jal        func_800F8188
    /* 79060 8016AC60 0C420424 */   addiu     $a0, $zero, 0x420C
    /* 79064 8016AC64 12E5030C */  jal        func_800F9448
    /* 79068 8016AC68 00000000 */   nop
    /* 7906C 8016AC6C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 79070 8016AC70 00000000 */  nop
    /* 79074 8016AC74 0800E003 */  jr         $ra
    /* 79078 8016AC78 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8016AB14
