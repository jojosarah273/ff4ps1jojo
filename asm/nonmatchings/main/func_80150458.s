nonmatching func_80150458, 0x1B8

glabel func_80150458
    /* 5E858 80150458 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 5E85C 8015045C 1000BFAF */  sw         $ra, 0x10($sp)
    /* 5E860 80150460 77DC030C */  jal        func_800F71DC
    /* 5E864 80150464 40000424 */   addiu     $a0, $zero, 0x40
    /* 5E868 80150468 5BE3030C */  jal        func_800F8D6C
    /* 5E86C 8015046C 21200000 */   addu      $a0, $zero, $zero
    /* 5E870 80150470 53D9030C */  jal        func_800F654C
    /* 5E874 80150474 7E000424 */   addiu     $a0, $zero, 0x7E
    /* 5E878 80150478 77DC030C */  jal        func_800F71DC
    /* 5E87C 8015047C E6DB0434 */   ori       $a0, $zero, 0xDBE6
    /* 5E880 80150480 80E4030C */  jal        func_800F9200
    /* 5E884 80150484 00000000 */   nop
    /* 5E888 80150488 CCE4030C */  jal        func_800F9330
    /* 5E88C 8015048C 00000000 */   nop
    /* 5E890 80150490 E7E4030C */  jal        func_800F939C
    /* 5E894 80150494 00000000 */   nop
    /* 5E898 80150498 9CDC030C */  jal        func_800F7270
    /* 5E89C 8015049C 21200000 */   addu      $a0, $zero, $zero
    /* 5E8A0 801504A0 CCE4030C */  jal        func_800F9330
    /* 5E8A4 801504A4 00000000 */   nop
  .L801504A8:
    /* 5E8A8 801504A8 59D9030C */  jal        func_800F6564
    /* 5E8AC 801504AC A8EF0434 */   ori       $a0, $zero, 0xEFA8
    /* 5E8B0 801504B0 0DD9030C */  jal        func_800F6434
    /* 5E8B4 801504B4 02000424 */   addiu     $a0, $zero, 0x2
    /* 5E8B8 801504B8 05004014 */  bnez       $v0, .L801504D0
    /* 5E8BC 801504BC 00000000 */   nop
    /* 5E8C0 801504C0 67C9010C */  jal        func_8007259C
    /* 5E8C4 801504C4 00000000 */   nop
    /* 5E8C8 801504C8 2A410508 */  j          .L801504A8
    /* 5E8CC 801504CC 00000000 */   nop
  .L801504D0:
    /* 5E8D0 801504D0 68E5030C */  jal        func_800F95A0
    /* 5E8D4 801504D4 00000000 */   nop
    /* 5E8D8 801504D8 5BE3030C */  jal        func_800F8D6C
    /* 5E8DC 801504DC 21200000 */   addu      $a0, $zero, $zero
    /* 5E8E0 801504E0 83E5030C */  jal        func_800F960C
    /* 5E8E4 801504E4 00000000 */   nop
    /* 5E8E8 801504E8 68E5030C */  jal        func_800F95A0
    /* 5E8EC 801504EC 00000000 */   nop
    /* 5E8F0 801504F0 F7E4030C */  jal        func_800F93DC
    /* 5E8F4 801504F4 00000000 */   nop
    /* 5E8F8 801504F8 62E0030C */  jal        func_800F8188
    /* 5E8FC 801504FC AFEF0434 */   ori       $a0, $zero, 0xEFAF
    /* 5E900 80150500 40E3030C */  jal        func_800F8D00
    /* 5E904 80150504 A9EF0434 */   ori       $a0, $zero, 0xEFA9
    /* 5E908 80150508 94E3030C */  jal        func_800F8E50
    /* 5E90C 8015050C ABEF0434 */   ori       $a0, $zero, 0xEFAB
    /* 5E910 80150510 77DC030C */  jal        func_800F71DC
    /* 5E914 80150514 40000424 */   addiu     $a0, $zero, 0x40
    /* 5E918 80150518 40E3030C */  jal        func_800F8D00
    /* 5E91C 8015051C ADEF0434 */   ori       $a0, $zero, 0xEFAD
    /* 5E920 80150520 91E5030C */  jal        func_800F9644
    /* 5E924 80150524 20000424 */   addiu     $a0, $zero, 0x20
    /* 5E928 80150528 96D9030C */  jal        func_800F6658
    /* 5E92C 8015052C 21200000 */   addu      $a0, $zero, $zero
    /* 5E930 80150530 1A80033C */  lui        $v1, %hi(D_8019ED44)
    /* 5E934 80150534 44ED638C */  lw         $v1, %lo(D_8019ED44)($v1)
    /* 5E938 80150538 00000000 */  nop
    /* 5E93C 8015053C 00006294 */  lhu        $v0, 0x0($v1)
    /* 5E940 80150540 00FF0434 */  ori        $a0, $zero, 0xFF00
    /* 5E944 80150544 80100200 */  sll        $v0, $v0, 2
    /* 5E948 80150548 99D0030C */  jal        func_800F4264
    /* 5E94C 8015054C 000062A4 */   sh        $v0, 0x0($v1)
    /* 5E950 80150550 9DE0030C */  jal        func_800F8274
    /* 5E954 80150554 21200000 */   addu      $a0, $zero, $zero
    /* 5E958 80150558 C7E5030C */  jal        func_800F971C
    /* 5E95C 8015055C 00000000 */   nop
    /* 5E960 80150560 98E5030C */  jal        func_800F9660
    /* 5E964 80150564 20000424 */   addiu     $a0, $zero, 0x20
    /* 5E968 80150568 8CD9030C */  jal        func_800F6630
    /* 5E96C 8015056C 01000424 */   addiu     $a0, $zero, 0x1
    /* 5E970 80150570 62E0030C */  jal        func_800F8188
    /* 5E974 80150574 B0EF0434 */   ori       $a0, $zero, 0xEFB0
  .L80150578:
    /* 5E978 80150578 90D8030C */  jal        func_800F6240
    /* 5E97C 8015057C A8EF0434 */   ori       $a0, $zero, 0xEFA8
    /* 5E980 80150580 67C9010C */  jal        func_8007259C
    /* 5E984 80150584 00000000 */   nop
    /* 5E988 80150588 49D7030C */  jal        func_800F5D24
    /* 5E98C 8015058C B0EF0434 */   ori       $a0, $zero, 0xEFB0
    /* 5E990 80150590 E3D6030C */  jal        func_800F5B8C
    /* 5E994 80150594 02000424 */   addiu     $a0, $zero, 0x2
    /* 5E998 80150598 19004014 */  bnez       $v0, .L80150600
    /* 5E99C 8015059C 00000000 */   nop
    /* 5E9A0 801505A0 91E5030C */  jal        func_800F9644
    /* 5E9A4 801505A4 20000424 */   addiu     $a0, $zero, 0x20
    /* 5E9A8 801505A8 63D9030C */  jal        func_800F658C
    /* 5E9AC 801505AC A9EF0434 */   ori       $a0, $zero, 0xEFA9
    /* 5E9B0 801505B0 04D5030C */  jal        func_800F5410
    /* 5E9B4 801505B4 00000000 */   nop
    /* 5E9B8 801505B8 19D0030C */  jal        func_800F4064
    /* 5E9BC 801505BC 40000424 */   addiu     $a0, $zero, 0x40
    /* 5E9C0 801505C0 6CE0030C */  jal        func_800F81B0
    /* 5E9C4 801505C4 A9EF0434 */   ori       $a0, $zero, 0xEFA9
    /* 5E9C8 801505C8 63D9030C */  jal        func_800F658C
    /* 5E9CC 801505CC ABEF0434 */   ori       $a0, $zero, 0xEFAB
    /* 5E9D0 801505D0 04D5030C */  jal        func_800F5410
    /* 5E9D4 801505D4 00000000 */   nop
    /* 5E9D8 801505D8 19D0030C */  jal        func_800F4064
    /* 5E9DC 801505DC 20000424 */   addiu     $a0, $zero, 0x20
    /* 5E9E0 801505E0 6CE0030C */  jal        func_800F81B0
    /* 5E9E4 801505E4 ABEF0434 */   ori       $a0, $zero, 0xEFAB
    /* 5E9E8 801505E8 C7E5030C */  jal        func_800F971C
    /* 5E9EC 801505EC 00000000 */   nop
    /* 5E9F0 801505F0 98E5030C */  jal        func_800F9660
    /* 5E9F4 801505F4 20000424 */   addiu     $a0, $zero, 0x20
    /* 5E9F8 801505F8 5E410508 */  j          .L80150578
    /* 5E9FC 801505FC 00000000 */   nop
  .L80150600:
    /* 5EA00 80150600 1000BF8F */  lw         $ra, 0x10($sp)
    /* 5EA04 80150604 00000000 */  nop
    /* 5EA08 80150608 0800E003 */  jr         $ra
    /* 5EA0C 8015060C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80150458
