
SpuStCallbackProc SpuStSetPreparationFinishedCallback(SpuStCallbackProc func)

{
  SpuStCallbackProc pSVar1;
  
  pSVar1 = DAT_801f67a8;
  if (func != DAT_801f67a8) {
    DAT_801f67a8 = func;
  }
  return pSVar1;
}



