
void FUN_800f9200(void)

{
  ushort uVar1;
  
  uVar1 = *DAT_8019ed4c;
  (&DAT_800d0000)[uVar1] = *DAT_8019ed40;
  *DAT_8019ed4c = uVar1 - 1;
  return;
}



