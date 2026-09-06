nonmatching func_8010F1D4, 0x80

glabel func_8010F1D4
    /* 1D5D4 8010F1D4 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 1D5D8 8010F1D8 1000BFAF */  sw         $ra, 0x10($sp)
    /* 1D5DC 8010F1DC 77DC030C */  jal        func_800F71DC
    /* 1D5E0 8010F1E0 21200000 */   addu      $a0, $zero, $zero
    /* 1D5E4 8010F1E4 40E3030C */  jal        func_800F8D00
    /* 1D5E8 8010F1E8 2C170424 */   addiu     $a0, $zero, 0x172C
    /* 1D5EC 8010F1EC 53D9030C */  jal        func_800F654C
    /* 1D5F0 8010F1F0 06000424 */   addiu     $a0, $zero, 0x6
    /* 1D5F4 8010F1F4 62E0030C */  jal        func_800F8188
    /* 1D5F8 8010F1F8 04170424 */   addiu     $a0, $zero, 0x1704
    /* 1D5FC 8010F1FC 53D9030C */  jal        func_800F654C
    /* 1D600 8010F200 03000424 */   addiu     $a0, $zero, 0x3
    /* 1D604 8010F204 93E0030C */  jal        func_800F824C
    /* 1D608 8010F208 AC000424 */   addiu     $a0, $zero, 0xAC
    /* 1D60C 8010F20C EEE3030C */  jal        func_800F8FB8
    /* 1D610 8010F210 E1000424 */   addiu     $a0, $zero, 0xE1
    /* 1D614 8010F214 84DC030C */  jal        func_800F7210
    /* 1D618 8010F218 25170424 */   addiu     $a0, $zero, 0x1725
    /* 1D61C 8010F21C 40E3030C */  jal        func_800F8D00
    /* 1D620 8010F220 06170424 */   addiu     $a0, $zero, 0x1706
    /* 1D624 8010F224 59D9030C */  jal        func_800F6564
    /* 1D628 8010F228 27170424 */   addiu     $a0, $zero, 0x1727
    /* 1D62C 8010F22C C66A040C */  jal        func_8011AB18
    /* 1D630 8010F230 00000000 */   nop
    /* 1D634 8010F234 6C0D040C */  jal        func_801035B0
    /* 1D638 8010F238 00000000 */   nop
    /* 1D63C 8010F23C 977A040C */  jal        func_8011EA5C
    /* 1D640 8010F240 00000000 */   nop
    /* 1D644 8010F244 1000BF8F */  lw         $ra, 0x10($sp)
    /* 1D648 8010F248 00000000 */  nop
    /* 1D64C 8010F24C 0800E003 */  jr         $ra
    /* 1D650 8010F250 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8010F1D4
