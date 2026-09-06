nonmatching func_80114BC0, 0xD8

glabel func_80114BC0
    /* 22FC0 80114BC0 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 22FC4 80114BC4 1000BFAF */  sw         $ra, 0x10($sp)
    /* 22FC8 80114BC8 53D9030C */  jal        func_800F654C
    /* 22FCC 80114BCC 0F000424 */   addiu     $a0, $zero, 0xF
    /* 22FD0 80114BD0 93E0030C */  jal        func_800F824C
    /* 22FD4 80114BD4 80000424 */   addiu     $a0, $zero, 0x80
    /* 22FD8 80114BD8 77DC030C */  jal        func_800F71DC
    /* 22FDC 80114BDC 70000424 */   addiu     $a0, $zero, 0x70
    /* 22FE0 80114BE0 5BE3030C */  jal        func_800F8D6C
    /* 22FE4 80114BE4 2C000424 */   addiu     $a0, $zero, 0x2C
    /* 22FE8 80114BE8 77DC030C */  jal        func_800F71DC
    /* 22FEC 80114BEC 21200000 */   addu      $a0, $zero, $zero
    /* 22FF0 80114BF0 5BE3030C */  jal        func_800F8D6C
    /* 22FF4 80114BF4 2E000424 */   addiu     $a0, $zero, 0x2E
  .L80114BF8:
    /* 22FF8 80114BF8 DEF9030C */  jal        func_800FE778
    /* 22FFC 80114BFC 00000000 */   nop
    /* 23000 80114C00 8CD9030C */  jal        func_800F6630
    /* 23004 80114C04 2E000424 */   addiu     $a0, $zero, 0x2E
    /* 23008 80114C08 5DD5030C */  jal        func_800F5574
    /* 2300C 80114C0C 10000424 */   addiu     $a0, $zero, 0x10
    /* 23010 80114C10 F0D4030C */  jal        func_800F53C0
    /* 23014 80114C14 00000000 */   nop
    /* 23018 80114C18 03004014 */  bnez       $v0, .L80114C28
    /* 2301C 80114C1C 00000000 */   nop
    /* 23020 80114C20 62E0030C */  jal        func_800F8188
    /* 23024 80114C24 00210424 */   addiu     $a0, $zero, 0x2100
  .L80114C28:
    /* 23028 80114C28 2653040C */  jal        func_80114C98
    /* 2302C 80114C2C 00000000 */   nop
    /* 23030 80114C30 40DD030C */  jal        func_800F7500
    /* 23034 80114C34 78000424 */   addiu     $a0, $zero, 0x78
    /* 23038 80114C38 AFE3030C */  jal        func_800F8EBC
    /* 2303C 80114C3C 0E000424 */   addiu     $a0, $zero, 0xE
    /* 23040 80114C40 40DD030C */  jal        func_800F7500
    /* 23044 80114C44 50010424 */   addiu     $a0, $zero, 0x150
    /* 23048 80114C48 8D56040C */  jal        func_80115A34
    /* 2304C 80114C4C 00000000 */   nop
    /* 23050 80114C50 9CDC030C */  jal        func_800F7270
    /* 23054 80114C54 2E000424 */   addiu     $a0, $zero, 0x2E
    /* 23058 80114C58 D9D8030C */  jal        func_800F6364
    /* 2305C 80114C5C 00000000 */   nop
    /* 23060 80114C60 5BE3030C */  jal        func_800F8D6C
    /* 23064 80114C64 2E000424 */   addiu     $a0, $zero, 0x2E
    /* 23068 80114C68 56D6030C */  jal        func_800F5958
    /* 2306C 80114C6C 78000424 */   addiu     $a0, $zero, 0x78
    /* 23070 80114C70 F5D4030C */  jal        func_800F53D4
    /* 23074 80114C74 00000000 */   nop
    /* 23078 80114C78 DFFF4010 */  beqz       $v0, .L80114BF8
    /* 2307C 80114C7C 00000000 */   nop
    /* 23080 80114C80 977A040C */  jal        func_8011EA5C
    /* 23084 80114C84 00000000 */   nop
    /* 23088 80114C88 1000BF8F */  lw         $ra, 0x10($sp)
    /* 2308C 80114C8C 00000000 */  nop
    /* 23090 80114C90 0800E003 */  jr         $ra
    /* 23094 80114C94 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80114BC0
