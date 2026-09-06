nonmatching func_80130F90, 0x304

glabel func_80130F90
    /* 3F390 80130F90 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 3F394 80130F94 20000424 */  addiu      $a0, $zero, 0x20
    /* 3F398 80130F98 1400BFAF */  sw         $ra, 0x14($sp)
    /* 3F39C 80130F9C 53D9030C */  jal        func_800F654C
    /* 3F3A0 80130FA0 1000B0AF */   sw        $s0, 0x10($sp)
    /* 3F3A4 80130FA4 93E0030C */  jal        func_800F824C
    /* 3F3A8 80130FA8 C1000424 */   addiu     $a0, $zero, 0xC1
    /* 3F3AC 80130FAC EF83040C */  jal        func_80120FBC
    /* 3F3B0 80130FB0 1A80103C */   lui       $s0, %hi(D_80199190)
    /* 3F3B4 80130FB4 A5C4040C */  jal        func_80131294
    /* 3F3B8 80130FB8 90911026 */   addiu     $s0, $s0, %lo(D_80199190)
    /* 3F3BC 80130FBC DDE3030C */  jal        func_800F8F74
    /* 3F3C0 80130FC0 881B0424 */   addiu     $a0, $zero, 0x1B88
    /* 3F3C4 80130FC4 59D9030C */  jal        func_800F6564
    /* 3F3C8 80130FC8 831B0424 */   addiu     $a0, $zero, 0x1B83
    /* 3F3CC 80130FCC 50D4030C */  jal        func_800F5140
    /* 3F3D0 80130FD0 00000000 */   nop
    /* 3F3D4 80130FD4 D3D3030C */  jal        func_800F4F4C
    /* 3F3D8 80130FD8 00000000 */   nop
    /* 3F3DC 80130FDC C1CE030C */  jal        func_800F3B04
    /* 3F3E0 80130FE0 831B0424 */   addiu     $a0, $zero, 0x1B83
    /* 3F3E4 80130FE4 CECF030C */  jal        func_800F3F38
    /* 3F3E8 80130FE8 21204000 */   addu      $a0, $v0, $zero
    /* 3F3EC 80130FEC C1CE030C */  jal        func_800F3B04
    /* 3F3F0 80130FF0 841B0424 */   addiu     $a0, $zero, 0x1B84
    /* 3F3F4 80130FF4 CECF030C */  jal        func_800F3F38
    /* 3F3F8 80130FF8 21204000 */   addu      $a0, $v0, $zero
    /* 3F3FC 80130FFC 2DC2040C */  jal        func_801308B4
    /* 3F400 80131000 00000000 */   nop
    /* 3F404 80131004 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 3F408 80131008 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 3F40C 8013100C 1A80053C */  lui        $a1, %hi(D_8019ED58)
    /* 3F410 80131010 58EDA58C */  lw         $a1, %lo(D_8019ED58)($a1)
    /* 3F414 80131014 00004394 */  lhu        $v1, 0x0($v0)
    /* 3F418 80131018 60150424 */  addiu      $a0, $zero, 0x1560
    /* 3F41C 8013101C 5CDB030C */  jal        func_800F6D70
    /* 3F420 80131020 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 3F424 80131024 62E0030C */  jal        func_800F8188
    /* 3F428 80131028 891B0424 */   addiu     $a0, $zero, 0x1B89
    /* 3F42C 8013102C 20D5030C */  jal        func_800F5480
    /* 3F430 80131030 00000000 */   nop
    /* 3F434 80131034 16E0030C */  jal        func_800F8058
    /* 3F438 80131038 0E000424 */   addiu     $a0, $zero, 0xE
    /* 3F43C 8013103C 3489040C */  jal        func_801224D0
    /* 3F440 80131040 00000000 */   nop
    /* 3F444 80131044 1400043C */  lui        $a0, (0x14FFF2 >> 16)
    /* 3F448 80131048 1ADB030C */  jal        func_800F6C68
    /* 3F44C 8013104C F2FF8434 */   ori       $a0, $a0, (0x14FFF2 & 0xFFFF)
    /* 3F450 80131050 62E0030C */  jal        func_800F8188
    /* 3F454 80131054 901B0424 */   addiu     $a0, $zero, 0x1B90
    /* 3F458 80131058 40000496 */  lhu        $a0, 0x40($s0)
    /* 3F45C 8013105C 40DD030C */  jal        func_800F7500
    /* 3F460 80131060 00000000 */   nop
    /* 3F464 80131064 CC7B040C */  jal        func_8011EF30
    /* 3F468 80131068 00000000 */   nop
    /* 3F46C 8013106C 42000496 */  lhu        $a0, 0x42($s0)
    /* 3F470 80131070 40DD030C */  jal        func_800F7500
    /* 3F474 80131074 00000000 */   nop
    /* 3F478 80131078 CC7B040C */  jal        func_8011EF30
    /* 3F47C 8013107C 00000000 */   nop
    /* 3F480 80131080 44000496 */  lhu        $a0, 0x44($s0)
    /* 3F484 80131084 40DD030C */  jal        func_800F7500
    /* 3F488 80131088 00000000 */   nop
    /* 3F48C 8013108C CC7B040C */  jal        func_8011EF30
    /* 3F490 80131090 00000000 */   nop
    /* 3F494 80131094 EF83040C */  jal        func_80120FBC
    /* 3F498 80131098 00000000 */   nop
    /* 3F49C 8013109C 59D9030C */  jal        func_800F6564
    /* 3F4A0 801310A0 891B0424 */   addiu     $a0, $zero, 0x1B89
    /* 3F4A4 801310A4 77DC030C */  jal        func_800F71DC
    /* 3F4A8 801310A8 44000424 */   addiu     $a0, $zero, 0x44
    /* 3F4AC 801310AC ECBE040C */  jal        func_8012FBB0
    /* 3F4B0 801310B0 00000000 */   nop
    /* 3F4B4 801310B4 46000496 */  lhu        $a0, 0x46($s0)
    /* 3F4B8 801310B8 40DD030C */  jal        func_800F7500
    /* 3F4BC 801310BC 00000000 */   nop
    /* 3F4C0 801310C0 CCE4030C */  jal        func_800F9330
    /* 3F4C4 801310C4 00000000 */   nop
    /* 3F4C8 801310C8 9CDC030C */  jal        func_800F7270
    /* 3F4CC 801310CC 29000424 */   addiu     $a0, $zero, 0x29
    /* 3F4D0 801310D0 1A80033C */  lui        $v1, %hi(D_8019ED54)
    /* 3F4D4 801310D4 54ED638C */  lw         $v1, %lo(D_8019ED54)($v1)
    /* 3F4D8 801310D8 00000000 */  nop
    /* 3F4DC 801310DC 00006294 */  lhu        $v0, 0x0($v1)
    /* 3F4E0 801310E0 29000424 */  addiu      $a0, $zero, 0x29
    /* 3F4E4 801310E4 FEFF4224 */  addiu      $v0, $v0, -0x2
    /* 3F4E8 801310E8 5BE3030C */  jal        func_800F8D6C
    /* 3F4EC 801310EC 000062A4 */   sh        $v0, 0x0($v1)
    /* 3F4F0 801310F0 68E5030C */  jal        func_800F95A0
    /* 3F4F4 801310F4 00000000 */   nop
    /* 3F4F8 801310F8 E97E040C */  jal        func_8011FBA4
    /* 3F4FC 801310FC 00000000 */   nop
    /* 3F500 80131100 CCE4030C */  jal        func_800F9330
    /* 3F504 80131104 00000000 */   nop
    /* 3F508 80131108 9CDC030C */  jal        func_800F7270
    /* 3F50C 8013110C 29000424 */   addiu     $a0, $zero, 0x29
    /* 3F510 80131110 1A80033C */  lui        $v1, %hi(D_8019ED54)
    /* 3F514 80131114 54ED638C */  lw         $v1, %lo(D_8019ED54)($v1)
    /* 3F518 80131118 00000000 */  nop
    /* 3F51C 8013111C 00006294 */  lhu        $v0, 0x0($v1)
    /* 3F520 80131120 29000424 */  addiu      $a0, $zero, 0x29
    /* 3F524 80131124 02004224 */  addiu      $v0, $v0, 0x2
    /* 3F528 80131128 5BE3030C */  jal        func_800F8D6C
    /* 3F52C 8013112C 000062A4 */   sh        $v0, 0x0($v1)
    /* 3F530 80131130 68E5030C */  jal        func_800F95A0
    /* 3F534 80131134 00000000 */   nop
    /* 3F538 80131138 4A000496 */  lhu        $a0, 0x4A($s0)
    /* 3F53C 8013113C 40DD030C */  jal        func_800F7500
    /* 3F540 80131140 00000000 */   nop
    /* 3F544 80131144 E97E040C */  jal        func_8011FBA4
    /* 3F548 80131148 00000000 */   nop
    /* 3F54C 8013114C A9C2040C */  jal        func_80130AA4
    /* 3F550 80131150 00000000 */   nop
    /* 3F554 80131154 62E0030C */  jal        func_800F8188
    /* 3F558 80131158 931B0424 */   addiu     $a0, $zero, 0x1B93
    /* 3F55C 8013115C 40DD030C */  jal        func_800F7500
    /* 3F560 80131160 C8010424 */   addiu     $a0, $zero, 0x1C8
    /* 3F564 80131164 B781040C */  jal        func_801206DC
    /* 3F568 80131168 00000000 */   nop
    /* 3F56C 8013116C 77DC030C */  jal        func_800F71DC
    /* 3F570 80131170 E0020424 */   addiu     $a0, $zero, 0x2E0
    /* 3F574 80131174 40DD030C */  jal        func_800F7500
    /* 3F578 80131178 00100424 */   addiu     $a0, $zero, 0x1000
    /* 3F57C 8013117C 488B040C */  jal        func_80122D20
    /* 3F580 80131180 00000000 */   nop
    /* 3F584 80131184 77DC030C */  jal        func_800F71DC
    /* 3F588 80131188 60000424 */   addiu     $a0, $zero, 0x60
    /* 3F58C 8013118C 40DD030C */  jal        func_800F7500
    /* 3F590 80131190 40100424 */   addiu     $a0, $zero, 0x1040
    /* 3F594 80131194 488B040C */  jal        func_80122D20
    /* 3F598 80131198 00000000 */   nop
    /* 3F59C 8013119C 77DC030C */  jal        func_800F71DC
    /* 3F5A0 801311A0 60050424 */   addiu     $a0, $zero, 0x560
    /* 3F5A4 801311A4 40DD030C */  jal        func_800F7500
    /* 3F5A8 801311A8 80100424 */   addiu     $a0, $zero, 0x1080
    /* 3F5AC 801311AC 488B040C */  jal        func_80122D20
    /* 3F5B0 801311B0 00000000 */   nop
    /* 3F5B4 801311B4 77DC030C */  jal        func_800F71DC
    /* 3F5B8 801311B8 A0010424 */   addiu     $a0, $zero, 0x1A0
    /* 3F5BC 801311BC 40DD030C */  jal        func_800F7500
    /* 3F5C0 801311C0 C0100424 */   addiu     $a0, $zero, 0x10C0
    /* 3F5C4 801311C4 488B040C */  jal        func_80122D20
    /* 3F5C8 801311C8 00000000 */   nop
    /* 3F5CC 801311CC 77DC030C */  jal        func_800F71DC
    /* 3F5D0 801311D0 20040424 */   addiu     $a0, $zero, 0x420
    /* 3F5D4 801311D4 40DD030C */  jal        func_800F7500
    /* 3F5D8 801311D8 00110424 */   addiu     $a0, $zero, 0x1100
    /* 3F5DC 801311DC 488B040C */  jal        func_80122D20
    /* 3F5E0 801311E0 00000000 */   nop
    /* 3F5E4 801311E4 59D9030C */  jal        func_800F6564
    /* 3F5E8 801311E8 A8160424 */   addiu     $a0, $zero, 0x16A8
    /* 3F5EC 801311EC 92D0030C */  jal        func_800F4248
    /* 3F5F0 801311F0 01000424 */   addiu     $a0, $zero, 0x1
    /* 3F5F4 801311F4 50D4030C */  jal        func_800F5140
    /* 3F5F8 801311F8 00000000 */   nop
    /* 3F5FC 801311FC 93E0030C */  jal        func_800F824C
    /* 3F600 80131200 45000424 */   addiu     $a0, $zero, 0x45
    /* 3F604 80131204 1A80033C */  lui        $v1, %hi(D_8019ED40)
    /* 3F608 80131208 40ED638C */  lw         $v1, %lo(D_8019ED40)($v1)
    /* 3F60C 8013120C 00000000 */  nop
    /* 3F610 80131210 00006290 */  lbu        $v0, 0x0($v1)
    /* 3F614 80131214 00000000 */  nop
    /* 3F618 80131218 40100200 */  sll        $v0, $v0, 1
    /* 3F61C 8013121C 50D4030C */  jal        func_800F5140
    /* 3F620 80131220 000062A0 */   sb        $v0, 0x0($v1)
    /* 3F624 80131224 D3D3030C */  jal        func_800F4F4C
    /* 3F628 80131228 00000000 */   nop
    /* 3F62C 8013122C 0FCF030C */  jal        func_800F3C3C
    /* 3F630 80131230 45000424 */   addiu     $a0, $zero, 0x45
    /* 3F634 80131234 CECF030C */  jal        func_800F3F38
    /* 3F638 80131238 21204000 */   addu      $a0, $v0, $zero
    /* 3F63C 8013123C 3489040C */  jal        func_801224D0
    /* 3F640 80131240 00000000 */   nop
    /* 3F644 80131244 53D9030C */  jal        func_800F654C
    /* 3F648 80131248 21200000 */   addu      $a0, $zero, $zero
    /* 3F64C 8013124C AFC4040C */  jal        func_801312BC
    /* 3F650 80131250 00000000 */   nop
    /* 3F654 80131254 AFC4040C */  jal        func_801312BC
    /* 3F658 80131258 00000000 */   nop
    /* 3F65C 8013125C AFC4040C */  jal        func_801312BC
    /* 3F660 80131260 00000000 */   nop
    /* 3F664 80131264 AFC4040C */  jal        func_801312BC
    /* 3F668 80131268 00000000 */   nop
    /* 3F66C 8013126C AFC4040C */  jal        func_801312BC
    /* 3F670 80131270 00000000 */   nop
    /* 3F674 80131274 53D9030C */  jal        func_800F654C
    /* 3F678 80131278 1F000424 */   addiu     $a0, $zero, 0x1F
    /* 3F67C 8013127C 7AE0030C */  jal        func_800F81E8
    /* 3F680 80131280 2C210424 */   addiu     $a0, $zero, 0x212C
    /* 3F684 80131284 1400BF8F */  lw         $ra, 0x14($sp)
    /* 3F688 80131288 1000B08F */  lw         $s0, 0x10($sp)
    /* 3F68C 8013128C 0800E003 */  jr         $ra
    /* 3F690 80131290 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_80130F90
