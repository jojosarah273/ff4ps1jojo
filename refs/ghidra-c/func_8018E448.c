
SpuIRQCallbackProc SpuSetIRQCallback(SpuIRQCallbackProc param_1)

{
  SpuIRQCallbackProc pSVar1;
  
  pSVar1 = DAT_8019b150;
  if (param_1 != DAT_8019b150) {
    DAT_8019b150 = param_1;
    FUN_8018e488();
  }
  return pSVar1;
}



