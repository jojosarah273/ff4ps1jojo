
undefined4 _spu_init(int param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  undefined2 *puVar6;
  
  *(uint *)PTR_DMA_DPCR_8019b124 = *(uint *)PTR_DMA_DPCR_8019b124 | 0xb0000;
  puVar1 = PTR_VOICE_00_LEFT_RIGHT_8019b114;
  DAT_8019b130 = 0;
  DAT_8019b134 = 0;
  DAT_8019b12c = 0;
  *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_8019b114 + 0x180) = 0;
  *(undefined2 *)(puVar1 + 0x182) = 0;
  *(undefined2 *)(puVar1 + 0x1aa) = 0;
  _spu_Fw1ts();
  puVar1 = PTR_VOICE_00_LEFT_RIGHT_8019b114;
  *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_8019b114 + 0x180) = 0;
  *(undefined2 *)(puVar1 + 0x182) = 0;
  puVar2 = PTR_VOICE_00_LEFT_RIGHT_8019b114;
  if ((*(ushort *)(puVar1 + 0x1ae) & 0x7ff) != 0) {
    uVar4 = 1;
    do {
      if (0xf00 < uVar4) {
        printf("SPU:T/O [%s]\n","wait (reset)");
        uVar3 = SPU_OBJ_D4(0);
        return uVar3;
      }
      uVar4 = uVar4 + 1;
    } while ((*(ushort *)(PTR_VOICE_00_LEFT_RIGHT_8019b114 + 0x1ae) & 0x7ff) != 0);
  }
  iVar5 = 0;
  puVar6 = &DAT_801f6788;
  DAT_8019b138 = 2;
  DAT_8019b13c = 3;
  DAT_8019b140 = 8;
  DAT_8019b144 = 7;
  *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_8019b114 + 0x1ac) = 4;
  *(undefined2 *)(puVar2 + 0x184) = 0;
  *(undefined2 *)(puVar2 + 0x186) = 0;
  *(undefined2 *)(puVar2 + 0x18c) = 0xffff;
  *(undefined2 *)(puVar2 + 0x18e) = 0xffff;
  *(undefined2 *)(puVar2 + 0x198) = 0;
  *(undefined2 *)(puVar2 + 0x19a) = 0;
  do {
    *puVar6 = 0;
    puVar1 = PTR_VOICE_00_LEFT_RIGHT_8019b114;
    iVar5 = iVar5 + 1;
    puVar6 = puVar6 + 1;
  } while (iVar5 < 10);
  if (param_1 == 0) {
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
    iVar5 = 0;
    puVar6 = (undefined2 *)PTR_VOICE_00_LEFT_RIGHT_8019b114;
    do {
      *puVar6 = 0;
      puVar6[1] = 0;
      puVar6[2] = 0x3fff;
      puVar6[3] = 0x200;
      puVar6[4] = 0;
      puVar6[5] = 0;
      puVar1 = PTR_VOICE_00_LEFT_RIGHT_8019b114;
      iVar5 = iVar5 + 1;
      puVar6 = puVar6 + 8;
    } while (iVar5 < 0x18);
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



