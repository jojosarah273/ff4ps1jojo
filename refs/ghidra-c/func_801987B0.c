
uint __lesf2(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if ((param_1 != param_2) && (((param_1 & 0x7fffffff) != 0 || ((param_2 & 0x7fffffff) != 0)))) {
    uVar4 = param_1 & 0x80000000;
    uVar1 = (uint)(uVar4 == 0);
    if (uVar4 == (param_2 & 0x80000000)) {
      uVar3 = (int)param_1 >> 0x17 & 0xff;
      uVar2 = (int)param_2 >> 0x17 & 0xff;
      uVar1 = (uint)(uVar4 != 0);
      if (uVar2 <= uVar3) {
        if ((uVar3 == uVar2) && ((param_1 & 0x7fffff | 0x800000) <= (param_2 & 0x7fffff | 0x800000))
           ) {
          uVar1 = LESF2_OBJ_9C();
          return uVar1;
        }
        uVar1 = (uint)((param_1 & 0x80000000) == 0);
      }
    }
    return uVar1;
  }
  uVar1 = LESF2_OBJ_9C();
  return uVar1;
}



