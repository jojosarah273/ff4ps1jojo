
void FUN_800f6048(byte *param_1)

{
  byte bVar1;
  
  bVar1 = *param_1;
  *param_1 = bVar1 + 1;
  *DAT_8019ed50 = (uint)(byte)(bVar1 + 1);
  return;
}



