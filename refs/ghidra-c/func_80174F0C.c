
void FUN_80174f0c(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = FUN_800f3c3c(0);
  iVar1 = (uint)*(ushort *)(iVar2 + 0x18) * (uint)*(ushort *)(iVar2 + 0x1a);
  *(char *)(iVar2 + 0x30) = (char)iVar1;
  *(char *)(iVar2 + 0x31) = (char)((uint)iVar1 >> 8);
  *(char *)(iVar2 + 0x32) = (char)((uint)iVar1 >> 0x10);
  return;
}



