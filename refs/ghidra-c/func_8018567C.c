
int FUN_8018567c(int param_1,int param_2,short param_3)

{
  short *psVar1;
  short *psVar2;
  
  param_1 = param_2 * 4 + param_1;
  while (((param_2 < 0xe0 && (psVar1 = (short *)(param_1 + 2), *psVar1 + param_2 != (int)param_3))
         && (psVar2 = (short *)(param_1 + 6), param_1 = param_1 + 4, (int)*psVar1 == (int)*psVar2)))
  {
    param_2 = param_2 + 1;
  }
  return param_2 + 1;
}



