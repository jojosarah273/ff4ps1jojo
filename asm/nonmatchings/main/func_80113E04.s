nonmatching func_80113E04, 0x38

glabel func_80113E04
    /* 22204 80113E04 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 22208 80113E08 1000BFAF */  sw         $ra, 0x10($sp)
    /* 2220C 80113E0C 53D9030C */  jal        func_800F654C
    /* 22210 80113E10 35000424 */   addiu     $a0, $zero, 0x35
    /* 22214 80113E14 93E0030C */  jal        func_800F824C
    /* 22218 80113E18 91000424 */   addiu     $a0, $zero, 0x91
    /* 2221C 80113E1C 53D9030C */  jal        func_800F654C
    /* 22220 80113E20 C6000424 */   addiu     $a0, $zero, 0xC6
    /* 22224 80113E24 8F4F040C */  jal        func_80113E3C
    /* 22228 80113E28 00000000 */   nop
    /* 2222C 80113E2C 1000BF8F */  lw         $ra, 0x10($sp)
    /* 22230 80113E30 00000000 */  nop
    /* 22234 80113E34 0800E003 */  jr         $ra
    /* 22238 80113E38 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80113E04
