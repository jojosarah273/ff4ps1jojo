
void FUN_8016bf64(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_800f3c3c(0);
  uVar2 = (uint)*(ushort *)(iVar1 + 0x6c) + (uint)*(ushort *)(iVar1 + 0x7c) & 0xffff;
  *(char *)(iVar1 + 0x4b) = (char)uVar2;
  *(char *)(iVar1 + 0x4c) = (char)(uVar2 >> 8);
  uVar2 = (uint)CONCAT11(*(undefined1 *)(iVar1 + 0x6f),*(undefined1 *)(iVar1 + 0x6e)) +
          (uint)*(ushort *)(iVar1 + 0x7e) & 0xffff;
  *(char *)(iVar1 + 0x4d) = (char)uVar2;
  *(char *)(iVar1 + 0x4e) = (char)(uVar2 >> 8);
  return;
}



