
SpuStCallbackProc SpuStSetTransferFinishedCallback(SpuStCallbackProc func)

{
  SpuStCallbackProc pSVar1;
  
  pSVar1 = DAT_801f67a4;
  if (func != DAT_801f67a4) {
    DAT_801f67a4 = func;
  }
  return pSVar1;
}



