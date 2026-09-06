nonmatching func_80108400, 0x58

glabel func_80108400
    /* 16800 80108400 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 16804 80108404 1000BFAF */  sw         $ra, 0x10($sp)
    /* 16808 80108408 8CD9030C */  jal        func_800F6630
    /* 1680C 8010840C B2000424 */   addiu     $a0, $zero, 0xB2
    /* 16810 80108410 EEE3030C */  jal        func_800F8FB8
    /* 16814 80108414 3E000424 */   addiu     $a0, $zero, 0x3E
    /* 16818 80108418 50D4030C */  jal        func_800F5140
    /* 1681C 8010841C 00000000 */   nop
    /* 16820 80108420 D3D3030C */  jal        func_800F4F4C
    /* 16824 80108424 00000000 */   nop
    /* 16828 80108428 0FCF030C */  jal        func_800F3C3C
    /* 1682C 8010842C 3E000424 */   addiu     $a0, $zero, 0x3E
    /* 16830 80108430 90DE030C */  jal        func_800F7A40
    /* 16834 80108434 21204000 */   addu      $a0, $v0, $zero
    /* 16838 80108438 93E0030C */  jal        func_800F824C
    /* 1683C 8010843C 3D000424 */   addiu     $a0, $zero, 0x3D
    /* 16840 80108440 9CDC030C */  jal        func_800F7270
    /* 16844 80108444 3D000424 */   addiu     $a0, $zero, 0x3D
    /* 16848 80108448 1000BF8F */  lw         $ra, 0x10($sp)
    /* 1684C 8010844C 00000000 */  nop
    /* 16850 80108450 0800E003 */  jr         $ra
    /* 16854 80108454 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80108400
