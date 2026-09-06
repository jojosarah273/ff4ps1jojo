
int FUN_80185634(int param_1,int param_2,short param_3)

{
  int iVar1;
  
  if (param_2 < 0xe0) {
    param_1 = param_2 * 4 + param_1;
    iVar1 = param_2;
    do {
      param_2 = iVar1 + 1;
      if (*(short *)(param_1 + 2) + iVar1 != (int)param_3) {
        return iVar1;
      }
      param_1 = param_1 + 4;
      iVar1 = param_2;
    } while (param_2 < 0xe0);
  }
  return param_2;
}



