
void FUN_8017dc28(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar1 = &DAT_8019f4b0;
  puVar2 = &DAT_8019f630;
  iVar3 = 0x1f;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 3;
    *puVar2 = 0;
    iVar3 = iVar3 + -1;
    puVar2 = puVar2 + 3;
  } while (-1 < iVar3);
  param_1 = param_1 & 3;
  if (param_1 == 1) {
    FUN_8017dd08(param_2,param_3,param_4);
  }
  else if (param_1 < 2) {
    if (param_1 == 0) {
      FUN_8017d7d8(param_2,param_3,param_4);
    }
  }
  else if (param_1 == 2) {
    FUN_8017d980(param_2,param_3,param_4);
  }
  else if (param_1 == 3) {
    FUN_8017df20(param_2,param_3,param_4);
  }
  return;
}



