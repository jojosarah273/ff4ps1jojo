
void FUN_8015a56c(void)

{
  int iVar1;
  ushort uVar2;
  
  iVar1 = FUN_800f3c3c(0);
  uVar2 = *(ushort *)(iVar1 + 0xab);
  if ((uVar2 & 0x8000) != 0) {
    uVar2 = 0;
  }
  *(char *)(iVar1 + 0xd4) = (char)uVar2;
  *(char *)(iVar1 + 0xd5) = (char)(uVar2 >> 8);
  return;
}



