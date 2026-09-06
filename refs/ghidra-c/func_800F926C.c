
void FUN_800f926c(void)

{
  ushort uVar1;
  
  uVar1 = *DAT_8019ed4c;
  (&DAT_800d0000)[uVar1] = *DAT_8019ed70;
  *DAT_8019ed4c = uVar1 - 1;
  return;
}



