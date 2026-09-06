
void FUN_800f7a40(byte *param_1)

{
  int iVar1;
  
  iVar1 = (uint)*param_1 * 2 + (*DAT_8019ed68 & 1);
  *param_1 = (byte)iVar1;
  *DAT_8019ed50 = iVar1;
  return;
}



