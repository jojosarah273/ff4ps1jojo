nonmatching func_801506BC, 0x190

glabel func_801506BC
    /* 5EABC 801506BC D8FFBD27 */  addiu      $sp, $sp, -0x28
    /* 5EAC0 801506C0 1000A427 */  addiu      $a0, $sp, 0x10
    /* 5EAC4 801506C4 0780053C */  lui        $a1, (0x80070000 >> 16)
    /* 5EAC8 801506C8 1800B0AF */  sw         $s0, 0x18($sp)
    /* 5EACC 801506CC 00011024 */  addiu      $s0, $zero, 0x100
    /* 5EAD0 801506D0 1C00B1AF */  sw         $s1, 0x1C($sp)
    /* 5EAD4 801506D4 40001124 */  addiu      $s1, $zero, 0x40
    /* 5EAD8 801506D8 2400BFAF */  sw         $ra, 0x24($sp)
    /* 5EADC 801506DC 2000B2AF */  sw         $s2, 0x20($sp)
    /* 5EAE0 801506E0 1000B0A7 */  sh         $s0, 0x10($sp)
    /* 5EAE4 801506E4 1200A0A7 */  sh         $zero, 0x12($sp)
    /* 5EAE8 801506E8 1400B0A7 */  sh         $s0, 0x14($sp)
    /* 5EAEC 801506EC 9051060C */  jal        func_80194640
    /* 5EAF0 801506F0 1600B1A7 */   sh        $s1, 0x16($sp)
    /* 5EAF4 801506F4 1000A427 */  addiu      $a0, $sp, 0x10
    /* 5EAF8 801506F8 0880053C */  lui        $a1, (0x80088000 >> 16)
    /* 5EAFC 801506FC 0080A534 */  ori        $a1, $a1, (0x80088000 & 0xFFFF)
    /* 5EB00 80150700 C0001224 */  addiu      $s2, $zero, 0xC0
    /* 5EB04 80150704 1200B1A7 */  sh         $s1, 0x12($sp)
    /* 5EB08 80150708 9051060C */  jal        func_80194640
    /* 5EB0C 8015070C 1600B2A7 */   sh        $s2, 0x16($sp)
    /* 5EB10 80150710 E550060C */  jal        func_80194394
    /* 5EB14 80150714 21200000 */   addu      $a0, $zero, $zero
    /* 5EB18 80150718 1000A427 */  addiu      $a0, $sp, 0x10
    /* 5EB1C 8015071C 0780053C */  lui        $a1, (0x80070000 >> 16)
    /* 5EB20 80150720 00030224 */  addiu      $v0, $zero, 0x300
    /* 5EB24 80150724 1000A2A7 */  sh         $v0, 0x10($sp)
    /* 5EB28 80150728 37000224 */  addiu      $v0, $zero, 0x37
    /* 5EB2C 8015072C 1200B0A7 */  sh         $s0, 0x12($sp)
    /* 5EB30 80150730 1400B0A7 */  sh         $s0, 0x14($sp)
    /* 5EB34 80150734 A851060C */  jal        func_801946A0
    /* 5EB38 80150738 1600A2A7 */   sh        $v0, 0x16($sp)
    /* 5EB3C 8015073C 1000A427 */  addiu      $a0, $sp, 0x10
    /* 5EB40 80150740 0880053C */  lui        $a1, (0x80088000 >> 16)
    /* 5EB44 80150744 0080A534 */  ori        $a1, $a1, (0x80088000 & 0xFFFF)
    /* 5EB48 80150748 40010224 */  addiu      $v0, $zero, 0x140
    /* 5EB4C 8015074C 1200A2A7 */  sh         $v0, 0x12($sp)
    /* 5EB50 80150750 A851060C */  jal        func_801946A0
    /* 5EB54 80150754 1600B2A7 */   sh        $s2, 0x16($sp)
    /* 5EB58 80150758 E550060C */  jal        func_80194394
    /* 5EB5C 8015075C 21200000 */   addu      $a0, $zero, $zero
    /* 5EB60 80150760 1000A427 */  addiu      $a0, $sp, 0x10
    /* 5EB64 80150764 00030524 */  addiu      $a1, $zero, 0x300
    /* 5EB68 80150768 00010624 */  addiu      $a2, $zero, 0x100
    /* 5EB6C 8015076C 1000B0A7 */  sh         $s0, 0x10($sp)
    /* 5EB70 80150770 1200A0A7 */  sh         $zero, 0x12($sp)
    /* 5EB74 80150774 1400B0A7 */  sh         $s0, 0x14($sp)
    /* 5EB78 80150778 C051060C */  jal        func_80194700
    /* 5EB7C 8015077C 1600B0A7 */   sh        $s0, 0x16($sp)
    /* 5EB80 80150780 E550060C */  jal        func_80194394
    /* 5EB84 80150784 21200000 */   addu      $a0, $zero, $zero
    /* 5EB88 80150788 1000A427 */  addiu      $a0, $sp, 0x10
    /* 5EB8C 8015078C 0580053C */  lui        $a1, (0x80058000 >> 16)
    /* 5EB90 80150790 0080A534 */  ori        $a1, $a1, (0x80058000 & 0xFFFF)
    /* 5EB94 80150794 80001124 */  addiu      $s1, $zero, 0x80
    /* 5EB98 80150798 1000B0A7 */  sh         $s0, 0x10($sp)
    /* 5EB9C 8015079C 1200A0A7 */  sh         $zero, 0x12($sp)
    /* 5EBA0 801507A0 1400B0A7 */  sh         $s0, 0x14($sp)
    /* 5EBA4 801507A4 9051060C */  jal        func_80194640
    /* 5EBA8 801507A8 1600B1A7 */   sh        $s1, 0x16($sp)
    /* 5EBAC 801507AC E550060C */  jal        func_80194394
    /* 5EBB0 801507B0 21200000 */   addu      $a0, $zero, $zero
    /* 5EBB4 801507B4 1000A427 */  addiu      $a0, $sp, 0x10
    /* 5EBB8 801507B8 0580053C */  lui        $a1, (0x80058000 >> 16)
    /* 5EBBC 801507BC 0080A534 */  ori        $a1, $a1, (0x80058000 & 0xFFFF)
    /* 5EBC0 801507C0 80010224 */  addiu      $v0, $zero, 0x180
    /* 5EBC4 801507C4 1000B0A7 */  sh         $s0, 0x10($sp)
    /* 5EBC8 801507C8 1200A2A7 */  sh         $v0, 0x12($sp)
    /* 5EBCC 801507CC 1400B0A7 */  sh         $s0, 0x14($sp)
    /* 5EBD0 801507D0 A851060C */  jal        func_801946A0
    /* 5EBD4 801507D4 1600B1A7 */   sh        $s1, 0x16($sp)
    /* 5EBD8 801507D8 E550060C */  jal        func_80194394
    /* 5EBDC 801507DC 21200000 */   addu      $a0, $zero, $zero
    /* 5EBE0 801507E0 1000A427 */  addiu      $a0, $sp, 0x10
    /* 5EBE4 801507E4 00010524 */  addiu      $a1, $zero, 0x100
    /* 5EBE8 801507E8 80010624 */  addiu      $a2, $zero, 0x180
    /* 5EBEC 801507EC 1000B0A7 */  sh         $s0, 0x10($sp)
    /* 5EBF0 801507F0 1200A0A7 */  sh         $zero, 0x12($sp)
    /* 5EBF4 801507F4 1400B0A7 */  sh         $s0, 0x14($sp)
    /* 5EBF8 801507F8 C051060C */  jal        func_80194700
    /* 5EBFC 801507FC 1600B1A7 */   sh        $s1, 0x16($sp)
    /* 5EC00 80150800 E550060C */  jal        func_80194394
    /* 5EC04 80150804 21200000 */   addu      $a0, $zero, $zero
    /* 5EC08 80150808 1000A427 */  addiu      $a0, $sp, 0x10
    /* 5EC0C 8015080C 21280000 */  addu       $a1, $zero, $zero
    /* 5EC10 80150810 21300000 */  addu       $a2, $zero, $zero
    /* 5EC14 80150814 21380000 */  addu       $a3, $zero, $zero
    /* 5EC18 80150818 1000B0A7 */  sh         $s0, 0x10($sp)
    /* 5EC1C 8015081C 1200A0A7 */  sh         $zero, 0x12($sp)
    /* 5EC20 80150820 1400B0A7 */  sh         $s0, 0x14($sp)
    /* 5EC24 80150824 4651060C */  jal        func_80194518
    /* 5EC28 80150828 1600B0A7 */   sh        $s0, 0x16($sp)
    /* 5EC2C 8015082C E550060C */  jal        func_80194394
    /* 5EC30 80150830 21200000 */   addu      $a0, $zero, $zero
    /* 5EC34 80150834 2400BF8F */  lw         $ra, 0x24($sp)
    /* 5EC38 80150838 2000B28F */  lw         $s2, 0x20($sp)
    /* 5EC3C 8015083C 1C00B18F */  lw         $s1, 0x1C($sp)
    /* 5EC40 80150840 1800B08F */  lw         $s0, 0x18($sp)
    /* 5EC44 80150844 0800E003 */  jr         $ra
    /* 5EC48 80150848 2800BD27 */   addiu     $sp, $sp, 0x28
endlabel func_801506BC
