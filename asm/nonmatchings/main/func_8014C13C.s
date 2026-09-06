nonmatching func_8014C13C, 0x380

glabel func_8014C13C
    /* 5A53C 8014C13C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 5A540 8014C140 1000BFAF */  sw         $ra, 0x10($sp)
    /* 5A544 8014C144 59D9030C */  jal        func_800F6564
    /* 5A548 8014C148 C5340424 */   addiu     $a0, $zero, 0x34C5
    /* 5A54C 8014C14C 0DD9030C */  jal        func_800F6434
    /* 5A550 8014C150 02020424 */   addiu     $a0, $zero, 0x202
    /* 5A554 8014C154 D5004010 */  beqz       $v0, .L8014C4AC
    /* 5A558 8014C158 00000000 */   nop
    /* 5A55C 8014C15C A035050C */  jal        func_8014D680
    /* 5A560 8014C160 00000000 */   nop
    /* 5A564 8014C164 2B23050C */  jal        func_80148CAC
    /* 5A568 8014C168 00000000 */   nop
    /* 5A56C 8014C16C 1B01050C */  jal        func_8014046C
    /* 5A570 8014C170 00000000 */   nop
    /* 5A574 8014C174 77DC030C */  jal        func_800F71DC
    /* 5A578 8014C178 05000424 */   addiu     $a0, $zero, 0x5
    /* 5A57C 8014C17C 53D9030C */  jal        func_800F654C
    /* 5A580 8014C180 27000424 */   addiu     $a0, $zero, 0x27
    /* 5A584 8014C184 34D8010C */  jal        func_800760D0
    /* 5A588 8014C188 00000000 */   nop
    /* 5A58C 8014C18C 8223050C */  jal        func_80148E08
    /* 5A590 8014C190 00000000 */   nop
    /* 5A594 8014C194 C7E5030C */  jal        func_800F971C
    /* 5A598 8014C198 00000000 */   nop
    /* 5A59C 8014C19C 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 5A5A0 8014C1A0 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 5A5A4 8014C1A4 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 5A5A8 8014C1A8 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 5A5AC 8014C1AC 00004394 */  lhu        $v1, 0x0($v0)
    /* 5A5B0 8014C1B0 11F10434 */  ori        $a0, $zero, 0xF111
    /* 5A5B4 8014C1B4 40E3030C */  jal        func_800F8D00
    /* 5A5B8 8014C1B8 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 5A5BC 8014C1BC 40E3030C */  jal        func_800F8D00
    /* 5A5C0 8014C1C0 13F10434 */   ori       $a0, $zero, 0xF113
    /* 5A5C4 8014C1C4 A023050C */  jal        func_80148E80
    /* 5A5C8 8014C1C8 00000000 */   nop
    /* 5A5CC 8014C1CC 53D9030C */  jal        func_800F654C
    /* 5A5D0 8014C1D0 60000424 */   addiu     $a0, $zero, 0x60
    /* 5A5D4 8014C1D4 7AE0030C */  jal        func_800F81E8
    /* 5A5D8 8014C1D8 07210424 */   addiu     $a0, $zero, 0x2107
    /* 5A5DC 8014C1DC 53D9030C */  jal        func_800F654C
    /* 5A5E0 8014C1E0 58000424 */   addiu     $a0, $zero, 0x58
    /* 5A5E4 8014C1E4 7AE0030C */  jal        func_800F81E8
    /* 5A5E8 8014C1E8 08210424 */   addiu     $a0, $zero, 0x2108
    /* 5A5EC 8014C1EC 53D9030C */  jal        func_800F654C
    /* 5A5F0 8014C1F0 03000424 */   addiu     $a0, $zero, 0x3
    /* 5A5F4 8014C1F4 62E0030C */  jal        func_800F8188
    /* 5A5F8 8014C1F8 B5F10434 */   ori       $a0, $zero, 0xF1B5
    /* 5A5FC 8014C1FC 7AD8030C */  jal        func_800F61E8
    /* 5A600 8014C200 00000000 */   nop
    /* 5A604 8014C204 62E0030C */  jal        func_800F8188
    /* 5A608 8014C208 B3F10434 */   ori       $a0, $zero, 0xF1B3
    /* 5A60C 8014C20C 59D9030C */  jal        func_800F6564
    /* 5A610 8014C210 4EED0434 */   ori       $a0, $zero, 0xED4E
    /* 5A614 8014C214 92D0030C */  jal        func_800F4248
    /* 5A618 8014C218 BF000424 */   addiu     $a0, $zero, 0xBF
    /* 5A61C 8014C21C 62E0030C */  jal        func_800F8188
    /* 5A620 8014C220 4EED0434 */   ori       $a0, $zero, 0xED4E
    /* 5A624 8014C224 C7E5030C */  jal        func_800F971C
    /* 5A628 8014C228 00000000 */   nop
    /* 5A62C 8014C22C 0BC7010C */  jal        func_80071C2C
    /* 5A630 8014C230 00000000 */   nop
    /* 5A634 8014C234 AE46020C */  jal        func_80091AB8
    /* 5A638 8014C238 00000000 */   nop
  .L8014C23C:
    /* 5A63C 8014C23C 67C9010C */  jal        func_8007259C
    /* 5A640 8014C240 00000000 */   nop
    /* 5A644 8014C244 2F31050C */  jal        func_8014C4BC
    /* 5A648 8014C248 00000000 */   nop
    /* 5A64C 8014C24C 59D9030C */  jal        func_800F6564
    /* 5A650 8014C250 11F10434 */   ori       $a0, $zero, 0xF111
    /* 5A654 8014C254 04D5030C */  jal        func_800F5410
    /* 5A658 8014C258 00000000 */   nop
    /* 5A65C 8014C25C 02D0030C */  jal        func_800F4008
    /* 5A660 8014C260 04000424 */   addiu     $a0, $zero, 0x4
    /* 5A664 8014C264 62E0030C */  jal        func_800F8188
    /* 5A668 8014C268 11F10434 */   ori       $a0, $zero, 0xF111
    /* 5A66C 8014C26C 62E0030C */  jal        func_800F8188
    /* 5A670 8014C270 33F10434 */   ori       $a0, $zero, 0xF133
    /* 5A674 8014C274 59D9030C */  jal        func_800F6564
    /* 5A678 8014C278 13F10434 */   ori       $a0, $zero, 0xF113
    /* 5A67C 8014C27C 04D5030C */  jal        func_800F5410
    /* 5A680 8014C280 00000000 */   nop
    /* 5A684 8014C284 02D0030C */  jal        func_800F4008
    /* 5A688 8014C288 08000424 */   addiu     $a0, $zero, 0x8
    /* 5A68C 8014C28C 62E0030C */  jal        func_800F8188
    /* 5A690 8014C290 13F10434 */   ori       $a0, $zero, 0xF113
    /* 5A694 8014C294 62E0030C */  jal        func_800F8188
    /* 5A698 8014C298 34F10434 */   ori       $a0, $zero, 0xF134
    /* 5A69C 8014C29C 40DD030C */  jal        func_800F7500
    /* 5A6A0 8014C2A0 21200000 */   addu      $a0, $zero, $zero
  .L8014C2A4:
    /* 5A6A4 8014C2A4 77DC030C */  jal        func_800F71DC
    /* 5A6A8 8014C2A8 21200000 */   addu      $a0, $zero, $zero
    /* 5A6AC 8014C2AC D823050C */  jal        func_80148F60
    /* 5A6B0 8014C2B0 00000000 */   nop
    /* 5A6B4 8014C2B4 58E2030C */  jal        func_800F8960
    /* 5A6B8 8014C2B8 14760424 */   addiu     $a0, $zero, 0x7614
    /* 5A6BC 8014C2BC 58E2030C */  jal        func_800F8960
    /* 5A6C0 8014C2C0 94760424 */   addiu     $a0, $zero, 0x7694
    /* 5A6C4 8014C2C4 58E2030C */  jal        func_800F8960
    /* 5A6C8 8014C2C8 14770424 */   addiu     $a0, $zero, 0x7714
    /* 5A6CC 8014C2CC 58E2030C */  jal        func_800F8960
    /* 5A6D0 8014C2D0 94770424 */   addiu     $a0, $zero, 0x7794
    /* 5A6D4 8014C2D4 58E2030C */  jal        func_800F8960
    /* 5A6D8 8014C2D8 14780424 */   addiu     $a0, $zero, 0x7814
    /* 5A6DC 8014C2DC 77DC030C */  jal        func_800F71DC
    /* 5A6E0 8014C2E0 01000424 */   addiu     $a0, $zero, 0x1
    /* 5A6E4 8014C2E4 D823050C */  jal        func_80148F60
    /* 5A6E8 8014C2E8 00000000 */   nop
    /* 5A6EC 8014C2EC 80E4030C */  jal        func_800F9200
    /* 5A6F0 8014C2F0 00000000 */   nop
    /* 5A6F4 8014C2F4 80E4030C */  jal        func_800F9200
    /* 5A6F8 8014C2F8 00000000 */   nop
    /* 5A6FC 8014C2FC 58E2030C */  jal        func_800F8960
    /* 5A700 8014C300 12760424 */   addiu     $a0, $zero, 0x7612
    /* 5A704 8014C304 58E2030C */  jal        func_800F8960
    /* 5A708 8014C308 92760424 */   addiu     $a0, $zero, 0x7692
    /* 5A70C 8014C30C 58E2030C */  jal        func_800F8960
    /* 5A710 8014C310 12770424 */   addiu     $a0, $zero, 0x7712
    /* 5A714 8014C314 58E2030C */  jal        func_800F8960
    /* 5A718 8014C318 92770424 */   addiu     $a0, $zero, 0x7792
    /* 5A71C 8014C31C 58E2030C */  jal        func_800F8960
    /* 5A720 8014C320 12780424 */   addiu     $a0, $zero, 0x7812
    /* 5A724 8014C324 F7E4030C */  jal        func_800F93DC
    /* 5A728 8014C328 00000000 */   nop
    /* 5A72C 8014C32C 0DD9030C */  jal        func_800F6434
    /* 5A730 8014C330 80000424 */   addiu     $a0, $zero, 0x80
    /* 5A734 8014C334 05004014 */  bnez       $v0, .L8014C34C
    /* 5A738 8014C338 00000000 */   nop
    /* 5A73C 8014C33C C7E5030C */  jal        func_800F971C
    /* 5A740 8014C340 00000000 */   nop
    /* 5A744 8014C344 D5300508 */  j          .L8014C354
    /* 5A748 8014C348 00000000 */   nop
  .L8014C34C:
    /* 5A74C 8014C34C 53D9030C */  jal        func_800F654C
    /* 5A750 8014C350 01000424 */   addiu     $a0, $zero, 0x1
  .L8014C354:
    /* 5A754 8014C354 58E2030C */  jal        func_800F8960
    /* 5A758 8014C358 13760424 */   addiu     $a0, $zero, 0x7613
    /* 5A75C 8014C35C 58E2030C */  jal        func_800F8960
    /* 5A760 8014C360 93760424 */   addiu     $a0, $zero, 0x7693
    /* 5A764 8014C364 58E2030C */  jal        func_800F8960
    /* 5A768 8014C368 13770424 */   addiu     $a0, $zero, 0x7713
    /* 5A76C 8014C36C 58E2030C */  jal        func_800F8960
    /* 5A770 8014C370 93770424 */   addiu     $a0, $zero, 0x7793
    /* 5A774 8014C374 58E2030C */  jal        func_800F8960
    /* 5A778 8014C378 13780424 */   addiu     $a0, $zero, 0x7813
    /* 5A77C 8014C37C F7E4030C */  jal        func_800F93DC
    /* 5A780 8014C380 00000000 */   nop
    /* 5A784 8014C384 58E2030C */  jal        func_800F8960
    /* 5A788 8014C388 92790424 */   addiu     $a0, $zero, 0x7992
    /* 5A78C 8014C38C 58E2030C */  jal        func_800F8960
    /* 5A790 8014C390 127A0424 */   addiu     $a0, $zero, 0x7A12
    /* 5A794 8014C394 58E2030C */  jal        func_800F8960
    /* 5A798 8014C398 927A0424 */   addiu     $a0, $zero, 0x7A92
    /* 5A79C 8014C39C 58E2030C */  jal        func_800F8960
    /* 5A7A0 8014C3A0 127B0424 */   addiu     $a0, $zero, 0x7B12
    /* 5A7A4 8014C3A4 A4D6030C */  jal        func_800F5A90
    /* 5A7A8 8014C3A8 30000424 */   addiu     $a0, $zero, 0x30
    /* 5A7AC 8014C3AC F0D4030C */  jal        func_800F53C0
    /* 5A7B0 8014C3B0 00000000 */   nop
    /* 5A7B4 8014C3B4 03004014 */  bnez       $v0, .L8014C3C4
    /* 5A7B8 8014C3B8 00000000 */   nop
    /* 5A7BC 8014C3BC 58E2030C */  jal        func_800F8960
    /* 5A7C0 8014C3C0 927B0424 */   addiu     $a0, $zero, 0x7B92
  .L8014C3C4:
    /* 5A7C4 8014C3C4 59D9030C */  jal        func_800F6564
    /* 5A7C8 8014C3C8 33F10434 */   ori       $a0, $zero, 0xF133
    /* 5A7CC 8014C3CC 04D5030C */  jal        func_800F5410
    /* 5A7D0 8014C3D0 00000000 */   nop
    /* 5A7D4 8014C3D4 02D0030C */  jal        func_800F4008
    /* 5A7D8 8014C3D8 08000424 */   addiu     $a0, $zero, 0x8
    /* 5A7DC 8014C3DC 62E0030C */  jal        func_800F8188
    /* 5A7E0 8014C3E0 33F10434 */   ori       $a0, $zero, 0xF133
    /* 5A7E4 8014C3E4 59D9030C */  jal        func_800F6564
    /* 5A7E8 8014C3E8 34F10434 */   ori       $a0, $zero, 0xF134
    /* 5A7EC 8014C3EC 04D5030C */  jal        func_800F5410
    /* 5A7F0 8014C3F0 00000000 */   nop
    /* 5A7F4 8014C3F4 02D0030C */  jal        func_800F4008
    /* 5A7F8 8014C3F8 08000424 */   addiu     $a0, $zero, 0x8
    /* 5A7FC 8014C3FC 62E0030C */  jal        func_800F8188
    /* 5A800 8014C400 34F10434 */   ori       $a0, $zero, 0xF134
    /* 5A804 8014C404 1A80033C */  lui        $v1, %hi(D_8019ED58)
    /* 5A808 8014C408 58ED638C */  lw         $v1, %lo(D_8019ED58)($v1)
    /* 5A80C 8014C40C 00000000 */  nop
    /* 5A810 8014C410 00006294 */  lhu        $v0, 0x0($v1)
    /* 5A814 8014C414 80000424 */  addiu      $a0, $zero, 0x80
    /* 5A818 8014C418 04004224 */  addiu      $v0, $v0, 0x4
    /* 5A81C 8014C41C A4D6030C */  jal        func_800F5A90
    /* 5A820 8014C420 000062A4 */   sh        $v0, 0x0($v1)
    /* 5A824 8014C424 F5D4030C */  jal        func_800F53D4
    /* 5A828 8014C428 00000000 */   nop
    /* 5A82C 8014C42C 9DFF4010 */  beqz       $v0, .L8014C2A4
    /* 5A830 8014C430 00000000 */   nop
    /* 5A834 8014C434 59D9030C */  jal        func_800F6564
    /* 5A838 8014C438 12F10434 */   ori       $a0, $zero, 0xF112
    /* 5A83C 8014C43C 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 5A840 8014C440 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 5A844 8014C444 00000000 */  nop
    /* 5A848 8014C448 00006290 */  lbu        $v0, 0x0($v1)
    /* 5A84C 8014C44C B4F10434 */  ori        $a0, $zero, 0xF1B4
    /* 5A850 8014C450 C2100200 */  srl        $v0, $v0, 3
    /* 5A854 8014C454 62E0030C */  jal        func_800F8188
    /* 5A858 8014C458 000062A0 */   sb        $v0, 0x0($v1)
    /* 5A85C 8014C45C 59D9030C */  jal        func_800F6564
    /* 5A860 8014C460 11F10434 */   ori       $a0, $zero, 0xF111
    /* 5A864 8014C464 62E0030C */  jal        func_800F8188
    /* 5A868 8014C468 33F10434 */   ori       $a0, $zero, 0xF133
    /* 5A86C 8014C46C 59D9030C */  jal        func_800F6564
    /* 5A870 8014C470 13F10434 */   ori       $a0, $zero, 0xF113
    /* 5A874 8014C474 62E0030C */  jal        func_800F8188
    /* 5A878 8014C478 34F10434 */   ori       $a0, $zero, 0xF134
    /* 5A87C 8014C47C 90D8030C */  jal        func_800F6240
    /* 5A880 8014C480 12F10434 */   ori       $a0, $zero, 0xF112
    /* 5A884 8014C484 59D9030C */  jal        func_800F6564
    /* 5A888 8014C488 12F10434 */   ori       $a0, $zero, 0xF112
    /* 5A88C 8014C48C 5DD5030C */  jal        func_800F5574
    /* 5A890 8014C490 64000424 */   addiu     $a0, $zero, 0x64
    /* 5A894 8014C494 F5D4030C */  jal        func_800F53D4
    /* 5A898 8014C498 00000000 */   nop
    /* 5A89C 8014C49C 67FF4010 */  beqz       $v0, .L8014C23C
    /* 5A8A0 8014C4A0 00000000 */   nop
    /* 5A8A4 8014C4A4 90D8030C */  jal        func_800F6240
    /* 5A8A8 8014C4A8 25F40434 */   ori       $a0, $zero, 0xF425
  .L8014C4AC:
    /* 5A8AC 8014C4AC 1000BF8F */  lw         $ra, 0x10($sp)
    /* 5A8B0 8014C4B0 00000000 */  nop
    /* 5A8B4 8014C4B4 0800E003 */  jr         $ra
    /* 5A8B8 8014C4B8 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8014C13C
