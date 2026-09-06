nonmatching func_8011F3F8, 0x284

glabel func_8011F3F8
    /* 2D7F8 8011F3F8 E0FFBD27 */  addiu      $sp, $sp, -0x20
    /* 2D7FC 8011F3FC 1C00BFAF */  sw         $ra, 0x1C($sp)
    /* 2D800 8011F400 1800B2AF */  sw         $s2, 0x18($sp)
    /* 2D804 8011F404 1400B1AF */  sw         $s1, 0x14($sp)
    /* 2D808 8011F408 CCE4030C */  jal        func_800F9330
    /* 2D80C 8011F40C 1000B0AF */   sw        $s0, 0x10($sp)
    /* 2D810 8011F410 E7E4030C */  jal        func_800F939C
    /* 2D814 8011F414 00000000 */   nop
    /* 2D818 8011F418 91E5030C */  jal        func_800F9644
    /* 2D81C 8011F41C 20000424 */   addiu     $a0, $zero, 0x20
    /* 2D820 8011F420 77DC030C */  jal        func_800F71DC
    /* 2D824 8011F424 7F000424 */   addiu     $a0, $zero, 0x7F
    /* 2D828 8011F428 5BE3030C */  jal        func_800F8D6C
    /* 2D82C 8011F42C 5A000424 */   addiu     $a0, $zero, 0x5A
  .L8011F430:
    /* 2D830 8011F430 BCD8030C */  jal        func_800F62F0
    /* 2D834 8011F434 5A000424 */   addiu     $a0, $zero, 0x5A
    /* 2D838 8011F438 20D5030C */  jal        func_800F5480
    /* 2D83C 8011F43C 00000000 */   nop
    /* 2D840 8011F440 34E0030C */  jal        func_800F80D0
    /* 2D844 8011F444 E8030424 */   addiu     $a0, $zero, 0x3E8
    /* 2D848 8011F448 FFD4030C */  jal        func_800F53FC
    /* 2D84C 8011F44C 00000000 */   nop
    /* 2D850 8011F450 F7FF4010 */  beqz       $v0, .L8011F430
    /* 2D854 8011F454 00000000 */   nop
    /* 2D858 8011F458 04D5030C */  jal        func_800F5410
    /* 2D85C 8011F45C 0D80113C */   lui       $s1, (0x800D4214 >> 16)
    /* 2D860 8011F460 19D0030C */  jal        func_800F4064
    /* 2D864 8011F464 E8030424 */   addiu     $a0, $zero, 0x3E8
    /* 2D868 8011F468 A6E4030C */  jal        func_800F9298
    /* 2D86C 8011F46C 14423136 */   ori       $s1, $s1, (0x800D4214 & 0xFFFF)
    /* 2D870 8011F470 77DC030C */  jal        func_800F71DC
    /* 2D874 8011F474 00420424 */   addiu     $a0, $zero, 0x4200
    /* 2D878 8011F478 CCE4030C */  jal        func_800F9330
    /* 2D87C 8011F47C 0D80123C */   lui       $s2, (0x800D4216 >> 16)
    /* 2D880 8011F480 2EE5030C */  jal        func_800F94B8
    /* 2D884 8011F484 16425236 */   ori       $s2, $s2, (0x800D4216 & 0xFFFF)
    /* 2D888 8011F488 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 2D88C 8011F48C 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 2D890 8011F490 00000000 */  nop
    /* 2D894 8011F494 00005094 */  lhu        $s0, 0x0($v0)
    /* 2D898 8011F498 20000424 */  addiu      $a0, $zero, 0x20
    /* 2D89C 8011F49C 98E5030C */  jal        func_800F9660
    /* 2D8A0 8011F4A0 00841000 */   sll       $s0, $s0, 16
    /* 2D8A4 8011F4A4 EB51033C */  lui        $v1, (0x51EB851F >> 16)
    /* 2D8A8 8011F4A8 1F856334 */  ori        $v1, $v1, (0x51EB851F & 0xFFFF)
    /* 2D8AC 8011F4AC 03241000 */  sra        $a0, $s0, 16
    /* 2D8B0 8011F4B0 18008300 */  mult       $a0, $v1
    /* 2D8B4 8011F4B4 C3871000 */  sra        $s0, $s0, 31
    /* 2D8B8 8011F4B8 10180000 */  mfhi       $v1
    /* 2D8BC 8011F4BC 43190300 */  sra        $v1, $v1, 5
    /* 2D8C0 8011F4C0 23187000 */  subu       $v1, $v1, $s0
    /* 2D8C4 8011F4C4 40100300 */  sll        $v0, $v1, 1
    /* 2D8C8 8011F4C8 21104300 */  addu       $v0, $v0, $v1
    /* 2D8CC 8011F4CC C0100200 */  sll        $v0, $v0, 3
    /* 2D8D0 8011F4D0 21104300 */  addu       $v0, $v0, $v1
    /* 2D8D4 8011F4D4 80100200 */  sll        $v0, $v0, 2
    /* 2D8D8 8011F4D8 23208200 */  subu       $a0, $a0, $v0
    /* 2D8DC 8011F4DC 000023A6 */  sh         $v1, 0x0($s1)
    /* 2D8E0 8011F4E0 9F7D040C */  jal        func_8011F67C
    /* 2D8E4 8011F4E4 000044A6 */   sh        $a0, 0x0($s2)
    /* 2D8E8 8011F4E8 8CD9030C */  jal        func_800F6630
    /* 2D8EC 8011F4EC 14000424 */   addiu     $a0, $zero, 0x14
    /* 2D8F0 8011F4F0 04D5030C */  jal        func_800F5410
    /* 2D8F4 8011F4F4 00000000 */   nop
    /* 2D8F8 8011F4F8 02D0030C */  jal        func_800F4008
    /* 2D8FC 8011F4FC 80000424 */   addiu     $a0, $zero, 0x80
    /* 2D900 8011F500 7AE0030C */  jal        func_800F81E8
    /* 2D904 8011F504 5B010424 */   addiu     $a0, $zero, 0x15B
    /* 2D908 8011F508 8CD9030C */  jal        func_800F6630
    /* 2D90C 8011F50C 16000424 */   addiu     $a0, $zero, 0x16
    /* 2D910 8011F510 1A80023C */  lui        $v0, %hi(D_8019ED40)
    /* 2D914 8011F514 40ED428C */  lw         $v0, %lo(D_8019ED40)($v0)
    /* 2D918 8011F518 00000000 */  nop
    /* 2D91C 8011F51C 00005090 */  lbu        $s0, 0x0($v0)
    /* 2D920 8011F520 C7E5030C */  jal        func_800F971C
    /* 2D924 8011F524 00000000 */   nop
    /* 2D928 8011F528 1A80043C */  lui        $a0, %hi(D_8019ED40)
    /* 2D92C 8011F52C 40ED848C */  lw         $a0, %lo(D_8019ED40)($a0)
    /* 2D930 8011F530 6666033C */  lui        $v1, (0x66666667 >> 16)
    /* 2D934 8011F534 00008290 */  lbu        $v0, 0x0($a0)
    /* 2D938 8011F538 67666334 */  ori        $v1, $v1, (0x66666667 & 0xFFFF)
    /* 2D93C 8011F53C 00120200 */  sll        $v0, $v0, 8
    /* 2D940 8011F540 25800202 */  or         $s0, $s0, $v0
    /* 2D944 8011F544 00841000 */  sll        $s0, $s0, 16
    /* 2D948 8011F548 03241000 */  sra        $a0, $s0, 16
    /* 2D94C 8011F54C 18008300 */  mult       $a0, $v1
    /* 2D950 8011F550 C3871000 */  sra        $s0, $s0, 31
    /* 2D954 8011F554 10180000 */  mfhi       $v1
    /* 2D958 8011F558 83180300 */  sra        $v1, $v1, 2
    /* 2D95C 8011F55C 23187000 */  subu       $v1, $v1, $s0
    /* 2D960 8011F560 80100300 */  sll        $v0, $v1, 2
    /* 2D964 8011F564 21104300 */  addu       $v0, $v0, $v1
    /* 2D968 8011F568 40100200 */  sll        $v0, $v0, 1
    /* 2D96C 8011F56C 23208200 */  subu       $a0, $a0, $v0
    /* 2D970 8011F570 000023A6 */  sh         $v1, 0x0($s1)
    /* 2D974 8011F574 9F7D040C */  jal        func_8011F67C
    /* 2D978 8011F578 000044A6 */   sh        $a0, 0x0($s2)
    /* 2D97C 8011F57C 8CD9030C */  jal        func_800F6630
    /* 2D980 8011F580 14000424 */   addiu     $a0, $zero, 0x14
    /* 2D984 8011F584 04D5030C */  jal        func_800F5410
    /* 2D988 8011F588 00000000 */   nop
    /* 2D98C 8011F58C 02D0030C */  jal        func_800F4008
    /* 2D990 8011F590 80000424 */   addiu     $a0, $zero, 0x80
    /* 2D994 8011F594 7AE0030C */  jal        func_800F81E8
    /* 2D998 8011F598 5D010424 */   addiu     $a0, $zero, 0x15D
    /* 2D99C 8011F59C 8CD9030C */  jal        func_800F6630
    /* 2D9A0 8011F5A0 16000424 */   addiu     $a0, $zero, 0x16
    /* 2D9A4 8011F5A4 2EE5030C */  jal        func_800F94B8
    /* 2D9A8 8011F5A8 00000000 */   nop
    /* 2D9AC 8011F5AC 04D5030C */  jal        func_800F5410
    /* 2D9B0 8011F5B0 00000000 */   nop
    /* 2D9B4 8011F5B4 02D0030C */  jal        func_800F4008
    /* 2D9B8 8011F5B8 80000424 */   addiu     $a0, $zero, 0x80
    /* 2D9BC 8011F5BC 93E0030C */  jal        func_800F824C
    /* 2D9C0 8011F5C0 5E000424 */   addiu     $a0, $zero, 0x5E
    /* 2D9C4 8011F5C4 8CD9030C */  jal        func_800F6630
    /* 2D9C8 8011F5C8 5A000424 */   addiu     $a0, $zero, 0x5A
    /* 2D9CC 8011F5CC 5DD5030C */  jal        func_800F5574
    /* 2D9D0 8011F5D0 80000424 */   addiu     $a0, $zero, 0x80
    /* 2D9D4 8011F5D4 F5D4030C */  jal        func_800F53D4
    /* 2D9D8 8011F5D8 00000000 */   nop
    /* 2D9DC 8011F5DC 1D004010 */  beqz       $v0, .L8011F654
    /* 2D9E0 8011F5E0 00000000 */   nop
    /* 2D9E4 8011F5E4 53D9030C */  jal        func_800F654C
    /* 2D9E8 8011F5E8 FF000424 */   addiu     $a0, $zero, 0xFF
    /* 2D9EC 8011F5EC 93E0030C */  jal        func_800F824C
    /* 2D9F0 8011F5F0 5A000424 */   addiu     $a0, $zero, 0x5A
    /* 2D9F4 8011F5F4 8CD9030C */  jal        func_800F6630
    /* 2D9F8 8011F5F8 5B000424 */   addiu     $a0, $zero, 0x5B
    /* 2D9FC 8011F5FC 5DD5030C */  jal        func_800F5574
    /* 2DA00 8011F600 80000424 */   addiu     $a0, $zero, 0x80
    /* 2DA04 8011F604 F5D4030C */  jal        func_800F53D4
    /* 2DA08 8011F608 00000000 */   nop
    /* 2DA0C 8011F60C 11004010 */  beqz       $v0, .L8011F654
    /* 2DA10 8011F610 00000000 */   nop
    /* 2DA14 8011F614 53D9030C */  jal        func_800F654C
    /* 2DA18 8011F618 FF000424 */   addiu     $a0, $zero, 0xFF
    /* 2DA1C 8011F61C 93E0030C */  jal        func_800F824C
    /* 2DA20 8011F620 5B000424 */   addiu     $a0, $zero, 0x5B
    /* 2DA24 8011F624 8CD9030C */  jal        func_800F6630
    /* 2DA28 8011F628 5D000424 */   addiu     $a0, $zero, 0x5D
    /* 2DA2C 8011F62C 5DD5030C */  jal        func_800F5574
    /* 2DA30 8011F630 80000424 */   addiu     $a0, $zero, 0x80
    /* 2DA34 8011F634 F5D4030C */  jal        func_800F53D4
    /* 2DA38 8011F638 00000000 */   nop
    /* 2DA3C 8011F63C 05004010 */  beqz       $v0, .L8011F654
    /* 2DA40 8011F640 00000000 */   nop
    /* 2DA44 8011F644 53D9030C */  jal        func_800F654C
    /* 2DA48 8011F648 FF000424 */   addiu     $a0, $zero, 0xFF
    /* 2DA4C 8011F64C 93E0030C */  jal        func_800F824C
    /* 2DA50 8011F650 5D000424 */   addiu     $a0, $zero, 0x5D
  .L8011F654:
    /* 2DA54 8011F654 83E5030C */  jal        func_800F960C
    /* 2DA58 8011F658 00000000 */   nop
    /* 2DA5C 8011F65C 68E5030C */  jal        func_800F95A0
    /* 2DA60 8011F660 00000000 */   nop
    /* 2DA64 8011F664 1C00BF8F */  lw         $ra, 0x1C($sp)
    /* 2DA68 8011F668 1800B28F */  lw         $s2, 0x18($sp)
    /* 2DA6C 8011F66C 1400B18F */  lw         $s1, 0x14($sp)
    /* 2DA70 8011F670 1000B08F */  lw         $s0, 0x10($sp)
    /* 2DA74 8011F674 0800E003 */  jr         $ra
    /* 2DA78 8011F678 2000BD27 */   addiu     $sp, $sp, 0x20
endlabel func_8011F3F8
