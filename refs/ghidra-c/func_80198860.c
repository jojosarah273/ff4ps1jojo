
undefined4 __ltsf2(uint param_1,uint param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if ((param_1 != param_2) && (((param_1 & 0x7fffffff) != 0 || ((param_2 & 0x7fffffff) != 0)))) {
    uVar4 = param_1 & 0x80000000;
    if (uVar4 != (param_2 & 0x80000000)) {
      if (uVar4 != 0) {
        return 0xffffffff;
      }
      uVar1 = LTSF2_OBJ_A8();
      return uVar1;
    }
    uVar3 = (int)param_1 >> 0x17 & 0xff;
    uVar2 = (int)param_2 >> 0x17 & 0xff;
    if ((uVar3 < uVar2) ||
       ((uVar3 == uVar2 && ((param_1 & 0x7fffff | 0x800000) < (param_2 & 0x7fffff | 0x800000))))) {
      if (uVar4 != 0) {
        return 0;
      }
      uVar1 = LTSF2_OBJ_A8();
      return uVar1;
    }
    if ((int)param_1 < 0) {
      return 0xffffffff;
    }
  }
  return 0;
}



