nonmatching func_8010D6A0, 0x1F4

glabel func_8010D6A0
    /* 1BAA0 8010D6A0 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 1BAA4 8010D6A4 1000BFAF */  sw         $ra, 0x10($sp)
    /* 1BAA8 8010D6A8 5DD5030C */  jal        func_800F5574
    /* 1BAAC 8010D6AC 11000424 */   addiu     $a0, $zero, 0x11
    /* 1BAB0 8010D6B0 F0D4030C */  jal        func_800F53C0
    /* 1BAB4 8010D6B4 00000000 */   nop
    /* 1BAB8 8010D6B8 07004014 */  bnez       $v0, .L8010D6D8
    /* 1BABC 8010D6BC 21200000 */   addu      $a0, $zero, $zero
    /* 1BAC0 8010D6C0 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 1BAC4 8010D6C4 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 1BAC8 8010D6C8 00000000 */  nop
    /* 1BACC 8010D6CC 00006290 */  lbu        $v0, 0x0($v1)
    /* 1BAD0 8010D6D0 C6350408 */  j          .L8010D718
    /* 1BAD4 8010D6D4 C0100200 */   sll       $v0, $v0, 3
  .L8010D6D8:
    /* 1BAD8 8010D6D8 5DD5030C */  jal        func_800F5574
    /* 1BADC 8010D6DC 30000424 */   addiu     $a0, $zero, 0x30
    /* 1BAE0 8010D6E0 F0D4030C */  jal        func_800F53C0
    /* 1BAE4 8010D6E4 00000000 */   nop
    /* 1BAE8 8010D6E8 0F004014 */  bnez       $v0, .L8010D728
    /* 1BAEC 8010D6EC 00000000 */   nop
    /* 1BAF0 8010D6F0 20D5030C */  jal        func_800F5480
    /* 1BAF4 8010D6F4 00000000 */   nop
    /* 1BAF8 8010D6F8 16E0030C */  jal        func_800F8058
    /* 1BAFC 8010D6FC 11000424 */   addiu     $a0, $zero, 0x11
    /* 1BB00 8010D700 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 1BB04 8010D704 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 1BB08 8010D708 00000000 */  nop
    /* 1BB0C 8010D70C 00006290 */  lbu        $v0, 0x0($v1)
    /* 1BB10 8010D710 00330424 */  addiu      $a0, $zero, 0x3300
    /* 1BB14 8010D714 80100200 */  sll        $v0, $v0, 2
  .L8010D718:
    /* 1BB18 8010D718 77DC030C */  jal        func_800F71DC
    /* 1BB1C 8010D71C 000062A0 */   sb        $v0, 0x0($v1)
    /* 1BB20 8010D720 E0350408 */  j          .L8010D780
    /* 1BB24 8010D724 00000000 */   nop
  .L8010D728:
    /* 1BB28 8010D728 5DD5030C */  jal        func_800F5574
    /* 1BB2C 8010D72C 46000424 */   addiu     $a0, $zero, 0x46
    /* 1BB30 8010D730 F0D4030C */  jal        func_800F53C0
    /* 1BB34 8010D734 00000000 */   nop
    /* 1BB38 8010D738 0B004014 */  bnez       $v0, .L8010D768
    /* 1BB3C 8010D73C 00000000 */   nop
    /* 1BB40 8010D740 20D5030C */  jal        func_800F5480
    /* 1BB44 8010D744 00000000 */   nop
    /* 1BB48 8010D748 16E0030C */  jal        func_800F8058
    /* 1BB4C 8010D74C 30000424 */   addiu     $a0, $zero, 0x30
    /* 1BB50 8010D750 50D4030C */  jal        func_800F5140
    /* 1BB54 8010D754 00000000 */   nop
    /* 1BB58 8010D758 77DC030C */  jal        func_800F71DC
    /* 1BB5C 8010D75C 80610424 */   addiu     $a0, $zero, 0x6180
    /* 1BB60 8010D760 E0350408 */  j          .L8010D780
    /* 1BB64 8010D764 00000000 */   nop
  .L8010D768:
    /* 1BB68 8010D768 20D5030C */  jal        func_800F5480
    /* 1BB6C 8010D76C 00000000 */   nop
    /* 1BB70 8010D770 16E0030C */  jal        func_800F8058
    /* 1BB74 8010D774 46000424 */   addiu     $a0, $zero, 0x46
    /* 1BB78 8010D778 77DC030C */  jal        func_800F71DC
    /* 1BB7C 8010D77C 00720424 */   addiu     $a0, $zero, 0x7200
  .L8010D780:
    /* 1BB80 8010D780 91E5030C */  jal        func_800F9644
    /* 1BB84 8010D784 20000424 */   addiu     $a0, $zero, 0x20
    /* 1BB88 8010D788 52CF030C */  jal        func_800F3D48
    /* 1BB8C 8010D78C 00000000 */   nop
    /* 1BB90 8010D790 1A80033C */  lui        $v1, %hi(D_8019ED44)
    /* 1BB94 8010D794 44ED638C */  lw         $v1, %lo(D_8019ED44)($v1)
    /* 1BB98 8010D798 00000000 */  nop
    /* 1BB9C 8010D79C 00006294 */  lhu        $v0, 0x0($v1)
    /* 1BBA0 8010D7A0 4A000424 */  addiu      $a0, $zero, 0x4A
    /* 1BBA4 8010D7A4 82100200 */  srl        $v0, $v0, 2
    /* 1BBA8 8010D7A8 9DE0030C */  jal        func_800F8274
    /* 1BBAC 8010D7AC 000062A4 */   sh        $v0, 0x0($v1)
    /* 1BBB0 8010D7B0 25DE030C */  jal        func_800F7894
    /* 1BBB4 8010D7B4 00000000 */   nop
    /* 1BBB8 8010D7B8 04D5030C */  jal        func_800F5410
    /* 1BBBC 8010D7BC 00000000 */   nop
    /* 1BBC0 8010D7C0 0FCF030C */  jal        func_800F3C3C
    /* 1BBC4 8010D7C4 4A000424 */   addiu     $a0, $zero, 0x4A
    /* 1BBC8 8010D7C8 E5CF030C */  jal        func_800F3F94
    /* 1BBCC 8010D7CC 21204000 */   addu      $a0, $v0, $zero
    /* 1BBD0 8010D7D0 9DE0030C */  jal        func_800F8274
    /* 1BBD4 8010D7D4 4A000424 */   addiu     $a0, $zero, 0x4A
    /* 1BBD8 8010D7D8 1A80033C */  lui        $v1, %hi(D_8019ED54)
    /* 1BBDC 8010D7DC 54ED638C */  lw         $v1, %lo(D_8019ED54)($v1)
    /* 1BBE0 8010D7E0 1A80043C */  lui        $a0, %hi(D_8019ED44)
    /* 1BBE4 8010D7E4 44ED848C */  lw         $a0, %lo(D_8019ED44)($a0)
    /* 1BBE8 8010D7E8 00006294 */  lhu        $v0, 0x0($v1)
    /* 1BBEC 8010D7EC 04D5030C */  jal        func_800F5410
    /* 1BBF0 8010D7F0 000082A4 */   sh        $v0, 0x0($a0)
    /* 1BBF4 8010D7F4 0FCF030C */  jal        func_800F3C3C
    /* 1BBF8 8010D7F8 4A000424 */   addiu     $a0, $zero, 0x4A
    /* 1BBFC 8010D7FC E5CF030C */  jal        func_800F3F94
    /* 1BC00 8010D800 21204000 */   addu      $a0, $v0, $zero
    /* 1BC04 8010D804 04D5030C */  jal        func_800F5410
    /* 1BC08 8010D808 00000000 */   nop
    /* 1BC0C 8010D80C 19D0030C */  jal        func_800F4064
    /* 1BC10 8010D810 00800434 */   ori       $a0, $zero, 0x8000
    /* 1BC14 8010D814 9DE0030C */  jal        func_800F8274
    /* 1BC18 8010D818 4A000424 */   addiu     $a0, $zero, 0x4A
    /* 1BC1C 8010D81C 56D9030C */  jal        func_800F6558
    /* 1BC20 8010D820 21200000 */   addu      $a0, $zero, $zero
    /* 1BC24 8010D824 98E5030C */  jal        func_800F9660
    /* 1BC28 8010D828 20000424 */   addiu     $a0, $zero, 0x20
    /* 1BC2C 8010D82C 8CD9030C */  jal        func_800F6630
    /* 1BC30 8010D830 AE000424 */   addiu     $a0, $zero, 0xAE
    /* 1BC34 8010D834 50D4030C */  jal        func_800F5140
    /* 1BC38 8010D838 00000000 */   nop
    /* 1BC3C 8010D83C 04D5030C */  jal        func_800F5410
    /* 1BC40 8010D840 00000000 */   nop
    /* 1BC44 8010D844 02D0030C */  jal        func_800F4008
    /* 1BC48 8010D848 42000424 */   addiu     $a0, $zero, 0x42
    /* 1BC4C 8010D84C 93E0030C */  jal        func_800F824C
    /* 1BC50 8010D850 4D000424 */   addiu     $a0, $zero, 0x4D
    /* 1BC54 8010D854 EEE3030C */  jal        func_800F8FB8
    /* 1BC58 8010D858 4C000424 */   addiu     $a0, $zero, 0x4C
    /* 1BC5C 8010D85C 77DC030C */  jal        func_800F71DC
    /* 1BC60 8010D860 00020424 */   addiu     $a0, $zero, 0x200
    /* 1BC64 8010D864 5BE3030C */  jal        func_800F8D6C
    /* 1BC68 8010D868 4E000424 */   addiu     $a0, $zero, 0x4E
    /* 1BC6C 8010D86C 53D9030C */  jal        func_800F654C
    /* 1BC70 8010D870 1B000424 */   addiu     $a0, $zero, 0x1B
    /* 1BC74 8010D874 93E0030C */  jal        func_800F824C
    /* 1BC78 8010D878 49000424 */   addiu     $a0, $zero, 0x49
    /* 1BC7C 8010D87C 16C1050C */  jal        func_80170458
    /* 1BC80 8010D880 00000000 */   nop
    /* 1BC84 8010D884 1000BF8F */  lw         $ra, 0x10($sp)
    /* 1BC88 8010D888 00000000 */  nop
    /* 1BC8C 8010D88C 0800E003 */  jr         $ra
    /* 1BC90 8010D890 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8010D6A0
