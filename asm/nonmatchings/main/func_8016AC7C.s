nonmatching func_8016AC7C, 0x160

glabel func_8016AC7C
    /* 7907C 8016AC7C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 79080 8016AC80 1000BFAF */  sw         $ra, 0x10($sp)
    /* 79084 8016AC84 8CD9030C */  jal        func_800F6630
    /* 79088 8016AC88 4A000424 */   addiu     $a0, $zero, 0x4A
    /* 7908C 8016AC8C 19DE030C */  jal        func_800F7864
    /* 79090 8016AC90 00000000 */   nop
    /* 79094 8016AC94 92D0030C */  jal        func_800F4248
    /* 79098 8016AC98 01000424 */   addiu     $a0, $zero, 0x1
    /* 7909C 8016AC9C 1300043C */  lui        $a0, (0x13DBA7 >> 16)
    /* 790A0 8016ACA0 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 790A4 8016ACA4 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 790A8 8016ACA8 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 790AC 8016ACAC 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 790B0 8016ACB0 00004394 */  lhu        $v1, 0x0($v0)
    /* 790B4 8016ACB4 A7DB8434 */  ori        $a0, $a0, (0x13DBA7 & 0xFFFF)
    /* 790B8 8016ACB8 1ADB030C */  jal        func_800F6C68
    /* 790BC 8016ACBC 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 790C0 8016ACC0 1A80033C */  lui        $v1, %hi(D_8019ED44)
    /* 790C4 8016ACC4 44ED638C */  lw         $v1, %lo(D_8019ED44)($v1)
    /* 790C8 8016ACC8 1A80043C */  lui        $a0, %hi(D_8019ED54)
    /* 790CC 8016ACCC 54ED848C */  lw         $a0, %lo(D_8019ED54)($a0)
    /* 790D0 8016ACD0 00006294 */  lhu        $v0, 0x0($v1)
    /* 790D4 8016ACD4 C7E5030C */  jal        func_800F971C
    /* 790D8 8016ACD8 000082A4 */   sh        $v0, 0x0($a0)
    /* 790DC 8016ACDC 1A80033C */  lui        $v1, %hi(D_8019ED44)
    /* 790E0 8016ACE0 44ED638C */  lw         $v1, %lo(D_8019ED44)($v1)
    /* 790E4 8016ACE4 1A80043C */  lui        $a0, %hi(D_8019ED58)
    /* 790E8 8016ACE8 58ED848C */  lw         $a0, %lo(D_8019ED58)($a0)
    /* 790EC 8016ACEC 00006294 */  lhu        $v0, 0x0($v1)
    /* 790F0 8016ACF0 00000000 */  nop
    /* 790F4 8016ACF4 000082A4 */  sh         $v0, 0x0($a0)
    /* 790F8 8016ACF8 1300043C */  lui        $a0, (0x13D200 >> 16)
  .L8016ACFC:
    /* 790FC 8016ACFC 1ADB030C */  jal        func_800F6C68
    /* 79100 8016AD00 00D28434 */   ori       $a0, $a0, (0x13D200 & 0xFFFF)
    /* 79104 8016AD04 58E2030C */  jal        func_800F8960
    /* 79108 8016AD08 03220424 */   addiu     $a0, $zero, 0x2203
    /* 7910C 8016AD0C D9D8030C */  jal        func_800F6364
    /* 79110 8016AD10 00000000 */   nop
    /* 79114 8016AD14 EFD8030C */  jal        func_800F63BC
    /* 79118 8016AD18 00000000 */   nop
    /* 7911C 8016AD1C A4D6030C */  jal        func_800F5A90
    /* 79120 8016AD20 20000424 */   addiu     $a0, $zero, 0x20
    /* 79124 8016AD24 F5D4030C */  jal        func_800F53D4
    /* 79128 8016AD28 00000000 */   nop
    /* 7912C 8016AD2C F3FF4010 */  beqz       $v0, .L8016ACFC
    /* 79130 8016AD30 1300043C */   lui       $a0, (0x13D200 >> 16)
    /* 79134 8016AD34 8CD9030C */  jal        func_800F6630
    /* 79138 8016AD38 4A000424 */   addiu     $a0, $zero, 0x4A
    /* 7913C 8016AD3C 92D0030C */  jal        func_800F4248
    /* 79140 8016AD40 07000424 */   addiu     $a0, $zero, 0x7
    /* 79144 8016AD44 48D0030C */  jal        func_800F4120
    /* 79148 8016AD48 02020424 */   addiu     $a0, $zero, 0x202
    /* 7914C 8016AD4C 1F004014 */  bnez       $v0, .L8016ADCC
    /* 79150 8016AD50 00000000 */   nop
    /* 79154 8016AD54 91E5030C */  jal        func_800F9644
    /* 79158 8016AD58 20000424 */   addiu     $a0, $zero, 0x20
    /* 7915C 8016AD5C 63D9030C */  jal        func_800F658C
    /* 79160 8016AD60 C1220424 */   addiu     $a0, $zero, 0x22C1
    /* 79164 8016AD64 8BE4030C */  jal        func_800F922C
    /* 79168 8016AD68 00000000 */   nop
    /* 7916C 8016AD6C 77DC030C */  jal        func_800F71DC
    /* 79170 8016AD70 1C000424 */   addiu     $a0, $zero, 0x1C
  .L8016AD74:
    /* 79174 8016AD74 F8DA030C */  jal        func_800F6BE0
    /* 79178 8016AD78 A3220424 */   addiu     $a0, $zero, 0x22A3
    /* 7917C 8016AD7C F7E1030C */  jal        func_800F87DC
    /* 79180 8016AD80 A5220424 */   addiu     $a0, $zero, 0x22A5
    /* 79184 8016AD84 92D7030C */  jal        func_800F5E48
    /* 79188 8016AD88 00000000 */   nop
    /* 7918C 8016AD8C 92D7030C */  jal        func_800F5E48
    /* 79190 8016AD90 00000000 */   nop
    /* 79194 8016AD94 56D6030C */  jal        func_800F5958
    /* 79198 8016AD98 12000424 */   addiu     $a0, $zero, 0x12
    /* 7919C 8016AD9C F5D4030C */  jal        func_800F53D4
    /* 791A0 8016ADA0 00000000 */   nop
    /* 791A4 8016ADA4 F3FF4010 */  beqz       $v0, .L8016AD74
    /* 791A8 8016ADA8 00000000 */   nop
    /* 791AC 8016ADAC 04E5030C */  jal        func_800F9410
    /* 791B0 8016ADB0 00000000 */   nop
    /* 791B4 8016ADB4 6CE0030C */  jal        func_800F81B0
    /* 791B8 8016ADB8 B7220424 */   addiu     $a0, $zero, 0x22B7
    /* 791BC 8016ADBC C7E5030C */  jal        func_800F971C
    /* 791C0 8016ADC0 00000000 */   nop
    /* 791C4 8016ADC4 98E5030C */  jal        func_800F9660
    /* 791C8 8016ADC8 20000424 */   addiu     $a0, $zero, 0x20
  .L8016ADCC:
    /* 791CC 8016ADCC 1000BF8F */  lw         $ra, 0x10($sp)
    /* 791D0 8016ADD0 00000000 */  nop
    /* 791D4 8016ADD4 0800E003 */  jr         $ra
    /* 791D8 8016ADD8 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8016AC7C
