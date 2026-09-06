
void FUN_800f4960(int param_1)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)FUN_800f3b04(param_1 + (uint)*DAT_8019ed54);
  *DAT_8019ed40 = *DAT_8019ed40 & *pbVar1;
  return;
}



