
TIM_IMAGE * ReadTIM(TIM_IMAGE *timimg)

{
  int iVar1;
  TIM_IMAGE *pTVar2;
  
  iVar1 = T00_OBJ_74(DAT_801feba8,timimg);
  if (iVar1 != -1) {
    DAT_801feba8 = DAT_801feba8 + iVar1 * 4;
    pTVar2 = (TIM_IMAGE *)T00_OBJ_64();
    return pTVar2;
  }
  return (TIM_IMAGE *)0x0;
}



