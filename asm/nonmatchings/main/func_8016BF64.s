nonmatching func_8016BF64, 0x84

glabel func_8016BF64
    /* 7A364 8016BF64 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 7A368 8016BF68 1000BFAF */  sw         $ra, 0x10($sp)
    /* 7A36C 8016BF6C 0FCF030C */  jal        func_800F3C3C
    /* 7A370 8016BF70 21200000 */   addu      $a0, $zero, $zero
    /* 7A374 8016BF74 6D004490 */  lbu        $a0, 0x6D($v0)
    /* 7A378 8016BF78 6C004390 */  lbu        $v1, 0x6C($v0)
    /* 7A37C 8016BF7C 7D004590 */  lbu        $a1, 0x7D($v0)
    /* 7A380 8016BF80 1000BF8F */  lw         $ra, 0x10($sp)
    /* 7A384 8016BF84 00220400 */  sll        $a0, $a0, 8
    /* 7A388 8016BF88 25186400 */  or         $v1, $v1, $a0
    /* 7A38C 8016BF8C 7C004490 */  lbu        $a0, 0x7C($v0)
    /* 7A390 8016BF90 002A0500 */  sll        $a1, $a1, 8
    /* 7A394 8016BF94 25208500 */  or         $a0, $a0, $a1
    /* 7A398 8016BF98 21186400 */  addu       $v1, $v1, $a0
    /* 7A39C 8016BF9C 6F004490 */  lbu        $a0, 0x6F($v0)
    /* 7A3A0 8016BFA0 FFFF6330 */  andi       $v1, $v1, 0xFFFF
    /* 7A3A4 8016BFA4 4B0043A0 */  sb         $v1, 0x4B($v0)
    /* 7A3A8 8016BFA8 021A0300 */  srl        $v1, $v1, 8
    /* 7A3AC 8016BFAC 4C0043A0 */  sb         $v1, 0x4C($v0)
    /* 7A3B0 8016BFB0 6E004390 */  lbu        $v1, 0x6E($v0)
    /* 7A3B4 8016BFB4 7F004590 */  lbu        $a1, 0x7F($v0)
    /* 7A3B8 8016BFB8 00220400 */  sll        $a0, $a0, 8
    /* 7A3BC 8016BFBC 25186400 */  or         $v1, $v1, $a0
    /* 7A3C0 8016BFC0 7E004490 */  lbu        $a0, 0x7E($v0)
    /* 7A3C4 8016BFC4 002A0500 */  sll        $a1, $a1, 8
    /* 7A3C8 8016BFC8 25208500 */  or         $a0, $a0, $a1
    /* 7A3CC 8016BFCC 21186400 */  addu       $v1, $v1, $a0
    /* 7A3D0 8016BFD0 FFFF6330 */  andi       $v1, $v1, 0xFFFF
    /* 7A3D4 8016BFD4 4D0043A0 */  sb         $v1, 0x4D($v0)
    /* 7A3D8 8016BFD8 021A0300 */  srl        $v1, $v1, 8
    /* 7A3DC 8016BFDC 4E0043A0 */  sb         $v1, 0x4E($v0)
    /* 7A3E0 8016BFE0 0800E003 */  jr         $ra
    /* 7A3E4 8016BFE4 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8016BF64
