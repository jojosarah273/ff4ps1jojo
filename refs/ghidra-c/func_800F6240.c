
void FUN_800f6240(void)

{
  byte bVar1;
  byte *pbVar2;
  
  pbVar2 = (byte *)FUN_800f3b04();
  bVar1 = *pbVar2;
  *pbVar2 = bVar1 + 1;
  *DAT_8019ed50 = (uint)(byte)(bVar1 + 1);
  return;
}



