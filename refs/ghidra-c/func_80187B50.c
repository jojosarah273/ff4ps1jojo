
void FUN_80187b50(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_80188240();
  FntPrint();
  FntFlush(-1);
  if (iVar1 == 2) {
    do {
      iVar1 = FUN_80188240();
    } while (iVar1 == 2);
  }
  else {
    if (2 < iVar1) {
      while (iVar1 == 3) {
        iVar1 = FUN_80188240();
      }
      goto LAB_80187bf4;
    }
    if (iVar1 != 1) goto LAB_80187bf4;
  }
  FUN_801881ac();
LAB_80187bf4:
  if (param_1 == 1) {
    do {
      iVar1 = FUN_80188240();
    } while (iVar1 != 0);
  }
  return;
}



