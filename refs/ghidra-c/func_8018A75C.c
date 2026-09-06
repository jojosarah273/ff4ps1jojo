
undefined4 _spu_t(int param_1,uint param_2,uint param_3)

{
  ushort uVar1;
  undefined4 uVar2;
  uint uVar3;
  ushort uVar4;
  
  if (param_1 == 1) {
    DAT_8019b164 = 0;
    if (*(short *)(PTR_VOICE_00_LEFT_RIGHT_8019b114 + 0x1a6) != DAT_8019b12c) {
      uVar3 = 1;
      do {
        if (0xf00 < uVar3) {
          DAT_8019b164 = 0;
          return 0xfffffffe;
        }
        uVar3 = uVar3 + 1;
      } while (*(short *)(PTR_VOICE_00_LEFT_RIGHT_8019b114 + 0x1a6) != DAT_8019b12c);
    }
    *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_8019b114 + 0x1aa) =
         *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_8019b114 + 0x1aa) & 0xffcf | 0x20;
    uVar2 = SPU_OBJ_814();
    return uVar2;
  }
  if (param_1 < 2) {
    if (param_1 != 0) {
      uVar2 = SPU_OBJ_814();
      return uVar2;
    }
    DAT_8019b164 = 1;
    if (*(short *)(PTR_VOICE_00_LEFT_RIGHT_8019b114 + 0x1a6) != DAT_8019b12c) {
      uVar3 = 1;
      do {
        if (0xf00 < uVar3) {
          DAT_8019b164 = 1;
          return 0xfffffffe;
        }
        uVar3 = uVar3 + 1;
      } while (*(short *)(PTR_VOICE_00_LEFT_RIGHT_8019b114 + 0x1a6) != DAT_8019b12c);
    }
    *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_8019b114 + 0x1aa) =
         *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_8019b114 + 0x1aa) | 0x30;
    uVar2 = SPU_OBJ_814();
    return uVar2;
  }
  if (param_1 == 2) {
    DAT_8019b12c = (short)(param_2 >> (DAT_8019b13c & 0x1f));
    *(short *)(PTR_VOICE_00_LEFT_RIGHT_8019b114 + 0x1a6) = DAT_8019b12c;
    uVar2 = SPU_OBJ_814();
    return uVar2;
  }
  if (param_1 == 3) {
    uVar4 = 0x20;
    if (DAT_8019b164 == 1) {
      uVar4 = 0x30;
    }
    uVar3 = 1;
    uVar1 = *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_8019b114 + 0x1aa);
    while ((uVar1 & 0x30) != uVar4) {
      if (0xf00 < uVar3) {
        return 0xfffffffe;
      }
      uVar3 = uVar3 + 1;
      uVar1 = *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_8019b114 + 0x1aa);
    }
    if (DAT_8019b164 != 1) {
      SPU_OBJ_A88();
      DAT_8019b16c = (param_3 >> 6) + (uint)((param_3 & 0x3f) != 0);
      DAT_8019b168 = param_2;
      *(uint *)PTR_DMA_SPU_MADR_8019b118 = param_2;
      *(uint *)PTR_DMA_SPU_BCR_8019b11c = DAT_8019b16c << 0x10 | 0x10;
      uVar2 = 0x1000201;
      if (DAT_8019b164 == 1) {
        uVar2 = 0x1000200;
      }
      *(undefined4 *)PTR_DMA_SPU_CHCR_8019b120 = uVar2;
      return 0;
    }
    SPU_OBJ_AB0();
    uVar2 = SPU_OBJ_78C();
    return uVar2;
  }
  uVar2 = SPU_OBJ_814();
  return uVar2;
}



