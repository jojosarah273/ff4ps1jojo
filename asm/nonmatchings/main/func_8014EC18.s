nonmatching func_8014EC18, 0x40

glabel func_8014EC18
    /* 5D618 8014EC18 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 5D61C 8014EC1C 1000BFAF */  sw         $ra, 0x10($sp)
    /* 5D620 8014EC20 C7E5030C */  jal        func_800F971C
    /* 5D624 8014EC24 00000000 */   nop
    /* 5D628 8014EC28 20D5030C */  jal        func_800F5480
    /* 5D62C 8014EC2C 00000000 */   nop
    /* 5D630 8014EC30 0FCF030C */  jal        func_800F3C3C
    /* 5D634 8014EC34 08000424 */   addiu     $a0, $zero, 0x8
    /* 5D638 8014EC38 D2DF030C */  jal        func_800F7F48
    /* 5D63C 8014EC3C 21204000 */   addu      $a0, $v0, $zero
    /* 5D640 8014EC40 93E0030C */  jal        func_800F824C
    /* 5D644 8014EC44 06000424 */   addiu     $a0, $zero, 0x6
    /* 5D648 8014EC48 8CD9030C */  jal        func_800F6630
    /* 5D64C 8014EC4C 08000424 */   addiu     $a0, $zero, 0x8
    /* 5D650 8014EC50 93E0030C */  jal        func_800F824C
    /* 5D654 8014EC54 07000424 */   addiu     $a0, $zero, 0x7
    /* 5D658 8014EC58 1000BF8F */  lw         $ra, 0x10($sp)
    /* 5D65C 8014EC5C 00000000 */  nop
    /* 5D660 8014EC60 0800E003 */  jr         $ra
    /* 5D664 8014EC64 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8014EC18
