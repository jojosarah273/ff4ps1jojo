
void FUN_800f5da0(undefined2 param_1)

{
  byte bVar1;
  byte *pbVar2;
  
  pbVar2 = (byte *)FUN_800f3c3c(param_1);
  bVar1 = *pbVar2;
  *pbVar2 = bVar1 - 1;
  *DAT_8019ed50 = (uint)(byte)(bVar1 - 1);
  return;
}



