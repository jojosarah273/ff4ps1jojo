nonmatching func_8018DCD8, 0x114

glabel func_8018DCD8
    /* 9C0D8 8018DCD8 21200000 */  addu       $a0, $zero, $zero
    /* 9C0DC 8018DCDC 06000524 */  addiu      $a1, $zero, 0x6
    /* 9C0E0 8018DCE0 1F80033C */  lui        $v1, %hi(D_801F67D8)
    /* 9C0E4 8018DCE4 D8676324 */  addiu      $v1, $v1, %lo(D_801F67D8)
    /* 9C0E8 8018DCE8 10000224 */  addiu      $v0, $zero, 0x10
    /* 9C0EC 8018DCEC 1A80013C */  lui        $at, %hi(D_8019B584)
    /* 9C0F0 8018DCF0 84B522AC */  sw         $v0, %lo(D_8019B584)($at)
    /* 9C0F4 8018DCF4 18000224 */  addiu      $v0, $zero, 0x18
    /* 9C0F8 8018DCF8 1F80013C */  lui        $at, %hi(D_801F67A4)
    /* 9C0FC 8018DCFC A46720AC */  sw         $zero, %lo(D_801F67A4)($at)
    /* 9C100 8018DD00 1F80013C */  lui        $at, %hi(D_801F67A8)
    /* 9C104 8018DD04 A86720AC */  sw         $zero, %lo(D_801F67A8)($at)
    /* 9C108 8018DD08 1F80013C */  lui        $at, %hi(D_801F67AC)
    /* 9C10C 8018DD0C AC6720AC */  sw         $zero, %lo(D_801F67AC)($at)
    /* 9C110 8018DD10 1F80013C */  lui        $at, %hi(D_801F67B0)
    /* 9C114 8018DD14 B06720AC */  sw         $zero, %lo(D_801F67B0)($at)
    /* 9C118 8018DD18 1F80013C */  lui        $at, %hi(D_801F67B4)
    /* 9C11C 8018DD1C B46720AC */  sw         $zero, %lo(D_801F67B4)($at)
    /* 9C120 8018DD20 1A80013C */  lui        $at, %hi(D_8019B588)
    /* 9C124 8018DD24 88B520AC */  sw         $zero, %lo(D_8019B588)($at)
    /* 9C128 8018DD28 1A80013C */  lui        $at, %hi(D_8019B58C)
    /* 9C12C 8018DD2C 8CB520AC */  sw         $zero, %lo(D_8019B58C)($at)
    /* 9C130 8018DD30 1A80013C */  lui        $at, %hi(D_8019B590)
    /* 9C134 8018DD34 90B520AC */  sw         $zero, %lo(D_8019B590)($at)
    /* 9C138 8018DD38 1A80013C */  lui        $at, %hi(D_8019B594)
    /* 9C13C 8018DD3C 94B520AC */  sw         $zero, %lo(D_8019B594)($at)
    /* 9C140 8018DD40 1A80013C */  lui        $at, %hi(D_8019B598)
    /* 9C144 8018DD44 98B520AC */  sw         $zero, %lo(D_8019B598)($at)
    /* 9C148 8018DD48 1A80013C */  lui        $at, %hi(D_8019B59C)
    /* 9C14C 8018DD4C 9CB520AC */  sw         $zero, %lo(D_8019B59C)($at)
    /* 9C150 8018DD50 1A80013C */  lui        $at, %hi(D_8019B5A0)
    /* 9C154 8018DD54 A0B520AC */  sw         $zero, %lo(D_8019B5A0)($at)
    /* 9C158 8018DD58 1A80013C */  lui        $at, %hi(D_8019B5A4)
    /* 9C15C 8018DD5C A4B520AC */  sw         $zero, %lo(D_8019B5A4)($at)
    /* 9C160 8018DD60 1A80013C */  lui        $at, %hi(D_8019B5A8)
    /* 9C164 8018DD64 A8B520AC */  sw         $zero, %lo(D_8019B5A8)($at)
    /* 9C168 8018DD68 1F80013C */  lui        $at, %hi(D_801F67B8)
    /* 9C16C 8018DD6C B86722AC */  sw         $v0, %lo(D_801F67B8)($at)
    /* 9C170 8018DD70 1F80013C */  lui        $at, %hi(D_801F67BC)
    /* 9C174 8018DD74 BC6722AC */  sw         $v0, %lo(D_801F67BC)($at)
    /* 9C178 8018DD78 1F80013C */  lui        $at, %hi(D_801F67C0)
    /* 9C17C 8018DD7C C06722AC */  sw         $v0, %lo(D_801F67C0)($at)
    /* 9C180 8018DD80 1F80013C */  lui        $at, %hi(D_801F67C4)
    /* 9C184 8018DD84 C46722AC */  sw         $v0, %lo(D_801F67C4)($at)
    /* 9C188 8018DD88 1F80013C */  lui        $at, %hi(D_801F67C8)
    /* 9C18C 8018DD8C C86722AC */  sw         $v0, %lo(D_801F67C8)($at)
  .L8018DD90:
    /* 9C190 8018DD90 000065A0 */  sb         $a1, 0x0($v1)
    /* 9C194 8018DD94 040060AC */  sw         $zero, 0x4($v1)
    /* 9C198 8018DD98 080060AC */  sw         $zero, 0x8($v1)
    /* 9C19C 8018DD9C 0C0060AC */  sw         $zero, 0xC($v1)
    /* 9C1A0 8018DDA0 01008424 */  addiu      $a0, $a0, 0x1
    /* 9C1A4 8018DDA4 18008228 */  slti       $v0, $a0, 0x18
    /* 9C1A8 8018DDA8 F9FF4014 */  bnez       $v0, .L8018DD90
    /* 9C1AC 8018DDAC 10006324 */   addiu     $v1, $v1, 0x10
    /* 9C1B0 8018DDB0 1F80023C */  lui        $v0, %hi(D_801F67D0)
    /* 9C1B4 8018DDB4 D0674224 */  addiu      $v0, $v0, %lo(D_801F67D0)
    /* 9C1B8 8018DDB8 1F80013C */  lui        $at, %hi(D_801F67D0)
    /* 9C1BC 8018DDBC D06720AC */  sw         $zero, %lo(D_801F67D0)($at)
    /* 9C1C0 8018DDC0 1F80013C */  lui        $at, %hi(D_801F67D4)
    /* 9C1C4 8018DDC4 D46720AC */  sw         $zero, %lo(D_801F67D4)($at)
    /* 9C1C8 8018DDC8 1F80013C */  lui        $at, %hi(D_801F6958)
    /* 9C1CC 8018DDCC 586920AC */  sw         $zero, %lo(D_801F6958)($at)
    /* 9C1D0 8018DDD0 1F80013C */  lui        $at, %hi(D_801F695C)
    /* 9C1D4 8018DDD4 5C6920AC */  sw         $zero, %lo(D_801F695C)($at)
    /* 9C1D8 8018DDD8 1F80013C */  lui        $at, %hi(D_801F6960)
    /* 9C1DC 8018DDDC 606920AC */  sw         $zero, %lo(D_801F6960)($at)
    /* 9C1E0 8018DDE0 1F80013C */  lui        $at, %hi(D_801F6964)
    /* 9C1E4 8018DDE4 0800E003 */  jr         $ra
    /* 9C1E8 8018DDE8 646920AC */   sw        $zero, %lo(D_801F6964)($at)
endlabel func_8018DCD8
