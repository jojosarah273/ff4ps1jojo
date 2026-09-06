
void SpuSetKey(long on_off,ulong voice_bit)

{
  undefined *puVar1;
  ushort uVar2;
  uint uVar3;
  ushort uVar4;
  
  puVar1 = PTR_VOICE_00_LEFT_RIGHT_8019b114;
  uVar3 = voice_bit & 0xffffff;
  uVar2 = (ushort)uVar3;
  uVar4 = (ushort)(uVar3 >> 0x10);
  if (on_off == 0) {
    if ((DAT_8019b100 & 1) == 0) {
      *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_8019b114 + 0x18c) = uVar2;
      *(ushort *)(puVar1 + 0x18e) = uVar4;
      DAT_8019b0a0 = DAT_8019b0a0 & ~uVar3;
    }
    else {
      DAT_8019b0cc = DAT_8019b0cc | 1;
      DAT_8019b0c8 = DAT_8019b0c8 & ~uVar3;
      if ((DAT_801f6788 & uVar3) != 0) {
        DAT_801f6788 = DAT_801f6788 & (ushort)~uVar3;
      }
      DAT_801f678c = uVar2;
      DAT_801f678e = uVar4;
      if (((uint)DAT_801f678a & uVar3 >> 0x10) != 0) {
        DAT_801f678a = DAT_801f678a & ~uVar4;
        S_SK_OBJ_1B4();
        return;
      }
    }
  }
  else if (on_off == 1) {
    if ((DAT_8019b100 & 1) == 0) {
      *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_8019b114 + 0x188) = uVar2;
      *(ushort *)(puVar1 + 0x18a) = uVar4;
      S_SK_OBJ_1AC();
      return;
    }
    DAT_8019b0cc = DAT_8019b0cc | 1;
    DAT_8019b0c8 = DAT_8019b0c8 | uVar3;
    if ((DAT_801f678c & uVar3) != 0) {
      DAT_801f678c = DAT_801f678c & ~uVar2;
    }
    DAT_801f6788 = uVar2;
    DAT_801f678a = uVar4;
    if (((uint)DAT_801f678e & uVar3 >> 0x10) != 0) {
      DAT_801f678e = DAT_801f678e & ~uVar4;
      S_SK_OBJ_1B4();
      return;
    }
  }
  return;
}



