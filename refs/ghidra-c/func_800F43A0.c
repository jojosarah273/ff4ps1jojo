
void FUN_800f43a0(undefined2 param_1)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)FUN_800f3c3c(param_1);
  *DAT_8019ed40 = *DAT_8019ed40 & *pbVar1;
  DAT_8019ed40[1] = DAT_8019ed40[1] & pbVar1[1];
  return;
}



