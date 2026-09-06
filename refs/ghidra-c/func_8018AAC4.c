
void _spu_FsetRXX(int param_1,uint param_2,int param_3)

{
  if (param_3 == 0) {
    *(short *)(PTR_VOICE_00_LEFT_RIGHT_8019b114 + param_1 * 2) = (short)param_2;
    SPU_OBJ_948();
    return;
  }
  *(short *)(PTR_VOICE_00_LEFT_RIGHT_8019b114 + param_1 * 2) =
       (short)(param_2 >> (DAT_8019b13c & 0x1f));
  return;
}



