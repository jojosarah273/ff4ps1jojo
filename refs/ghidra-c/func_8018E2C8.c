
long SpuSetIRQ(long on_off)

{
  undefined *puVar1;
  long lVar2;
  uint uVar3;
  
  puVar1 = PTR_VOICE_00_LEFT_RIGHT_8019b114;
  if (((on_off == 0) || (on_off == 3)) &&
     (*(ushort *)(PTR_VOICE_00_LEFT_RIGHT_8019b114 + 0x1aa) =
           *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_8019b114 + 0x1aa) & 0xffbf,
     (*(ushort *)(puVar1 + 0x1aa) & 0x40) != 0)) {
    uVar3 = 1;
    do {
      if (0xf00 < uVar3) {
        lVar2 = S_SI_OBJ_F4("SPU:T/O [%s]\n","wait (IRQ/ON)");
        return lVar2;
      }
      uVar3 = uVar3 + 1;
    } while ((*(ushort *)(PTR_VOICE_00_LEFT_RIGHT_8019b114 + 0x1aa) & 0x40) != 0);
  }
  puVar1 = PTR_VOICE_00_LEFT_RIGHT_8019b114;
  if (((on_off == 1) || (on_off == 3)) &&
     (*(ushort *)(PTR_VOICE_00_LEFT_RIGHT_8019b114 + 0x1aa) =
           *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_8019b114 + 0x1aa) | 0x40,
     (*(ushort *)(puVar1 + 0x1aa) & 0x40) == 0)) {
    uVar3 = 1;
    do {
      if (0xf00 < uVar3) {
        printf("SPU:T/O [%s]\n","wait (IRQ/OFF)");
        lVar2 = S_SI_OBJ_12C();
        return lVar2;
      }
      uVar3 = uVar3 + 1;
    } while ((*(ushort *)(PTR_VOICE_00_LEFT_RIGHT_8019b114 + 0x1aa) & 0x40) == 0);
  }
  return on_off;
}



