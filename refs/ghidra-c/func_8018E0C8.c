
ulong SpuFlush(ulong ev)

{
  undefined *puVar1;
  undefined2 *puVar2;
  int iVar3;
  ulong uVar4;
  
  puVar1 = PTR_VOICE_00_LEFT_RIGHT_8019b114;
  uVar4 = 0;
  if (((ev == 0) || ((ev & 2) != 0)) && ((DAT_8019b0cc & 2) != 0)) {
    DAT_8019b0cc = DAT_8019b0cc & 0xfffffffd;
    *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_8019b114 + 400) = DAT_801f6790;
    uVar4 = 2;
    *(undefined2 *)(puVar1 + 0x192) = DAT_801f6792;
  }
  puVar1 = PTR_VOICE_00_LEFT_RIGHT_8019b114;
  if (((ev == 0) || ((ev & 4) != 0)) && ((DAT_8019b0cc & 4) != 0)) {
    DAT_8019b0cc = DAT_8019b0cc & 0xfffffffb;
    *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_8019b114 + 0x194) = DAT_801f6794;
    uVar4 = uVar4 | 4;
    *(undefined2 *)(puVar1 + 0x196) = DAT_801f6796;
  }
  puVar1 = PTR_VOICE_00_LEFT_RIGHT_8019b114;
  if (((ev == 0) || ((ev & 8) != 0)) && ((DAT_8019b0cc & 8) != 0)) {
    DAT_8019b0cc = DAT_8019b0cc & 0xfffffff7;
    *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_8019b114 + 0x198) = DAT_801f6798;
    uVar4 = uVar4 | 8;
    *(undefined2 *)(puVar1 + 0x19a) = DAT_801f679a;
  }
  puVar1 = PTR_VOICE_00_LEFT_RIGHT_8019b114;
  if (((ev == 0) || ((ev & 1) != 0)) && ((DAT_8019b0cc & 1) != 0)) {
    DAT_8019b0cc = DAT_8019b0cc & 0xfffffffe;
    puVar2 = &DAT_801f6788;
    *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_8019b114 + 0x188) = DAT_801f6788;
    *(undefined2 *)(puVar1 + 0x18a) = DAT_801f678a;
    *(undefined2 *)(puVar1 + 0x18c) = DAT_801f678c;
    iVar3 = 0;
    *(undefined2 *)(puVar1 + 0x18e) = DAT_801f678e;
    do {
      *puVar2 = 0;
      iVar3 = iVar3 + 1;
      puVar2 = puVar2 + 1;
    } while (iVar3 < 4);
    uVar4 = uVar4 | 1;
    if ((DAT_8019b100 & 1) != 0) {
      DAT_8019b0a0 = DAT_8019b0c8;
    }
  }
  return uVar4;
}



