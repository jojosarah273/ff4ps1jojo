
int FUN_80185714(int param_1,int param_2,short param_3)

{
  short *psVar1;
  short sVar2;
  short *psVar3;
  
  psVar3 = (short *)(param_2 * 4 + param_1);
  while (((param_2 < 0xe0 && (sVar2 = *psVar3, sVar2 + param_2 != (int)param_3)) &&
         (psVar1 = psVar3 + 2, psVar3 = psVar3 + 2, (int)sVar2 == (int)*psVar1))) {
    param_2 = param_2 + 1;
  }
  return param_2 + 1;
}



