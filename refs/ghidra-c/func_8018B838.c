
long SpuSetReverb(long on_off)

{
  undefined *puVar1;
  long lVar2;
  int iVar3;
  
  puVar1 = PTR_VOICE_00_LEFT_RIGHT_8019b114;
  if (on_off == 0) {
    DAT_8019b0a8 = 0;
    *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_8019b114 + 0x1aa) =
         *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_8019b114 + 0x1aa) & 0xff7f;
    *(undefined2 *)(puVar1 + 0x184) = 0;
    *(undefined2 *)(puVar1 + 0x186) = 0;
    DAT_8019b0bc = 0;
    DAT_8019b0be = 0;
    lVar2 = S_SR_OBJ_D0();
    return lVar2;
  }
  if (on_off != 1) {
    lVar2 = S_SR_OBJ_D0();
    return lVar2;
  }
  if ((DAT_8019b0ac != 1) && (iVar3 = _SpuIsInAllocateArea_(DAT_8019b0b0), iVar3 != 0)) {
    DAT_8019b0a8 = 0;
    lVar2 = S_SR_OBJ_CC(*(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_8019b114 + 0x1aa));
    return lVar2;
  }
  DAT_8019b0a8 = on_off;
  *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_8019b114 + 0x1aa) =
       *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_8019b114 + 0x1aa) | 0x80;
  return DAT_8019b0a8;
}



