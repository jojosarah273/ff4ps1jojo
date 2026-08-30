nonmatching func_80142394, 0xBC

glabel func_80142394
    /* 50794 80142394 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 50798 80142398 1000BFAF */  sw         $ra, 0x10($sp)
    /* 5079C 8014239C C7E5030C */  jal        func_800F971C
    /* 507A0 801423A0 00000000 */   nop
    /* 507A4 801423A4 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 507A8 801423A8 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 507AC 801423AC 1A80043C */  lui        $a0, %hi(D_8019ED54)
    /* 507B0 801423B0 54ED848C */  lw         $a0, %lo(D_8019ED54)($a0)
    /* 507B4 801423B4 00004394 */  lhu        $v1, 0x0($v0)
    /* 507B8 801423B8 00000000 */  nop
    /* 507BC 801423BC 000083A4 */  sh         $v1, 0x0($a0)
  .L801423C0:
    /* 507C0 801423C0 DADA030C */  jal        func_800F6B68
    /* 507C4 801423C4 B3F10434 */   ori       $a0, $zero, 0xF1B3
    /* 507C8 801423C8 DAE1030C */  jal        func_800F8768
    /* 507CC 801423CC B4F10434 */   ori       $a0, $zero, 0xF1B4
    /* 507D0 801423D0 DADA030C */  jal        func_800F6B68
    /* 507D4 801423D4 F3F10434 */   ori       $a0, $zero, 0xF1F3
    /* 507D8 801423D8 DAE1030C */  jal        func_800F8768
    /* 507DC 801423DC F4F10434 */   ori       $a0, $zero, 0xF1F4
    /* 507E0 801423E0 DADA030C */  jal        func_800F6B68
    /* 507E4 801423E4 B7F10434 */   ori       $a0, $zero, 0xF1B7
    /* 507E8 801423E8 DAE1030C */  jal        func_800F8768
    /* 507EC 801423EC B8F10434 */   ori       $a0, $zero, 0xF1B8
    /* 507F0 801423F0 DADA030C */  jal        func_800F6B68
    /* 507F4 801423F4 F7F10434 */   ori       $a0, $zero, 0xF1F7
    /* 507F8 801423F8 DAE1030C */  jal        func_800F8768
    /* 507FC 801423FC F8F10434 */   ori       $a0, $zero, 0xF1F8
    /* 50800 80142400 D9D8030C */  jal        func_800F6364
    /* 50804 80142404 00000000 */   nop
    /* 50808 80142408 56D6030C */  jal        func_800F5958
    /* 5080C 8014240C 03000424 */   addiu     $a0, $zero, 0x3
    /* 50810 80142410 F5D4030C */  jal        func_800F53D4
    /* 50814 80142414 00000000 */   nop
    /* 50818 80142418 E9FF4010 */  beqz       $v0, .L801423C0
    /* 5081C 8014241C 00000000 */   nop
    /* 50820 80142420 49D7030C */  jal        func_800F5D24
    /* 50824 80142424 B3F10434 */   ori       $a0, $zero, 0xF1B3
    /* 50828 80142428 49D7030C */  jal        func_800F5D24
    /* 5082C 8014242C B7F10434 */   ori       $a0, $zero, 0xF1B7
    /* 50830 80142430 49D7030C */  jal        func_800F5D24
    /* 50834 80142434 F3F10434 */   ori       $a0, $zero, 0xF1F3
    /* 50838 80142438 49D7030C */  jal        func_800F5D24
    /* 5083C 8014243C F7F10434 */   ori       $a0, $zero, 0xF1F7
    /* 50840 80142440 1000BF8F */  lw         $ra, 0x10($sp)
    /* 50844 80142444 00000000 */  nop
    /* 50848 80142448 0800E003 */  jr         $ra
    /* 5084C 8014244C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80142394
