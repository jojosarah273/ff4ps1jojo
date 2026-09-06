nonmatching func_8018DDEC, 0x124

glabel func_8018DDEC
    /* 9C1EC 8018DDEC 1A80033C */  lui        $v1, %hi(D_8019B584)
    /* 9C1F0 8018DDF0 84B5638C */  lw         $v1, %lo(D_8019B584)($v1)
    /* 9C1F4 8018DDF4 10000224 */  addiu      $v0, $zero, 0x10
    /* 9C1F8 8018DDF8 43006214 */  bne        $v1, $v0, .L8018DF08
    /* 9C1FC 8018DDFC FDFF0224 */   addiu     $v0, $zero, -0x3
    /* 9C200 8018DE00 21200000 */  addu       $a0, $zero, $zero
    /* 9C204 8018DE04 06000524 */  addiu      $a1, $zero, 0x6
    /* 9C208 8018DE08 1F80033C */  lui        $v1, %hi(D_801F67D8)
    /* 9C20C 8018DE0C D8676324 */  addiu      $v1, $v1, %lo(D_801F67D8)
    /* 9C210 8018DE10 18000224 */  addiu      $v0, $zero, 0x18
    /* 9C214 8018DE14 1A80013C */  lui        $at, %hi(D_8019B584)
    /* 9C218 8018DE18 84B520AC */  sw         $zero, %lo(D_8019B584)($at)
    /* 9C21C 8018DE1C 1F80013C */  lui        $at, %hi(D_801F67A4)
    /* 9C220 8018DE20 A46720AC */  sw         $zero, %lo(D_801F67A4)($at)
    /* 9C224 8018DE24 1F80013C */  lui        $at, %hi(D_801F67A8)
    /* 9C228 8018DE28 A86720AC */  sw         $zero, %lo(D_801F67A8)($at)
    /* 9C22C 8018DE2C 1F80013C */  lui        $at, %hi(D_801F67AC)
    /* 9C230 8018DE30 AC6720AC */  sw         $zero, %lo(D_801F67AC)($at)
    /* 9C234 8018DE34 1F80013C */  lui        $at, %hi(D_801F67B0)
    /* 9C238 8018DE38 B06720AC */  sw         $zero, %lo(D_801F67B0)($at)
    /* 9C23C 8018DE3C 1F80013C */  lui        $at, %hi(D_801F67B4)
    /* 9C240 8018DE40 B46720AC */  sw         $zero, %lo(D_801F67B4)($at)
    /* 9C244 8018DE44 1A80013C */  lui        $at, %hi(D_8019B588)
    /* 9C248 8018DE48 88B520AC */  sw         $zero, %lo(D_8019B588)($at)
    /* 9C24C 8018DE4C 1A80013C */  lui        $at, %hi(D_8019B58C)
    /* 9C250 8018DE50 8CB520AC */  sw         $zero, %lo(D_8019B58C)($at)
    /* 9C254 8018DE54 1A80013C */  lui        $at, %hi(D_8019B590)
    /* 9C258 8018DE58 90B520AC */  sw         $zero, %lo(D_8019B590)($at)
    /* 9C25C 8018DE5C 1A80013C */  lui        $at, %hi(D_8019B594)
    /* 9C260 8018DE60 94B520AC */  sw         $zero, %lo(D_8019B594)($at)
    /* 9C264 8018DE64 1A80013C */  lui        $at, %hi(D_8019B598)
    /* 9C268 8018DE68 98B520AC */  sw         $zero, %lo(D_8019B598)($at)
    /* 9C26C 8018DE6C 1A80013C */  lui        $at, %hi(D_8019B59C)
    /* 9C270 8018DE70 9CB520AC */  sw         $zero, %lo(D_8019B59C)($at)
    /* 9C274 8018DE74 1A80013C */  lui        $at, %hi(D_8019B5A0)
    /* 9C278 8018DE78 A0B520AC */  sw         $zero, %lo(D_8019B5A0)($at)
    /* 9C27C 8018DE7C 1A80013C */  lui        $at, %hi(D_8019B5A4)
    /* 9C280 8018DE80 A4B520AC */  sw         $zero, %lo(D_8019B5A4)($at)
    /* 9C284 8018DE84 1A80013C */  lui        $at, %hi(D_8019B5A8)
    /* 9C288 8018DE88 A8B520AC */  sw         $zero, %lo(D_8019B5A8)($at)
    /* 9C28C 8018DE8C 1F80013C */  lui        $at, %hi(D_801F67B8)
    /* 9C290 8018DE90 B86722AC */  sw         $v0, %lo(D_801F67B8)($at)
    /* 9C294 8018DE94 1F80013C */  lui        $at, %hi(D_801F67BC)
    /* 9C298 8018DE98 BC6722AC */  sw         $v0, %lo(D_801F67BC)($at)
    /* 9C29C 8018DE9C 1F80013C */  lui        $at, %hi(D_801F67C0)
    /* 9C2A0 8018DEA0 C06722AC */  sw         $v0, %lo(D_801F67C0)($at)
    /* 9C2A4 8018DEA4 1F80013C */  lui        $at, %hi(D_801F67C4)
    /* 9C2A8 8018DEA8 C46722AC */  sw         $v0, %lo(D_801F67C4)($at)
    /* 9C2AC 8018DEAC 1F80013C */  lui        $at, %hi(D_801F67C8)
    /* 9C2B0 8018DEB0 C86722AC */  sw         $v0, %lo(D_801F67C8)($at)
  .L8018DEB4:
    /* 9C2B4 8018DEB4 000065A0 */  sb         $a1, 0x0($v1)
    /* 9C2B8 8018DEB8 040060AC */  sw         $zero, 0x4($v1)
    /* 9C2BC 8018DEBC 080060AC */  sw         $zero, 0x8($v1)
    /* 9C2C0 8018DEC0 0C0060AC */  sw         $zero, 0xC($v1)
    /* 9C2C4 8018DEC4 01008424 */  addiu      $a0, $a0, 0x1
    /* 9C2C8 8018DEC8 18008228 */  slti       $v0, $a0, 0x18
    /* 9C2CC 8018DECC F9FF4014 */  bnez       $v0, .L8018DEB4
    /* 9C2D0 8018DED0 10006324 */   addiu     $v1, $v1, 0x10
    /* 9C2D4 8018DED4 01000224 */  addiu      $v0, $zero, 0x1
    /* 9C2D8 8018DED8 1F80013C */  lui        $at, %hi(D_801F67D0)
    /* 9C2DC 8018DEDC D06720AC */  sw         $zero, %lo(D_801F67D0)($at)
    /* 9C2E0 8018DEE0 1F80013C */  lui        $at, %hi(D_801F67D4)
    /* 9C2E4 8018DEE4 D46720AC */  sw         $zero, %lo(D_801F67D4)($at)
    /* 9C2E8 8018DEE8 1F80013C */  lui        $at, %hi(D_801F6958)
    /* 9C2EC 8018DEEC 586920AC */  sw         $zero, %lo(D_801F6958)($at)
    /* 9C2F0 8018DEF0 1F80013C */  lui        $at, %hi(D_801F695C)
    /* 9C2F4 8018DEF4 5C6920AC */  sw         $zero, %lo(D_801F695C)($at)
    /* 9C2F8 8018DEF8 1F80013C */  lui        $at, %hi(D_801F6960)
    /* 9C2FC 8018DEFC 606920AC */  sw         $zero, %lo(D_801F6960)($at)
    /* 9C300 8018DF00 1F80013C */  lui        $at, %hi(D_801F6964)
    /* 9C304 8018DF04 646920AC */  sw         $zero, %lo(D_801F6964)($at)
  .L8018DF08:
    /* 9C308 8018DF08 0800E003 */  jr         $ra
    /* 9C30C 8018DF0C 00000000 */   nop
endlabel func_8018DDEC
