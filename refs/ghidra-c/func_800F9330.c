
void FUN_800f9330(void)

{
  ushort uVar1;
  undefined2 uVar2;
  
  uVar1 = *DAT_8019ed4c;
  uVar2 = *DAT_8019ed54;
  (&DAT_800d0000)[uVar1] = (char)uVar2;
  (&DAT_800cffff)[uVar1] = (char)((ushort)uVar2 >> 8);
  *DAT_8019ed4c = uVar1 - 2;
  return;
}



