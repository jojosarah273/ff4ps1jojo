nonmatching func_8012C584, 0x134

glabel func_8012C584
    /* 3A984 8012C584 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 3A988 8012C588 1000BFAF */  sw         $ra, 0x10($sp)
    /* 3A98C 8012C58C 40DD030C */  jal        func_800F7500
    /* 3A990 8012C590 03000424 */   addiu     $a0, $zero, 0x3
    /* 3A994 8012C594 B6D9030C */  jal        func_800F66D8
    /* 3A998 8012C598 60000424 */   addiu     $a0, $zero, 0x60
    /* 3A99C 8012C59C 92D0030C */  jal        func_800F4248
    /* 3A9A0 8012C5A0 80000424 */   addiu     $a0, $zero, 0x80
    /* 3A9A4 8012C5A4 48D0030C */  jal        func_800F4120
    /* 3A9A8 8012C5A8 02020424 */   addiu     $a0, $zero, 0x202
    /* 3A9AC 8012C5AC 08004014 */  bnez       $v0, .L8012C5D0
    /* 3A9B0 8012C5B0 1A80023C */   lui       $v0, %hi(D_801991AE)
    /* 3A9B4 8012C5B4 AE914494 */  lhu        $a0, %lo(D_801991AE)($v0)
    /* 3A9B8 8012C5B8 40DD030C */  jal        func_800F7500
    /* 3A9BC 8012C5BC 00000000 */   nop
    /* 3A9C0 8012C5C0 BEB0040C */  jal        func_8012C2F8
    /* 3A9C4 8012C5C4 00000000 */   nop
    /* 3A9C8 8012C5C8 AAB10408 */  j          .L8012C6A8
    /* 3A9CC 8012C5CC 00000000 */   nop
  .L8012C5D0:
    /* 3A9D0 8012C5D0 40DD030C */  jal        func_800F7500
    /* 3A9D4 8012C5D4 16000424 */   addiu     $a0, $zero, 0x16
    /* 3A9D8 8012C5D8 B6D9030C */  jal        func_800F66D8
    /* 3A9DC 8012C5DC 60000424 */   addiu     $a0, $zero, 0x60
    /* 3A9E0 8012C5E0 93E0030C */  jal        func_800F824C
    /* 3A9E4 8012C5E4 43000424 */   addiu     $a0, $zero, 0x43
    /* 3A9E8 8012C5E8 91E5030C */  jal        func_800F9644
    /* 3A9EC 8012C5EC 20000424 */   addiu     $a0, $zero, 0x20
    /* 3A9F0 8012C5F0 96D9030C */  jal        func_800F6658
    /* 3A9F4 8012C5F4 43000424 */   addiu     $a0, $zero, 0x43
    /* 3A9F8 8012C5F8 1A80033C */  lui        $v1, %hi(D_8019ED44)
    /* 3A9FC 8012C5FC 44ED638C */  lw         $v1, %lo(D_8019ED44)($v1)
    /* 3AA00 8012C600 00000000 */  nop
    /* 3AA04 8012C604 00006294 */  lhu        $v0, 0x0($v1)
    /* 3AA08 8012C608 00000000 */  nop
    /* 3AA0C 8012C60C 40100200 */  sll        $v0, $v0, 1
    /* 3AA10 8012C610 5BD4030C */  jal        func_800F516C
    /* 3AA14 8012C614 000062A4 */   sh        $v0, 0x0($v1)
    /* 3AA18 8012C618 14D4030C */  jal        func_800F5050
    /* 3AA1C 8012C61C 00000000 */   nop
    /* 3AA20 8012C620 0FCF030C */  jal        func_800F3C3C
    /* 3AA24 8012C624 43000424 */   addiu     $a0, $zero, 0x43
    /* 3AA28 8012C628 E5CF030C */  jal        func_800F3F94
    /* 3AA2C 8012C62C 21204000 */   addu      $a0, $v0, $zero
    /* 3AA30 8012C630 40DD030C */  jal        func_800F7500
    /* 3AA34 8012C634 07000424 */   addiu     $a0, $zero, 0x7
    /* 3AA38 8012C638 9CCE030C */  jal        func_800F3A70
    /* 3AA3C 8012C63C 60000424 */   addiu     $a0, $zero, 0x60
    /* 3AA40 8012C640 C1CE030C */  jal        func_800F3B04
    /* 3AA44 8012C644 21204000 */   addu      $a0, $v0, $zero
    /* 3AA48 8012C648 1A80033C */  lui        $v1, %hi(D_8019ED58)
    /* 3AA4C 8012C64C 58ED638C */  lw         $v1, %lo(D_8019ED58)($v1)
    /* 3AA50 8012C650 00000000 */  nop
    /* 3AA54 8012C654 00006494 */  lhu        $a0, 0x0($v1)
    /* 3AA58 8012C658 48D5030C */  jal        func_800F5520
    /* 3AA5C 8012C65C 21204400 */   addu      $a0, $v0, $a0
    /* 3AA60 8012C660 F0D4030C */  jal        func_800F53C0
    /* 3AA64 8012C664 00000000 */   nop
    /* 3AA68 8012C668 03004010 */  beqz       $v0, .L8012C678
    /* 3AA6C 8012C66C 00000000 */   nop
    /* 3AA70 8012C670 DEE0030C */  jal        func_800F8378
    /* 3AA74 8012C674 60000424 */   addiu     $a0, $zero, 0x60
  .L8012C678:
    /* 3AA78 8012C678 98E5030C */  jal        func_800F9660
    /* 3AA7C 8012C67C 20000424 */   addiu     $a0, $zero, 0x20
    /* 3AA80 8012C680 40DD030C */  jal        func_800F7500
    /* 3AA84 8012C684 03000424 */   addiu     $a0, $zero, 0x3
    /* 3AA88 8012C688 B6D9030C */  jal        func_800F66D8
    /* 3AA8C 8012C68C 60000424 */   addiu     $a0, $zero, 0x60
    /* 3AA90 8012C690 92D0030C */  jal        func_800F4248
    /* 3AA94 8012C694 7F000424 */   addiu     $a0, $zero, 0x7F
    /* 3AA98 8012C698 BBE0030C */  jal        func_800F82EC
    /* 3AA9C 8012C69C 60000424 */   addiu     $a0, $zero, 0x60
    /* 3AAA0 8012C6A0 7B88040C */  jal        func_801221EC
    /* 3AAA4 8012C6A4 00000000 */   nop
  .L8012C6A8:
    /* 3AAA8 8012C6A8 1000BF8F */  lw         $ra, 0x10($sp)
    /* 3AAAC 8012C6AC 00000000 */  nop
    /* 3AAB0 8012C6B0 0800E003 */  jr         $ra
    /* 3AAB4 8012C6B4 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8012C584
