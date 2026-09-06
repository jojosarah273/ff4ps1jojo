nonmatching func_800F3D48, 0x1C

glabel func_800F3D48
    /* 2148 800F3D48 801F023C */  lui        $v0, (0x1F8003C0 >> 16)
    /* 214C 800F3D4C C0034234 */  ori        $v0, $v0, (0x1F8003C0 & 0xFFFF)
    /* 2150 800F3D50 09004390 */  lbu        $v1, 0x9($v0)
    /* 2154 800F3D54 08004490 */  lbu        $a0, 0x8($v0)
    /* 2158 800F3D58 080043A0 */  sb         $v1, 0x8($v0)
    /* 215C 800F3D5C 0800E003 */  jr         $ra
    /* 2160 800F3D60 090044A0 */   sb        $a0, 0x9($v0)
endlabel func_800F3D48
