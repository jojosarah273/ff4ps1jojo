nonmatching func_800F658C, 0x3C

glabel func_800F658C
    /* 498C 800F658C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 4990 800F6590 1000B0AF */  sw         $s0, 0x10($sp)
    /* 4994 800F6594 1400BFAF */  sw         $ra, 0x14($sp)
    /* 4998 800F6598 C1CE030C */  jal        func_800F3B04
    /* 499C 800F659C 801F103C */   lui       $s0, (0x1F8003C0 >> 16)
    /* 49A0 800F65A0 00004490 */  lbu        $a0, 0x0($v0)
    /* 49A4 800F65A4 1400BF8F */  lw         $ra, 0x14($sp)
    /* 49A8 800F65A8 C0031036 */  ori        $s0, $s0, (0x1F8003C0 & 0xFFFF)
    /* 49AC 800F65AC 080004A2 */  sb         $a0, 0x8($s0)
    /* 49B0 800F65B0 01004390 */  lbu        $v1, 0x1($v0)
    /* 49B4 800F65B4 00000000 */  nop
    /* 49B8 800F65B8 090003A2 */  sb         $v1, 0x9($s0)
    /* 49BC 800F65BC 1000B08F */  lw         $s0, 0x10($sp)
    /* 49C0 800F65C0 0800E003 */  jr         $ra
    /* 49C4 800F65C4 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800F658C
