
void FUN_800f9538(void)

{
  ushort uVar1;
  
  uVar1 = *DAT_8019ed4c;
  *DAT_8019ed68 = (&DAT_800d0000)[(ushort)(uVar1 + 1)];
  *DAT_8019ed4c = uVar1 + 1;
  return;
}



