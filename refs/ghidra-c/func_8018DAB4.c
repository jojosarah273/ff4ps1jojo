
undefined4 ST_OBJ_C1C(undefined4 param_1)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = DAT_8019b584 & 0xf0;
  if (uVar2 == 0x20) {
    if (DAT_8019b584 == 0x22) {
      DAT_8019b584 = 0x30;
      uVar1 = ST_OBJ_CAC(0x22,param_1);
      return uVar1;
    }
  }
  else if (0x20 < uVar2) {
    if (uVar2 != 0x30) {
      uVar1 = ST_OBJ_DA8();
      return uVar1;
    }
    DAT_801f6964 = 0;
    DAT_8019b590 = param_1;
    uVar1 = ST_OBJ_DA8();
    return uVar1;
  }
  return 0xfffffffd;
}



