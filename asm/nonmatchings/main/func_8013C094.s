nonmatching func_8013C094, 0x268

glabel func_8013C094
    /* 4A494 8013C094 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 4A498 8013C098 1000BFAF */  sw         $ra, 0x10($sp)
  .L8013C09C:
    /* 4A49C 8013C09C 59D9030C */  jal        func_800F6564
    /* 4A4A0 8013C0A0 B31B0424 */   addiu     $a0, $zero, 0x1BB3
    /* 4A4A4 8013C0A4 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 4A4A8 8013C0A8 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 4A4AC 8013C0AC 00000000 */  nop
    /* 4A4B0 8013C0B0 00006290 */  lbu        $v0, 0x0($v1)
    /* 4A4B4 8013C0B4 00000000 */  nop
    /* 4A4B8 8013C0B8 C0100200 */  sll        $v0, $v0, 3
    /* 4A4BC 8013C0BC 50D4030C */  jal        func_800F5140
    /* 4A4C0 8013C0C0 000062A0 */   sb        $v0, 0x0($v1)
    /* 4A4C4 8013C0C4 D3D3030C */  jal        func_800F4F4C
    /* 4A4C8 8013C0C8 00000000 */   nop
    /* 4A4CC 8013C0CC 02D0030C */  jal        func_800F4008
    /* 4A4D0 8013C0D0 30000424 */   addiu     $a0, $zero, 0x30
    /* 4A4D4 8013C0D4 93E0030C */  jal        func_800F824C
    /* 4A4D8 8013C0D8 5B000424 */   addiu     $a0, $zero, 0x5B
    /* 4A4DC 8013C0DC 59D9030C */  jal        func_800F6564
    /* 4A4E0 8013C0E0 B41B0424 */   addiu     $a0, $zero, 0x1BB4
    /* 4A4E4 8013C0E4 0DD9030C */  jal        func_800F6434
    /* 4A4E8 8013C0E8 02000424 */   addiu     $a0, $zero, 0x2
    /* 4A4EC 8013C0EC 05004014 */  bnez       $v0, .L8013C104
    /* 4A4F0 8013C0F0 00000000 */   nop
    /* 4A4F4 8013C0F4 53D9030C */  jal        func_800F654C
    /* 4A4F8 8013C0F8 70000424 */   addiu     $a0, $zero, 0x70
    /* 4A4FC 8013C0FC 43F00408 */  j          .L8013C10C
    /* 4A500 8013C100 00000000 */   nop
  .L8013C104:
    /* 4A504 8013C104 53D9030C */  jal        func_800F654C
    /* 4A508 8013C108 21200000 */   addu      $a0, $zero, $zero
  .L8013C10C:
    /* 4A50C 8013C10C 93E0030C */  jal        func_800F824C
    /* 4A510 8013C110 5A000424 */   addiu     $a0, $zero, 0x5A
    /* 4A514 8013C114 9CDC030C */  jal        func_800F7270
    /* 4A518 8013C118 5A000424 */   addiu     $a0, $zero, 0x5A
    /* 4A51C 8013C11C 40DD030C */  jal        func_800F7500
    /* 4A520 8013C120 04030424 */   addiu     $a0, $zero, 0x304
    /* 4A524 8013C124 C7E5030C */  jal        func_800F971C
    /* 4A528 8013C128 00000000 */   nop
    /* 4A52C 8013C12C C97D040C */  jal        func_8011F724
    /* 4A530 8013C130 00000000 */   nop
    /* 4A534 8013C134 A17D040C */  jal        func_8011F684
    /* 4A538 8013C138 00000000 */   nop
    /* 4A53C 8013C13C 217E040C */  jal        func_8011F884
    /* 4A540 8013C140 00000000 */   nop
    /* 4A544 8013C144 8CD9030C */  jal        func_800F6630
    /* 4A548 8013C148 01000424 */   addiu     $a0, $zero, 0x1
    /* 4A54C 8013C14C 92D0030C */  jal        func_800F4248
    /* 4A550 8013C150 80000424 */   addiu     $a0, $zero, 0x80
    /* 4A554 8013C154 48D0030C */  jal        func_800F4120
    /* 4A558 8013C158 02000424 */   addiu     $a0, $zero, 0x2
    /* 4A55C 8013C15C 09004014 */  bnez       $v0, .L8013C184
    /* 4A560 8013C160 00000000 */   nop
    /* 4A564 8013C164 EEE3030C */  jal        func_800F8FB8
    /* 4A568 8013C168 60000424 */   addiu     $a0, $zero, 0x60
    /* 4A56C 8013C16C 40DD030C */  jal        func_800F7500
    /* 4A570 8013C170 04030424 */   addiu     $a0, $zero, 0x304
    /* 4A574 8013C174 40AC040C */  jal        func_8012B100
    /* 4A578 8013C178 00000000 */   nop
    /* 4A57C 8013C17C BBF00408 */  j          .L8013C2EC
    /* 4A580 8013C180 00000000 */   nop
  .L8013C184:
    /* 4A584 8013C184 8CD9030C */  jal        func_800F6630
    /* 4A588 8013C188 21200000 */   addu      $a0, $zero, $zero
    /* 4A58C 8013C18C 92D0030C */  jal        func_800F4248
    /* 4A590 8013C190 80000424 */   addiu     $a0, $zero, 0x80
    /* 4A594 8013C194 48D0030C */  jal        func_800F4120
    /* 4A598 8013C198 02000424 */   addiu     $a0, $zero, 0x2
    /* 4A59C 8013C19C 03004014 */  bnez       $v0, .L8013C1AC
    /* 4A5A0 8013C1A0 00000000 */   nop
    /* 4A5A4 8013C1A4 55F1040C */  jal        func_8013C554
    /* 4A5A8 8013C1A8 00000000 */   nop
  .L8013C1AC:
    /* 4A5AC 8013C1AC 8CD9030C */  jal        func_800F6630
    /* 4A5B0 8013C1B0 01000424 */   addiu     $a0, $zero, 0x1
    /* 4A5B4 8013C1B4 92D0030C */  jal        func_800F4248
    /* 4A5B8 8013C1B8 01000424 */   addiu     $a0, $zero, 0x1
    /* 4A5BC 8013C1BC 48D0030C */  jal        func_800F4120
    /* 4A5C0 8013C1C0 02000424 */   addiu     $a0, $zero, 0x2
    /* 4A5C4 8013C1C4 0D004014 */  bnez       $v0, .L8013C1FC
    /* 4A5C8 8013C1C8 00000000 */   nop
    /* 4A5CC 8013C1CC 59D9030C */  jal        func_800F6564
    /* 4A5D0 8013C1D0 B41B0424 */   addiu     $a0, $zero, 0x1BB4
    /* 4A5D4 8013C1D4 7AD8030C */  jal        func_800F61E8
    /* 4A5D8 8013C1D8 00000000 */   nop
    /* 4A5DC 8013C1DC 92D0030C */  jal        func_800F4248
    /* 4A5E0 8013C1E0 01000424 */   addiu     $a0, $zero, 0x1
    /* 4A5E4 8013C1E4 62E0030C */  jal        func_800F8188
    /* 4A5E8 8013C1E8 B41B0424 */   addiu     $a0, $zero, 0x1BB4
    /* 4A5EC 8013C1EC 48D0030C */  jal        func_800F4120
    /* 4A5F0 8013C1F0 02000424 */   addiu     $a0, $zero, 0x2
    /* 4A5F4 8013C1F4 2F004014 */  bnez       $v0, .L8013C2B4
    /* 4A5F8 8013C1F8 00000000 */   nop
  .L8013C1FC:
    /* 4A5FC 8013C1FC 8CD9030C */  jal        func_800F6630
    /* 4A600 8013C200 01000424 */   addiu     $a0, $zero, 0x1
    /* 4A604 8013C204 92D0030C */  jal        func_800F4248
    /* 4A608 8013C208 02000424 */   addiu     $a0, $zero, 0x2
    /* 4A60C 8013C20C 48D0030C */  jal        func_800F4120
    /* 4A610 8013C210 02000424 */   addiu     $a0, $zero, 0x2
    /* 4A614 8013C214 0D004014 */  bnez       $v0, .L8013C24C
    /* 4A618 8013C218 00000000 */   nop
    /* 4A61C 8013C21C 59D9030C */  jal        func_800F6564
    /* 4A620 8013C220 B41B0424 */   addiu     $a0, $zero, 0x1BB4
    /* 4A624 8013C224 7AD8030C */  jal        func_800F61E8
    /* 4A628 8013C228 00000000 */   nop
    /* 4A62C 8013C22C 92D0030C */  jal        func_800F4248
    /* 4A630 8013C230 01000424 */   addiu     $a0, $zero, 0x1
    /* 4A634 8013C234 62E0030C */  jal        func_800F8188
    /* 4A638 8013C238 B41B0424 */   addiu     $a0, $zero, 0x1BB4
    /* 4A63C 8013C23C 48D0030C */  jal        func_800F4120
    /* 4A640 8013C240 02020424 */   addiu     $a0, $zero, 0x202
    /* 4A644 8013C244 09004014 */  bnez       $v0, .L8013C26C
    /* 4A648 8013C248 00000000 */   nop
  .L8013C24C:
    /* 4A64C 8013C24C 8CD9030C */  jal        func_800F6630
    /* 4A650 8013C250 01000424 */   addiu     $a0, $zero, 0x1
    /* 4A654 8013C254 92D0030C */  jal        func_800F4248
    /* 4A658 8013C258 08000424 */   addiu     $a0, $zero, 0x8
    /* 4A65C 8013C25C 48D0030C */  jal        func_800F4120
    /* 4A660 8013C260 02000424 */   addiu     $a0, $zero, 0x2
    /* 4A664 8013C264 0B004014 */  bnez       $v0, .L8013C294
    /* 4A668 8013C268 00000000 */   nop
  .L8013C26C:
    /* 4A66C 8013C26C 59D9030C */  jal        func_800F6564
    /* 4A670 8013C270 B31B0424 */   addiu     $a0, $zero, 0x1BB3
    /* 4A674 8013C274 33D7030C */  jal        func_800F5CCC
    /* 4A678 8013C278 00000000 */   nop
    /* 4A67C 8013C27C E3D6030C */  jal        func_800F5B8C
    /* 4A680 8013C280 80000424 */   addiu     $a0, $zero, 0x80
    /* 4A684 8013C284 03004014 */  bnez       $v0, .L8013C294
    /* 4A688 8013C288 00000000 */   nop
    /* 4A68C 8013C28C 62E0030C */  jal        func_800F8188
    /* 4A690 8013C290 B31B0424 */   addiu     $a0, $zero, 0x1BB3
  .L8013C294:
    /* 4A694 8013C294 8CD9030C */  jal        func_800F6630
    /* 4A698 8013C298 01000424 */   addiu     $a0, $zero, 0x1
    /* 4A69C 8013C29C 92D0030C */  jal        func_800F4248
    /* 4A6A0 8013C2A0 04000424 */   addiu     $a0, $zero, 0x4
    /* 4A6A4 8013C2A4 48D0030C */  jal        func_800F4120
    /* 4A6A8 8013C2A8 02000424 */   addiu     $a0, $zero, 0x2
    /* 4A6AC 8013C2AC 7BFF4014 */  bnez       $v0, .L8013C09C
    /* 4A6B0 8013C2B0 00000000 */   nop
  .L8013C2B4:
    /* 4A6B4 8013C2B4 59D9030C */  jal        func_800F6564
    /* 4A6B8 8013C2B8 B31B0424 */   addiu     $a0, $zero, 0x1BB3
    /* 4A6BC 8013C2BC 7AD8030C */  jal        func_800F61E8
    /* 4A6C0 8013C2C0 00000000 */   nop
    /* 4A6C4 8013C2C4 5DD5030C */  jal        func_800F5574
    /* 4A6C8 8013C2C8 04000424 */   addiu     $a0, $zero, 0x4
    /* 4A6CC 8013C2CC F5D4030C */  jal        func_800F53D4
    /* 4A6D0 8013C2D0 00000000 */   nop
    /* 4A6D4 8013C2D4 71FF4014 */  bnez       $v0, .L8013C09C
    /* 4A6D8 8013C2D8 00000000 */   nop
    /* 4A6DC 8013C2DC 62E0030C */  jal        func_800F8188
    /* 4A6E0 8013C2E0 B31B0424 */   addiu     $a0, $zero, 0x1BB3
    /* 4A6E4 8013C2E4 27F00408 */  j          .L8013C09C
    /* 4A6E8 8013C2E8 00000000 */   nop
  .L8013C2EC:
    /* 4A6EC 8013C2EC 1000BF8F */  lw         $ra, 0x10($sp)
    /* 4A6F0 8013C2F0 00000000 */  nop
    /* 4A6F4 8013C2F4 0800E003 */  jr         $ra
    /* 4A6F8 8013C2F8 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8013C094
