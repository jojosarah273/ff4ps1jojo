
void FUN_80187cd0(int param_1)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  
  DAT_8019edaa = (undefined2)param_1;
  if (param_1 == 0) {
    puVar2 = &DAT_800d2200;
    puVar3 = &DAT_801cf568;
  }
  else {
    puVar2 = &DAT_801cf568;
    puVar3 = &DAT_800d2200;
  }
  iVar4 = 0x7ff;
  do {
    uVar1 = *puVar2;
    puVar2 = puVar2 + 1;
    iVar4 = iVar4 + -1;
    *puVar3 = uVar1;
    puVar3 = puVar3 + 1;
  } while (-1 < iVar4);
  return;
}



