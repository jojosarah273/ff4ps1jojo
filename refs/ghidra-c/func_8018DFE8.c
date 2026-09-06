
SpuStCallbackProc SpuStSetStreamFinishedCallback(SpuStCallbackProc func)

{
  SpuStCallbackProc pSVar1;
  
  pSVar1 = DAT_801f67ac;
  if (func != DAT_801f67ac) {
    DAT_801f67ac = func;
  }
  return pSVar1;
}



