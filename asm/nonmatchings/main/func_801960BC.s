nonmatching func_801960BC, 0x30

glabel func_801960BC
    /* A44BC 801960BC 0010023C */  lui        $v0, (0x10000000 >> 16)
    /* A44C0 801960C0 1A80033C */  lui        $v1, %hi(D_8019DC5C)
    /* A44C4 801960C4 5CDC638C */  lw         $v1, %lo(D_8019DC5C)($v1)
    /* A44C8 801960C8 25208200 */  or         $a0, $a0, $v0
    /* A44CC 801960CC 000064AC */  sw         $a0, 0x0($v1)
    /* A44D0 801960D0 1A80023C */  lui        $v0, %hi(D_8019DC58)
    /* A44D4 801960D4 58DC428C */  lw         $v0, %lo(D_8019DC58)($v0)
    /* A44D8 801960D8 FF00033C */  lui        $v1, (0xFFFFFF >> 16)
    /* A44DC 801960DC 0000428C */  lw         $v0, 0x0($v0)
    /* A44E0 801960E0 FFFF6334 */  ori        $v1, $v1, (0xFFFFFF & 0xFFFF)
    /* A44E4 801960E4 0800E003 */  jr         $ra
    /* A44E8 801960E8 24104300 */   and       $v0, $v0, $v1
endlabel func_801960BC
