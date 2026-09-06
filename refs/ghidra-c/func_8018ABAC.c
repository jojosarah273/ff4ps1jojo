
uint _spu_FgetRXXa(int param_1,int param_2)

{
  uint uVar1;
  
  if (param_2 != -1) {
    uVar1 = SPU_OBJ_A28();
    return uVar1;
  }
  return (uint)*(ushort *)(PTR_VOICE_00_LEFT_RIGHT_8019b114 + param_1 * 2);
}



