
undefined4 S_SRMP_OBJ_424(void)

{
  int unaff_s4;
  int unaff_s6;
  int unaff_s7;
  int unaff_s8;
  int in_stack_00000058;
  
  if (((unaff_s4 != 0) || (unaff_s6 != 0)) || (unaff_s8 != 0)) {
    _spu_setReverbAttr(&stack0x00000010);
  }
  if (in_stack_00000058 != 0) {
    SpuClearReverbWorkArea(DAT_8019b0b8);
  }
  if ((unaff_s4 != 0) && (_spu_FsetRXX(0xd1,DAT_8019b0b0,0), unaff_s7 != 0)) {
    *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_8019b114 + 0x1aa) =
         *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_8019b114 + 0x1aa) | 0x80;
  }
  return 0;
}



