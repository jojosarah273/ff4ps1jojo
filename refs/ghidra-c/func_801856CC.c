
int FUN_801856cc(int param_1,int param_2,short param_3)

{
  short *psVar1;
  int iVar2;
  
  if (param_2 < 0xe0) {
    psVar1 = (short *)(param_2 * 4 + param_1);
    iVar2 = param_2;
    do {
      param_2 = iVar2 + 1;
      if (*psVar1 + iVar2 != (int)param_3) {
        return iVar2;
      }
      psVar1 = psVar1 + 2;
      iVar2 = param_2;
    } while (param_2 < 0xe0);
  }
  return param_2;
}



