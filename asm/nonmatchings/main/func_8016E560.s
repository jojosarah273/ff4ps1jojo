nonmatching func_8016E560, 0x108

glabel func_8016E560
    /* 7C960 8016E560 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 7C964 8016E564 1000BFAF */  sw         $ra, 0x10($sp)
    /* 7C968 8016E568 C7E5030C */  jal        func_800F971C
    /* 7C96C 8016E56C 00000000 */   nop
    /* 7C970 8016E570 1A80033C */  lui        $v1, %hi(D_8019ED44)
    /* 7C974 8016E574 44ED638C */  lw         $v1, %lo(D_8019ED44)($v1)
    /* 7C978 8016E578 1A80043C */  lui        $a0, %hi(D_8019ED54)
    /* 7C97C 8016E57C 54ED848C */  lw         $a0, %lo(D_8019ED54)($a0)
    /* 7C980 8016E580 00006294 */  lhu        $v0, 0x0($v1)
    /* 7C984 8016E584 00000000 */  nop
    /* 7C988 8016E588 000082A4 */  sh         $v0, 0x0($a0)
    /* 7C98C 8016E58C 1A80033C */  lui        $v1, %hi(D_8019ED44)
    /* 7C990 8016E590 44ED638C */  lw         $v1, %lo(D_8019ED44)($v1)
    /* 7C994 8016E594 1A80043C */  lui        $a0, %hi(D_8019ED58)
    /* 7C998 8016E598 58ED848C */  lw         $a0, %lo(D_8019ED58)($a0)
    /* 7C99C 8016E59C 00006294 */  lhu        $v0, 0x0($v1)
    /* 7C9A0 8016E5A0 00000000 */  nop
    /* 7C9A4 8016E5A4 000082A4 */  sh         $v0, 0x0($a0)
  .L8016E5A8:
    /* 7C9A8 8016E5A8 5CDB030C */  jal        func_800F6D70
    /* 7C9AC 8016E5AC 40350424 */   addiu     $a0, $zero, 0x3540
    /* 7C9B0 8016E5B0 0DD9030C */  jal        func_800F6434
    /* 7C9B4 8016E5B4 02020424 */   addiu     $a0, $zero, 0x202
    /* 7C9B8 8016E5B8 0B004014 */  bnez       $v0, .L8016E5E8
    /* 7C9BC 8016E5BC 00000000 */   nop
    /* 7C9C0 8016E5C0 DADA030C */  jal        func_800F6B68
    /* 7C9C4 8016E5C4 03200424 */   addiu     $a0, $zero, 0x2003
    /* 7C9C8 8016E5C8 0DD9030C */  jal        func_800F6434
    /* 7C9CC 8016E5CC 80800434 */   ori       $a0, $zero, 0x8080
    /* 7C9D0 8016E5D0 05004014 */  bnez       $v0, .L8016E5E8
    /* 7C9D4 8016E5D4 00000000 */   nop
    /* 7C9D8 8016E5D8 3BE4030C */  jal        func_800F90EC
    /* 7C9DC 8016E5DC 07200424 */   addiu     $a0, $zero, 0x2007
    /* 7C9E0 8016E5E0 3BE4030C */  jal        func_800F90EC
    /* 7C9E4 8016E5E4 08200424 */   addiu     $a0, $zero, 0x2008
  .L8016E5E8:
    /* 7C9E8 8016E5E8 91E5030C */  jal        func_800F9644
    /* 7C9EC 8016E5EC 20000424 */   addiu     $a0, $zero, 0x20
    /* 7C9F0 8016E5F0 1A80033C */  lui        $v1, %hi(D_8019ED54)
    /* 7C9F4 8016E5F4 54ED638C */  lw         $v1, %lo(D_8019ED54)($v1)
    /* 7C9F8 8016E5F8 1A80043C */  lui        $a0, %hi(D_8019ED44)
    /* 7C9FC 8016E5FC 44ED848C */  lw         $a0, %lo(D_8019ED44)($a0)
    /* 7CA00 8016E600 00006294 */  lhu        $v0, 0x0($v1)
    /* 7CA04 8016E604 04D5030C */  jal        func_800F5410
    /* 7CA08 8016E608 000082A4 */   sh        $v0, 0x0($a0)
    /* 7CA0C 8016E60C 19D0030C */  jal        func_800F4064
    /* 7CA10 8016E610 80000424 */   addiu     $a0, $zero, 0x80
    /* 7CA14 8016E614 1A80033C */  lui        $v1, %hi(D_8019ED44)
    /* 7CA18 8016E618 44ED638C */  lw         $v1, %lo(D_8019ED44)($v1)
    /* 7CA1C 8016E61C 1A80043C */  lui        $a0, %hi(D_8019ED54)
    /* 7CA20 8016E620 54ED848C */  lw         $a0, %lo(D_8019ED54)($a0)
    /* 7CA24 8016E624 00006294 */  lhu        $v0, 0x0($v1)
    /* 7CA28 8016E628 C7E5030C */  jal        func_800F971C
    /* 7CA2C 8016E62C 000082A4 */   sh        $v0, 0x0($a0)
    /* 7CA30 8016E630 98E5030C */  jal        func_800F9660
    /* 7CA34 8016E634 20000424 */   addiu     $a0, $zero, 0x20
    /* 7CA38 8016E638 EFD8030C */  jal        func_800F63BC
    /* 7CA3C 8016E63C 00000000 */   nop
    /* 7CA40 8016E640 A4D6030C */  jal        func_800F5A90
    /* 7CA44 8016E644 05000424 */   addiu     $a0, $zero, 0x5
    /* 7CA48 8016E648 F5D4030C */  jal        func_800F53D4
    /* 7CA4C 8016E64C 00000000 */   nop
    /* 7CA50 8016E650 D5FF4010 */  beqz       $v0, .L8016E5A8
    /* 7CA54 8016E654 00000000 */   nop
    /* 7CA58 8016E658 1000BF8F */  lw         $ra, 0x10($sp)
    /* 7CA5C 8016E65C 00000000 */  nop
    /* 7CA60 8016E660 0800E003 */  jr         $ra
    /* 7CA64 8016E664 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8016E560
