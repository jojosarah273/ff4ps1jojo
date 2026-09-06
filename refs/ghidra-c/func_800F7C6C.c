
void FUN_800f7c6c(void)

{
  int iVar1;
  
  iVar1 = (uint)*DAT_8019ed40 * 2 + (*DAT_8019ed68 & 1);
  *DAT_8019ed40 = (byte)iVar1;
  *DAT_8019ed50 = iVar1;
  return;
}



