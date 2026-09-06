nonmatching func_800FCAB8, 0x154

glabel func_800FCAB8
    /* AEB8 800FCAB8 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* AEBC 800FCABC 1000BFAF */  sw         $ra, 0x10($sp)
    /* AEC0 800FCAC0 8CD9030C */  jal        func_800F6630
    /* AEC4 800FCAC4 7A000424 */   addiu     $a0, $zero, 0x7A
    /* AEC8 800FCAC8 92D0030C */  jal        func_800F4248
    /* AECC 800FCACC 01000424 */   addiu     $a0, $zero, 0x1
    /* AED0 800FCAD0 48D0030C */  jal        func_800F4120
    /* AED4 800FCAD4 02000424 */   addiu     $a0, $zero, 0x2
    /* AED8 800FCAD8 48004010 */  beqz       $v0, .L800FCBFC
    /* AEDC 800FCADC 00000000 */   nop
    /* AEE0 800FCAE0 8CD9030C */  jal        func_800F6630
    /* AEE4 800FCAE4 7A000424 */   addiu     $a0, $zero, 0x7A
    /* AEE8 800FCAE8 92D0030C */  jal        func_800F4248
    /* AEEC 800FCAEC 1E000424 */   addiu     $a0, $zero, 0x1E
    /* AEF0 800FCAF0 19DE030C */  jal        func_800F7864
    /* AEF4 800FCAF4 00000000 */   nop
    /* AEF8 800FCAF8 A4E5030C */  jal        func_800F9690
    /* AEFC 800FCAFC 00000000 */   nop
    /* AF00 800FCB00 1400043C */  lui        $a0, (0x14FC66 >> 16)
    /* AF04 800FCB04 1ADB030C */  jal        func_800F6C68
    /* AF08 800FCB08 66FC8434 */   ori       $a0, $a0, (0x14FC66 & 0xFFFF)
    /* AF0C 800FCB0C 50D4030C */  jal        func_800F5140
    /* AF10 800FCB10 00000000 */   nop
    /* AF14 800FCB14 D3D3030C */  jal        func_800F4F4C
    /* AF18 800FCB18 00000000 */   nop
    /* AF1C 800FCB1C A4E5030C */  jal        func_800F9690
    /* AF20 800FCB20 00000000 */   nop
    /* AF24 800FCB24 7F00043C */  lui        $a0, (0x7F5800 >> 16)
    /* AF28 800FCB28 1ADB030C */  jal        func_800F6C68
    /* AF2C 800FCB2C 00588434 */   ori       $a0, $a0, (0x7F5800 & 0xFFFF)
    /* AF30 800FCB30 93E0030C */  jal        func_800F824C
    /* AF34 800FCB34 08000424 */   addiu     $a0, $zero, 0x8
    /* AF38 800FCB38 7F00043C */  lui        $a0, (0x7F5820 >> 16)
    /* AF3C 800FCB3C 1ADB030C */  jal        func_800F6C68
    /* AF40 800FCB40 20588434 */   ori       $a0, $a0, (0x7F5820 & 0xFFFF)
    /* AF44 800FCB44 03F3030C */  jal        func_800FCC0C
    /* AF48 800FCB48 00000000 */   nop
    /* AF4C 800FCB4C 7F00043C */  lui        $a0, (0x7F5800 >> 16)
    /* AF50 800FCB50 17E2030C */  jal        func_800F885C
    /* AF54 800FCB54 00588434 */   ori       $a0, $a0, (0x7F5800 & 0xFFFF)
    /* AF58 800FCB58 8CD9030C */  jal        func_800F6630
    /* AF5C 800FCB5C 07000424 */   addiu     $a0, $zero, 0x7
    /* AF60 800FCB60 7F00043C */  lui        $a0, (0x7F5820 >> 16)
    /* AF64 800FCB64 17E2030C */  jal        func_800F885C
    /* AF68 800FCB68 20588434 */   ori       $a0, $a0, (0x7F5820 & 0xFFFF)
    /* AF6C 800FCB6C 7F00043C */  lui        $a0, (0x7F5801 >> 16)
    /* AF70 800FCB70 1ADB030C */  jal        func_800F6C68
    /* AF74 800FCB74 01588434 */   ori       $a0, $a0, (0x7F5801 & 0xFFFF)
    /* AF78 800FCB78 93E0030C */  jal        func_800F824C
    /* AF7C 800FCB7C 08000424 */   addiu     $a0, $zero, 0x8
    /* AF80 800FCB80 7F00043C */  lui        $a0, (0x7F5821 >> 16)
    /* AF84 800FCB84 1ADB030C */  jal        func_800F6C68
    /* AF88 800FCB88 21588434 */   ori       $a0, $a0, (0x7F5821 & 0xFFFF)
    /* AF8C 800FCB8C 03F3030C */  jal        func_800FCC0C
    /* AF90 800FCB90 00000000 */   nop
    /* AF94 800FCB94 7F00043C */  lui        $a0, (0x7F5801 >> 16)
    /* AF98 800FCB98 17E2030C */  jal        func_800F885C
    /* AF9C 800FCB9C 01588434 */   ori       $a0, $a0, (0x7F5801 & 0xFFFF)
    /* AFA0 800FCBA0 8CD9030C */  jal        func_800F6630
    /* AFA4 800FCBA4 07000424 */   addiu     $a0, $zero, 0x7
    /* AFA8 800FCBA8 7F00043C */  lui        $a0, (0x7F5821 >> 16)
    /* AFAC 800FCBAC 17E2030C */  jal        func_800F885C
    /* AFB0 800FCBB0 21588434 */   ori       $a0, $a0, (0x7F5821 & 0xFFFF)
    /* AFB4 800FCBB4 7F00043C */  lui        $a0, (0x7F5810 >> 16)
    /* AFB8 800FCBB8 1ADB030C */  jal        func_800F6C68
    /* AFBC 800FCBBC 10588434 */   ori       $a0, $a0, (0x7F5810 & 0xFFFF)
    /* AFC0 800FCBC0 93E0030C */  jal        func_800F824C
    /* AFC4 800FCBC4 08000424 */   addiu     $a0, $zero, 0x8
    /* AFC8 800FCBC8 7F00043C */  lui        $a0, (0x7F5830 >> 16)
    /* AFCC 800FCBCC 1ADB030C */  jal        func_800F6C68
    /* AFD0 800FCBD0 30588434 */   ori       $a0, $a0, (0x7F5830 & 0xFFFF)
    /* AFD4 800FCBD4 03F3030C */  jal        func_800FCC0C
    /* AFD8 800FCBD8 00000000 */   nop
    /* AFDC 800FCBDC 7F00043C */  lui        $a0, (0x7F5810 >> 16)
    /* AFE0 800FCBE0 17E2030C */  jal        func_800F885C
    /* AFE4 800FCBE4 10588434 */   ori       $a0, $a0, (0x7F5810 & 0xFFFF)
    /* AFE8 800FCBE8 8CD9030C */  jal        func_800F6630
    /* AFEC 800FCBEC 07000424 */   addiu     $a0, $zero, 0x7
    /* AFF0 800FCBF0 7F00043C */  lui        $a0, (0x7F5830 >> 16)
    /* AFF4 800FCBF4 17E2030C */  jal        func_800F885C
    /* AFF8 800FCBF8 30588434 */   ori       $a0, $a0, (0x7F5830 & 0xFFFF)
  .L800FCBFC:
    /* AFFC 800FCBFC 1000BF8F */  lw         $ra, 0x10($sp)
    /* B000 800FCC00 00000000 */  nop
    /* B004 800FCC04 0800E003 */  jr         $ra
    /* B008 800FCC08 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_800FCAB8
