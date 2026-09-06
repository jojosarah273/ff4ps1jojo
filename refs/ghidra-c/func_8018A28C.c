
undefined4 SPU_OBJ_D4(int param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined2 *puVar3;
  int unaff_s0;
  
  puVar1 = PTR_VOICE_00_LEFT_RIGHT_8019b114;
  puVar3 = &DAT_801f6788;
  DAT_8019b138 = 2;
  DAT_8019b13c = 3;
  DAT_8019b140 = 8;
  DAT_8019b144 = 7;
  *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_8019b114 + 0x1ac) = 4;
  *(undefined2 *)(puVar1 + 0x184) = 0;
  *(undefined2 *)(puVar1 + 0x186) = 0;
  *(undefined2 *)(puVar1 + 0x18c) = 0xffff;
  *(undefined2 *)(puVar1 + 0x18e) = 0xffff;
  *(undefined2 *)(puVar1 + 0x198) = 0;
  *(undefined2 *)(puVar1 + 0x19a) = 0;
  do {
    *puVar3 = 0;
    puVar1 = PTR_VOICE_00_LEFT_RIGHT_8019b114;
    param_1 = param_1 + 1;
    puVar3 = puVar3 + 1;
  } while (param_1 < 10);
  if (unaff_s0 == 0) {
    DAT_8019b12c = 0x200;
    *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_8019b114 + 400) = 0;
    *(undefined2 *)(puVar1 + 0x192) = 0;
    *(undefined2 *)(puVar1 + 0x194) = 0;
    *(undefined2 *)(puVar1 + 0x196) = 0;
    *(undefined2 *)(puVar1 + 0x1b0) = 0;
    *(undefined2 *)(puVar1 + 0x1b2) = 0;
    *(undefined2 *)(puVar1 + 0x1b4) = 0;
    *(undefined2 *)(puVar1 + 0x1b6) = 0;
    SPU_OBJ_280(&DAT_8019b154,0x10);
    iVar2 = 0;
    puVar3 = (undefined2 *)PTR_VOICE_00_LEFT_RIGHT_8019b114;
    do {
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0x3fff;
      puVar3[3] = 0x200;
      puVar3[4] = 0;
      puVar3[5] = 0;
      puVar1 = PTR_VOICE_00_LEFT_RIGHT_8019b114;
      iVar2 = iVar2 + 1;
      puVar3 = puVar3 + 8;
    } while (iVar2 < 0x18);
    *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_8019b114 + 0x188) = 0xffff;
    *(undefined2 *)(puVar1 + 0x18a) = 0xff;
    _spu_Fw1ts();
    _spu_Fw1ts();
    _spu_Fw1ts();
    _spu_Fw1ts();
    puVar1 = PTR_VOICE_00_LEFT_RIGHT_8019b114;
    *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_8019b114 + 0x18c) = 0xffff;
    *(undefined2 *)(puVar1 + 0x18e) = 0xff;
    _spu_Fw1ts();
    _spu_Fw1ts();
    _spu_Fw1ts();
    _spu_Fw1ts();
  }
  DAT_8019b148 = 1;
  *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_8019b114 + 0x1aa) = 0xc000;
  DAT_8019b14c = 0;
  DAT_8019b150 = 0;
  return 0;
}



