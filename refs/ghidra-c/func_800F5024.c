
void FUN_800f5024(ushort *param_1)

{
  int iVar1;
  
  iVar1 = (uint)*param_1 << 1;
  *(char *)param_1 = (char)iVar1;
  *(char *)((int)param_1 + 1) = (char)((uint)iVar1 >> 8);
  *DAT_8019ed50 = iVar1;
  return;
}



