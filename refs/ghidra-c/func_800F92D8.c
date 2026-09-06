
void FUN_800f92d8(void)

{
  ushort uVar1;
  
  uVar1 = *DAT_8019ed4c;
  (&DAT_800d0000)[uVar1] = *DAT_8019ed68;
  *DAT_8019ed4c = uVar1 - 1;
  return;
}



