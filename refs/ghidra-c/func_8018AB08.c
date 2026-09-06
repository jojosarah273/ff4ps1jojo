
uint _spu_FsetRXXa(int param_1,uint param_2)

{
  uint uVar1;
  
  if (DAT_8019b138 != 0) {
    if (DAT_8019b140 == 0) {
      trap(0x1c00);
    }
    if (param_2 % DAT_8019b140 != 0) {
      param_2 = param_2 + DAT_8019b140 & ~DAT_8019b144;
    }
  }
  if (param_1 != -2) {
    if (param_1 == -1) {
      uVar1 = SPU_OBJ_9EC();
      return uVar1;
    }
    *(short *)(PTR_VOICE_00_LEFT_RIGHT_8019b114 + param_1 * 2) =
         (short)(param_2 >> (DAT_8019b13c & 0x1f));
    return param_2;
  }
  uVar1 = SPU_OBJ_9EC();
  return uVar1;
}



