
void _spu_FiDMA(void)

{
  undefined *puVar1;
  uint uVar2;
  
  if (DAT_8019b164 == 0) {
    _spu_Fw1ts();
  }
  puVar1 = PTR_VOICE_00_LEFT_RIGHT_8019b114;
  *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_8019b114 + 0x1aa) =
       *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_8019b114 + 0x1aa) & 0xffcf;
  if ((*(ushort *)(puVar1 + 0x1aa) & 0x30) != 0) {
    uVar2 = 1;
    do {
      if (0xf00 < uVar2) break;
      uVar2 = uVar2 + 1;
    } while ((*(ushort *)(puVar1 + 0x1aa) & 0x30) != 0);
  }
  if (DAT_8019b14c != (code *)0x0) {
    (*DAT_8019b14c)();
    SPU_OBJ_4EC();
    return;
  }
  DeliverEvent(0xf0000009,0x20);
  return;
}



