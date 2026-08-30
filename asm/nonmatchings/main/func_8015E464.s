nonmatching func_8015E464, 0x208

glabel func_8015E464
    /* 6C864 8015E464 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 6C868 8015E468 1000BFAF */  sw         $ra, 0x10($sp)
    /* 6C86C 8015E46C 9CDC030C */  jal        func_800F7270
    /* 6C870 8015E470 A6000424 */   addiu     $a0, $zero, 0xA6
    /* 6C874 8015E474 53D9030C */  jal        func_800F654C
    /* 6C878 8015E478 80000424 */   addiu     $a0, $zero, 0x80
    /* 6C87C 8015E47C DAE1030C */  jal        func_800F8768
    /* 6C880 8015E480 50200424 */   addiu     $a0, $zero, 0x2050
    /* 6C884 8015E484 3BE4030C */  jal        func_800F90EC
    /* 6C888 8015E488 51200424 */   addiu     $a0, $zero, 0x2051
    /* 6C88C 8015E48C 3BE4030C */  jal        func_800F90EC
    /* 6C890 8015E490 54200424 */   addiu     $a0, $zero, 0x2054
    /* 6C894 8015E494 3BE4030C */  jal        func_800F90EC
    /* 6C898 8015E498 53200424 */   addiu     $a0, $zero, 0x2053
    /* 6C89C 8015E49C DADA030C */  jal        func_800F6B68
    /* 6C8A0 8015E4A0 04200424 */   addiu     $a0, $zero, 0x2004
    /* 6C8A4 8015E4A4 92D0030C */  jal        func_800F4248
    /* 6C8A8 8015E4A8 08000424 */   addiu     $a0, $zero, 0x8
    /* 6C8AC 8015E4AC 48D0030C */  jal        func_800F4120
    /* 6C8B0 8015E4B0 02000424 */   addiu     $a0, $zero, 0x2
    /* 6C8B4 8015E4B4 46004014 */  bnez       $v0, .L8015E5D0
    /* 6C8B8 8015E4B8 00000000 */   nop
  .L8015E4BC:
    /* 6C8BC 8015E4BC 77DC030C */  jal        func_800F71DC
    /* 6C8C0 8015E4C0 21200000 */   addu      $a0, $zero, $zero
    /* 6C8C4 8015E4C4 53D9030C */  jal        func_800F654C
    /* 6C8C8 8015E4C8 04000424 */   addiu     $a0, $zero, 0x4
    /* 6C8CC 8015E4CC 8948050C */  jal        func_80152224
    /* 6C8D0 8015E4D0 00000000 */   nop
    /* 6C8D4 8015E4D4 93E0030C */  jal        func_800F824C
    /* 6C8D8 8015E4D8 A9000424 */   addiu     $a0, $zero, 0xA9
    /* 6C8DC 8015E4DC 93E0030C */  jal        func_800F824C
    /* 6C8E0 8015E4E0 DF000424 */   addiu     $a0, $zero, 0xDF
    /* 6C8E4 8015E4E4 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 6C8E8 8015E4E8 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 6C8EC 8015E4EC 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 6C8F0 8015E4F0 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 6C8F4 8015E4F4 00004394 */  lhu        $v1, 0x0($v0)
    /* 6C8F8 8015E4F8 40350424 */  addiu      $a0, $zero, 0x3540
    /* 6C8FC 8015E4FC DADA030C */  jal        func_800F6B68
    /* 6C900 8015E500 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 6C904 8015E504 0DD9030C */  jal        func_800F6434
    /* 6C908 8015E508 02020424 */   addiu     $a0, $zero, 0x202
    /* 6C90C 8015E50C EBFF4014 */  bnez       $v0, .L8015E4BC
    /* 6C910 8015E510 00000000 */   nop
    /* 6C914 8015E514 53D9030C */  jal        func_800F654C
    /* 6C918 8015E518 80000424 */   addiu     $a0, $zero, 0x80
    /* 6C91C 8015E51C 93E0030C */  jal        func_800F824C
    /* 6C920 8015E520 AB000424 */   addiu     $a0, $zero, 0xAB
    /* 6C924 8015E524 0349050C */  jal        func_8015240C
    /* 6C928 8015E528 00000000 */   nop
    /* 6C92C 8015E52C 9CDC030C */  jal        func_800F7270
    /* 6C930 8015E530 E3000424 */   addiu     $a0, $zero, 0xE3
    /* 6C934 8015E534 DADA030C */  jal        func_800F6B68
    /* 6C938 8015E538 03200424 */   addiu     $a0, $zero, 0x2003
    /* 6C93C 8015E53C 92D0030C */  jal        func_800F4248
    /* 6C940 8015E540 C0000424 */   addiu     $a0, $zero, 0xC0
    /* 6C944 8015E544 48D0030C */  jal        func_800F4120
    /* 6C948 8015E548 02020424 */   addiu     $a0, $zero, 0x202
    /* 6C94C 8015E54C DBFF4014 */  bnez       $v0, .L8015E4BC
    /* 6C950 8015E550 00000000 */   nop
    /* 6C954 8015E554 DADA030C */  jal        func_800F6B68
    /* 6C958 8015E558 05200424 */   addiu     $a0, $zero, 0x2005
    /* 6C95C 8015E55C 92D0030C */  jal        func_800F4248
    /* 6C960 8015E560 82000424 */   addiu     $a0, $zero, 0x82
    /* 6C964 8015E564 48D0030C */  jal        func_800F4120
    /* 6C968 8015E568 02020424 */   addiu     $a0, $zero, 0x202
    /* 6C96C 8015E56C D3FF4014 */  bnez       $v0, .L8015E4BC
    /* 6C970 8015E570 00000000 */   nop
    /* 6C974 8015E574 DADA030C */  jal        func_800F6B68
    /* 6C978 8015E578 06200424 */   addiu     $a0, $zero, 0x2006
    /* 6C97C 8015E57C 0DD9030C */  jal        func_800F6434
    /* 6C980 8015E580 80000424 */   addiu     $a0, $zero, 0x80
    /* 6C984 8015E584 CDFF4014 */  bnez       $v0, .L8015E4BC
    /* 6C988 8015E588 00000000 */   nop
    /* 6C98C 8015E58C 8CD9030C */  jal        func_800F6630
    /* 6C990 8015E590 A9000424 */   addiu     $a0, $zero, 0xA9
    /* 6C994 8015E594 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 6C998 8015E598 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 6C99C 8015E59C 1A80043C */  lui        $a0, %hi(D_8019ED54)
    /* 6C9A0 8015E5A0 54ED848C */  lw         $a0, %lo(D_8019ED54)($a0)
    /* 6C9A4 8015E5A4 00004394 */  lhu        $v1, 0x0($v0)
    /* 6C9A8 8015E5A8 C7E5030C */  jal        func_800F971C
    /* 6C9AC 8015E5AC 000083A4 */   sh        $v1, 0x0($a0)
    /* 6C9B0 8015E5B0 264C050C */  jal        func_80153098
    /* 6C9B4 8015E5B4 00000000 */   nop
    /* 6C9B8 8015E5B8 9CDC030C */  jal        func_800F7270
    /* 6C9BC 8015E5BC A6000424 */   addiu     $a0, $zero, 0xA6
    /* 6C9C0 8015E5C0 DAE1030C */  jal        func_800F8768
    /* 6C9C4 8015E5C4 54200424 */   addiu     $a0, $zero, 0x2054
    /* 6C9C8 8015E5C8 97790508 */  j          .L8015E65C
    /* 6C9CC 8015E5CC 00000000 */   nop
  .L8015E5D0:
    /* 6C9D0 8015E5D0 5B4C050C */  jal        func_8015316C
    /* 6C9D4 8015E5D4 00000000 */   nop
    /* 6C9D8 8015E5D8 93E0030C */  jal        func_800F824C
    /* 6C9DC 8015E5DC A9000424 */   addiu     $a0, $zero, 0xA9
    /* 6C9E0 8015E5E0 04D5030C */  jal        func_800F5410
    /* 6C9E4 8015E5E4 00000000 */   nop
    /* 6C9E8 8015E5E8 02D0030C */  jal        func_800F4008
    /* 6C9EC 8015E5EC 05000424 */   addiu     $a0, $zero, 0x5
    /* 6C9F0 8015E5F0 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 6C9F4 8015E5F4 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 6C9F8 8015E5F8 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 6C9FC 8015E5FC 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 6CA00 8015E600 00004394 */  lhu        $v1, 0x0($v0)
    /* 6CA04 8015E604 40350424 */  addiu      $a0, $zero, 0x3540
    /* 6CA08 8015E608 DADA030C */  jal        func_800F6B68
    /* 6CA0C 8015E60C 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 6CA10 8015E610 0DD9030C */  jal        func_800F6434
    /* 6CA14 8015E614 02020424 */   addiu     $a0, $zero, 0x202
    /* 6CA18 8015E618 EDFF4014 */  bnez       $v0, .L8015E5D0
    /* 6CA1C 8015E61C 00000000 */   nop
    /* 6CA20 8015E620 8CD9030C */  jal        func_800F6630
    /* 6CA24 8015E624 A9000424 */   addiu     $a0, $zero, 0xA9
    /* 6CA28 8015E628 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 6CA2C 8015E62C 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 6CA30 8015E630 1A80043C */  lui        $a0, %hi(D_8019ED54)
    /* 6CA34 8015E634 54ED848C */  lw         $a0, %lo(D_8019ED54)($a0)
    /* 6CA38 8015E638 00004394 */  lhu        $v1, 0x0($v0)
    /* 6CA3C 8015E63C C7E5030C */  jal        func_800F971C
    /* 6CA40 8015E640 000083A4 */   sh        $v1, 0x0($a0)
    /* 6CA44 8015E644 264C050C */  jal        func_80153098
    /* 6CA48 8015E648 00000000 */   nop
    /* 6CA4C 8015E64C 9CDC030C */  jal        func_800F7270
    /* 6CA50 8015E650 A6000424 */   addiu     $a0, $zero, 0xA6
    /* 6CA54 8015E654 DAE1030C */  jal        func_800F8768
    /* 6CA58 8015E658 53200424 */   addiu     $a0, $zero, 0x2053
  .L8015E65C:
    /* 6CA5C 8015E65C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 6CA60 8015E660 00000000 */  nop
    /* 6CA64 8015E664 0800E003 */  jr         $ra
    /* 6CA68 8015E668 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8015E464
