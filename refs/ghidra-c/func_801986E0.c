
uint __floatsisf(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  iVar1 = 0x9d;
  if (param_1 == 0) {
    uVar3 = FLTSISF_OBJ_C0();
    return uVar3;
  }
  if (param_1 != -0x80000000) {
    if (param_1 < 0) {
      uVar3 = 0x80000000;
      param_1 = -param_1;
    }
    for (; param_1 < 0x1000000; param_1 = param_1 << 4) {
      iVar1 = iVar1 + -4;
    }
    for (; param_1 < 0x40000000; param_1 = param_1 << 1) {
      iVar1 = iVar1 + -1;
    }
    uVar2 = param_1 + 0x40;
    if (-1 < (int)uVar2) {
      return uVar3 | iVar1 << 0x17 | uVar2 >> 7 & 0xff7fffff;
    }
    uVar3 = FLTSISF_OBJ_A8(uVar2 >> 8);
    return uVar3;
  }
  uVar3 = FLTSISF_OBJ_C0();
  return uVar3;
}



