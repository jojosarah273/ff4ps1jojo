nonmatching func_800F6FEC, 0x44

glabel func_800F6FEC
    /* 53EC 800F6FEC 6400828F */  lw         $v0, %gp_rel(D_8019ED60)($gp)
    /* 53F0 800F6FF0 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 53F4 800F6FF4 1400BFAF */  sw         $ra, 0x14($sp)
    /* 53F8 800F6FF8 1000B0AF */  sw         $s0, 0x10($sp)
    /* 53FC 800F6FFC 00004590 */  lbu        $a1, 0x0($v0)
    /* 5400 800F7000 31CF030C */  jal        func_800F3CC4
    /* 5404 800F7004 801F103C */   lui       $s0, (0x1F8003C0 >> 16)
    /* 5408 800F7008 00004490 */  lbu        $a0, 0x0($v0)
    /* 540C 800F700C 1400BF8F */  lw         $ra, 0x14($sp)
    /* 5410 800F7010 C0031036 */  ori        $s0, $s0, (0x1F8003C0 & 0xFFFF)
    /* 5414 800F7014 080004A2 */  sb         $a0, 0x8($s0)
    /* 5418 800F7018 01004390 */  lbu        $v1, 0x1($v0)
    /* 541C 800F701C 00000000 */  nop
    /* 5420 800F7020 090003A2 */  sb         $v1, 0x9($s0)
    /* 5424 800F7024 1000B08F */  lw         $s0, 0x10($sp)
    /* 5428 800F7028 0800E003 */  jr         $ra
    /* 542C 800F702C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F6FEC
