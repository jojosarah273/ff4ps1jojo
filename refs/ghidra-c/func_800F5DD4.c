
void FUN_800f5dd4(undefined2 param_1)

{
  ushort *puVar1;
  int iVar2;
  
  puVar1 = (ushort *)FUN_800f3c3c(param_1);
  iVar2 = *puVar1 - 1;
  *(char *)puVar1 = (char)iVar2;
  *(char *)((int)puVar1 + 1) = (char)((uint)iVar2 >> 8);
  *DAT_8019ed50 = iVar2;
  return;
}



