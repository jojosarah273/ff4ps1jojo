
uint S_M_WSA_OBJ_344(int param_1,int param_2,uint param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = (uint)((param_3 & 0x40000000) != 0);
  if ((int)(param_3 & 0xfffffff) < param_1) {
    uVar1 = 2;
    if ((param_2 == param_4) && (uVar1 = 1, uVar2 != 0)) {
      uVar2 = S_M_WSA_OBJ_38C();
      return uVar2;
    }
  }
  else {
    uVar1 = uVar2;
    if (param_2 != param_4) {
      uVar1 = 1;
    }
  }
  return uVar1;
}



